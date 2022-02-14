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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWINSTANCESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTawInstances请求参数结构体
                */
                class DescribeTawInstancesRequest : public AbstractModel
                {
                public:
                    DescribeTawInstancesRequest();
                    ~DescribeTawInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计费状态
                     * @return ChargeStatuses 计费状态
                     */
                    std::vector<int64_t> GetChargeStatuses() const;

                    /**
                     * 设置计费状态
                     * @param ChargeStatuses 计费状态
                     */
                    void SetChargeStatuses(const std::vector<int64_t>& _chargeStatuses);

                    /**
                     * 判断参数 ChargeStatuses 是否已赋值
                     * @return ChargeStatuses 是否已赋值
                     */
                    bool ChargeStatusesHasBeenSet() const;

                    /**
                     * 获取计费类型
                     * @return ChargeTypes 计费类型
                     */
                    std::vector<int64_t> GetChargeTypes() const;

                    /**
                     * 设置计费类型
                     * @param ChargeTypes 计费类型
                     */
                    void SetChargeTypes(const std::vector<int64_t>& _chargeTypes);

                    /**
                     * 判断参数 ChargeTypes 是否已赋值
                     * @return ChargeTypes 是否已赋值
                     */
                    bool ChargeTypesHasBeenSet() const;

                    /**
                     * 获取分页Limit
                     * @return Limit 分页Limit
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页Limit
                     * @param Limit 分页Limit
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param Offset 分页Offset
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取片区Id
                     * @return AreaIds 片区Id
                     */
                    std::vector<int64_t> GetAreaIds() const;

                    /**
                     * 设置片区Id
                     * @param AreaIds 片区Id
                     */
                    void SetAreaIds(const std::vector<int64_t>& _areaIds);

                    /**
                     * 判断参数 AreaIds 是否已赋值
                     * @return AreaIds 是否已赋值
                     */
                    bool AreaIdsHasBeenSet() const;

                    /**
                     * 获取实例状态(1=创建中，2=运行中，3=异常，4=重启中，5=停止中，6=已停止，7=销毁中，8=已销毁)
                     * @return InstanceStatuses 实例状态(1=创建中，2=运行中，3=异常，4=重启中，5=停止中，6=已停止，7=销毁中，8=已销毁)
                     */
                    std::vector<int64_t> GetInstanceStatuses() const;

                    /**
                     * 设置实例状态(1=创建中，2=运行中，3=异常，4=重启中，5=停止中，6=已停止，7=销毁中，8=已销毁)
                     * @param InstanceStatuses 实例状态(1=创建中，2=运行中，3=异常，4=重启中，5=停止中，6=已停止，7=销毁中，8=已销毁)
                     */
                    void SetInstanceStatuses(const std::vector<int64_t>& _instanceStatuses);

                    /**
                     * 判断参数 InstanceStatuses 是否已赋值
                     * @return InstanceStatuses 是否已赋值
                     */
                    bool InstanceStatusesHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceIds 实例Id
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例Id
                     * @param InstanceIds 实例Id
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取过滤参数
                     * @return Filters 过滤参数
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数
                     * @param Filters 过滤参数
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 计费状态
                     */
                    std::vector<int64_t> m_chargeStatuses;
                    bool m_chargeStatusesHasBeenSet;

                    /**
                     * 计费类型
                     */
                    std::vector<int64_t> m_chargeTypes;
                    bool m_chargeTypesHasBeenSet;

                    /**
                     * 分页Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 片区Id
                     */
                    std::vector<int64_t> m_areaIds;
                    bool m_areaIdsHasBeenSet;

                    /**
                     * 实例状态(1=创建中，2=运行中，3=异常，4=重启中，5=停止中，6=已停止，7=销毁中，8=已销毁)
                     */
                    std::vector<int64_t> m_instanceStatuses;
                    bool m_instanceStatusesHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 过滤参数
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETAWINSTANCESREQUEST_H_
