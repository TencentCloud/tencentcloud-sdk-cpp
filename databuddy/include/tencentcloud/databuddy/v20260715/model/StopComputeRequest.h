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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_STOPCOMPUTEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_STOPCOMPUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * StopCompute请求参数结构体
                */
                class StopComputeRequest : public AbstractModel
                {
                public:
                    StopComputeRequest();
                    ~StopComputeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间 ID
                     * @return WorkspaceId 工作空间 ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间 ID
                     * @param _workspaceId 工作空间 ID
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）。替代已废弃的 ResourceId；过渡期 ComputeResourceId 与 ResourceId 至少传一个，同时传时必须一致
                     * @return ComputeResourceId 计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）。替代已废弃的 ResourceId；过渡期 ComputeResourceId 与 ResourceId 至少传一个，同时传时必须一致
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）。替代已废弃的 ResourceId；过渡期 ComputeResourceId 与 ResourceId 至少传一个，同时传时必须一致
                     * @param _computeResourceId 计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）。替代已废弃的 ResourceId；过渡期 ComputeResourceId 与 ResourceId 至少传一个，同时传时必须一致
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取[已废弃，请使用 ComputeResourceId] 计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）
                     * @return ResourceId [已废弃，请使用 ComputeResourceId] 计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置[已废弃，请使用 ComputeResourceId] 计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）
                     * @param _resourceId [已废弃，请使用 ComputeResourceId] 计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 工作空间 ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）。替代已废弃的 ResourceId；过渡期 ComputeResourceId 与 ResourceId 至少传一个，同时传时必须一致
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * [已废弃，请使用 ComputeResourceId] 计算资源 ID，可通过 ListComputes 接口获取（返回字段 Items[].BasicInfo.ResourceId）
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_STOPCOMPUTEREQUEST_H_
