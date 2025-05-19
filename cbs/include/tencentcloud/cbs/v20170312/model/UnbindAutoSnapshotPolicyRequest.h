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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UnbindAutoSnapshotPolicy请求参数结构体
                */
                class UnbindAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    UnbindAutoSnapshotPolicyRequest();
                    ~UnbindAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要解绑的定期快照策略ID。
                     * @return AutoSnapshotPolicyId 要解绑的定期快照策略ID。
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置要解绑的定期快照策略ID。
                     * @param _autoSnapshotPolicyId 要解绑的定期快照策略ID。
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取要解绑定期快照策略的云盘ID列表。此参数与 InstanceIds 参数至少需要传入一个。
                     * @return DiskIds 要解绑定期快照策略的云盘ID列表。此参数与 InstanceIds 参数至少需要传入一个。
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置要解绑定期快照策略的云盘ID列表。此参数与 InstanceIds 参数至少需要传入一个。
                     * @param _diskIds 要解绑定期快照策略的云盘ID列表。此参数与 InstanceIds 参数至少需要传入一个。
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取要解绑定期快照策略的实例ID列表。此参数与 DiskIds 参数至少需要传入一个。
                     * @return InstanceIds 要解绑定期快照策略的实例ID列表。此参数与 DiskIds 参数至少需要传入一个。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置要解绑定期快照策略的实例ID列表。此参数与 DiskIds 参数至少需要传入一个。
                     * @param _instanceIds 要解绑定期快照策略的实例ID列表。此参数与 DiskIds 参数至少需要传入一个。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 要解绑的定期快照策略ID。
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 要解绑定期快照策略的云盘ID列表。此参数与 InstanceIds 参数至少需要传入一个。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 要解绑定期快照策略的实例ID列表。此参数与 DiskIds 参数至少需要传入一个。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
