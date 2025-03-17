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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/HostInfo.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterHosts返回参数结构体
                */
                class DescribeDedicatedClusterHostsResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterHostsResponse();
                    ~DescribeDedicatedClusterHostsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取宿主机信息
                     * @return HostInfoSet 宿主机信息
                     * 
                     */
                    std::vector<HostInfo> GetHostInfoSet() const;

                    /**
                     * 判断参数 HostInfoSet 是否已赋值
                     * @return HostInfoSet 是否已赋值
                     * 
                     */
                    bool HostInfoSetHasBeenSet() const;

                    /**
                     * 获取宿主机总数
                     * @return TotalCount 宿主机总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 宿主机信息
                     */
                    std::vector<HostInfo> m_hostInfoSet;
                    bool m_hostInfoSetHasBeenSet;

                    /**
                     * 宿主机总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERHOSTSRESPONSE_H_
