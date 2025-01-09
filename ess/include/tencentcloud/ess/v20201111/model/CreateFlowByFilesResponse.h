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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ApproverItem.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateFlowByFiles返回参数结构体
                */
                class CreateFlowByFilesResponse : public AbstractModel
                {
                public:
                    CreateFlowByFilesResponse();
                    ~CreateFlowByFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。

注: 如果是预览模式(即NeedPreview设置为true)时, 此处不会有值返回。

[点击查看FlowId在控制台中的位置](https://qcloudimg.tencent-cloud.cn/raw/0a83015166cfe1cb043d14f9ec4bd75e.png)
                     * @return FlowId 合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。

注: 如果是预览模式(即NeedPreview设置为true)时, 此处不会有值返回。

[点击查看FlowId在控制台中的位置](https://qcloudimg.tencent-cloud.cn/raw/0a83015166cfe1cb043d14f9ec4bd75e.png)
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取合同预览链接URL。

注：如果是预览模式(即NeedPreview设置为true)时, 才会有此预览链接URL
                     * @return PreviewUrl 合同预览链接URL。

注：如果是预览模式(即NeedPreview设置为true)时, 才会有此预览链接URL
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取签署方信息，如角色ID、角色名称等
                     * @return Approvers 签署方信息，如角色ID、角色名称等
                     * 
                     */
                    std::vector<ApproverItem> GetApprovers() const;

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                private:

                    /**
                     * 合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。

注: 如果是预览模式(即NeedPreview设置为true)时, 此处不会有值返回。

[点击查看FlowId在控制台中的位置](https://qcloudimg.tencent-cloud.cn/raw/0a83015166cfe1cb043d14f9ec4bd75e.png)
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 合同预览链接URL。

注：如果是预览模式(即NeedPreview设置为true)时, 才会有此预览链接URL
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 签署方信息，如角色ID、角色名称等
                     */
                    std::vector<ApproverItem> m_approvers;
                    bool m_approversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWBYFILESRESPONSE_H_
