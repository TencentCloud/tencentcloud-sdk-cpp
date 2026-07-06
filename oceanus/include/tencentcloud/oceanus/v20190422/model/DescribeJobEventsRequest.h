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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBEVENTSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobEvents请求参数结构体
                */
                class DescribeJobEventsRequest : public AbstractModel
                {
                public:
                    DescribeJobEventsRequest();
                    ~DescribeJobEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>作业的 ID</p>
                     * @return JobId <p>作业的 ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>作业的 ID</p>
                     * @param _jobId <p>作业的 ID</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件：起始 Unix 时间戳（秒）</p>
                     * @return StartTimestamp <p>筛选条件：起始 Unix 时间戳（秒）</p>
                     * 
                     */
                    uint64_t GetStartTimestamp() const;

                    /**
                     * 设置<p>筛选条件：起始 Unix 时间戳（秒）</p>
                     * @param _startTimestamp <p>筛选条件：起始 Unix 时间戳（秒）</p>
                     * 
                     */
                    void SetStartTimestamp(const uint64_t& _startTimestamp);

                    /**
                     * 判断参数 StartTimestamp 是否已赋值
                     * @return StartTimestamp 是否已赋值
                     * 
                     */
                    bool StartTimestampHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件：结束 Unix 时间戳（秒）</p>
                     * @return EndTimestamp <p>筛选条件：结束 Unix 时间戳（秒）</p>
                     * 
                     */
                    uint64_t GetEndTimestamp() const;

                    /**
                     * 设置<p>筛选条件：结束 Unix 时间戳（秒）</p>
                     * @param _endTimestamp <p>筛选条件：结束 Unix 时间戳（秒）</p>
                     * 
                     */
                    void SetEndTimestamp(const uint64_t& _endTimestamp);

                    /**
                     * 判断参数 EndTimestamp 是否已赋值
                     * @return EndTimestamp 是否已赋值
                     * 
                     */
                    bool EndTimestampHasBeenSet() const;

                    /**
                     * 获取<p>事件类型。如果不传则返回所有类型的数据</p>
                     * @return Types <p>事件类型。如果不传则返回所有类型的数据</p>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置<p>事件类型。如果不传则返回所有类型的数据</p>
                     * @param _types <p>事件类型。如果不传则返回所有类型的数据</p>
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取<p>运行实例 ID 数组</p>
                     * @return RunningOrderIds <p>运行实例 ID 数组</p>
                     * 
                     */
                    std::vector<uint64_t> GetRunningOrderIds() const;

                    /**
                     * 设置<p>运行实例 ID 数组</p>
                     * @param _runningOrderIds <p>运行实例 ID 数组</p>
                     * 
                     */
                    void SetRunningOrderIds(const std::vector<uint64_t>& _runningOrderIds);

                    /**
                     * 判断参数 RunningOrderIds 是否已赋值
                     * @return RunningOrderIds 是否已赋值
                     * 
                     */
                    bool RunningOrderIdsHasBeenSet() const;

                    /**
                     * 获取<p>工作空间 SerialId</p>
                     * @return WorkSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置<p>工作空间 SerialId</p>
                     * @param _workSpaceId <p>工作空间 SerialId</p>
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>返回条数</p>
                     * @return Limit <p>返回条数</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回条数</p>
                     * @param _limit <p>返回条数</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>起始偏移个数</p>
                     * @return Offset <p>起始偏移个数</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>起始偏移个数</p>
                     * @param _offset <p>起始偏移个数</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>作业的 ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>筛选条件：起始 Unix 时间戳（秒）</p>
                     */
                    uint64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * <p>筛选条件：结束 Unix 时间戳（秒）</p>
                     */
                    uint64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * <p>事件类型。如果不传则返回所有类型的数据</p>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * <p>运行实例 ID 数组</p>
                     */
                    std::vector<uint64_t> m_runningOrderIds;
                    bool m_runningOrderIdsHasBeenSet;

                    /**
                     * <p>工作空间 SerialId</p>
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * <p>返回条数</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>起始偏移个数</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBEVENTSREQUEST_H_
