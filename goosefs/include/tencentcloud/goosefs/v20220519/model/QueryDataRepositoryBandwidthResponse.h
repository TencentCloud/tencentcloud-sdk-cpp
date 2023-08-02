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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_QUERYDATAREPOSITORYBANDWIDTHRESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_QUERYDATAREPOSITORYBANDWIDTHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * QueryDataRepositoryBandwidth返回参数结构体
                */
                class QueryDataRepositoryBandwidthResponse : public AbstractModel
                {
                public:
                    QueryDataRepositoryBandwidthResponse();
                    ~QueryDataRepositoryBandwidthResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据流动带宽, 单位MB/s
                     * @return Bandwidth 数据流动带宽, 单位MB/s
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取带宽状态。1:待扩容;2:运行中;3:扩容中
                     * @return BandwidthStatus 带宽状态。1:待扩容;2:运行中;3:扩容中
                     * 
                     */
                    uint64_t GetBandwidthStatus() const;

                    /**
                     * 判断参数 BandwidthStatus 是否已赋值
                     * @return BandwidthStatus 是否已赋值
                     * 
                     */
                    bool BandwidthStatusHasBeenSet() const;

                    /**
                     * 获取能设置的最小带宽, 单位MB/s
                     * @return MinBandwidth 能设置的最小带宽, 单位MB/s
                     * 
                     */
                    uint64_t GetMinBandwidth() const;

                    /**
                     * 判断参数 MinBandwidth 是否已赋值
                     * @return MinBandwidth 是否已赋值
                     * 
                     */
                    bool MinBandwidthHasBeenSet() const;

                private:

                    /**
                     * 数据流动带宽, 单位MB/s
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 带宽状态。1:待扩容;2:运行中;3:扩容中
                     */
                    uint64_t m_bandwidthStatus;
                    bool m_bandwidthStatusHasBeenSet;

                    /**
                     * 能设置的最小带宽, 单位MB/s
                     */
                    uint64_t m_minBandwidth;
                    bool m_minBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_QUERYDATAREPOSITORYBANDWIDTHRESPONSE_H_
