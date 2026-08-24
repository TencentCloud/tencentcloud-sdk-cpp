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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DENIEDACTION_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DENIEDACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份不能执行的接口。
                */
                class DeniedAction : public AbstractModel
                {
                public:
                    DeniedAction();
                    ~DeniedAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不能操作的接口名。
                     * @return Action 不能操作的接口名。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置不能操作的接口名。
                     * @param _action 不能操作的接口名。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取接口不能操作的原因。
                     * @return Message 接口不能操作的原因。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置接口不能操作的原因。
                     * @param _message 接口不能操作的原因。
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
                     * 获取接口不能操作对应提示的错误码。
                     * @return Code 接口不能操作对应提示的错误码。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置接口不能操作对应提示的错误码。
                     * @param _code 接口不能操作对应提示的错误码。
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
                     * 不能操作的接口名。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 接口不能操作的原因。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 接口不能操作对应提示的错误码。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DENIEDACTION_H_
