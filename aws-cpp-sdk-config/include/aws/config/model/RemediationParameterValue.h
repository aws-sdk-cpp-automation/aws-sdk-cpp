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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceValue.h>
#include <aws/config/model/StaticValue.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The value is either a dynamic (resource) value or a static value. You must
   * select either a dynamic value or a static value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RemediationParameterValue">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API RemediationParameterValue
  {
  public:
    RemediationParameterValue();
    RemediationParameterValue(Aws::Utils::Json::JsonView jsonValue);
    RemediationParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline const ResourceValue& GetResourceValue() const{ return m_resourceValue; }

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline void SetResourceValue(const ResourceValue& value) { m_resourceValueHasBeenSet = true; m_resourceValue = value; }

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline void SetResourceValue(ResourceValue&& value) { m_resourceValueHasBeenSet = true; m_resourceValue = std::move(value); }

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline RemediationParameterValue& WithResourceValue(const ResourceValue& value) { SetResourceValue(value); return *this;}

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline RemediationParameterValue& WithResourceValue(ResourceValue&& value) { SetResourceValue(std::move(value)); return *this;}


    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline const StaticValue& GetStaticValue() const{ return m_staticValue; }

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline void SetStaticValue(const StaticValue& value) { m_staticValueHasBeenSet = true; m_staticValue = value; }

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline void SetStaticValue(StaticValue&& value) { m_staticValueHasBeenSet = true; m_staticValue = std::move(value); }

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline RemediationParameterValue& WithStaticValue(const StaticValue& value) { SetStaticValue(value); return *this;}

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline RemediationParameterValue& WithStaticValue(StaticValue&& value) { SetStaticValue(std::move(value)); return *this;}

  private:

    ResourceValue m_resourceValue;
    bool m_resourceValueHasBeenSet;

    StaticValue m_staticValue;
    bool m_staticValueHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
