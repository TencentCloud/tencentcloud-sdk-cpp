/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UCBENTRYVALUE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UCBENTRYVALUE_H_

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
                * 云图API改版后, 不支持将复杂json类型编码成string,因此通过此复杂类型识别传入的不同类型参数值
                */
                class UCBEntryValue : public AbstractModel
                {
                public:
                    UCBEntryValue();
                    ~UCBEntryValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取string类型值
                     * @return BasicValue string类型值
                     * 
                     */
                    std::string GetBasicValue() const;

                    /**
                     * 设置string类型值
                     * @param _basicValue string类型值
                     * 
                     */
                    void SetBasicValue(const std::string& _basicValue);

                    /**
                     * 判断参数 BasicValue 是否已赋值
                     * @return BasicValue 是否已赋值
                     * 
                     */
                    bool BasicValueHasBeenSet() const;

                    /**
                     * 获取布尔类型值
                     * @return LogicValue 布尔类型值
                     * 
                     */
                    bool GetLogicValue() const;

                    /**
                     * 设置布尔类型值
                     * @param _logicValue 布尔类型值
                     * 
                     */
                    void SetLogicValue(const bool& _logicValue);

                    /**
                     * 判断参数 LogicValue 是否已赋值
                     * @return LogicValue 是否已赋值
                     * 
                     */
                    bool LogicValueHasBeenSet() const;

                    /**
                     * 获取string数组类型值
                     * @return BelongValue string数组类型值
                     * 
                     */
                    std::vector<std::string> GetBelongValue() const;

                    /**
                     * 设置string数组类型值
                     * @param _belongValue string数组类型值
                     * 
                     */
                    void SetBelongValue(const std::vector<std::string>& _belongValue);

                    /**
                     * 判断参数 BelongValue 是否已赋值
                     * @return BelongValue 是否已赋值
                     * 
                     */
                    bool BelongValueHasBeenSet() const;

                    /**
                     * 获取指示有效的字段
                     * @return ValidKey 指示有效的字段
                     * 
                     */
                    std::string GetValidKey() const;

                    /**
                     * 设置指示有效的字段
                     * @param _validKey 指示有效的字段
                     * 
                     */
                    void SetValidKey(const std::string& _validKey);

                    /**
                     * 判断参数 ValidKey 是否已赋值
                     * @return ValidKey 是否已赋值
                     * 
                     */
                    bool ValidKeyHasBeenSet() const;

                    /**
                     * 获取string数组类型值
                     * @return MultiValue string数组类型值
                     * 
                     */
                    std::vector<std::string> GetMultiValue() const;

                    /**
                     * 设置string数组类型值
                     * @param _multiValue string数组类型值
                     * 
                     */
                    void SetMultiValue(const std::vector<std::string>& _multiValue);

                    /**
                     * 判断参数 MultiValue 是否已赋值
                     * @return MultiValue 是否已赋值
                     * 
                     */
                    bool MultiValueHasBeenSet() const;

                private:

                    /**
                     * string类型值
                     */
                    std::string m_basicValue;
                    bool m_basicValueHasBeenSet;

                    /**
                     * 布尔类型值
                     */
                    bool m_logicValue;
                    bool m_logicValueHasBeenSet;

                    /**
                     * string数组类型值
                     */
                    std::vector<std::string> m_belongValue;
                    bool m_belongValueHasBeenSet;

                    /**
                     * 指示有效的字段
                     */
                    std::string m_validKey;
                    bool m_validKeyHasBeenSet;

                    /**
                     * string数组类型值
                     */
                    std::vector<std::string> m_multiValue;
                    bool m_multiValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UCBENTRYVALUE_H_
