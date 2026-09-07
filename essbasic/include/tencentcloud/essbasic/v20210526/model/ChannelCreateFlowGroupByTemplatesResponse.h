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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/TaskInfo.h>
#include <tencentcloud/essbasic/v20210526/model/FlowGroupApprovers.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateFlowGroupByTemplates返回参数结构体
                */
                class ChannelCreateFlowGroupByTemplatesResponse : public AbstractModel
                {
                public:
                    ChannelCreateFlowGroupByTemplatesResponse();
                    ~ChannelCreateFlowGroupByTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>合同组ID，为32位字符串。<br>建议开发者妥善保存此合同组ID，以便于顺利进行后续操作。</p>
                     * @return FlowGroupId <p>合同组ID，为32位字符串。<br>建议开发者妥善保存此合同组ID，以便于顺利进行后续操作。</p>
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>合同组中每个合同流程ID，每个ID均为32位字符串。</p><p>注:<br><code>此数组的顺序和入参中的FlowInfos顺序一致</code></p>
                     * @return FlowIds <p>合同组中每个合同流程ID，每个ID均为32位字符串。</p><p>注:<br><code>此数组的顺序和入参中的FlowInfos顺序一致</code></p>
                     * 
                     */
                    std::vector<std::string> GetFlowIds() const;

                    /**
                     * 判断参数 FlowIds 是否已赋值
                     * @return FlowIds 是否已赋值
                     * 
                     */
                    bool FlowIdsHasBeenSet() const;

                    /**
                     * 获取<p>复杂文档合成任务（如，包含动态表格的预览任务）的任务信息数组；<br>如果文档需要异步合成，此字段会返回该异步任务的任务信息，后续可以通过<a href="https://qian.tencent.com/developers/partnerApis/files/DescribeFileConvertTask">查询转换任务状态</a>接口查询任务详情；</p>
                     * @return TaskInfos <p>复杂文档合成任务（如，包含动态表格的预览任务）的任务信息数组；<br>如果文档需要异步合成，此字段会返回该异步任务的任务信息，后续可以通过<a href="https://qian.tencent.com/developers/partnerApis/files/DescribeFileConvertTask">查询转换任务状态</a>接口查询任务详情；</p>
                     * 
                     */
                    std::vector<TaskInfo> GetTaskInfos() const;

                    /**
                     * 判断参数 TaskInfos 是否已赋值
                     * @return TaskInfos 是否已赋值
                     * 
                     */
                    bool TaskInfosHasBeenSet() const;

                    /**
                     * 获取<p>合同组签署方信息</p>
                     * @return Approvers <p>合同组签署方信息</p>
                     * 
                     */
                    std::vector<FlowGroupApprovers> GetApprovers() const;

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                private:

                    /**
                     * <p>合同组ID，为32位字符串。<br>建议开发者妥善保存此合同组ID，以便于顺利进行后续操作。</p>
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * <p>合同组中每个合同流程ID，每个ID均为32位字符串。</p><p>注:<br><code>此数组的顺序和入参中的FlowInfos顺序一致</code></p>
                     */
                    std::vector<std::string> m_flowIds;
                    bool m_flowIdsHasBeenSet;

                    /**
                     * <p>复杂文档合成任务（如，包含动态表格的预览任务）的任务信息数组；<br>如果文档需要异步合成，此字段会返回该异步任务的任务信息，后续可以通过<a href="https://qian.tencent.com/developers/partnerApis/files/DescribeFileConvertTask">查询转换任务状态</a>接口查询任务详情；</p>
                     */
                    std::vector<TaskInfo> m_taskInfos;
                    bool m_taskInfosHasBeenSet;

                    /**
                     * <p>合同组签署方信息</p>
                     */
                    std::vector<FlowGroupApprovers> m_approvers;
                    bool m_approversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEFLOWGROUPBYTEMPLATESRESPONSE_H_
