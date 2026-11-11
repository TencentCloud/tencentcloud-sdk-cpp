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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_EVENTITEM_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_EVENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 用于描述事件中心中的一条事件记录，包含事件标识、所属资源、事件类型、级别、发生时间、原因及业务扩展信息。
                */
                class EventItem : public AbstractModel
                {
                public:
                    EventItem();
                    ~EventItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件唯一标识，用于区分事件及识别重复投递。聚合模式下为该聚合结果代表事件的标识。</p>
                     * @return EventId <p>事件唯一标识，用于区分事件及识别重复投递。聚合模式下为该聚合结果代表事件的标识。</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件唯一标识，用于区分事件及识别重复投递。聚合模式下为该聚合结果代表事件的标识。</p>
                     * @param _eventId <p>事件唯一标识，用于区分事件及识别重复投递。聚合模式下为该聚合结果代表事件的标识。</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>事件来源。</p>
                     * @return Source <p>事件来源。</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>事件来源。</p>
                     * @param _source <p>事件来源。</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>事件关联的对象类型。</p>
                     * @return ObjectType <p>事件关联的对象类型。</p>
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置<p>事件关联的对象类型。</p>
                     * @param _objectType <p>事件关联的对象类型。</p>
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取<p>事件关联的对象 ID。</p>
                     * @return ObjectId <p>事件关联的对象 ID。</p>
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置<p>事件关联的对象 ID。</p>
                     * @param _objectId <p>事件关联的对象 ID。</p>
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取<p>事件级别。Normal 表示正常事件，Warning 表示告警事件。</p>
                     * @return EventLevel <p>事件级别。Normal 表示正常事件，Warning 表示告警事件。</p>
                     * 
                     */
                    std::string GetEventLevel() const;

                    /**
                     * 设置<p>事件级别。Normal 表示正常事件，Warning 表示告警事件。</p>
                     * @param _eventLevel <p>事件级别。Normal 表示正常事件，Warning 表示告警事件。</p>
                     * 
                     */
                    void SetEventLevel(const std::string& _eventLevel);

                    /**
                     * 判断参数 EventLevel 是否已赋值
                     * @return EventLevel 是否已赋值
                     * 
                     */
                    bool EventLevelHasBeenSet() const;

                    /**
                     * 获取<p>事件类型。</p>
                     * @return EventType <p>事件类型。</p>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置<p>事件类型。</p>
                     * @param _eventType <p>事件类型。</p>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取<p>事件原因标识，无原因信息时不返回。例如 Manual 表示通过停止接口主动停止，包括人工、脚本或 SDK 调用，不代表一定由人工操作。</p>
                     * @return Reason <p>事件原因标识，无原因信息时不返回。例如 Manual 表示通过停止接口主动停止，包括人工、脚本或 SDK 调用，不代表一定由人工操作。</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>事件原因标识，无原因信息时不返回。例如 Manual 表示通过停止接口主动停止，包括人工、脚本或 SDK 调用，不代表一定由人工操作。</p>
                     * @param _reason <p>事件原因标识，无原因信息时不返回。例如 Manual 表示通过停止接口主动停止，包括人工、脚本或 SDK 调用，不代表一定由人工操作。</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取<p>事件的说明文本。建议使用 EventType 和 Reason 判断事件类型及原因，不依赖说明文本进行业务判断。</p>
                     * @return Message <p>事件的说明文本。建议使用 EventType 和 Reason 判断事件类型及原因，不依赖说明文本进行业务判断。</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>事件的说明文本。建议使用 EventType 和 Reason 判断事件类型及原因，不依赖说明文本进行业务判断。</p>
                     * @param _message <p>事件的说明文本。建议使用 EventType 和 Reason 判断事件类型及原因，不依赖说明文本进行业务判断。</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>事件扩展信息，以 JSON 字符串返回。当前 Sandbox 事件包含 ToolId、ToolType，以及可选的 ToolName。调用方需解析 JSON 字符串后读取扩展字段。</p>
                     * @return Extensions <p>事件扩展信息，以 JSON 字符串返回。当前 Sandbox 事件包含 ToolId、ToolType，以及可选的 ToolName。调用方需解析 JSON 字符串后读取扩展字段。</p>
                     * 
                     */
                    std::string GetExtensions() const;

                    /**
                     * 设置<p>事件扩展信息，以 JSON 字符串返回。当前 Sandbox 事件包含 ToolId、ToolType，以及可选的 ToolName。调用方需解析 JSON 字符串后读取扩展字段。</p>
                     * @param _extensions <p>事件扩展信息，以 JSON 字符串返回。当前 Sandbox 事件包含 ToolId、ToolType，以及可选的 ToolName。调用方需解析 JSON 字符串后读取扩展字段。</p>
                     * 
                     */
                    void SetExtensions(const std::string& _extensions);

                    /**
                     * 判断参数 Extensions 是否已赋值
                     * @return Extensions 是否已赋值
                     * 
                     */
                    bool ExtensionsHasBeenSet() const;

                    /**
                     * 获取<p>事件发生时间，RFC3339 格式。仅 Raw 模式返回。</p>
                     * @return OccurredAt <p>事件发生时间，RFC3339 格式。仅 Raw 模式返回。</p>
                     * 
                     */
                    std::string GetOccurredAt() const;

                    /**
                     * 设置<p>事件发生时间，RFC3339 格式。仅 Raw 模式返回。</p>
                     * @param _occurredAt <p>事件发生时间，RFC3339 格式。仅 Raw 模式返回。</p>
                     * 
                     */
                    void SetOccurredAt(const std::string& _occurredAt);

                    /**
                     * 判断参数 OccurredAt 是否已赋值
                     * @return OccurredAt 是否已赋值
                     * 
                     */
                    bool OccurredAtHasBeenSet() const;

                    /**
                     * 获取<p>当前查询范围内，该聚合结果包含的去重事件数。仅 Aggregate 模式返回。当前生命周期事件逐条展示，该值为 1。</p>
                     * @return Count <p>当前查询范围内，该聚合结果包含的去重事件数。仅 Aggregate 模式返回。当前生命周期事件逐条展示，该值为 1。</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>当前查询范围内，该聚合结果包含的去重事件数。仅 Aggregate 模式返回。当前生命周期事件逐条展示，该值为 1。</p>
                     * @param _count <p>当前查询范围内，该聚合结果包含的去重事件数。仅 Aggregate 模式返回。当前生命周期事件逐条展示，该值为 1。</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>当前查询范围内，该聚合结果中最早的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象历史上的首次事件时间。</p>
                     * @return FirstOccurredAt <p>当前查询范围内，该聚合结果中最早的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象历史上的首次事件时间。</p>
                     * 
                     */
                    std::string GetFirstOccurredAt() const;

                    /**
                     * 设置<p>当前查询范围内，该聚合结果中最早的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象历史上的首次事件时间。</p>
                     * @param _firstOccurredAt <p>当前查询范围内，该聚合结果中最早的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象历史上的首次事件时间。</p>
                     * 
                     */
                    void SetFirstOccurredAt(const std::string& _firstOccurredAt);

                    /**
                     * 判断参数 FirstOccurredAt 是否已赋值
                     * @return FirstOccurredAt 是否已赋值
                     * 
                     */
                    bool FirstOccurredAtHasBeenSet() const;

                    /**
                     * 获取<p>当前查询范围内，该聚合结果中最近的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象此后不会再发生事件。</p>
                     * @return LastOccurredAt <p>当前查询范围内，该聚合结果中最近的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象此后不会再发生事件。</p>
                     * 
                     */
                    std::string GetLastOccurredAt() const;

                    /**
                     * 设置<p>当前查询范围内，该聚合结果中最近的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象此后不会再发生事件。</p>
                     * @param _lastOccurredAt <p>当前查询范围内，该聚合结果中最近的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象此后不会再发生事件。</p>
                     * 
                     */
                    void SetLastOccurredAt(const std::string& _lastOccurredAt);

                    /**
                     * 判断参数 LastOccurredAt 是否已赋值
                     * @return LastOccurredAt 是否已赋值
                     * 
                     */
                    bool LastOccurredAtHasBeenSet() const;

                private:

                    /**
                     * <p>事件唯一标识，用于区分事件及识别重复投递。聚合模式下为该聚合结果代表事件的标识。</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>事件来源。</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>事件关联的对象类型。</p>
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * <p>事件关联的对象 ID。</p>
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>事件级别。Normal 表示正常事件，Warning 表示告警事件。</p>
                     */
                    std::string m_eventLevel;
                    bool m_eventLevelHasBeenSet;

                    /**
                     * <p>事件类型。</p>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * <p>事件原因标识，无原因信息时不返回。例如 Manual 表示通过停止接口主动停止，包括人工、脚本或 SDK 调用，不代表一定由人工操作。</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * <p>事件的说明文本。建议使用 EventType 和 Reason 判断事件类型及原因，不依赖说明文本进行业务判断。</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>事件扩展信息，以 JSON 字符串返回。当前 Sandbox 事件包含 ToolId、ToolType，以及可选的 ToolName。调用方需解析 JSON 字符串后读取扩展字段。</p>
                     */
                    std::string m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * <p>事件发生时间，RFC3339 格式。仅 Raw 模式返回。</p>
                     */
                    std::string m_occurredAt;
                    bool m_occurredAtHasBeenSet;

                    /**
                     * <p>当前查询范围内，该聚合结果包含的去重事件数。仅 Aggregate 模式返回。当前生命周期事件逐条展示，该值为 1。</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>当前查询范围内，该聚合结果中最早的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象历史上的首次事件时间。</p>
                     */
                    std::string m_firstOccurredAt;
                    bool m_firstOccurredAtHasBeenSet;

                    /**
                     * <p>当前查询范围内，该聚合结果中最近的事件发生时间，RFC3339 格式。仅 Aggregate 模式返回，不代表该对象此后不会再发生事件。</p>
                     */
                    std::string m_lastOccurredAt;
                    bool m_lastOccurredAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_EVENTITEM_H_
