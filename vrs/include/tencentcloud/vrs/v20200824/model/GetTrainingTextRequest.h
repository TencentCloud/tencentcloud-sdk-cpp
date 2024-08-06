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
                     * 获取复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     * @return TaskType 复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     * 
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     * @param _taskType 复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
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
                     * 获取音色场景。（仅支持一句话声音复刻，其余复刻类型不生效） 
0 - 通用场景（默认）； 
1 - 聊天场景； 
2 - 阅读场景； 
3 - 资讯播报场景。
                     * @return Domain 音色场景。（仅支持一句话声音复刻，其余复刻类型不生效） 
0 - 通用场景（默认）； 
1 - 聊天场景； 
2 - 阅读场景； 
3 - 资讯播报场景。
                     * 
                     */
                    int64_t GetDomain() const;

                    /**
                     * 设置音色场景。（仅支持一句话声音复刻，其余复刻类型不生效） 
0 - 通用场景（默认）； 
1 - 聊天场景； 
2 - 阅读场景； 
3 - 资讯播报场景。
                     * @param _domain 音色场景。（仅支持一句话声音复刻，其余复刻类型不生效） 
0 - 通用场景（默认）； 
1 - 聊天场景； 
2 - 阅读场景； 
3 - 资讯播报场景。
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
                     * 获取文本语种。（仅支持一句话声音复刻，其余复刻类型不生效） 
1 - 中文（默认）。
                     * @return TextLanguage 文本语种。（仅支持一句话声音复刻，其余复刻类型不生效） 
1 - 中文（默认）。
                     * 
                     */
                    int64_t GetTextLanguage() const;

                    /**
                     * 设置文本语种。（仅支持一句话声音复刻，其余复刻类型不生效） 
1 - 中文（默认）。
                     * @param _textLanguage 文本语种。（仅支持一句话声音复刻，其余复刻类型不生效） 
1 - 中文（默认）。
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
                     * 复刻类型。
0 - 轻量版声音复刻（默认）;
5 - 一句话声音复刻。
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 音色场景。（仅支持一句话声音复刻，其余复刻类型不生效） 
0 - 通用场景（默认）； 
1 - 聊天场景； 
2 - 阅读场景； 
3 - 资讯播报场景。
                     */
                    int64_t m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 文本语种。（仅支持一句话声音复刻，其余复刻类型不生效） 
1 - 中文（默认）。
                     */
                    int64_t m_textLanguage;
                    bool m_textLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_GETTRAININGTEXTREQUEST_H_
