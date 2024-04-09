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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_STARTPUBLISHSTREAMTOCSSREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_STARTPUBLISHSTREAMTOCSSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * StartPublishStreamToCSS请求参数结构体
                */
                class StartPublishStreamToCSSRequest : public AbstractModel
                {
                public:
                    StartPublishStreamToCSSRequest();
                    ~StartPublishStreamToCSSRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * @return UserId 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * @param _userId 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取推流参数，推流时携带自定义参数。
                     * @return PublishStreamArgs 推流参数，推流时携带自定义参数。
                     * 
                     */
                    std::string GetPublishStreamArgs() const;

                    /**
                     * 设置推流参数，推流时携带自定义参数。
                     * @param _publishStreamArgs 推流参数，推流时携带自定义参数。
                     * 
                     */
                    void SetPublishStreamArgs(const std::string& _publishStreamArgs);

                    /**
                     * 判断参数 PublishStreamArgs 是否已赋值
                     * @return PublishStreamArgs 是否已赋值
                     * 
                     */
                    bool PublishStreamArgsHasBeenSet() const;

                private:

                    /**
                     * 唯一用户身份标识，由业务方自定义，平台不予理解。（可根据业务需要决定使用用户的唯一身份标识或是使用时间戳随机生成；在用户重连时应保持UserId不变）
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 推流参数，推流时携带自定义参数。
                     */
                    std::string m_publishStreamArgs;
                    bool m_publishStreamArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_STARTPUBLISHSTREAMTOCSSREQUEST_H_
