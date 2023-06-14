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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_GETDOWNLOADFLOWURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_GETDOWNLOADFLOWURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/DownloadFlowInfo.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * GetDownloadFlowUrl请求参数结构体
                */
                class GetDownloadFlowUrlRequest : public AbstractModel
                {
                public:
                    GetDownloadFlowUrlRequest();
                    ~GetDownloadFlowUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @return Agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * @param _agent 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取文件夹数组，签署流程总数不能超过50个，一个文件夹下，不能超过20个签署流程
                     * @return DownLoadFlows 文件夹数组，签署流程总数不能超过50个，一个文件夹下，不能超过20个签署流程
                     * 
                     */
                    std::vector<DownloadFlowInfo> GetDownLoadFlows() const;

                    /**
                     * 设置文件夹数组，签署流程总数不能超过50个，一个文件夹下，不能超过20个签署流程
                     * @param _downLoadFlows 文件夹数组，签署流程总数不能超过50个，一个文件夹下，不能超过20个签署流程
                     * 
                     */
                    void SetDownLoadFlows(const std::vector<DownloadFlowInfo>& _downLoadFlows);

                    /**
                     * 判断参数 DownLoadFlows 是否已赋值
                     * @return DownLoadFlows 是否已赋值
                     * 
                     */
                    bool DownLoadFlowsHasBeenSet() const;

                    /**
                     * 获取操作者的信息，不用传
                     * @return Operator 操作者的信息，不用传
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作者的信息，不用传
                     * @param _operator 操作者的信息，不用传
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 应用相关信息。 此接口Agent.ProxyOrganizationOpenId、Agent. ProxyOperator.OpenId、Agent.AppId 和 Agent.ProxyAppId 均必填。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 文件夹数组，签署流程总数不能超过50个，一个文件夹下，不能超过20个签署流程
                     */
                    std::vector<DownloadFlowInfo> m_downLoadFlows;
                    bool m_downLoadFlowsHasBeenSet;

                    /**
                     * 操作者的信息，不用传
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_GETDOWNLOADFLOWURLREQUEST_H_
