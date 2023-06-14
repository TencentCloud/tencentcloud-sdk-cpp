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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DENIEDACTION_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DENIEDACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 限制操作。
                */
                class DeniedAction : public AbstractModel
                {
                public:
                    DeniedAction();
                    ~DeniedAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取限制操作名。
                     * @return Action 限制操作名。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置限制操作名。
                     * @param _action 限制操作名。
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
                     * 获取限制操作消息码。
                     * @return Code 限制操作消息码。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置限制操作消息码。
                     * @param _code 限制操作消息码。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取限制操作消息。
                     * @return Message 限制操作消息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置限制操作消息。
                     * @param _message 限制操作消息。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 限制操作名。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 限制操作消息码。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 限制操作消息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DENIEDACTION_H_
