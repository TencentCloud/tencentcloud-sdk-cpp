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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_BATCHASSIGNVLPLANCHANNELSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_BATCHASSIGNVLPLANCHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * BatchAssignVLPlanChannels请求参数结构体
                */
                class BatchAssignVLPlanChannelsRequest : public AbstractModel
                {
                public:
                    BatchAssignVLPlanChannelsRequest();
                    ~BatchAssignVLPlanChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>计划 ID</p>
                     * @return VLPlanId <p>计划 ID</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>计划 ID</p>
                     * @param _vLPlanId <p>计划 ID</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>操作命令：1=关联，2=解绑</p>
                     * @return Cmd <p>操作命令：1=关联，2=解绑</p>
                     * 
                     */
                    int64_t GetCmd() const;

                    /**
                     * 设置<p>操作命令：1=关联，2=解绑</p>
                     * @param _cmd <p>操作命令：1=关联，2=解绑</p>
                     * 
                     */
                    void SetCmd(const int64_t& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                    /**
                     * 获取<p>通道 ID 列表，最多 500 个；与 OrganizationIds 至少传一个（Cmd=1 时）</p>
                     * @return ChannelIds <p>通道 ID 列表，最多 500 个；与 OrganizationIds 至少传一个（Cmd=1 时）</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置<p>通道 ID 列表，最多 500 个；与 OrganizationIds 至少传一个（Cmd=1 时）</p>
                     * @param _channelIds <p>通道 ID 列表，最多 500 个；与 OrganizationIds 至少传一个（Cmd=1 时）</p>
                     * 
                     */
                    void SetChannelIds(const std::vector<std::string>& _channelIds);

                    /**
                     * 判断参数 ChannelIds 是否已赋值
                     * @return ChannelIds 是否已赋值
                     * 
                     */
                    bool ChannelIdsHasBeenSet() const;

                    /**
                     * 获取<p>组织 ID 列表（仅 Cmd=1 时有效，Cmd=2 时不允许传入）；展开该组织下所有通道参与关联，与 ChannelIds 取并集去重</p>
                     * @return OrganizationIds <p>组织 ID 列表（仅 Cmd=1 时有效，Cmd=2 时不允许传入）；展开该组织下所有通道参与关联，与 ChannelIds 取并集去重</p>
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置<p>组织 ID 列表（仅 Cmd=1 时有效，Cmd=2 时不允许传入）；展开该组织下所有通道参与关联，与 ChannelIds 取并集去重</p>
                     * @param _organizationIds <p>组织 ID 列表（仅 Cmd=1 时有效，Cmd=2 时不允许传入）；展开该组织下所有通道参与关联，与 ChannelIds 取并集去重</p>
                     * 
                     */
                    void SetOrganizationIds(const std::vector<std::string>& _organizationIds);

                    /**
                     * 判断参数 OrganizationIds 是否已赋值
                     * @return OrganizationIds 是否已赋值
                     * 
                     */
                    bool OrganizationIdsHasBeenSet() const;

                private:

                    /**
                     * <p>计划 ID</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                    /**
                     * <p>操作命令：1=关联，2=解绑</p>
                     */
                    int64_t m_cmd;
                    bool m_cmdHasBeenSet;

                    /**
                     * <p>通道 ID 列表，最多 500 个；与 OrganizationIds 至少传一个（Cmd=1 时）</p>
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * <p>组织 ID 列表（仅 Cmd=1 时有效，Cmd=2 时不允许传入）；展开该组织下所有通道参与关联，与 ChannelIds 取并集去重</p>
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_BATCHASSIGNVLPLANCHANNELSREQUEST_H_
