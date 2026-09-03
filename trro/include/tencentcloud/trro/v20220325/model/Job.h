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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_JOB_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 任务信息
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>任务类型：1 单视频，2 批量</p><p>枚举值：</p><ul><li>1： 单视频</li><li>2： 批量</li></ul>
                     * @return JobType <p>任务类型：1 单视频，2 批量</p><p>枚举值：</p><ul><li>1： 单视频</li><li>2： 批量</li></ul>
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置<p>任务类型：1 单视频，2 批量</p><p>枚举值：</p><ul><li>1： 单视频</li><li>2： 批量</li></ul>
                     * @param _jobType <p>任务类型：1 单视频，2 批量</p><p>枚举值：</p><ul><li>1： 单视频</li><li>2： 批量</li></ul>
                     * 
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取<p>标注模式：3 精标注</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     * @return AnnotationType <p>标注模式：3 精标注</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     * 
                     */
                    int64_t GetAnnotationType() const;

                    /**
                     * 设置<p>标注模式：3 精标注</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     * @param _annotationType <p>标注模式：3 精标注</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     * 
                     */
                    void SetAnnotationType(const int64_t& _annotationType);

                    /**
                     * 判断参数 AnnotationType 是否已赋值
                     * @return AnnotationType 是否已赋值
                     * 
                     */
                    bool AnnotationTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态：1 处理中，2 异常，3 成功</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     * @return Status <p>任务状态：1 处理中，2 异常，3 成功</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态：1 处理中，2 异常，3 成功</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     * @param _status <p>任务状态：1 处理中，2 异常，3 成功</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>文件列举状态：0 列举中，1 全部加载，2 超过数量上限截断（仅批量任务）</p><p>枚举值：</p><ul><li>0： 列举中</li><li>1： 全部加载</li><li>2： 超过数量上限截断（仅批量任务）</li></ul>
                     * @return IngestStatus <p>文件列举状态：0 列举中，1 全部加载，2 超过数量上限截断（仅批量任务）</p><p>枚举值：</p><ul><li>0： 列举中</li><li>1： 全部加载</li><li>2： 超过数量上限截断（仅批量任务）</li></ul>
                     * 
                     */
                    int64_t GetIngestStatus() const;

                    /**
                     * 设置<p>文件列举状态：0 列举中，1 全部加载，2 超过数量上限截断（仅批量任务）</p><p>枚举值：</p><ul><li>0： 列举中</li><li>1： 全部加载</li><li>2： 超过数量上限截断（仅批量任务）</li></ul>
                     * @param _ingestStatus <p>文件列举状态：0 列举中，1 全部加载，2 超过数量上限截断（仅批量任务）</p><p>枚举值：</p><ul><li>0： 列举中</li><li>1： 全部加载</li><li>2： 超过数量上限截断（仅批量任务）</li></ul>
                     * 
                     */
                    void SetIngestStatus(const int64_t& _ingestStatus);

                    /**
                     * 判断参数 IngestStatus 是否已赋值
                     * @return IngestStatus 是否已赋值
                     * 
                     */
                    bool IngestStatusHasBeenSet() const;

                    /**
                     * 获取<p>输入路径（S3源为桶名/对象路径：批量任务为目录前缀，单文件为文件完整路径；HTTP源为完整URL）</p>
                     * @return InputPath <p>输入路径（S3源为桶名/对象路径：批量任务为目录前缀，单文件为文件完整路径；HTTP源为完整URL）</p>
                     * 
                     */
                    std::string GetInputPath() const;

                    /**
                     * 设置<p>输入路径（S3源为桶名/对象路径：批量任务为目录前缀，单文件为文件完整路径；HTTP源为完整URL）</p>
                     * @param _inputPath <p>输入路径（S3源为桶名/对象路径：批量任务为目录前缀，单文件为文件完整路径；HTTP源为完整URL）</p>
                     * 
                     */
                    void SetInputPath(const std::string& _inputPath);

                    /**
                     * 判断参数 InputPath 是否已赋值
                     * @return InputPath 是否已赋值
                     * 
                     */
                    bool InputPathHasBeenSet() const;

                    /**
                     * 获取<p>处理项总数</p>
                     * @return TotalNumber <p>处理项总数</p>
                     * 
                     */
                    int64_t GetTotalNumber() const;

                    /**
                     * 设置<p>处理项总数</p>
                     * @param _totalNumber <p>处理项总数</p>
                     * 
                     */
                    void SetTotalNumber(const int64_t& _totalNumber);

                    /**
                     * 判断参数 TotalNumber 是否已赋值
                     * @return TotalNumber 是否已赋值
                     * 
                     */
                    bool TotalNumberHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，Unix 时间戳（秒）</p>
                     * @return CreateTime <p>创建时间，Unix 时间戳（秒）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，Unix 时间戳（秒）</p>
                     * @param _createTime <p>创建时间，Unix 时间戳（秒）</p>
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
                     * 获取<p>完成时间，Unix 时间戳（秒），未完成为 0</p>
                     * @return FinishTime <p>完成时间，Unix 时间戳（秒），未完成为 0</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>完成时间，Unix 时间戳（秒），未完成为 0</p>
                     * @param _finishTime <p>完成时间，Unix 时间戳（秒），未完成为 0</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>任务类型：1 单视频，2 批量</p><p>枚举值：</p><ul><li>1： 单视频</li><li>2： 批量</li></ul>
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * <p>标注模式：3 精标注</p><p>枚举值：</p><ul><li>3： 精标注</li></ul>
                     */
                    int64_t m_annotationType;
                    bool m_annotationTypeHasBeenSet;

                    /**
                     * <p>任务状态：1 处理中，2 异常，3 成功</p><p>枚举值：</p><ul><li>1： 处理中</li><li>2： 异常</li><li>3： 成功</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>文件列举状态：0 列举中，1 全部加载，2 超过数量上限截断（仅批量任务）</p><p>枚举值：</p><ul><li>0： 列举中</li><li>1： 全部加载</li><li>2： 超过数量上限截断（仅批量任务）</li></ul>
                     */
                    int64_t m_ingestStatus;
                    bool m_ingestStatusHasBeenSet;

                    /**
                     * <p>输入路径（S3源为桶名/对象路径：批量任务为目录前缀，单文件为文件完整路径；HTTP源为完整URL）</p>
                     */
                    std::string m_inputPath;
                    bool m_inputPathHasBeenSet;

                    /**
                     * <p>处理项总数</p>
                     */
                    int64_t m_totalNumber;
                    bool m_totalNumberHasBeenSet;

                    /**
                     * <p>创建时间，Unix 时间戳（秒）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>完成时间，Unix 时间戳（秒），未完成为 0</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_JOB_H_
