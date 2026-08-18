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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERDISKSTATISTICSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERDISKSTATISTICSREQUEST_H_

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
                * DescribeDedicatedClusterDiskStatistics请求参数结构体
                */
                class DescribeDedicatedClusterDiskStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterDiskStatisticsRequest();
                    ~DescribeDedicatedClusterDiskStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云服务器独享集群ID。</p>
                     * @return DedicatedClusterId <p>云服务器独享集群ID。</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>云服务器独享集群ID。</p>
                     * @param _dedicatedClusterId <p>云服务器独享集群ID。</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>云服务器独享集群ID。</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDEDICATEDCLUSTERDISKSTATISTICSREQUEST_H_
