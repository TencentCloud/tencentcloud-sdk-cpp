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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_MESSAGEINFO_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_MESSAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/ContentBlockInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 消息实体
                */
                class MessageInfo : public AbstractModel
                {
                public:
                    MessageInfo();
                    ~MessageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实体id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntryId <p>实体id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntryId() const;

                    /**
                     * 设置<p>实体id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entryId <p>实体id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEntryId(const std::string& _entryId);

                    /**
                     * 判断参数 EntryId 是否已赋值
                     * @return EntryId 是否已赋值
                     * 
                     */
                    bool EntryIdHasBeenSet() const;

                    /**
                     * 获取<p>会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId <p>会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId <p>会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>角色: user / assistant</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Role <p>角色: user / assistant</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>角色: user / assistant</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _role <p>角色: user / assistant</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content <p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content <p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>块内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentBlocks <p>块内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ContentBlockInfo> GetContentBlocks() const;

                    /**
                     * 设置<p>块内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentBlocks <p>块内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentBlocks(const std::vector<ContentBlockInfo>& _contentBlocks);

                    /**
                     * 判断参数 ContentBlocks 是否已赋值
                     * @return ContentBlocks 是否已赋值
                     * 
                     */
                    bool ContentBlocksHasBeenSet() const;

                private:

                    /**
                     * <p>实体id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entryId;
                    bool m_entryIdHasBeenSet;

                    /**
                     * <p>会话 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>角色: user / assistant</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>消息内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>块内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ContentBlockInfo> m_contentBlocks;
                    bool m_contentBlocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_MESSAGEINFO_H_
