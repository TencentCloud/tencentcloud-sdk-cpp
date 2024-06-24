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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETANSWERTYPEDATACOUNTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETANSWERTYPEDATACOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetAnswerTypeDataCount返回参数结构体
                */
                class GetAnswerTypeDataCountResponse : public AbstractModel
                {
                public:
                    GetAnswerTypeDataCountResponse();
                    ~GetAnswerTypeDataCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总消息数
                     * @return Total 总消息数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取大模型直接回复总数
                     * @return ModelReplyCount 大模型直接回复总数
                     * 
                     */
                    uint64_t GetModelReplyCount() const;

                    /**
                     * 判断参数 ModelReplyCount 是否已赋值
                     * @return ModelReplyCount 是否已赋值
                     * 
                     */
                    bool ModelReplyCountHasBeenSet() const;

                    /**
                     * 获取知识型回复总数
                     * @return KnowledgeCount 知识型回复总数
                     * 
                     */
                    uint64_t GetKnowledgeCount() const;

                    /**
                     * 判断参数 KnowledgeCount 是否已赋值
                     * @return KnowledgeCount 是否已赋值
                     * 
                     */
                    bool KnowledgeCountHasBeenSet() const;

                    /**
                     * 获取任务流回复总数
                     * @return TaskFlowCount 任务流回复总数
                     * 
                     */
                    uint64_t GetTaskFlowCount() const;

                    /**
                     * 判断参数 TaskFlowCount 是否已赋值
                     * @return TaskFlowCount 是否已赋值
                     * 
                     */
                    bool TaskFlowCountHasBeenSet() const;

                    /**
                     * 获取搜索引擎回复总数
                     * @return SearchEngineCount 搜索引擎回复总数
                     * 
                     */
                    uint64_t GetSearchEngineCount() const;

                    /**
                     * 判断参数 SearchEngineCount 是否已赋值
                     * @return SearchEngineCount 是否已赋值
                     * 
                     */
                    bool SearchEngineCountHasBeenSet() const;

                    /**
                     * 获取图片理解回复总数
                     * @return ImageUnderstandingCount 图片理解回复总数
                     * 
                     */
                    uint64_t GetImageUnderstandingCount() const;

                    /**
                     * 判断参数 ImageUnderstandingCount 是否已赋值
                     * @return ImageUnderstandingCount 是否已赋值
                     * 
                     */
                    bool ImageUnderstandingCountHasBeenSet() const;

                    /**
                     * 获取拒答回复总数
                     * @return RejectCount 拒答回复总数
                     * 
                     */
                    uint64_t GetRejectCount() const;

                    /**
                     * 判断参数 RejectCount 是否已赋值
                     * @return RejectCount 是否已赋值
                     * 
                     */
                    bool RejectCountHasBeenSet() const;

                    /**
                     * 获取敏感回复总数
                     * @return SensitiveCount 敏感回复总数
                     * 
                     */
                    uint64_t GetSensitiveCount() const;

                    /**
                     * 判断参数 SensitiveCount 是否已赋值
                     * @return SensitiveCount 是否已赋值
                     * 
                     */
                    bool SensitiveCountHasBeenSet() const;

                    /**
                     * 获取并发超限回复总数
                     * @return ConcurrentLimitCount 并发超限回复总数
                     * 
                     */
                    uint64_t GetConcurrentLimitCount() const;

                    /**
                     * 判断参数 ConcurrentLimitCount 是否已赋值
                     * @return ConcurrentLimitCount 是否已赋值
                     * 
                     */
                    bool ConcurrentLimitCountHasBeenSet() const;

                    /**
                     * 获取未知问题回复总数
                     * @return UnknownIssuesCount 未知问题回复总数
                     * 
                     */
                    uint64_t GetUnknownIssuesCount() const;

                    /**
                     * 判断参数 UnknownIssuesCount 是否已赋值
                     * @return UnknownIssuesCount 是否已赋值
                     * 
                     */
                    bool UnknownIssuesCountHasBeenSet() const;

                private:

                    /**
                     * 总消息数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 大模型直接回复总数
                     */
                    uint64_t m_modelReplyCount;
                    bool m_modelReplyCountHasBeenSet;

                    /**
                     * 知识型回复总数
                     */
                    uint64_t m_knowledgeCount;
                    bool m_knowledgeCountHasBeenSet;

                    /**
                     * 任务流回复总数
                     */
                    uint64_t m_taskFlowCount;
                    bool m_taskFlowCountHasBeenSet;

                    /**
                     * 搜索引擎回复总数
                     */
                    uint64_t m_searchEngineCount;
                    bool m_searchEngineCountHasBeenSet;

                    /**
                     * 图片理解回复总数
                     */
                    uint64_t m_imageUnderstandingCount;
                    bool m_imageUnderstandingCountHasBeenSet;

                    /**
                     * 拒答回复总数
                     */
                    uint64_t m_rejectCount;
                    bool m_rejectCountHasBeenSet;

                    /**
                     * 敏感回复总数
                     */
                    uint64_t m_sensitiveCount;
                    bool m_sensitiveCountHasBeenSet;

                    /**
                     * 并发超限回复总数
                     */
                    uint64_t m_concurrentLimitCount;
                    bool m_concurrentLimitCountHasBeenSet;

                    /**
                     * 未知问题回复总数
                     */
                    uint64_t m_unknownIssuesCount;
                    bool m_unknownIssuesCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETANSWERTYPEDATACOUNTRESPONSE_H_
