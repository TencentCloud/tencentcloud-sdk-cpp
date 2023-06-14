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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_UNLOCKCCNBANDWIDTHSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_UNLOCKCCNBANDWIDTHSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnFlowLock.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * UnlockCcnBandwidths请求参数结构体
                */
                class UnlockCcnBandwidthsRequest : public AbstractModel
                {
                public:
                    UnlockCcnBandwidthsRequest();
                    ~UnlockCcnBandwidthsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取带宽实例对象数组。
                     * @return Instances 带宽实例对象数组。
                     * 
                     */
                    std::vector<CcnFlowLock> GetInstances() const;

                    /**
                     * 设置带宽实例对象数组。
                     * @param _instances 带宽实例对象数组。
                     * 
                     */
                    void SetInstances(const std::vector<CcnFlowLock>& _instances);

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * 带宽实例对象数组。
                     */
                    std::vector<CcnFlowLock> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_UNLOCKCCNBANDWIDTHSREQUEST_H_
