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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISBIGKEYTASK_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISBIGKEYTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Redis大Key分析任务详情。
                */
                class RedisBigKeyTask : public AbstractModel
                {
                public:
                    RedisBigKeyTask();
                    ~RedisBigKeyTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异步任务请求 ID。
                     * @return AsyncRequestId 异步任务请求 ID。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置异步任务请求 ID。
                     * @param _asyncRequestId 异步任务请求 ID。
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param _createTime 任务创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务开始时间。
                     * @return StartTime 任务开始时间。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间。
                     * @param _startTime 任务开始时间。
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
                     * 获取任务结束时间。
                     * @return EndTime 任务结束时间。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间。
                     * @param _endTime 任务结束时间。
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
                     * 获取任务状态。
                     * @return TaskStatus 任务状态。
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置任务状态。
                     * @param _taskStatus 任务状态。
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取任务执行进度。
                     * @return Progress 任务执行进度。
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置任务执行进度。
                     * @param _progress 任务执行进度。
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务包含的分片节点序号列表。
                     * @return ShardIds 任务包含的分片节点序号列表。
                     * 
                     */
                    std::vector<int64_t> GetShardIds() const;

                    /**
                     * 设置任务包含的分片节点序号列表。
                     * @param _shardIds 任务包含的分片节点序号列表。
                     * 
                     */
                    void SetShardIds(const std::vector<int64_t>& _shardIds);

                    /**
                     * 判断参数 ShardIds 是否已赋值
                     * @return ShardIds 是否已赋值
                     * 
                     */
                    bool ShardIdsHasBeenSet() const;

                private:

                    /**
                     * 异步任务请求 ID。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务开始时间。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务状态。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 任务执行进度。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务包含的分片节点序号列表。
                     */
                    std::vector<int64_t> m_shardIds;
                    bool m_shardIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISBIGKEYTASK_H_
