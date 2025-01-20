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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSNAPSHOTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/BatchModifySnapshotPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifySnapshotPolicies请求参数结构体
                */
                class ModifySnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    ModifySnapshotPoliciesRequest();
                    ~ModifySnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照策略修改信息。
                     * @return SnapshotPoliciesInfo 快照策略修改信息。
                     * 
                     */
                    std::vector<BatchModifySnapshotPolicy> GetSnapshotPoliciesInfo() const;

                    /**
                     * 设置快照策略修改信息。
                     * @param _snapshotPoliciesInfo 快照策略修改信息。
                     * 
                     */
                    void SetSnapshotPoliciesInfo(const std::vector<BatchModifySnapshotPolicy>& _snapshotPoliciesInfo);

                    /**
                     * 判断参数 SnapshotPoliciesInfo 是否已赋值
                     * @return SnapshotPoliciesInfo 是否已赋值
                     * 
                     */
                    bool SnapshotPoliciesInfoHasBeenSet() const;

                private:

                    /**
                     * 快照策略修改信息。
                     */
                    std::vector<BatchModifySnapshotPolicy> m_snapshotPoliciesInfo;
                    bool m_snapshotPoliciesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYSNAPSHOTPOLICIESREQUEST_H_
