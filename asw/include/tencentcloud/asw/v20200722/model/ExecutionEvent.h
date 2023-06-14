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

#ifndef TENCENTCLOUD_ASW_V20200722_MODEL_EXECUTIONEVENT_H_
#define TENCENTCLOUD_ASW_V20200722_MODEL_EXECUTIONEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asw
    {
        namespace V20200722
        {
            namespace Model
            {
                /**
                * 执行的事件历史
                */
                class ExecutionEvent : public AbstractModel
                {
                public:
                    ExecutionEvent();
                    ~ExecutionEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行资源名
                     * @return ExecutionResourceName 执行资源名
                     * 
                     */
                    std::string GetExecutionResourceName() const;

                    /**
                     * 设置执行资源名
                     * @param _executionResourceName 执行资源名
                     * 
                     */
                    void SetExecutionResourceName(const std::string& _executionResourceName);

                    /**
                     * 判断参数 ExecutionResourceName 是否已赋值
                     * @return ExecutionResourceName 是否已赋值
                     * 
                     */
                    bool ExecutionResourceNameHasBeenSet() const;

                    /**
                     * 获取自增序号
                     * @return EventId 自增序号
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置自增序号
                     * @param _eventId 自增序号
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取事件类型
                     * @return EventCategory 事件类型
                     * 
                     */
                    std::string GetEventCategory() const;

                    /**
                     * 设置事件类型
                     * @param _eventCategory 事件类型
                     * 
                     */
                    void SetEventCategory(const std::string& _eventCategory);

                    /**
                     * 判断参数 EventCategory 是否已赋值
                     * @return EventCategory 是否已赋值
                     * 
                     */
                    bool EventCategoryHasBeenSet() const;

                    /**
                     * 获取步骤节点名称
                     * @return StepName 步骤节点名称
                     * 
                     */
                    std::string GetStepName() const;

                    /**
                     * 设置步骤节点名称
                     * @param _stepName 步骤节点名称
                     * 
                     */
                    void SetStepName(const std::string& _stepName);

                    /**
                     * 判断参数 StepName 是否已赋值
                     * @return StepName 是否已赋值
                     * 
                     */
                    bool StepNameHasBeenSet() const;

                    /**
                     * 获取该步骤引用的资源名
                     * @return ResourceName 该步骤引用的资源名
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置该步骤引用的资源名
                     * @param _resourceName 该步骤引用的资源名
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取该事件发生时间，毫秒
                     * @return Timestamp 该事件发生时间，毫秒
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置该事件发生时间，毫秒
                     * @param _timestamp 该事件发生时间，毫秒
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取事件内容
                     * @return Content 事件内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置事件内容
                     * @param _content 事件内容
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
                     * 获取异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Exception 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetException() const;

                    /**
                     * 设置异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exception 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetException(const std::string& _exception);

                    /**
                     * 判断参数 Exception 是否已赋值
                     * @return Exception 是否已赋值
                     * 
                     */
                    bool ExceptionHasBeenSet() const;

                private:

                    /**
                     * 执行资源名
                     */
                    std::string m_executionResourceName;
                    bool m_executionResourceNameHasBeenSet;

                    /**
                     * 自增序号
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 事件类型
                     */
                    std::string m_eventCategory;
                    bool m_eventCategoryHasBeenSet;

                    /**
                     * 步骤节点名称
                     */
                    std::string m_stepName;
                    bool m_stepNameHasBeenSet;

                    /**
                     * 该步骤引用的资源名
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 该事件发生时间，毫秒
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 事件内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exception;
                    bool m_exceptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASW_V20200722_MODEL_EXECUTIONEVENT_H_
