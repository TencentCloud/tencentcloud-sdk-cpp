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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEEVENTSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/HouseEventsInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngineEvents返回参数结构体
                */
                class DescribeDataEngineEventsResponse : public AbstractModel
                {
                public:
                    DescribeDataEngineEventsResponse();
                    ~DescribeDataEngineEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取事件详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Events 事件详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<HouseEventsInfo> GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取分页号
                     * @return Page 分页号
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return Size 分页大小
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return TotalPages 总页数
                     * 
                     */
                    int64_t GetTotalPages() const;

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                    /**
                     * 获取总条数
                     * @return TotalCount 总条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 事件详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HouseEventsInfo> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 分页号
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 总页数
                     */
                    int64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                    /**
                     * 总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEEVENTSRESPONSE_H_
