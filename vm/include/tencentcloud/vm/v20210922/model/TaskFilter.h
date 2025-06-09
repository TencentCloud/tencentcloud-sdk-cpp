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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_TASKFILTER_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_TASKFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Cos TaskFilter
                */
                class TaskFilter : public AbstractModel
                {
                public:
                    TaskFilter();
                    ~TaskFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务业务类型
                     * @return BizType 任务业务类型
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置任务业务类型
                     * @param _bizType 任务业务类型
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取任务类型，可选：VIDEO，AUDIO， LIVE_VIDEO, LIVE_AUDIO
                     * @return Type 任务类型，可选：VIDEO，AUDIO， LIVE_VIDEO, LIVE_AUDIO
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务类型，可选：VIDEO，AUDIO， LIVE_VIDEO, LIVE_AUDIO
                     * @param _type 任务类型，可选：VIDEO，AUDIO， LIVE_VIDEO, LIVE_AUDIO
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取建议，可选：Pass, Review,Block
                     * @return Suggestion 建议，可选：Pass, Review,Block
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议，可选：Pass, Review,Block
                     * @param _suggestion 建议，可选：Pass, Review,Block
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     * @return TaskStatus 状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     * @param _taskStatus 状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                private:

                    /**
                     * 任务业务类型
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 任务类型，可选：VIDEO，AUDIO， LIVE_VIDEO, LIVE_AUDIO
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 建议，可选：Pass, Review,Block
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 状态，可选：PENDING，RUNNING，ERROR，FINISH，CANCELLED
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_TASKFILTER_H_
