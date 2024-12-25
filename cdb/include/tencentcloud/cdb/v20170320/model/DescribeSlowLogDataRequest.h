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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESLOWLOGDATAREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESLOWLOGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeSlowLogData请求参数结构体
                */
                class DescribeSlowLogDataRequest : public AbstractModel
                {
                public:
                    DescribeSlowLogDataRequest();
                    ~DescribeSlowLogDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取开始时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     * @return StartTime 开始时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     * @param _startTime 开始时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     * @return EndTime 结束时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     * @param _endTime 结束时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取客户端 Host 列表。
                     * @return UserHosts 客户端 Host 列表。
                     * 
                     */
                    std::vector<std::string> GetUserHosts() const;

                    /**
                     * 设置客户端 Host 列表。
                     * @param _userHosts 客户端 Host 列表。
                     * 
                     */
                    void SetUserHosts(const std::vector<std::string>& _userHosts);

                    /**
                     * 判断参数 UserHosts 是否已赋值
                     * @return UserHosts 是否已赋值
                     * 
                     */
                    bool UserHostsHasBeenSet() const;

                    /**
                     * 获取客户端 用户名 列表。
                     * @return UserNames 客户端 用户名 列表。
                     * 
                     */
                    std::vector<std::string> GetUserNames() const;

                    /**
                     * 设置客户端 用户名 列表。
                     * @param _userNames 客户端 用户名 列表。
                     * 
                     */
                    void SetUserNames(const std::vector<std::string>& _userNames);

                    /**
                     * 判断参数 UserNames 是否已赋值
                     * @return UserNames 是否已赋值
                     * 
                     */
                    bool UserNamesHasBeenSet() const;

                    /**
                     * 获取访问的 数据库 列表。
                     * @return DataBases 访问的 数据库 列表。
                     * 
                     */
                    std::vector<std::string> GetDataBases() const;

                    /**
                     * 设置访问的 数据库 列表。
                     * @param _dataBases 访问的 数据库 列表。
                     * 
                     */
                    void SetDataBases(const std::vector<std::string>& _dataBases);

                    /**
                     * 判断参数 DataBases 是否已赋值
                     * @return DataBases 是否已赋值
                     * 
                     */
                    bool DataBasesHasBeenSet() const;

                    /**
                     * 获取排序字段。当前支持：Timestamp,QueryTime,LockTime,RowsExamined,RowsSent 。
                     * @return SortBy 排序字段。当前支持：Timestamp,QueryTime,LockTime,RowsExamined,RowsSent 。
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置排序字段。当前支持：Timestamp,QueryTime,LockTime,RowsExamined,RowsSent 。
                     * @param _sortBy 排序字段。当前支持：Timestamp,QueryTime,LockTime,RowsExamined,RowsSent 。
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
                     * 获取升序还是降序排列。当前支持：ASC,DESC 。
                     * @return OrderBy 升序还是降序排列。当前支持：ASC,DESC 。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置升序还是降序排列。当前支持：ASC,DESC 。
                     * @param _orderBy 升序还是降序排列。当前支持：ASC,DESC 。
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0，最大为9999。
                     * @return Offset 偏移量，默认为0，最大为9999。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0，最大为9999。
                     * @param _offset 偏移量，默认为0，最大为9999。
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
                     * 获取一次性返回的记录数量，默认为100，最大为400。
                     * @return Limit 一次性返回的记录数量，默认为100，最大为400。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置一次性返回的记录数量，默认为100，最大为400。
                     * @param _limit 一次性返回的记录数量，默认为100，最大为400。
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
                     * 获取仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     * @return InstType 仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     * 
                     */
                    std::string GetInstType() const;

                    /**
                     * 设置仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     * @param _instType 仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     * 
                     */
                    void SetInstType(const std::string& _instType);

                    /**
                     * 判断参数 InstType 是否已赋值
                     * @return InstType 是否已赋值
                     * 
                     */
                    bool InstTypeHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return OpResourceId 节点ID
                     * 
                     */
                    std::string GetOpResourceId() const;

                    /**
                     * 设置节点ID
                     * @param _opResourceId 节点ID
                     * 
                     */
                    void SetOpResourceId(const std::string& _opResourceId);

                    /**
                     * 判断参数 OpResourceId 是否已赋值
                     * @return OpResourceId 是否已赋值
                     * 
                     */
                    bool OpResourceIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳。例如 1585142640。
说明：此参数单位为秒的时间戳。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 客户端 Host 列表。
                     */
                    std::vector<std::string> m_userHosts;
                    bool m_userHostsHasBeenSet;

                    /**
                     * 客户端 用户名 列表。
                     */
                    std::vector<std::string> m_userNames;
                    bool m_userNamesHasBeenSet;

                    /**
                     * 访问的 数据库 列表。
                     */
                    std::vector<std::string> m_dataBases;
                    bool m_dataBasesHasBeenSet;

                    /**
                     * 排序字段。当前支持：Timestamp,QueryTime,LockTime,RowsExamined,RowsSent 。
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * 升序还是降序排列。当前支持：ASC,DESC 。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 偏移量，默认为0，最大为9999。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一次性返回的记录数量，默认为100，最大为400。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     */
                    std::string m_instType;
                    bool m_instTypeHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_opResourceId;
                    bool m_opResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESLOWLOGDATAREQUEST_H_
