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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_OUTPUTAUTHORIZEDTRANSFER_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_OUTPUTAUTHORIZEDTRANSFER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 业务出参
                */
                class OutputAuthorizedTransfer : public AbstractModel
                {
                public:
                    OutputAuthorizedTransfer();
                    ~OutputAuthorizedTransfer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推送状态，0表示成功。
                     * @return Code 推送状态，0表示成功。
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置推送状态，0表示成功。
                     * @param _code 推送状态，0表示成功。
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
                     * 获取错误码。
                     * @return Message 错误码。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误码。
                     * @param _message 错误码。
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
                     * 获取错误信息描述。
                     * @return Value 错误信息描述。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置错误信息描述。
                     * @param _value 错误信息描述。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 推送状态，0表示成功。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 错误码。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 错误信息描述。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_OUTPUTAUTHORIZEDTRANSFER_H_
