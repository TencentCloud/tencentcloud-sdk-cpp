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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeSlowQueryList请求参数结构体
                */
                class DescribeSlowQueryListRequest : public AbstractModel
                {
                public:
                    DescribeSlowQueryListRequest();
                    ~DescribeSlowQueryListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return DBInstanceId 实例ID。
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param DBInstanceId 实例ID。
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取查询起始时间戳，格式 “YYYY-MM-DD HH:mm:ss” ，日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     * @return StartTime 查询起始时间戳，格式 “YYYY-MM-DD HH:mm:ss” ，日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间戳，格式 “YYYY-MM-DD HH:mm:ss” ，日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     * @param StartTime 查询起始时间戳，格式 “YYYY-MM-DD HH:mm:ss” ，日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间戳，格式 “YYYY-MM-DD HH:mm:ss”。
                     * @return EndTime 查询结束时间戳，格式 “YYYY-MM-DD HH:mm:ss”。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间戳，格式 “YYYY-MM-DD HH:mm:ss”。
                     * @param EndTime 查询结束时间戳，格式 “YYYY-MM-DD HH:mm:ss”。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取根据数据库名进行筛选，可以为空。
                     * @return DatabaseName 根据数据库名进行筛选，可以为空。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置根据数据库名进行筛选，可以为空。
                     * @param DatabaseName 根据数据库名进行筛选，可以为空。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取排序类型。升序asc、降序desc。默认为desc。
                     * @return OrderByType 排序类型。升序asc、降序desc。默认为desc。
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序类型。升序asc、降序desc。默认为desc。
                     * @param OrderByType 排序类型。升序asc、降序desc。默认为desc。
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取排序维度。 可选参数，取值范围[SessionStartTime,Duration]，默认为SessionStartTime。
                     * @return OrderBy 排序维度。 可选参数，取值范围[SessionStartTime,Duration]，默认为SessionStartTime。
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序维度。 可选参数，取值范围[SessionStartTime,Duration]，默认为SessionStartTime。
                     * @param OrderBy 排序维度。 可选参数，取值范围[SessionStartTime,Duration]，默认为SessionStartTime。
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取分页大小。取值范围[1,100],默认为20。
                     * @return Limit 分页大小。取值范围[1,100],默认为20。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小。取值范围[1,100],默认为20。
                     * @param Limit 分页大小。取值范围[1,100],默认为20。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移。取值范围[0,INF)，默认为0。
                     * @return Offset 分页偏移。取值范围[0,INF)，默认为0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移。取值范围[0,INF)，默认为0。
                     * @param Offset 分页偏移。取值范围[0,INF)，默认为0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 查询起始时间戳，格式 “YYYY-MM-DD HH:mm:ss” ，日志保留时间默认为7天，起始时间不能超出保留时间范围。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间戳，格式 “YYYY-MM-DD HH:mm:ss”。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 根据数据库名进行筛选，可以为空。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 排序类型。升序asc、降序desc。默认为desc。
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 排序维度。 可选参数，取值范围[SessionStartTime,Duration]，默认为SessionStartTime。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 分页大小。取值范围[1,100],默认为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移。取值范围[0,INF)，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESLOWQUERYLISTREQUEST_H_
