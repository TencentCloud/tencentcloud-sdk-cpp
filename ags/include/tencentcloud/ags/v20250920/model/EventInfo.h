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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_EVENTINFO_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_EVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/EventContentInfo.h>
#include <tencentcloud/ags/v20250920/model/EventActionsInfo.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 事件信息
                */
                class EventInfo : public AbstractModel
                {
                public:
                    EventInfo();
                    ~EventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>事件 ID。为空时由服务生成。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId <p>事件 ID。为空时由服务生成。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件 ID。为空时由服务生成。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventId <p>事件 ID。为空时由服务生成。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>调用 ID，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvocationId <p>调用 ID，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置<p>调用 ID，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invocationId <p>调用 ID，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取<p>事件作者，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Author <p>事件作者，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置<p>事件作者，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _author <p>事件作者，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取<p>事件内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>事件内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EventContentInfo GetContent() const;

                    /**
                     * 设置<p>事件内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content <p>事件内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const EventContentInfo& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>事件动作信息。StateDelta 为 JSON 对象字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Actions <p>事件动作信息。StateDelta 为 JSON 对象字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EventActionsInfo GetActions() const;

                    /**
                     * 设置<p>事件动作信息。StateDelta 为 JSON 对象字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actions <p>事件动作信息。StateDelta 为 JSON 对象字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActions(const EventActionsInfo& _actions);

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取<p>事件元数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadata <p>事件元数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetadata() const;

                    /**
                     * 设置<p>事件元数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadata <p>事件元数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadata(const std::string& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>事件扩展信息 JSON 对象字符串，最大长度 8192 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extensions <p>事件扩展信息 JSON 对象字符串，最大长度 8192 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtensions() const;

                    /**
                     * 设置<p>事件扩展信息 JSON 对象字符串，最大长度 8192 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extensions <p>事件扩展信息 JSON 对象字符串，最大长度 8192 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>错误码，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode <p>错误码，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置<p>错误码，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode <p>错误码，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息，最大长度 2048 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>错误信息，最大长度 2048 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>错误信息，最大长度 2048 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage <p>错误信息，最大长度 2048 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>事件时间。</p>
                     * @return Timestamp <p>事件时间。</p>
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置<p>事件时间。</p>
                     * @param _timestamp <p>事件时间。</p>
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * <p>事件 ID。为空时由服务生成。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>调用 ID，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * <p>事件作者，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * <p>事件内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EventContentInfo m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>事件动作信息。StateDelta 为 JSON 对象字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EventActionsInfo m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * <p>事件元数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>事件扩展信息 JSON 对象字符串，最大长度 8192 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extensions;
                    bool m_extensionsHasBeenSet;

                    /**
                     * <p>错误码，最大长度 128 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>错误信息，最大长度 2048 字符。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>事件时间。</p>
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_EVENTINFO_H_
