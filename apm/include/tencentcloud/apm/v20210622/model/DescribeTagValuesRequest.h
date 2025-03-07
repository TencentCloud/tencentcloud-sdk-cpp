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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETAGVALUESREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETAGVALUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Filter.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTagValues请求参数结构体
                */
                class DescribeTagValuesRequest : public AbstractModel
                {
                public:
                    DescribeTagValuesRequest();
                    ~DescribeTagValuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务系统 ID
                     * @return InstanceId 业务系统 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统 ID
                     * @param _instanceId 业务系统 ID
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
                     * 获取维度名
                     * @return TagKey 维度名
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置维度名
                     * @param _tagKey 维度名
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取开始时间（单位为秒）
                     * @return StartTime 开始时间（单位为秒）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间（单位为秒）
                     * @param _startTime 开始时间（单位为秒）
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间（单位为秒）
                     * @return EndTime 结束时间（单位为秒）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间（单位为秒）
                     * @param _endTime 结束时间（单位为秒）
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取过滤条件
                     * @return Filters 过滤条件
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
                     * @param _filters 过滤条件
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Or 过滤条件
                     * @return OrFilters Or 过滤条件
                     * 
                     */
                    std::vector<Filter> GetOrFilters() const;

                    /**
                     * 设置Or 过滤条件
                     * @param _orFilters Or 过滤条件
                     * 
                     */
                    void SetOrFilters(const std::vector<Filter>& _orFilters);

                    /**
                     * 判断参数 OrFilters 是否已赋值
                     * @return OrFilters 是否已赋值
                     * 
                     */
                    bool OrFiltersHasBeenSet() const;

                    /**
                     * 获取使用类型
                     * @return Type 使用类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置使用类型
                     * @param _type 使用类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 业务系统 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 维度名
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 开始时间（单位为秒）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（单位为秒）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 过滤条件
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Or 过滤条件
                     */
                    std::vector<Filter> m_orFilters;
                    bool m_orFiltersHasBeenSet;

                    /**
                     * 使用类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBETAGVALUESREQUEST_H_
