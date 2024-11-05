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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADMESSAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/ThreadMessageInCompleteDetailsObject.h>
#include <tencentcloud/hunyuan/v20230901/model/ThreadMessageAttachmentObject.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 会话消息
                */
                class ThreadMessage : public AbstractModel
                {
                public:
                    ThreadMessage();
                    ~ThreadMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息 ID
                     * @return ID 消息 ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置消息 ID
                     * @param _iD 消息 ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取对象类型
                     * @return Object 对象类型
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置对象类型
                     * @param _object 对象类型
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const int64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取会话 ID
                     * @return ThreadID 会话 ID
                     * 
                     */
                    std::string GetThreadID() const;

                    /**
                     * 设置会话 ID
                     * @param _threadID 会话 ID
                     * 
                     */
                    void SetThreadID(const std::string& _threadID);

                    /**
                     * 判断参数 ThreadID 是否已赋值
                     * @return ThreadID 是否已赋值
                     * 
                     */
                    bool ThreadIDHasBeenSet() const;

                    /**
                     * 获取状态，处理中 in_progress，已完成 completed，未完成 incomplete。 
                     * @return Status 状态，处理中 in_progress，已完成 completed，未完成 incomplete。 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，处理中 in_progress，已完成 completed，未完成 incomplete。 
                     * @param _status 状态，处理中 in_progress，已完成 completed，未完成 incomplete。 
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取未完成原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCompleteDetails 未完成原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ThreadMessageInCompleteDetailsObject GetInCompleteDetails() const;

                    /**
                     * 设置未完成原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCompleteDetails 未完成原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCompleteDetails(const ThreadMessageInCompleteDetailsObject& _inCompleteDetails);

                    /**
                     * 判断参数 InCompleteDetails 是否已赋值
                     * @return InCompleteDetails 是否已赋值
                     * 
                     */
                    bool InCompleteDetailsHasBeenSet() const;

                    /**
                     * 获取完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompletedAt 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCompletedAt() const;

                    /**
                     * 设置完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completedAt 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompletedAt(const int64_t& _completedAt);

                    /**
                     * 判断参数 CompletedAt 是否已赋值
                     * @return CompletedAt 是否已赋值
                     * 
                     */
                    bool CompletedAtHasBeenSet() const;

                    /**
                     * 获取未完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InCompleteAt 未完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInCompleteAt() const;

                    /**
                     * 设置未完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inCompleteAt 未完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInCompleteAt(const int64_t& _inCompleteAt);

                    /**
                     * 判断参数 InCompleteAt 是否已赋值
                     * @return InCompleteAt 是否已赋值
                     * 
                     */
                    bool InCompleteAtHasBeenSet() const;

                    /**
                     * 获取角色
                     * @return Role 角色
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色
                     * @param _role 角色
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Content 内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容
                     * @param _content 内容
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
                     * 获取助手 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssistantID 助手 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssistantID() const;

                    /**
                     * 设置助手 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assistantID 助手 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssistantID(const std::string& _assistantID);

                    /**
                     * 判断参数 AssistantID 是否已赋值
                     * @return AssistantID 是否已赋值
                     * 
                     */
                    bool AssistantIDHasBeenSet() const;

                    /**
                     * 获取运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunID 运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunID() const;

                    /**
                     * 设置运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runID 运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunID(const std::string& _runID);

                    /**
                     * 判断参数 RunID 是否已赋值
                     * @return RunID 是否已赋值
                     * 
                     */
                    bool RunIDHasBeenSet() const;

                    /**
                     * 获取附件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attachments 附件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ThreadMessageAttachmentObject> GetAttachments() const;

                    /**
                     * 设置附件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachments 附件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachments(const std::vector<ThreadMessageAttachmentObject>& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     * 
                     */
                    bool AttachmentsHasBeenSet() const;

                private:

                    /**
                     * 消息 ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 对象类型
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 会话 ID
                     */
                    std::string m_threadID;
                    bool m_threadIDHasBeenSet;

                    /**
                     * 状态，处理中 in_progress，已完成 completed，未完成 incomplete。 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 未完成原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ThreadMessageInCompleteDetailsObject m_inCompleteDetails;
                    bool m_inCompleteDetailsHasBeenSet;

                    /**
                     * 完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_completedAt;
                    bool m_completedAtHasBeenSet;

                    /**
                     * 未完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_inCompleteAt;
                    bool m_inCompleteAtHasBeenSet;

                    /**
                     * 角色
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 助手 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assistantID;
                    bool m_assistantIDHasBeenSet;

                    /**
                     * 运行 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runID;
                    bool m_runIDHasBeenSet;

                    /**
                     * 附件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ThreadMessageAttachmentObject> m_attachments;
                    bool m_attachmentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADMESSAGE_H_
