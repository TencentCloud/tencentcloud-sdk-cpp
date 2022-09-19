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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATEWORKSPACEBYAGENTREQUEST_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATEWORKSPACEBYAGENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudstudio/v20210524/model/AgentSpaceDTO.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * CreateWorkspaceByAgent请求参数结构体
                */
                class CreateWorkspaceByAgentRequest : public AbstractModel
                {
                public:
                    CreateWorkspaceByAgentRequest();
                    ~CreateWorkspaceByAgentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return CloudStudioSessionTeam 无
                     */
                    std::string GetCloudStudioSessionTeam() const;

                    /**
                     * 设置无
                     * @param CloudStudioSessionTeam 无
                     */
                    void SetCloudStudioSessionTeam(const std::string& _cloudStudioSessionTeam);

                    /**
                     * 判断参数 CloudStudioSessionTeam 是否已赋值
                     * @return CloudStudioSessionTeam 是否已赋值
                     */
                    bool CloudStudioSessionTeamHasBeenSet() const;

                    /**
                     * 获取无
                     * @return AgentSpaceDTO 无
                     */
                    AgentSpaceDTO GetAgentSpaceDTO() const;

                    /**
                     * 设置无
                     * @param AgentSpaceDTO 无
                     */
                    void SetAgentSpaceDTO(const AgentSpaceDTO& _agentSpaceDTO);

                    /**
                     * 判断参数 AgentSpaceDTO 是否已赋值
                     * @return AgentSpaceDTO 是否已赋值
                     */
                    bool AgentSpaceDTOHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::string m_cloudStudioSessionTeam;
                    bool m_cloudStudioSessionTeamHasBeenSet;

                    /**
                     * 无
                     */
                    AgentSpaceDTO m_agentSpaceDTO;
                    bool m_agentSpaceDTOHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_CREATEWORKSPACEBYAGENTREQUEST_H_
