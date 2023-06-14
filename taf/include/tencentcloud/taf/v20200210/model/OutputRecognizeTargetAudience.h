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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTRECOGNIZETARGETAUDIENCE_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTRECOGNIZETARGETAUDIENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/taf/v20200210/model/OutputRecognizeTargetAudienceValue.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 流量反欺诈-验准返回值
                */
                class OutputRecognizeTargetAudience : public AbstractModel
                {
                public:
                    OutputRecognizeTargetAudience();
                    ~OutputRecognizeTargetAudience() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回码（0，成功，其他失败）
                     * @return Code 返回码（0，成功，其他失败）
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置返回码（0，成功，其他失败）
                     * @param _code 返回码（0，成功，其他失败）
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取返回码对应的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 返回码对应的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置返回码对应的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 返回码对应的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取返回模型结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 返回模型结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OutputRecognizeTargetAudienceValue> GetValue() const;

                    /**
                     * 设置返回模型结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 返回模型结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::vector<OutputRecognizeTargetAudienceValue>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 返回码（0，成功，其他失败）
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 返回码对应的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 返回模型结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OutputRecognizeTargetAudienceValue> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTRECOGNIZETARGETAUDIENCE_H_
