/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_TOKENDISPLAYSETTING_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_TOKENDISPLAYSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * JWT显示设置（只有当校验方式为JWS/JWE的时候才会有该配置信息）
                */
                class TokenDisplaySetting : public AbstractModel
                {
                public:
                    TokenDisplaySetting();
                    ~TokenDisplaySetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否使用payload字段作为显示token
                     * @return DisplayWithPayloadEnable 是否使用payload字段作为显示token
                     * 
                     */
                    bool GetDisplayWithPayloadEnable() const;

                    /**
                     * 设置是否使用payload字段作为显示token
                     * @param _displayWithPayloadEnable 是否使用payload字段作为显示token
                     * 
                     */
                    void SetDisplayWithPayloadEnable(const bool& _displayWithPayloadEnable);

                    /**
                     * 判断参数 DisplayWithPayloadEnable 是否已赋值
                     * @return DisplayWithPayloadEnable 是否已赋值
                     * 
                     */
                    bool DisplayWithPayloadEnableHasBeenSet() const;

                    /**
                     * 获取用于显示的payload字段名
                     * @return FieldName 用于显示的payload字段名
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置用于显示的payload字段名
                     * @param _fieldName 用于显示的payload字段名
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                private:

                    /**
                     * 是否使用payload字段作为显示token
                     */
                    bool m_displayWithPayloadEnable;
                    bool m_displayWithPayloadEnableHasBeenSet;

                    /**
                     * 用于显示的payload字段名
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_TOKENDISPLAYSETTING_H_
