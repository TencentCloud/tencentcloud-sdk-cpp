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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BOOLEANRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BOOLEANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * BooleanResponse
                */
                class BooleanResponse : public AbstractModel
                {
                public:
                    BooleanResponse();
                    ~BooleanResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否成功
                     * @return Success 是否成功
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 设置是否成功
                     * @param _success 是否成功
                     * 
                     */
                    void SetSuccess(const bool& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取失败返回提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 失败返回提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置失败返回提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 失败返回提示信息
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
                     * 获取基线Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaselineId 基线Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBaselineId() const;

                    /**
                     * 设置基线Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baselineId 基线Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaselineId(const int64_t& _baselineId);

                    /**
                     * 判断参数 BaselineId 是否已赋值
                     * @return BaselineId 是否已赋值
                     * 
                     */
                    bool BaselineIdHasBeenSet() const;

                    /**
                     * 获取错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 是否成功
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 失败返回提示信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 基线Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_baselineId;
                    bool m_baselineIdHasBeenSet;

                    /**
                     * 错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BOOLEANRESPONSE_H_
