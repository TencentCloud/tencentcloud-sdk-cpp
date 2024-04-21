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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEEFFECTIVEPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEEFFECTIVEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeEffectivePolicy请求参数结构体
                */
                class DescribeEffectivePolicyRequest : public AbstractModel
                {
                public:
                    DescribeEffectivePolicyRequest();
                    ~DescribeEffectivePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账号uin或者节点id。
                     * @return TargetId 账号uin或者节点id。
                     * 
                     */
                    uint64_t GetTargetId() const;

                    /**
                     * 设置账号uin或者节点id。
                     * @param _targetId 账号uin或者节点id。
                     * 
                     */
                    void SetTargetId(const uint64_t& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                private:

                    /**
                     * 账号uin或者节点id。
                     */
                    uint64_t m_targetId;
                    bool m_targetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEEFFECTIVEPOLICYREQUEST_H_
