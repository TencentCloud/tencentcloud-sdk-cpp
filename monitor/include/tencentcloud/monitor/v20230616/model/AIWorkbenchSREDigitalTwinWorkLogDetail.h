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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOGDETAIL_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * AI工作台SRE数字分身工作日志详细信息
                */
                class AIWorkbenchSREDigitalTwinWorkLogDetail : public AbstractModel
                {
                public:
                    AIWorkbenchSREDigitalTwinWorkLogDetail();
                    ~AIWorkbenchSREDigitalTwinWorkLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作日志详细内容
                     * @return Content 工作日志详细内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置工作日志详细内容
                     * @param _content 工作日志详细内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取工作日志任务类型
                     * @return TaskType 工作日志任务类型
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置工作日志任务类型
                     * @param _taskType 工作日志任务类型
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取工作日志相关对话ID
                     * @return DialogID 工作日志相关对话ID
                     * 
                     */
                    int64_t GetDialogID() const;

                    /**
                     * 设置工作日志相关对话ID
                     * @param _dialogID 工作日志相关对话ID
                     * 
                     */
                    void SetDialogID(const int64_t& _dialogID);

                    /**
                     * 判断参数 DialogID 是否已赋值
                     * @return DialogID 是否已赋值
                     * 
                     */
                    bool DialogIDHasBeenSet() const;

                private:

                    /**
                     * 工作日志详细内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 工作日志任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 工作日志相关对话ID
                     */
                    int64_t m_dialogID;
                    bool m_dialogIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_AIWORKBENCHSREDIGITALTWINWORKLOGDETAIL_H_
