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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYPROTOCOLRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYPROTOCOLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                class DescribeGatewayProtocolResponse : public AbstractModel
                {
                public:
                    DescribeGatewayProtocolResponse();
                    ~DescribeGatewayProtocolResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取接入协议的字典码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TypeCode 接入协议的字典码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTypeCode() const;

                    /**
                     * 判断参数 TypeCode 是否已赋值
                     * @return TypeCode 是否已赋值
                     * 
                     */
                    bool TypeCodeHasBeenSet() const;

                    /**
                     * 获取接入协议类型值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 接入协议类型值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取接入协议的类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 接入协议的类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 接入协议的字典码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_typeCode;
                    bool m_typeCodeHasBeenSet;

                    /**
                     * 接入协议类型值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 接入协议的类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYPROTOCOLRESPONSE_H_
