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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBANDWIDTHRANGERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBANDWIDTHRANGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBandwidthRange返回参数结构体
                */
                class DescribeBandwidthRangeResponse : public AbstractModel
                {
                public:
                    DescribeBandwidthRangeResponse();
                    ~DescribeBandwidthRangeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取标准带宽。指购买实例时，系统为每个节点分配的带宽。
                     * @return BaseBandwidth 标准带宽。指购买实例时，系统为每个节点分配的带宽。
                     * 
                     */
                    int64_t GetBaseBandwidth() const;

                    /**
                     * 判断参数 BaseBandwidth 是否已赋值
                     * @return BaseBandwidth 是否已赋值
                     * 
                     */
                    bool BaseBandwidthHasBeenSet() const;

                    /**
                     * 获取指实例的附加带宽。标准带宽不满足需求的情况下，用户可自行增加的带宽。<ul><li>开启副本只读时，实例总带宽 = 附加带宽 * 分片数 + 标准带宽 * 分片数 * Max ([只读副本数量, 1])，标准架构的分片数 = 1。</li><li>没有开启副本只读时，实例总带宽 = 附加带宽 * 分片数 + 标准带宽 * 分片数，标准架构的分片数 = 1。</li></ul>
                     * @return AddBandwidth 指实例的附加带宽。标准带宽不满足需求的情况下，用户可自行增加的带宽。<ul><li>开启副本只读时，实例总带宽 = 附加带宽 * 分片数 + 标准带宽 * 分片数 * Max ([只读副本数量, 1])，标准架构的分片数 = 1。</li><li>没有开启副本只读时，实例总带宽 = 附加带宽 * 分片数 + 标准带宽 * 分片数，标准架构的分片数 = 1。</li></ul>
                     * 
                     */
                    int64_t GetAddBandwidth() const;

                    /**
                     * 判断参数 AddBandwidth 是否已赋值
                     * @return AddBandwidth 是否已赋值
                     * 
                     */
                    bool AddBandwidthHasBeenSet() const;

                    /**
                     * 获取附加带宽设置下限。
                     * @return MinAddBandwidth 附加带宽设置下限。
                     * 
                     */
                    int64_t GetMinAddBandwidth() const;

                    /**
                     * 判断参数 MinAddBandwidth 是否已赋值
                     * @return MinAddBandwidth 是否已赋值
                     * 
                     */
                    bool MinAddBandwidthHasBeenSet() const;

                    /**
                     * 获取附加带宽设置上限。
                     * @return MaxAddBandwidth 附加带宽设置上限。
                     * 
                     */
                    int64_t GetMaxAddBandwidth() const;

                    /**
                     * 判断参数 MaxAddBandwidth 是否已赋值
                     * @return MaxAddBandwidth 是否已赋值
                     * 
                     */
                    bool MaxAddBandwidthHasBeenSet() const;

                private:

                    /**
                     * 标准带宽。指购买实例时，系统为每个节点分配的带宽。
                     */
                    int64_t m_baseBandwidth;
                    bool m_baseBandwidthHasBeenSet;

                    /**
                     * 指实例的附加带宽。标准带宽不满足需求的情况下，用户可自行增加的带宽。<ul><li>开启副本只读时，实例总带宽 = 附加带宽 * 分片数 + 标准带宽 * 分片数 * Max ([只读副本数量, 1])，标准架构的分片数 = 1。</li><li>没有开启副本只读时，实例总带宽 = 附加带宽 * 分片数 + 标准带宽 * 分片数，标准架构的分片数 = 1。</li></ul>
                     */
                    int64_t m_addBandwidth;
                    bool m_addBandwidthHasBeenSet;

                    /**
                     * 附加带宽设置下限。
                     */
                    int64_t m_minAddBandwidth;
                    bool m_minAddBandwidthHasBeenSet;

                    /**
                     * 附加带宽设置上限。
                     */
                    int64_t m_maxAddBandwidth;
                    bool m_maxAddBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBANDWIDTHRANGERESPONSE_H_
