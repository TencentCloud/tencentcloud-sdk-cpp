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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_GETTRAININGTEXTREQUEST_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_GETTRAININGTEXTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * GetTrainingText请求参数结构体
                */
                class GetTrainingTextRequest : public AbstractModel
                {
                public:
                    GetTrainingTextRequest();
                    ~GetTrainingTextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     * @return TaskType <p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置<p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     * @param _taskType <p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     * 
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>音色场景。（仅支持一句话声音复刻，其余复刻类型不生效）<br>0 - 通用场景（默认）；<br>1 - 聊天场景；<br>2 - 阅读场景；<br>3 - 资讯播报场景。</p>
                     * @return Domain <p>音色场景。（仅支持一句话声音复刻，其余复刻类型不生效）<br>0 - 通用场景（默认）；<br>1 - 聊天场景；<br>2 - 阅读场景；<br>3 - 资讯播报场景。</p>
                     * 
                     */
                    int64_t GetDomain() const;

                    /**
                     * 设置<p>音色场景。（仅支持一句话声音复刻，其余复刻类型不生效）<br>0 - 通用场景（默认）；<br>1 - 聊天场景；<br>2 - 阅读场景；<br>3 - 资讯播报场景。</p>
                     * @param _domain <p>音色场景。（仅支持一句话声音复刻，其余复刻类型不生效）<br>0 - 通用场景（默认）；<br>1 - 聊天场景；<br>2 - 阅读场景；<br>3 - 资讯播报场景。</p>
                     * 
                     */
                    void SetDomain(const int64_t& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>文本语种。（仅支持一句话声音复刻，其余复刻类型不生效）<br>1 - 中文（默认）。</p>
                     * @return TextLanguage <p>文本语种。（仅支持一句话声音复刻，其余复刻类型不生效）<br>1 - 中文（默认）。</p>
                     * 
                     */
                    int64_t GetTextLanguage() const;

                    /**
                     * 设置<p>文本语种。（仅支持一句话声音复刻，其余复刻类型不生效）<br>1 - 中文（默认）。</p>
                     * @param _textLanguage <p>文本语种。（仅支持一句话声音复刻，其余复刻类型不生效）<br>1 - 中文（默认）。</p>
                     * 
                     */
                    void SetTextLanguage(const int64_t& _textLanguage);

                    /**
                     * 判断参数 TextLanguage 是否已赋值
                     * @return TextLanguage 是否已赋值
                     * 
                     */
                    bool TextLanguageHasBeenSet() const;

                private:

                    /**
                     * <p>复刻类型。<br>5 - 一句话声音复刻。</p>
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>音色场景。（仅支持一句话声音复刻，其余复刻类型不生效）<br>0 - 通用场景（默认）；<br>1 - 聊天场景；<br>2 - 阅读场景；<br>3 - 资讯播报场景。</p>
                     */
                    int64_t m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>文本语种。（仅支持一句话声音复刻，其余复刻类型不生效）<br>1 - 中文（默认）。</p>
                     */
                    int64_t m_textLanguage;
                    bool m_textLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_GETTRAININGTEXTREQUEST_H_
