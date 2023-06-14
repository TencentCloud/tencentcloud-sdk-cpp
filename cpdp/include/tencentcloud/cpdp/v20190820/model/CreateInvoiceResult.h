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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceResultData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 发票结果
                */
                class CreateInvoiceResult : public AbstractModel
                {
                public:
                    CreateInvoiceResult();
                    ~CreateInvoiceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误消息
                     * @return Message 错误消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误消息
                     * @param _message 错误消息
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
                     * 获取错误码
                     * @return Code 错误码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置错误码
                     * @param _code 错误码
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
                     * 获取数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CreateInvoiceResultData GetData() const;

                    /**
                     * 设置数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const CreateInvoiceResultData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 错误消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 错误码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CreateInvoiceResultData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEINVOICERESULT_H_
