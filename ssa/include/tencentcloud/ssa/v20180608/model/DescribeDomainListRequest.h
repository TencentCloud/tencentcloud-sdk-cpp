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
                     * 获取起始，从0开始(只支持32位)
                     * @return Offset 起始，从0开始(只支持32位)
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始，从0开始(只支持32位)
                     * @param _offset 起始，从0开始(只支持32位)
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取limit,最大值200(只支持32位)
                     * @return Limit limit,最大值200(只支持32位)
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置limit,最大值200(只支持32位)
                     * @param _limit limit,最大值200(只支持32位)
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取资产大类，根据此字段时返回不同的子结构,AssetBasicType(只支持32位)
                     * @return AssetBasicType 资产大类，根据此字段时返回不同的子结构,AssetBasicType(只支持32位)
                     * 
                     */
                    uint64_t GetAssetBasicType() const;

                    /**
                     * 设置资产大类，根据此字段时返回不同的子结构,AssetBasicType(只支持32位)
                     * @param _assetBasicType 资产大类，根据此字段时返回不同的子结构,AssetBasicType(只支持32位)
                     * 
                     */
                    void SetAssetBasicType(const uint64_t& _assetBasicType);

                    /**
                     * 判断参数 AssetBasicType 是否已赋值
                     * @return AssetBasicType 是否已赋值
                     * 
                     */
                    bool AssetBasicTypeHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filter 过滤条件
                     * 
                     */
                    std::vector<QueryFilterV3> GetFilter() const;

                    /**
                     * 设置过滤条件
                     * @param _filter 过滤条件
                     * 
                     */
                    void SetFilter(const std::vector<QueryFilterV3>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取排序
                     * @return Order 排序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序
                     * @param _order 排序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取导出字段
                     * @return Field 导出字段
                     * 
                     */
                    std::vector<std::string> GetField() const;

                    /**
                     * 设置导出字段
                     * @param _field 导出字段
                     * 
                     */
                    void SetField(const std::vector<std::string>& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取时间范围(只支持32位)
                     * @return TimeRange 时间范围(只支持32位)
                     * 
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置时间范围(只支持32位)
                     * @param _timeRange 时间范围(只支持32位)
                     * 
                     */
                    void SetTimeRange(const uint64_t& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取逻辑字段(只支持32位)
                     * @return Logic 逻辑字段(只支持32位)
                     * 
                     */
                    uint64_t GetLogic() const;

                    /**
                     * 设置逻辑字段(只支持32位)
                     * @param _logic 逻辑字段(只支持32位)
                     * 
                     */
                    void SetLogic(const uint64_t& _logic);

                    /**
                     * 判断参数 Logic 是否已赋值
                     * @return Logic 是否已赋值
                     * 
                     */
                    bool LogicHasBeenSet() const;

                    /**
                     * 获取聚合字段  
                     * @return GroupByField 聚合字段  
                     * 
                     */
                    std::string GetGroupByField() const;

                    /**
                     * 设置聚合字段  
                     * @param _groupByField 聚合字段  
                     * 
                     */
                    void SetGroupByField(const std::string& _groupByField);

                    /**
                     * 判断参数 GroupByField 是否已赋值
                     * @return GroupByField 是否已赋值
                     * 
                     */
                    bool GroupByFieldHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Task -
                     * 
                     */
                    std::string GetTask() const;

                    /**
                     * 设置-
                     * @param _task -
                     * 
                     */
                    void SetTask(const std::string& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取0:cfw 1:vss 2.soc 3.waf 4.cwp
                     * @return RequestFrom 0:cfw 1:vss 2.soc 3.waf 4.cwp
                     * 
                     */
                    uint64_t GetRequestFrom() const;

                    /**
                     * 设置0:cfw 1:vss 2.soc 3.waf 4.cwp
                     * @param _requestFrom 0:cfw 1:vss 2.soc 3.waf 4.cwp
                     * 
                     */
                    void SetRequestFrom(const uint64_t& _requestFrom);

                    /**
                     * 判断参数 RequestFrom 是否已赋值
                     * @return RequestFrom 是否已赋值
                     * 
                     */
                    bool RequestFromHasBeenSet() const;

                private:

                    /**
                     * 起始，从0开始(只支持32位)
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * limit,最大值200(只支持32位)
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资产大类，根据此字段时返回不同的子结构,AssetBasicType(只支持32位)
                     */
                    uint64_t m_assetBasicType;
                    bool m_assetBasicTypeHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<QueryFilterV3> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 排序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 导出字段
                     */
                    std::vector<std::string> m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 时间范围(只支持32位)
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * 逻辑字段(只支持32位)
                     */
                    uint64_t m_logic;
                    bool m_logicHasBeenSet;

                    /**
                     * 聚合字段  
                     */
                    std::string m_groupByField;
                    bool m_groupByFieldHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * 0:cfw 1:vss 2.soc 3.waf 4.cwp
                     */
                    uint64_t m_requestFrom;
                    bool m_requestFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBEDOMAINLISTREQUEST_H_
