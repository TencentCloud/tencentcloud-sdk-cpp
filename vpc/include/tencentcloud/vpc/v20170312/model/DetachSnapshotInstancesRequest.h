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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DETACHSNAPSHOTINSTANCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DETACHSNAPSHOTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SnapshotInstance.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DetachSnapshotInstances请求参数结构体
                */
                class DetachSnapshotInstancesRequest : public AbstractModel
                {
                public:
                    DetachSnapshotInstancesRequest();
                    ~DetachSnapshotInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照策略Id。
                     * @return SnapshotPolicyId 快照策略Id。
                     * 
                     */
                    std::string GetSnapshotPolicyId() const;

                    /**
                     * 设置快照策略Id。
                     * @param _snapshotPolicyId 快照策略Id。
                     * 
                     */
                    void SetSnapshotPolicyId(const std::string& _snapshotPolicyId);

                    /**
                     * 判断参数 SnapshotPolicyId 是否已赋值
                     * @return SnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取实例信息。
                     * @return Instances 实例信息。
                     * 
                     */
                    std::vector<SnapshotInstance> GetInstances() const;

                    /**
                     * 设置实例信息。
                     * @param _instances 实例信息。
                     * 
                     */
                    void SetInstances(const std::vector<SnapshotInstance>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * 快照策略Id。
                     */
                    std::string m_snapshotPolicyId;
                    bool m_snapshotPolicyIdHasBeenSet;

                    /**
                     * 实例信息。
                     */
                    std::vector<SnapshotInstance> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DETACHSNAPSHOTINSTANCESREQUEST_H_
