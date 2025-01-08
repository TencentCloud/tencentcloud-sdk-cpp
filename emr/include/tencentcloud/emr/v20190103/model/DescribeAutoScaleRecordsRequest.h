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
                     * 获取记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”、ActionStatus、ScaleAction。
StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
ActionStatus：0:INITED,1:SUCCESS, 2:FAILED,3:LIMITED_SUCCESSED,4:IN_PROCESS,5:IN_RETRY
ScaleAction：1:扩容  2:缩容

                     * @return Filters 记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”、ActionStatus、ScaleAction。
StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
ActionStatus：0:INITED,1:SUCCESS, 2:FAILED,3:LIMITED_SUCCESSED,4:IN_PROCESS,5:IN_RETRY
ScaleAction：1:扩容  2:缩容

                     * 
                     */
                    std::vector<KeyValue> GetFilters() const;

                    /**
                     * 设置记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”、ActionStatus、ScaleAction。
StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
ActionStatus：0:INITED,1:SUCCESS, 2:FAILED,3:LIMITED_SUCCESSED,4:IN_PROCESS,5:IN_RETRY
ScaleAction：1:扩容  2:缩容

                     * @param _filters 记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”、ActionStatus、ScaleAction。
StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
ActionStatus：0:INITED,1:SUCCESS, 2:FAILED,3:LIMITED_SUCCESSED,4:IN_PROCESS,5:IN_RETRY
ScaleAction：1:扩容  2:缩容

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

                    /**
                     * 获取表示是自动(0)还是托管伸缩(1)
                     * @return RecordSource 表示是自动(0)还是托管伸缩(1)
                     * 
                     */
                    int64_t GetRecordSource() const;

                    /**
                     * 设置表示是自动(0)还是托管伸缩(1)
                     * @param _recordSource 表示是自动(0)还是托管伸缩(1)
                     * 
                     */
                    void SetRecordSource(const int64_t& _recordSource);

                    /**
                     * 判断参数 RecordSource 是否已赋值
                     * @return RecordSource 是否已赋值
                     * 
                     */
                    bool RecordSourceHasBeenSet() const;

                    /**
                     * 获取是否升序，1:升序，0:降序
                     * @return Asc 是否升序，1:升序，0:降序
                     * 
                     */
                    int64_t GetAsc() const;

                    /**
                     * 设置是否升序，1:升序，0:降序
                     * @param _asc 是否升序，1:升序，0:降序
                     * 
                     */
                    void SetAsc(const int64_t& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     * 
                     */
                    bool AscHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 记录过滤参数，目前仅能为“StartTime”,“EndTime”和“StrategyName”、ActionStatus、ScaleAction。
StartTime和EndTime支持2006-01-02 15:04:05 或者2006/01/02 15:04:05的时间格式
ActionStatus：0:INITED,1:SUCCESS, 2:FAILED,3:LIMITED_SUCCESSED,4:IN_PROCESS,5:IN_RETRY
ScaleAction：1:扩容  2:缩容

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

                    /**
                     * 表示是自动(0)还是托管伸缩(1)
                     */
                    int64_t m_recordSource;
                    bool m_recordSourceHasBeenSet;

                    /**
                     * 是否升序，1:升序，0:降序
                     */
                    int64_t m_asc;
                    bool m_ascHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEAUTOSCALERECORDSREQUEST_H_
