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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceBackups请求参数结构体
                */
                class DescribeInstanceBackupsRequest : public AbstractModel
                {
                public:
                    DescribeInstanceBackupsRequest();
                    ~DescribeInstanceBackupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>每页输出的备份列表大小。默认大小为20，最大值为 100。</p>
                     * @return Limit <p>每页输出的备份列表大小。默认大小为20，最大值为 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页输出的备份列表大小。默认大小为20，最大值为 100。</p>
                     * @param _limit <p>每页输出的备份列表大小。默认大小为20，最大值为 100。</p>
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
                     * 获取<p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * @return Offset <p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
                     * @param _offset <p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
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
                     * 获取<p>待操作的实例ID，可通过 DescribeInstance 接口返回值中的 InstanceId 获取。</p>
                     * @return InstanceId <p>待操作的实例ID，可通过 DescribeInstance 接口返回值中的 InstanceId 获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>待操作的实例ID，可通过 DescribeInstance 接口返回值中的 InstanceId 获取。</p>
                     * @param _instanceId <p>待操作的实例ID，可通过 DescribeInstance 接口返回值中的 InstanceId 获取。</p>
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
                     * 获取<p>开始时间，格式如：2017-02-08 16:46:34。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     * @return BeginTime <p>开始时间，格式如：2017-02-08 16:46:34。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>开始时间，格式如：2017-02-08 16:46:34。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     * @param _beginTime <p>开始时间，格式如：2017-02-08 16:46:34。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间，格式如：2017-02-08 19:09:26。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     * @return EndTime <p>结束时间，格式如：2017-02-08 19:09:26。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，格式如：2017-02-08 19:09:26。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     * @param _endTime <p>结束时间，格式如：2017-02-08 19:09:26。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
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
                     * 获取<p>备份任务的状态：<br>1：备份在流程中。<br>2：备份正常。<br>3：备份转RDB文件处理中。<br>4：已完成RDB转换。<br>-1：备份已过期。<br>-2：备份已删除。</p>
                     * @return Status <p>备份任务的状态：<br>1：备份在流程中。<br>2：备份正常。<br>3：备份转RDB文件处理中。<br>4：已完成RDB转换。<br>-1：备份已过期。<br>-2：备份已删除。</p>
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置<p>备份任务的状态：<br>1：备份在流程中。<br>2：备份正常。<br>3：备份转RDB文件处理中。<br>4：已完成RDB转换。<br>-1：备份已过期。<br>-2：备份已删除。</p>
                     * @param _status <p>备份任务的状态：<br>1：备份在流程中。<br>2：备份正常。<br>3：备份转RDB文件处理中。<br>4：已完成RDB转换。<br>-1：备份已过期。<br>-2：备份已删除。</p>
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例名称，支持根据实例名称模糊搜索。</p>
                     * @return InstanceName <p>实例名称，支持根据实例名称模糊搜索。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称，支持根据实例名称模糊搜索。</p>
                     * @param _instanceName <p>实例名称，支持根据实例名称模糊搜索。</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * <p>每页输出的备份列表大小。默认大小为20，最大值为 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，取Limit整数倍。计算公式：offset=limit*(页码-1)。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>待操作的实例ID，可通过 DescribeInstance 接口返回值中的 InstanceId 获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>开始时间，格式如：2017-02-08 16:46:34。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>结束时间，格式如：2017-02-08 19:09:26。查询实例在 [beginTime, endTime] 时间段内开始备份的备份列表，查询时间最大跨度30天。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>备份任务的状态：<br>1：备份在流程中。<br>2：备份正常。<br>3：备份转RDB文件处理中。<br>4：已完成RDB转换。<br>-1：备份已过期。<br>-2：备份已删除。</p>
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例名称，支持根据实例名称模糊搜索。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEBACKUPSREQUEST_H_
