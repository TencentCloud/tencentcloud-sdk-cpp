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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYPROTOCOLDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYPROTOCOLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询网关所支持的接入协议
                */
                class DescribeGatewayProtocolData : public AbstractModel
                {
                public:
                    DescribeGatewayProtocolData();
                    ~DescribeGatewayProtocolData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入协议的字典码
                     * @return TypeCode 接入协议的字典码
                     * 
                     */
                    std::string GetTypeCode() const;

                    /**
                     * 设置接入协议的字典码
                     * @param _typeCode 接入协议的字典码
                     * 
                     */
                    void SetTypeCode(const std::string& _typeCode);

                    /**
                     * 判断参数 TypeCode 是否已赋值
                     * @return TypeCode 是否已赋值
                     * 
                     */
                    bool TypeCodeHasBeenSet() const;

                    /**
                     * 获取接入协议类型值
                     * @return Value 接入协议类型值
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置接入协议类型值
                     * @param _value 接入协议类型值
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取接入协议的类型描述
                     * @return Label 接入协议的类型描述
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置接入协议的类型描述
                     * @param _label 接入协议的类型描述
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取协议值文本
                     * @return ValueText 协议值文本
                     * 
                     */
                    std::string GetValueText() const;

                    /**
                     * 设置协议值文本
                     * @param _valueText 协议值文本
                     * 
                     */
                    void SetValueText(const std::string& _valueText);

                    /**
                     * 判断参数 ValueText 是否已赋值
                     * @return ValueText 是否已赋值
                     * 
                     */
                    bool ValueTextHasBeenSet() const;

                private:

                    /**
                     * 接入协议的字典码
                     */
                    std::string m_typeCode;
                    bool m_typeCodeHasBeenSet;

                    /**
                     * 接入协议类型值
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 接入协议的类型描述
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 协议值文本
                     */
                    std::string m_valueText;
                    bool m_valueTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYPROTOCOLDATA_H_
