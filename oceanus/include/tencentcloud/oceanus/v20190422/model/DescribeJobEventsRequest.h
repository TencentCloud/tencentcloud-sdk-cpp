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
                     * 获取作业的 ID
                     * @return JobId 作业的 ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业的 ID
                     * @param _jobId 作业的 ID
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
                     * 获取筛选条件：起始 Unix 时间戳（秒）
                     * @return StartTimestamp 筛选条件：起始 Unix 时间戳（秒）
                     * 
                     */
                    uint64_t GetStartTimestamp() const;

                    /**
                     * 设置筛选条件：起始 Unix 时间戳（秒）
                     * @param _startTimestamp 筛选条件：起始 Unix 时间戳（秒）
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
                     * 获取筛选条件：结束 Unix 时间戳（秒）
                     * @return EndTimestamp 筛选条件：结束 Unix 时间戳（秒）
                     * 
                     */
                    uint64_t GetEndTimestamp() const;

                    /**
                     * 设置筛选条件：结束 Unix 时间戳（秒）
                     * @param _endTimestamp 筛选条件：结束 Unix 时间戳（秒）
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
                     * 获取事件类型。如果不传则返回所有类型的数据
                     * @return Types 事件类型。如果不传则返回所有类型的数据
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置事件类型。如果不传则返回所有类型的数据
                     * @param _types 事件类型。如果不传则返回所有类型的数据
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
                     * 获取运行实例 ID 数组
                     * @return RunningOrderIds 运行实例 ID 数组
                     * 
                     */
                    std::vector<uint64_t> GetRunningOrderIds() const;

                    /**
                     * 设置运行实例 ID 数组
                     * @param _runningOrderIds 运行实例 ID 数组
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
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 作业的 ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 筛选条件：起始 Unix 时间戳（秒）
                     */
                    uint64_t m_startTimestamp;
                    bool m_startTimestampHasBeenSet;

                    /**
                     * 筛选条件：结束 Unix 时间戳（秒）
                     */
                    uint64_t m_endTimestamp;
                    bool m_endTimestampHasBeenSet;

                    /**
                     * 事件类型。如果不传则返回所有类型的数据
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * 运行实例 ID 数组
                     */
                    std::vector<uint64_t> m_runningOrderIds;
                    bool m_runningOrderIdsHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBEVENTSREQUEST_H_
