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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKITEMLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKITEMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineMainTaskItemList返回参数结构体
                */
                class DescribeBaselineMainTaskItemListResponse : public AbstractModel
                {
                public:
                    DescribeBaselineMainTaskItemListResponse();
                    ~DescribeBaselineMainTaskItemListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线检测项列表。</p>
                     * @return ItemList <p>基线检测项列表。</p>
                     * 
                     */
                    std::vector<BaselineItem> GetItemList() const;

                    /**
                     * 判断参数 ItemList 是否已赋值
                     * @return ItemList 是否已赋值
                     * 
                     */
                    bool ItemListHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的检测项总数。</p>
                     * @return TotalCount <p>符合条件的检测项总数。</p>
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
                     * <p>基线检测项列表。</p>
                     */
                    std::vector<BaselineItem> m_itemList;
                    bool m_itemListHasBeenSet;

                    /**
                     * <p>符合条件的检测项总数。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEMAINTASKITEMLISTRESPONSE_H_
