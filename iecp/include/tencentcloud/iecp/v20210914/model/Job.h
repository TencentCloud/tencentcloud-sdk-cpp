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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_JOB_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * Job配置
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取并发数
                     * @return Parallelism 并发数
                     * 
                     */
                    int64_t GetParallelism() const;

                    /**
                     * 设置并发数
                     * @param _parallelism 并发数
                     * 
                     */
                    void SetParallelism(const int64_t& _parallelism);

                    /**
                     * 判断参数 Parallelism 是否已赋值
                     * @return Parallelism 是否已赋值
                     * 
                     */
                    bool ParallelismHasBeenSet() const;

                    /**
                     * 获取完成数
                     * @return Completion 完成数
                     * 
                     */
                    int64_t GetCompletion() const;

                    /**
                     * 设置完成数
                     * @param _completion 完成数
                     * 
                     */
                    void SetCompletion(const int64_t& _completion);

                    /**
                     * 判断参数 Completion 是否已赋值
                     * @return Completion 是否已赋值
                     * 
                     */
                    bool CompletionHasBeenSet() const;

                    /**
                     * 获取最大运行时间
                     * @return ActiveDeadlineSeconds 最大运行时间
                     * 
                     */
                    int64_t GetActiveDeadlineSeconds() const;

                    /**
                     * 设置最大运行时间
                     * @param _activeDeadlineSeconds 最大运行时间
                     * 
                     */
                    void SetActiveDeadlineSeconds(const int64_t& _activeDeadlineSeconds);

                    /**
                     * 判断参数 ActiveDeadlineSeconds 是否已赋值
                     * @return ActiveDeadlineSeconds 是否已赋值
                     * 
                     */
                    bool ActiveDeadlineSecondsHasBeenSet() const;

                    /**
                     * 获取失败前重试次数
                     * @return BackOffLimit 失败前重试次数
                     * 
                     */
                    int64_t GetBackOffLimit() const;

                    /**
                     * 设置失败前重试次数
                     * @param _backOffLimit 失败前重试次数
                     * 
                     */
                    void SetBackOffLimit(const int64_t& _backOffLimit);

                    /**
                     * 判断参数 BackOffLimit 是否已赋值
                     * @return BackOffLimit 是否已赋值
                     * 
                     */
                    bool BackOffLimitHasBeenSet() const;

                private:

                    /**
                     * 并发数
                     */
                    int64_t m_parallelism;
                    bool m_parallelismHasBeenSet;

                    /**
                     * 完成数
                     */
                    int64_t m_completion;
                    bool m_completionHasBeenSet;

                    /**
                     * 最大运行时间
                     */
                    int64_t m_activeDeadlineSeconds;
                    bool m_activeDeadlineSecondsHasBeenSet;

                    /**
                     * 失败前重试次数
                     */
                    int64_t m_backOffLimit;
                    bool m_backOffLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_JOB_H_
