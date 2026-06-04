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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTDETAILREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAgentDetail请求参数结构体
                */
                class DescribeAgentDetailRequest : public AbstractModel
                {
                public:
                    DescribeAgentDetailRequest();
                    ~DescribeAgentDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用Id</p>
                     * @return AppId <p>应用Id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用Id</p>
                     * @param _appId <p>应用Id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>AgentId</p>
                     * @return AgentId <p>AgentId</p>
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>AgentId</p>
                     * @param _agentId <p>AgentId</p>
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用Id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>AgentId</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAGENTDETAILREQUEST_H_
