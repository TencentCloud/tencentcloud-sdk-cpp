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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEAGGREGATEDITEMLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEAGGREGATEDITEMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineAggregatedItem.h>
#include <tencentcloud/csip/v20221121/model/KeyValue.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineAggregatedItemList返回参数结构体
                */
                class DescribeBaselineAggregatedItemListResponse : public AbstractModel
                {
                public:
                    DescribeBaselineAggregatedItemListResponse();
                    ~DescribeBaselineAggregatedItemListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检测项聚合结果列表。</p>
                     * @return List <p>检测项聚合结果列表。</p>
                     * 
                     */
                    std::vector<BaselineAggregatedItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>凭据总数</p>
                     * @return TotalCount <p>凭据总数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>当前查询条件下涉及到的检测对象列表。</p>
                     * @return CheckObjectEnum <p>当前查询条件下涉及到的检测对象列表。</p>
                     * 
                     */
                    std::vector<KeyValue> GetCheckObjectEnum() const;

                    /**
                     * 判断参数 CheckObjectEnum 是否已赋值
                     * @return CheckObjectEnum 是否已赋值
                     * 
                     */
                    bool CheckObjectEnumHasBeenSet() const;

                private:

                    /**
                     * <p>检测项聚合结果列表。</p>
                     */
                    std::vector<BaselineAggregatedItem> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>凭据总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>当前查询条件下涉及到的检测对象列表。</p>
                     */
                    std::vector<KeyValue> m_checkObjectEnum;
                    bool m_checkObjectEnumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEAGGREGATEDITEMLISTRESPONSE_H_
