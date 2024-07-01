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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDUTYSCHEDULEDETAILSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDUTYSCHEDULEDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Filter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDutyScheduleDetails请求参数结构体
                */
                class DescribeDutyScheduleDetailsRequest : public AbstractModel
                {
                public:
                    DescribeDutyScheduleDetailsRequest();
                    ~DescribeDutyScheduleDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取值班表id
                     * @return Id 值班表id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置值班表id
                     * @param _id 值班表id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取查询时间
                     * @return QueryDate 查询时间
                     * 
                     */
                    std::string GetQueryDate() const;

                    /**
                     * 设置查询时间
                     * @param _queryDate 查询时间
                     * 
                     */
                    void SetQueryDate(const std::string& _queryDate);

                    /**
                     * 判断参数 QueryDate 是否已赋值
                     * @return QueryDate 是否已赋值
                     * 
                     */
                    bool QueryDateHasBeenSet() const;

                    /**
                     * 获取扩展字段
                     * @return Filters 扩展字段
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置扩展字段
                     * @param _filters 扩展字段
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 值班表id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 查询时间
                     */
                    std::string m_queryDate;
                    bool m_queryDateHasBeenSet;

                    /**
                     * 扩展字段
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDUTYSCHEDULEDETAILSREQUEST_H_
