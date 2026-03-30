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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEQCLAWCONTENTSECCHECKREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEQCLAWCONTENTSECCHECKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiGuardContent.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeQClawContentSecCheck请求参数结构体
                */
                class DescribeQClawContentSecCheckRequest : public AbstractModel
                {
                public:
                    DescribeQClawContentSecCheckRequest();
                    ~DescribeQClawContentSecCheckRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取 服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     * @return ServiceId  服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置 服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     * @param _serviceId  服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取要审核的内容
                     * @return Content 要审核的内容
                     * 
                     */
                    ApiGuardContent GetContent() const;

                    /**
                     * 设置要审核的内容
                     * @param _content 要审核的内容
                     * 
                     */
                    void SetContent(const ApiGuardContent& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取标识用户的id，限速使用，不填，则限速会不生效
                     * @return UserId 标识用户的id，限速使用，不填，则限速会不生效
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置标识用户的id，限速使用，不填，则限速会不生效
                     * @param _userId 标识用户的id，限速使用，不填，则限速会不生效
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
                     * 获取会话id
                     * @return SessionId 会话id
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话id
                     * @param _sessionId 会话id
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     *  服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 要审核的内容
                     */
                    ApiGuardContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 标识用户的id，限速使用，不填，则限速会不生效
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 会话id
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEQCLAWCONTENTSECCHECKREQUEST_H_
