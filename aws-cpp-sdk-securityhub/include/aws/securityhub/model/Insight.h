﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about a Security Hub insight. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Insight">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Insight
  {
  public:
    Insight();
    Insight(Aws::Utils::Json::JsonView jsonValue);
    Insight& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline const Aws::String& GetInsightArn() const{ return m_insightArn; }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline void SetInsightArn(const Aws::String& value) { m_insightArnHasBeenSet = true; m_insightArn = value; }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline void SetInsightArn(Aws::String&& value) { m_insightArnHasBeenSet = true; m_insightArn = std::move(value); }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline void SetInsightArn(const char* value) { m_insightArnHasBeenSet = true; m_insightArn.assign(value); }

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline Insight& WithInsightArn(const Aws::String& value) { SetInsightArn(value); return *this;}

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline Insight& WithInsightArn(Aws::String&& value) { SetInsightArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a Security Hub insight.</p>
     */
    inline Insight& WithInsightArn(const char* value) { SetInsightArn(value); return *this;}


    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline Insight& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline Insight& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a Security Hub insight.</p>
     */
    inline Insight& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A collection of attributes that are applied to all active Security
     * Hub-aggregated findings and that result in a subset of findings that are
     * included in this insight. </p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>A collection of attributes that are applied to all active Security
     * Hub-aggregated findings and that result in a subset of findings that are
     * included in this insight. </p>
     */
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A collection of attributes that are applied to all active Security
     * Hub-aggregated findings and that result in a subset of findings that are
     * included in this insight. </p>
     */
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A collection of attributes that are applied to all active Security
     * Hub-aggregated findings and that result in a subset of findings that are
     * included in this insight. </p>
     */
    inline Insight& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>A collection of attributes that are applied to all active Security
     * Hub-aggregated findings and that result in a subset of findings that are
     * included in this insight. </p>
     */
    inline Insight& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline const Aws::String& GetGroupByAttribute() const{ return m_groupByAttribute; }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline void SetGroupByAttribute(const Aws::String& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = value; }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline void SetGroupByAttribute(Aws::String&& value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute = std::move(value); }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline void SetGroupByAttribute(const char* value) { m_groupByAttributeHasBeenSet = true; m_groupByAttribute.assign(value); }

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline Insight& WithGroupByAttribute(const Aws::String& value) { SetGroupByAttribute(value); return *this;}

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline Insight& WithGroupByAttribute(Aws::String&& value) { SetGroupByAttribute(std::move(value)); return *this;}

    /**
     * <p>The attribute by which the insight's findings are grouped. This attribute is
     * used as a findings aggregator for the purposes of viewing and managing multiple
     * related findings under a single operand.</p>
     */
    inline Insight& WithGroupByAttribute(const char* value) { SetGroupByAttribute(value); return *this;}

  private:

    Aws::String m_insightArn;
    bool m_insightArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    AwsSecurityFindingFilters m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_groupByAttribute;
    bool m_groupByAttributeHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
