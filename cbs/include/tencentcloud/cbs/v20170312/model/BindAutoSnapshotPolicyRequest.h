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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_BINDAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_BINDAUTOSNAPSHOTPOLICYREQUEST_H_

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
                * BindAutoSnapshotPolicy请求参数结构体
                */
                class BindAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    BindAutoSnapshotPolicyRequest();
                    ~BindAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要绑定的定期快照策略ID，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     * @return AutoSnapshotPolicyId 要绑定的定期快照策略ID，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置要绑定的定期快照策略ID，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     * @param _autoSnapshotPolicyId 要绑定的定期快照策略ID，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
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
                     * 获取要绑定的云硬盘ID列表，一次请求最多绑定80块云盘。
                     * @return DiskIds 要绑定的云硬盘ID列表，一次请求最多绑定80块云盘。
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置要绑定的云硬盘ID列表，一次请求最多绑定80块云盘。
                     * @param _diskIds 要绑定的云硬盘ID列表，一次请求最多绑定80块云盘。
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                private:

                    /**
                     * 要绑定的定期快照策略ID，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 要绑定的云硬盘ID列表，一次请求最多绑定80块云盘。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_BINDAUTOSNAPSHOTPOLICYREQUEST_H_
