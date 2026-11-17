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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUPSTATISTICS_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUPSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/GPUResourceStateCount.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 组内当前资源统计。可用/占用是额外维度，不能与 StateCounts 相加。
                */
                class GPUResourceGroupStatistics : public AbstractModel
                {
                public:
                    GPUResourceGroupStatistics();
                    ~GPUResourceGroupStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>组内当前资源总数，单位台；不含已销毁和补偿完成的失败资源。</p>
                     * @return TotalCount <p>组内当前资源总数，单位台；不含已销毁和补偿完成的失败资源。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>组内当前资源总数，单位台；不含已销毁和补偿完成的失败资源。</p>
                     * @param _totalCount <p>组内当前资源总数，单位台；不含已销毁和补偿完成的失败资源。</p>
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Active、无占用且物理状态当前可领取的资源数量，单位台。</p>
                     * @return AvailableCount <p>Active、无占用且物理状态当前可领取的资源数量，单位台。</p>
                     * 
                     */
                    int64_t GetAvailableCount() const;

                    /**
                     * 设置<p>Active、无占用且物理状态当前可领取的资源数量，单位台。</p>
                     * @param _availableCount <p>Active、无占用且物理状态当前可领取的资源数量，单位台。</p>
                     * 
                     */
                    void SetAvailableCount(const int64_t& _availableCount);

                    /**
                     * 判断参数 AvailableCount 是否已赋值
                     * @return AvailableCount 是否已赋值
                     * 
                     */
                    bool AvailableCountHasBeenSet() const;

                    /**
                     * 获取<p>仍被占用或绑定的资源数量，含领取中、使用中及归还未完成，单位台。</p>
                     * @return AllocatedCount <p>仍被占用或绑定的资源数量，含领取中、使用中及归还未完成，单位台。</p>
                     * 
                     */
                    int64_t GetAllocatedCount() const;

                    /**
                     * 设置<p>仍被占用或绑定的资源数量，含领取中、使用中及归还未完成，单位台。</p>
                     * @param _allocatedCount <p>仍被占用或绑定的资源数量，含领取中、使用中及归还未完成，单位台。</p>
                     * 
                     */
                    void SetAllocatedCount(const int64_t& _allocatedCount);

                    /**
                     * 判断参数 AllocatedCount 是否已赋值
                     * @return AllocatedCount 是否已赋值
                     * 
                     */
                    bool AllocatedCountHasBeenSet() const;

                    /**
                     * 获取<p>资源状态计数，四项之和等于本组 TotalCount。</p>
                     * @return StateCounts <p>资源状态计数，四项之和等于本组 TotalCount。</p>
                     * 
                     */
                    GPUResourceStateCount GetStateCounts() const;

                    /**
                     * 设置<p>资源状态计数，四项之和等于本组 TotalCount。</p>
                     * @param _stateCounts <p>资源状态计数，四项之和等于本组 TotalCount。</p>
                     * 
                     */
                    void SetStateCounts(const GPUResourceStateCount& _stateCounts);

                    /**
                     * 判断参数 StateCounts 是否已赋值
                     * @return StateCounts 是否已赋值
                     * 
                     */
                    bool StateCountsHasBeenSet() const;

                private:

                    /**
                     * <p>组内当前资源总数，单位台；不含已销毁和补偿完成的失败资源。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Active、无占用且物理状态当前可领取的资源数量，单位台。</p>
                     */
                    int64_t m_availableCount;
                    bool m_availableCountHasBeenSet;

                    /**
                     * <p>仍被占用或绑定的资源数量，含领取中、使用中及归还未完成，单位台。</p>
                     */
                    int64_t m_allocatedCount;
                    bool m_allocatedCountHasBeenSet;

                    /**
                     * <p>资源状态计数，四项之和等于本组 TotalCount。</p>
                     */
                    GPUResourceStateCount m_stateCounts;
                    bool m_stateCountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_GPURESOURCEGROUPSTATISTICS_H_
