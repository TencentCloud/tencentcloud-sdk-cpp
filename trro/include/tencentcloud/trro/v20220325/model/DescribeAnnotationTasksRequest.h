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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEANNOTATIONTASKSREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEANNOTATIONTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeAnnotationTasks请求参数结构体
                */
                class DescribeAnnotationTasksRequest : public AbstractModel
                {
                public:
                    DescribeAnnotationTasksRequest();
                    ~DescribeAnnotationTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务 ID</p>
                     * @return JobId <p>任务 ID</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>任务 ID</p>
                     * @param _jobId <p>任务 ID</p>
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
                     * 获取<p>分页偏移，默认 0</p>
                     * @return Offset <p>分页偏移，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移，默认 0</p>
                     * @param _offset <p>分页偏移，默认 0</p>
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
                     * 获取<p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     * @return Limit <p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     * @param _limit <p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
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
                     * 获取<p>按文件名前缀过滤，不传不过滤</p>
                     * @return FileName <p>按文件名前缀过滤，不传不过滤</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>按文件名前缀过滤，不传不过滤</p>
                     * @param _fileName <p>按文件名前缀过滤，不传不过滤</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>按处理项状态过滤：1 未处理，2 处理中，3 超时，4 异常，5待确认，6 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 未处理</li><li>2： 处理中</li><li>3： 超时</li><li>4： 异常</li><li>5： 待确认</li><li>6： 成功</li></ul>
                     * @return Status <p>按处理项状态过滤：1 未处理，2 处理中，3 超时，4 异常，5待确认，6 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 未处理</li><li>2： 处理中</li><li>3： 超时</li><li>4： 异常</li><li>5： 待确认</li><li>6： 成功</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>按处理项状态过滤：1 未处理，2 处理中，3 超时，4 异常，5待确认，6 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 未处理</li><li>2： 处理中</li><li>3： 超时</li><li>4： 异常</li><li>5： 待确认</li><li>6： 成功</li></ul>
                     * @param _status <p>按处理项状态过滤：1 未处理，2 处理中，3 超时，4 异常，5待确认，6 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 未处理</li><li>2： 处理中</li><li>3： 超时</li><li>4： 异常</li><li>5： 待确认</li><li>6： 成功</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>分页偏移，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，默认 20，最大 100</p><p>取值范围：[10, 100]</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>按文件名前缀过滤，不传不过滤</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>按处理项状态过滤：1 未处理，2 处理中，3 超时，4 异常，5待确认，6 成功。不传查全部</p><p>枚举值：</p><ul><li>1： 未处理</li><li>2： 处理中</li><li>3： 超时</li><li>4： 异常</li><li>5： 待确认</li><li>6： 成功</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEANNOTATIONTASKSREQUEST_H_
