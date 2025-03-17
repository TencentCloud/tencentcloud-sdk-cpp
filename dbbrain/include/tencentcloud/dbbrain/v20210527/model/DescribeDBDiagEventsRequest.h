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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTSREQUEST_H_

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
                * DescribeDBDiagEvents请求参数结构体
                */
                class DescribeDBDiagEventsRequest : public AbstractModel
                {
                public:
                    DescribeDBDiagEventsRequest();
                    ~DescribeDBDiagEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。
                     * @return StartTime 开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。
                     * @param _startTime 开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，如“2021-05-27 01:00:00”，结束时间与开始时间的间隔最大可为7天。
                     * @return EndTime 结束时间，如“2021-05-27 01:00:00”，结束时间与开始时间的间隔最大可为7天。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，如“2021-05-27 01:00:00”，结束时间与开始时间的间隔最大可为7天。
                     * @param _endTime 结束时间，如“2021-05-27 01:00:00”，结束时间与开始时间的间隔最大可为7天。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。
                     * @return Severities 风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。
                     * 
                     */
                    std::vector<int64_t> GetSeverities() const;

                    /**
                     * 设置风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。
                     * @param _severities 风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。
                     * 
                     */
                    void SetSeverities(const std::vector<int64_t>& _severities);

                    /**
                     * 判断参数 Severities 是否已赋值
                     * @return Severities 是否已赋值
                     * 
                     */
                    bool SeveritiesHasBeenSet() const;

                    /**
                     * 获取实例ID列表。
                     * @return InstanceIds 实例ID列表。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表。
                     * @param _instanceIds 实例ID列表。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括："mysql" - 云数据库 MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括："mysql" - 云数据库 MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括："mysql" - 云数据库 MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括："mysql" - 云数据库 MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0。
                     * @return Offset 偏移量，默认0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0。
                     * @param _offset 偏移量，默认0。
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
                     * 获取返回数量，默认20，最大值为50。
                     * @return Limit 返回数量，默认20，最大值为50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认20，最大值为50。
                     * @param _limit 返回数量，默认20，最大值为50。
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
                     * 开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，如“2021-05-27 01:00:00”，结束时间与开始时间的间隔最大可为7天。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。
                     */
                    std::vector<int64_t> m_severities;
                    bool m_severitiesHasBeenSet;

                    /**
                     * 实例ID列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括："mysql" - 云数据库 MySQL，"redis" - 云数据库 Redis，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 偏移量，默认0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认20，最大值为50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTSREQUEST_H_
