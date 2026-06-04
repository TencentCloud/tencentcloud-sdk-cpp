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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationContent.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Message 消息信息
                */
                class ConversationMessage : public AbstractModel
                {
                public:
                    ConversationMessage();
                    ~ConversationMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>会话 ID</p>
                     * @return ConversationId <p>会话 ID</p>
                     * 
                     */
                    std::string GetConversationId() const;

                    /**
                     * 设置<p>会话 ID</p>
                     * @param _conversationId <p>会话 ID</p>
                     * 
                     */
                    void SetConversationId(const std::string& _conversationId);

                    /**
                     * 判断参数 ConversationId 是否已赋值
                     * @return ConversationId 是否已赋值
                     * 
                     */
                    bool ConversationIdHasBeenSet() const;

                    /**
                     * 获取<p>消息图标</p>
                     * @return Icon <p>消息图标</p>
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置<p>消息图标</p>
                     * @param _icon <p>消息图标</p>
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取<p>消息 ID</p>
                     * @return MessageId <p>消息 ID</p>
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置<p>消息 ID</p>
                     * @param _messageId <p>消息 ID</p>
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取<p>消息名称</p>
                     * @return Name <p>消息名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>消息名称</p>
                     * @param _name <p>消息名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>记录 ID</p>
                     * @return RecordId <p>记录 ID</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>记录 ID</p>
                     * @param _recordId <p>记录 ID</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>消息角色</p>
                     * @return Role <p>消息角色</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>消息角色</p>
                     * @param _role <p>消息角色</p>
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
                     * 获取<p>消息状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     * @return Status <p>消息状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>消息状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     * @param _status <p>消息状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
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
                     * 获取<p>状态描述</p>
                     * @return StatusDesc <p>状态描述</p>
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置<p>状态描述</p>
                     * @param _statusDesc <p>状态描述</p>
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                    /**
                     * 获取<p>消息标题</p>
                     * @return Title <p>消息标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>消息标题</p>
                     * @param _title <p>消息标题</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>消息内容列表</p>
                     * @return ContentList <p>消息内容列表</p>
                     * 
                     */
                    std::vector<ConversationContent> GetContentList() const;

                    /**
                     * 设置<p>消息内容列表</p>
                     * @param _contentList <p>消息内容列表</p>
                     * 
                     */
                    void SetContentList(const std::vector<ConversationContent>& _contentList);

                    /**
                     * 判断参数 ContentList 是否已赋值
                     * @return ContentList 是否已赋值
                     * 
                     */
                    bool ContentListHasBeenSet() const;

                    /**
                     * 获取<p>消息内容列表</p>
                     * @return Contents <p>消息内容列表</p>
                     * 
                     */
                    std::vector<ConversationContent> GetContents() const;

                    /**
                     * 设置<p>消息内容列表</p>
                     * @param _contents <p>消息内容列表</p>
                     * 
                     */
                    void SetContents(const std::vector<ConversationContent>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取<p>类型</p>
                     * @return Type <p>类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _type <p>类型</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>会话 ID</p>
                     */
                    std::string m_conversationId;
                    bool m_conversationIdHasBeenSet;

                    /**
                     * <p>消息图标</p>
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * <p>消息 ID</p>
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * <p>消息名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>记录 ID</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>消息角色</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>消息状态，pending:待执行，processing:处理中，success:已完成，failed:处理失败，stop:已取消</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态描述</p>
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                    /**
                     * <p>消息标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>消息内容列表</p>
                     */
                    std::vector<ConversationContent> m_contentList;
                    bool m_contentListHasBeenSet;

                    /**
                     * <p>消息内容列表</p>
                     */
                    std::vector<ConversationContent> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * <p>类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMESSAGE_H_
