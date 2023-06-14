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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESMAXBANDWIDTHREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESMAXBANDWIDTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ResetInstancesMaxBandwidth请求参数结构体
                */
                class ResetInstancesMaxBandwidthRequest : public AbstractModel
                {
                public:
                    ResetInstancesMaxBandwidthRequest();
                    ~ResetInstancesMaxBandwidthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待重置带宽上限的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * @return InstanceIdSet 待重置带宽上限的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置待重置带宽上限的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * @param _instanceIdSet 待重置带宽上限的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取修改后的最大出带宽上限。
                     * @return MaxBandwidthOut 修改后的最大出带宽上限。
                     * 
                     */
                    int64_t GetMaxBandwidthOut() const;

                    /**
                     * 设置修改后的最大出带宽上限。
                     * @param _maxBandwidthOut 修改后的最大出带宽上限。
                     * 
                     */
                    void SetMaxBandwidthOut(const int64_t& _maxBandwidthOut);

                    /**
                     * 判断参数 MaxBandwidthOut 是否已赋值
                     * @return MaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool MaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取修改后的最大入带宽上限。
                     * @return MaxBandwidthIn 修改后的最大入带宽上限。
                     * 
                     */
                    int64_t GetMaxBandwidthIn() const;

                    /**
                     * 设置修改后的最大入带宽上限。
                     * @param _maxBandwidthIn 修改后的最大入带宽上限。
                     * 
                     */
                    void SetMaxBandwidthIn(const int64_t& _maxBandwidthIn);

                    /**
                     * 判断参数 MaxBandwidthIn 是否已赋值
                     * @return MaxBandwidthIn 是否已赋值
                     * 
                     */
                    bool MaxBandwidthInHasBeenSet() const;

                private:

                    /**
                     * 待重置带宽上限的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 修改后的最大出带宽上限。
                     */
                    int64_t m_maxBandwidthOut;
                    bool m_maxBandwidthOutHasBeenSet;

                    /**
                     * 修改后的最大入带宽上限。
                     */
                    int64_t m_maxBandwidthIn;
                    bool m_maxBandwidthInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RESETINSTANCESMAXBANDWIDTHREQUEST_H_
