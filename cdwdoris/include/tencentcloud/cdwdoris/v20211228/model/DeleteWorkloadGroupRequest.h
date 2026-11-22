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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DELETEWORKLOADGROUPREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DELETEWORKLOADGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DeleteWorkloadGroup请求参数结构体
                */
                class DeleteWorkloadGroupRequest : public AbstractModel
                {
                public:
                    DeleteWorkloadGroupRequest();
                    ~DeleteWorkloadGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群id</p>
                     * @return InstanceId <p>集群id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群id</p>
                     * @param _instanceId <p>集群id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>需要删除的资源组名称</p>
                     * @return WorkloadGroupName <p>需要删除的资源组名称</p>
                     * 
                     */
                    std::string GetWorkloadGroupName() const;

                    /**
                     * 设置<p>需要删除的资源组名称</p>
                     * @param _workloadGroupName <p>需要删除的资源组名称</p>
                     * 
                     */
                    void SetWorkloadGroupName(const std::string& _workloadGroupName);

                    /**
                     * 判断参数 WorkloadGroupName 是否已赋值
                     * @return WorkloadGroupName 是否已赋值
                     * 
                     */
                    bool WorkloadGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>资源组归属的计算组ID</p>
                     * @return ComputeGroup <p>资源组归属的计算组ID</p>
                     * 
                     */
                    std::string GetComputeGroup() const;

                    /**
                     * 设置<p>资源组归属的计算组ID</p>
                     * @param _computeGroup <p>资源组归属的计算组ID</p>
                     * 
                     */
                    void SetComputeGroup(const std::string& _computeGroup);

                    /**
                     * 判断参数 ComputeGroup 是否已赋值
                     * @return ComputeGroup 是否已赋值
                     * 
                     */
                    bool ComputeGroupHasBeenSet() const;

                private:

                    /**
                     * <p>集群id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>需要删除的资源组名称</p>
                     */
                    std::string m_workloadGroupName;
                    bool m_workloadGroupNameHasBeenSet;

                    /**
                     * <p>资源组归属的计算组ID</p>
                     */
                    std::string m_computeGroup;
                    bool m_computeGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DELETEWORKLOADGROUPREQUEST_H_
