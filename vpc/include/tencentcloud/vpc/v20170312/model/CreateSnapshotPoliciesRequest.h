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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATESNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATESNAPSHOTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/SnapshotPolicy.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateSnapshotPolicies请求参数结构体
                */
                class CreateSnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    CreateSnapshotPoliciesRequest();
                    ~CreateSnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照策略详情。
                     * @return SnapshotPolicies 快照策略详情。
                     */
                    std::vector<SnapshotPolicy> GetSnapshotPolicies() const;

                    /**
                     * 设置快照策略详情。
                     * @param SnapshotPolicies 快照策略详情。
                     */
                    void SetSnapshotPolicies(const std::vector<SnapshotPolicy>& _snapshotPolicies);

                    /**
                     * 判断参数 SnapshotPolicies 是否已赋值
                     * @return SnapshotPolicies 是否已赋值
                     */
                    bool SnapshotPoliciesHasBeenSet() const;

                private:

                    /**
                     * 快照策略详情。
                     */
                    std::vector<SnapshotPolicy> m_snapshotPolicies;
                    bool m_snapshotPoliciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATESNAPSHOTPOLICIESREQUEST_H_
