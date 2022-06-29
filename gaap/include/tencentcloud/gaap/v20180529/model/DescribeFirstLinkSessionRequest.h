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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEFIRSTLINKSESSIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEFIRSTLINKSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeFirstLinkSession请求参数结构体
                */
                class DescribeFirstLinkSessionRequest : public AbstractModel
                {
                public:
                    DescribeFirstLinkSessionRequest();
                    ~DescribeFirstLinkSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取单次加速唯一会话Id
                     * @return SessionId 单次加速唯一会话Id
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置单次加速唯一会话Id
                     * @param SessionId 单次加速唯一会话Id
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 单次加速唯一会话Id
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEFIRSTLINKSESSIONREQUEST_H_
