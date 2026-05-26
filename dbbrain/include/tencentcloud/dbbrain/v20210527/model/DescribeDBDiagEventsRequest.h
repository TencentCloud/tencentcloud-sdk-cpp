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
                     * 获取<p>开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。</p>
                     * @return StartTime <p>开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。</p>
                     * @param _startTime <p>开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。</p>
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
                     * 获取<p>结束时间，如“2021-05-27 01:00:00”，支持的最早查询时间为当前时间的前30天。</p>
                     * @return EndTime <p>结束时间，如“2021-05-27 01:00:00”，支持的最早查询时间为当前时间的前30天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，如“2021-05-27 01:00:00”，支持的最早查询时间为当前时间的前30天。</p>
                     * @param _endTime <p>结束时间，如“2021-05-27 01:00:00”，支持的最早查询时间为当前时间的前30天。</p>
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
                     * 获取<p>风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。</p>
                     * @return Severities <p>风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。</p>
                     * 
                     */
                    std::vector<int64_t> GetSeverities() const;

                    /**
                     * 设置<p>风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。</p>
                     * @param _severities <p>风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。</p>
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
                     * 获取<p>实例ID列表。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<br>查询TDSQL MySQL分布式实例:Instanceld：填写集群ID&amp;Shard实例ID，如：dcdbt-157xxxk&amp;shard-qxxxx</p>
                     * @return InstanceIds <p>实例ID列表。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<br>查询TDSQL MySQL分布式实例:Instanceld：填写集群ID&amp;Shard实例ID，如：dcdbt-157xxxk&amp;shard-qxxxx</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>实例ID列表。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<br>查询TDSQL MySQL分布式实例:Instanceld：填写集群ID&amp;Shard实例ID，如：dcdbt-157xxxk&amp;shard-qxxxx</p>
                     * @param _instanceIds <p>实例ID列表。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<br>查询TDSQL MySQL分布式实例:Instanceld：填写集群ID&amp;Shard实例ID，如：dcdbt-157xxxk&amp;shard-qxxxx</p>
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
                     * 获取<p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mariadb&quot;-数据库mariadb，&quot;cynosdb&quot;-数据库 TDSQL-C, &quot;dcdb&quot;-数据库TDSQL MySQL    默认为&quot;mysql&quot;。</p>
                     * @return Product <p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mariadb&quot;-数据库mariadb，&quot;cynosdb&quot;-数据库 TDSQL-C, &quot;dcdb&quot;-数据库TDSQL MySQL    默认为&quot;mysql&quot;。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mariadb&quot;-数据库mariadb，&quot;cynosdb&quot;-数据库 TDSQL-C, &quot;dcdb&quot;-数据库TDSQL MySQL    默认为&quot;mysql&quot;。</p>
                     * @param _product <p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mariadb&quot;-数据库mariadb，&quot;cynosdb&quot;-数据库 TDSQL-C, &quot;dcdb&quot;-数据库TDSQL MySQL    默认为&quot;mysql&quot;。</p>
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
                     * 获取<p>偏移量，默认0。</p>
                     * @return Offset <p>偏移量，默认0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认0。</p>
                     * @param _offset <p>偏移量，默认0。</p>
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
                     * 获取<p>返回数量，默认20，最大值为50。</p>
                     * @return Limit <p>返回数量，默认20，最大值为50。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认20，最大值为50。</p>
                     * @param _limit <p>返回数量，默认20，最大值为50。</p>
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
                     * <p>开始时间，如“2021-05-27 00:00:00”，支持的最早查询时间为当前时间的前30天。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，如“2021-05-27 01:00:00”，支持的最早查询时间为当前时间的前30天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>风险等级列表，取值按影响程度从高至低分别为：1 - 致命、2 -严重、3 - 告警、4 - 提示、5 -健康。</p>
                     */
                    std::vector<int64_t> m_severities;
                    bool m_severitiesHasBeenSet;

                    /**
                     * <p>实例ID列表。可通过 <a href="https://cloud.tencent.com/document/api/1130/57798">DescribeDiagDBInstances</a> 接口获取。<br>查询TDSQL MySQL分布式实例:Instanceld：填写集群ID&amp;Shard实例ID，如：dcdbt-157xxxk&amp;shard-qxxxx</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>服务产品类型，支持值包括：&quot;mysql&quot; - 云数据库 MySQL，&quot;redis&quot; - 云数据库 Redis，&quot;mariadb&quot;-数据库mariadb，&quot;cynosdb&quot;-数据库 TDSQL-C, &quot;dcdb&quot;-数据库TDSQL MySQL    默认为&quot;mysql&quot;。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>偏移量，默认0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认20，最大值为50。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDBDIAGEVENTSREQUEST_H_
