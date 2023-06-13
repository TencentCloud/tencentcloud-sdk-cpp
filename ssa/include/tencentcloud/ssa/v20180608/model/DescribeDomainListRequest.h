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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/QueryFilterV3.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeDomainList请求参数结构体
                */
                class DescribeDomainListRequest : public AbstractModel
                {
                public:
                    DescribeDomainListRequest();
                    ~DescribeDomainListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取-
                     * @return Offset -
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置-
                     * @param Offset -
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Limit -
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置-
                     * @param Limit -
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取-
                     * @return AssetBasicType -
                     */
                    uint64_t GetAssetBasicType() const;

                    /**
                     * 设置-
                     * @param AssetBasicType -
                     */
                    void SetAssetBasicType(const uint64_t& _assetBasicType);

                    /**
                     * 判断参数 AssetBasicType 是否已赋值
                     * @return AssetBasicType 是否已赋值
                     */
                    bool AssetBasicTypeHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Filter -
                     */
                    std::vector<QueryFilterV3> GetFilter() const;

                    /**
                     * 设置-
                     * @param Filter -
                     */
                    void SetFilter(const std::vector<QueryFilterV3>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Order -
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置-
                     * @param Order -
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取-
                     * @return By -
                     */
                    std::string GetBy() const;

                    /**
                     * 设置-
                     * @param By -
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Field -
                     */
                    std::vector<std::string> GetField() const;

                    /**
                     * 设置-
                     * @param Field -
                     */
                    void SetField(const std::vector<std::string>& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取-
                     * @return TimeRange -
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置-
                     * @param TimeRange -
                     */
                    void SetTimeRange(const uint64_t& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Logic -
                     */
                    uint64_t GetLogic() const;

                    /**
                     * 设置-
                     * @param Logic -
                     */
                    void SetLogic(const uint64_t& _logic);

                    /**
                     * 判断参数 Logic 是否已赋值
                     * @return Logic 是否已赋值
                     */
                    bool LogicHasBeenSet() const;

                    /**
                     * 获取-
                     * @return GroupByField -
                     */
                    std::string GetGroupByField() const;

                    /**
                     * 设置-
                     * @param GroupByField -
                     */
                    void SetGroupByField(const std::string& _groupByField);

                    /**
                     * 判断参数 GroupByField 是否已赋值
                     * @return GroupByField 是否已赋值
                     */
                    bool GroupByFieldHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Task -
                     */
                    std::string GetTask() const;

                    /**
                     * 设置-
                     * @param Task -
                     */
                    void SetTask(const std::string& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取-
                     * @return RequestFrom -
                     */
                    uint64_t GetRequestFrom() const;

                    /**
                     * 设置-
                     * @param RequestFrom -
                     */
                    void SetRequestFrom(const uint64_t& _requestFrom);

                    /**
                     * 判断参数 RequestFrom 是否已赋值
                     * @return RequestFrom 是否已赋值
                     */
                    bool RequestFromHasBeenSet() const;

                private:

                    /**
                     * -
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * -
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * -
                     */
                    uint64_t m_assetBasicType;
                    bool m_assetBasicTypeHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<QueryFilterV3> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<std::string> m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * -
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * -
                     */
                    uint64_t m_logic;
                    bool m_logicHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_groupByField;
                    bool m_groupByFieldHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * -
                     */
                    uint64_t m_requestFrom;
                    bool m_requestFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEDOMAINLISTREQUEST_H_
