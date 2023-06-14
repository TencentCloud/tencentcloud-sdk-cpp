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

#ifndef TENCENTCLOUD_AAI_V20180522_MODEL_CHATREQUEST_H_
#define TENCENTCLOUD_AAI_V20180522_MODEL_CHATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aai
    {
        namespace V20180522
        {
            namespace Model
            {
                /**
                * Chat请求参数结构体
                */
                class ChatRequest : public AbstractModel
                {
                public:
                    ChatRequest();
                    ~ChatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聊天输入文本
                     * @return Text 聊天输入文本
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置聊天输入文本
                     * @param _text 聊天输入文本
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     * @return ProjectId 腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     * @param _projectId 腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取json格式，比如 {"id":"test","gender":"male"}。记录当前与机器人交互的用户id，非必须但强烈建议传入，否则多轮聊天功能会受影响
                     * @return User json格式，比如 {"id":"test","gender":"male"}。记录当前与机器人交互的用户id，非必须但强烈建议传入，否则多轮聊天功能会受影响
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置json格式，比如 {"id":"test","gender":"male"}。记录当前与机器人交互的用户id，非必须但强烈建议传入，否则多轮聊天功能会受影响
                     * @param _user json格式，比如 {"id":"test","gender":"male"}。记录当前与机器人交互的用户id，非必须但强烈建议传入，否则多轮聊天功能会受影响
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                private:

                    /**
                     * 聊天输入文本
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 腾讯云项目 ID，可填 0，总长度不超过 1024 字节。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * json格式，比如 {"id":"test","gender":"male"}。记录当前与机器人交互的用户id，非必须但强烈建议传入，否则多轮聊天功能会受影响
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AAI_V20180522_MODEL_CHATREQUEST_H_
