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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/KeyValue.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeAutoScaleRecords请求参数结构体
                */
                class DescribeAutoScaleRecordsRequest : public AbstractModel
                {
                public:
                    DescribeAutoScaleRecordsRequest();
                    ~DescribeAutoScaleRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”。StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
                     * @return Filters 记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”。StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
                     * 
                     */
                    std::vector<KeyValue> GetFilters() const;

                    /**
                     * 设置记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”。StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
                     * @param _filters 记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”。StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
                     * 
                     */
                    void SetFilters(const std::vector<KeyValue>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页参数。
                     * @return Offset 分页参数。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数。
                     * @param _offset 分页参数。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页参数。最大支持100
                     * @return Limit 分页参数。最大支持100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数。最大支持100
                     * @param _limit 分页参数。最大支持100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”。StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
                     */
                    std::vector<KeyValue> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页参数。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数。最大支持100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSREQUEST_H_
