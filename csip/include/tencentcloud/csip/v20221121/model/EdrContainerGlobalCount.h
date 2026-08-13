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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRCONTAINERGLOBALCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRCONTAINERGLOBALCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 容器告警全局统计
                */
                class EdrContainerGlobalCount : public AbstractModel
                {
                public:
                    EdrContainerGlobalCount();
                    ~EdrContainerGlobalCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总告警条数</p>
                     * @return TotalCount <p>总告警条数</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置<p>总告警条数</p>
                     * @param _totalCount <p>总告警条数</p>
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
                     * 获取<p>存在告警的集群数量（COUNT(DISTINCT cluster_id)，排除空 cluster_id）</p>
                     * @return ClustersCount <p>存在告警的集群数量（COUNT(DISTINCT cluster_id)，排除空 cluster_id）</p>
                     * 
                     */
                    uint64_t GetClustersCount() const;

                    /**
                     * 设置<p>存在告警的集群数量（COUNT(DISTINCT cluster_id)，排除空 cluster_id）</p>
                     * @param _clustersCount <p>存在告警的集群数量（COUNT(DISTINCT cluster_id)，排除空 cluster_id）</p>
                     * 
                     */
                    void SetClustersCount(const uint64_t& _clustersCount);

                    /**
                     * 判断参数 ClustersCount 是否已赋值
                     * @return ClustersCount 是否已赋值
                     * 
                     */
                    bool ClustersCountHasBeenSet() const;

                private:

                    /**
                     * <p>总告警条数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>存在告警的集群数量（COUNT(DISTINCT cluster_id)，排除空 cluster_id）</p>
                     */
                    uint64_t m_clustersCount;
                    bool m_clustersCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRCONTAINERGLOBALCOUNT_H_
