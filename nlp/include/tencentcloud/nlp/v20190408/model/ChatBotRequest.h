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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_CHATBOTREQUEST_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_CHATBOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * ChatBot请求参数结构体
                */
                class ChatBotRequest : public AbstractModel
                {
                public:
                    ChatBotRequest();
                    ~ChatBotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户请求的query
                     * @return Query 用户请求的query
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置用户请求的query
                     * @param Query 用户请求的query
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取服务的id,  主要用于儿童闲聊接口，比如手Q的openid
                     * @return OpenId 服务的id,  主要用于儿童闲聊接口，比如手Q的openid
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置服务的id,  主要用于儿童闲聊接口，比如手Q的openid
                     * @param OpenId 服务的id,  主要用于儿童闲聊接口，比如手Q的openid
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取0: 通用闲聊, 1:儿童闲聊, 默认是通用闲聊
                     * @return Flag 0: 通用闲聊, 1:儿童闲聊, 默认是通用闲聊
                     */
                    uint64_t GetFlag() const;

                    /**
                     * 设置0: 通用闲聊, 1:儿童闲聊, 默认是通用闲聊
                     * @param Flag 0: 通用闲聊, 1:儿童闲聊, 默认是通用闲聊
                     */
                    void SetFlag(const uint64_t& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     */
                    bool FlagHasBeenSet() const;

                private:

                    /**
                     * 用户请求的query
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 服务的id,  主要用于儿童闲聊接口，比如手Q的openid
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 0: 通用闲聊, 1:儿童闲聊, 默认是通用闲聊
                     */
                    uint64_t m_flag;
                    bool m_flagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_CHATBOTREQUEST_H_
