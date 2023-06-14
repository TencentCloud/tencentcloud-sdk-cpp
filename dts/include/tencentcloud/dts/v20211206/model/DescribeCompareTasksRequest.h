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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPARETASKSREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPARETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeCompareTasks请求参数结构体
                */
                class DescribeCompareTasksRequest : public AbstractModel
                {
                public:
                    DescribeCompareTasksRequest();
                    ~DescribeCompareTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务 Id
                     * @return JobId 迁移任务 Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务 Id
                     * @param _jobId 迁移任务 Id
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
                     * 获取分页设置，表示每页显示多少条任务，默认为 20
                     * @return Limit 分页设置，表示每页显示多少条任务，默认为 20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页设置，表示每页显示多少条任务，默认为 20
                     * @param _limit 分页设置，表示每页显示多少条任务，默认为 20
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
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取校验任务 ID
                     * @return CompareTaskId 校验任务 ID
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置校验任务 ID
                     * @param _compareTaskId 校验任务 ID
                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态过滤，可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     * @return Status 任务状态过滤，可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置任务状态过滤，可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     * @param _status 任务状态过滤，可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 迁移任务 Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 分页设置，表示每页显示多少条任务，默认为 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 校验任务 ID
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 任务状态过滤，可能的值：created - 创建完成；readyRun - 等待运行；running - 运行中；success - 成功；stopping - 结束中；failed - 失败；canceled - 已终止
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBECOMPARETASKSREQUEST_H_
