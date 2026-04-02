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
                     * 获取<p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
                     * @return ServiceId <p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
                     * @param _serviceId <p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
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
                     * 获取<p>要审核的内容</p>
                     * @return Content <p>要审核的内容</p>
                     * 
                     */
                    ApiGuardContent GetContent() const;

                    /**
                     * 设置<p>要审核的内容</p>
                     * @param _content <p>要审核的内容</p>
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
                     * 获取<p>标识用户的id，限速使用，不填，则限速会不生效</p>
                     * @return UserId <p>标识用户的id，限速使用，不填，则限速会不生效</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>标识用户的id，限速使用，不填，则限速会不生效</p>
                     * @param _userId <p>标识用户的id，限速使用，不填，则限速会不生效</p>
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
                     * 获取<p>会话id</p>
                     * @return SessionId <p>会话id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话id</p>
                     * @param _sessionId <p>会话id</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>工具名称</p>
                     * @return ToolName <p>工具名称</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>工具名称</p>
                     * @param _toolName <p>工具名称</p>
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取<p>工具执行的参数</p>
                     * @return ToolArgs <p>工具执行的参数</p>
                     * 
                     */
                    std::string GetToolArgs() const;

                    /**
                     * 设置<p>工具执行的参数</p>
                     * @param _toolArgs <p>工具执行的参数</p>
                     * 
                     */
                    void SetToolArgs(const std::string& _toolArgs);

                    /**
                     * 判断参数 ToolArgs 是否已赋值
                     * @return ToolArgs 是否已赋值
                     * 
                     */
                    bool ToolArgsHasBeenSet() const;

                private:

                    /**
                     * <p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>要审核的内容</p>
                     */
                    ApiGuardContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>标识用户的id，限速使用，不填，则限速会不生效</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>会话id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>工具名称</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>工具执行的参数</p>
                     */
                    std::string m_toolArgs;
                    bool m_toolArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEQCLAWCONTENTSECCHECKREQUEST_H_
