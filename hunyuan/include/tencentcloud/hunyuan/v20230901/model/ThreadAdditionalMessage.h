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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADADDITIONALMESSAGE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADADDITIONALMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 会话额外消息
                */
                class ThreadAdditionalMessage : public AbstractModel
                {
                public:
                    ThreadAdditionalMessage();
                    ~ThreadAdditionalMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_THREADADDITIONALMESSAGE_H_
