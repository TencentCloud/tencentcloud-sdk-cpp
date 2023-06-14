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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLETIMESERIESREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLETIMESERIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeTopSpaceTableTimeSeries请求参数结构体
                */
                class DescribeTopSpaceTableTimeSeriesRequest : public AbstractModel
                {
                public:
                    DescribeTopSpaceTableTimeSeriesRequest();
                    ~DescribeTopSpaceTableTimeSeriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 。
                     * @return InstanceId 实例 ID 。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID 。
                     * @param _instanceId 实例 ID 。
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
                     * 获取返回的Top表数量，最大值为100，默认为20。
                     * @return Limit 返回的Top表数量，最大值为100，默认为20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回的Top表数量，最大值为100，默认为20。
                     * @param _limit 返回的Top表数量，最大值为100，默认为20。
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
                     * 获取筛选Top表所用的排序字段，可选字段包含DataLength、IndexLength、TotalLength、DataFree、FragRatio、TableRows、PhysicalFileSize，默认为 PhysicalFileSize。
                     * @return SortBy 筛选Top表所用的排序字段，可选字段包含DataLength、IndexLength、TotalLength、DataFree、FragRatio、TableRows、PhysicalFileSize，默认为 PhysicalFileSize。
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置筛选Top表所用的排序字段，可选字段包含DataLength、IndexLength、TotalLength、DataFree、FragRatio、TableRows、PhysicalFileSize，默认为 PhysicalFileSize。
                     * @param _sortBy 筛选Top表所用的排序字段，可选字段包含DataLength、IndexLength、TotalLength、DataFree、FragRatio、TableRows、PhysicalFileSize，默认为 PhysicalFileSize。
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取开始日期，如“2021-01-01”，最早为当日的前第29天，默认为截止日期的前第6天。
                     * @return StartDate 开始日期，如“2021-01-01”，最早为当日的前第29天，默认为截止日期的前第6天。
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期，如“2021-01-01”，最早为当日的前第29天，默认为截止日期的前第6天。
                     * @param _startDate 开始日期，如“2021-01-01”，最早为当日的前第29天，默认为截止日期的前第6天。
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取截止日期，如“2021-01-01”，最早为当日的前第29天，默认为当日。
                     * @return EndDate 截止日期，如“2021-01-01”，最早为当日的前第29天，默认为当日。
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置截止日期，如“2021-01-01”，最早为当日的前第29天，默认为当日。
                     * @param _endDate 截止日期，如“2021-01-01”，最早为当日的前第29天，默认为当日。
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 返回的Top表数量，最大值为100，默认为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 筛选Top表所用的排序字段，可选字段包含DataLength、IndexLength、TotalLength、DataFree、FragRatio、TableRows、PhysicalFileSize，默认为 PhysicalFileSize。
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 开始日期，如“2021-01-01”，最早为当日的前第29天，默认为截止日期的前第6天。
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 截止日期，如“2021-01-01”，最早为当日的前第29天，默认为当日。
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLETIMESERIESREQUEST_H_
