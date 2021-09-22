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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBERISKMODEL_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBERISKMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/OutputDescribeRiskModelValue.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 业务出参
                */
                class OutputDescribeRiskModel : public AbstractModel
                {
                public:
                    OutputDescribeRiskModel();
                    ~OutputDescribeRiskModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求返回状态值，0为成功，别的结合Message查看
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 请求返回状态值，0为成功，别的结合Message查看
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置请求返回状态值，0为成功，别的结合Message查看
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Code 请求返回状态值，0为成功，别的结合Message查看
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取请求返回信息
                     * @return Message 请求返回信息
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置请求返回信息
                     * @param Message 请求返回信息
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取请求返回结果
                     * @return Value 请求返回结果
                     */
                    OutputDescribeRiskModelValue GetValue() const;

                    /**
                     * 设置请求返回结果
                     * @param Value 请求返回结果
                     */
                    void SetValue(const OutputDescribeRiskModelValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 请求返回状态值，0为成功，别的结合Message查看
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 请求返回信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 请求返回结果
                     */
                    OutputDescribeRiskModelValue m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBERISKMODEL_H_
