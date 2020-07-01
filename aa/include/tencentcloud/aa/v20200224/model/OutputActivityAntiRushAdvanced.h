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

#ifndef TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTACTIVITYANTIRUSHADVANCED_H_
#define TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTACTIVITYANTIRUSHADVANCED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aa/v20200224/model/OutputActivityAntiRushAdvancedValue.h>


namespace TencentCloud
{
    namespace Aa
    {
        namespace V20200224
        {
            namespace Model
            {
                /**
                * 活动防刷高级版业务出参。
                */
                class OutputActivityAntiRushAdvanced : public AbstractModel
                {
                public:
                    OutputActivityAntiRushAdvanced();
                    ~OutputActivityAntiRushAdvanced() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回码。0表示成功，非0标识失败错误码。
                     * @return Code 返回码。0表示成功，非0标识失败错误码。
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置返回码。0表示成功，非0标识失败错误码。
                     * @param Code 返回码。0表示成功，非0标识失败错误码。
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取UTF-8编码，出错消息。
                     * @return Message UTF-8编码，出错消息。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置UTF-8编码，出错消息。
                     * @param Message UTF-8编码，出错消息。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取服务调用结果。
                     * @return Value 服务调用结果。
                     */
                    OutputActivityAntiRushAdvancedValue GetValue() const;

                    /**
                     * 设置服务调用结果。
                     * @param Value 服务调用结果。
                     */
                    void SetValue(const OutputActivityAntiRushAdvancedValue& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 返回码。0表示成功，非0标识失败错误码。
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * UTF-8编码，出错消息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 服务调用结果。
                     */
                    OutputActivityAntiRushAdvancedValue m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AA_V20200224_MODEL_OUTPUTACTIVITYANTIRUSHADVANCED_H_
