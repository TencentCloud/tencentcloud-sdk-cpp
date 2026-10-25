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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMRELATEDEVENTSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMRELATEDEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/ExplorationEventItem.h>
#include <tencentcloud/rum/v20210622/model/IntKeyValue.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMRelatedEvents返回参数结构体
                */
                class DescribeTDEMRelatedEventsResponse : public AbstractModel
                {
                public:
                    DescribeTDEMRelatedEventsResponse();
                    ~DescribeTDEMRelatedEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关联事件，schema 与 Search 列表项相同</p>
                     * @return Events <p>关联事件，schema 与 Search 列表项相同</p>
                     * 
                     */
                    std::vector<ExplorationEventItem> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取<p>偏移</p>
                     * @return Offset <p>偏移</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>条数</p>
                     * @return Limit <p>条数</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>是否还有下一页</p>
                     * @return HasMore <p>是否还有下一页</p>
                     * 
                     */
                    bool GetHasMore() const;

                    /**
                     * 判断参数 HasMore 是否已赋值
                     * @return HasMore 是否已赋值
                     * 
                     */
                    bool HasMoreHasBeenSet() const;

                    /**
                     * 获取<p>各分类计数，Key 为分类 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CategoryCounts <p>各分类计数，Key 为分类 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IntKeyValue> GetCategoryCounts() const;

                    /**
                     * 判断参数 CategoryCounts 是否已赋值
                     * @return CategoryCounts 是否已赋值
                     * 
                     */
                    bool CategoryCountsHasBeenSet() const;

                private:

                    /**
                     * <p>关联事件，schema 与 Search 列表项相同</p>
                     */
                    std::vector<ExplorationEventItem> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * <p>偏移</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>条数</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>是否还有下一页</p>
                     */
                    bool m_hasMore;
                    bool m_hasMoreHasBeenSet;

                    /**
                     * <p>各分类计数，Key 为分类 id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IntKeyValue> m_categoryCounts;
                    bool m_categoryCountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMRELATEDEVENTSRESPONSE_H_
