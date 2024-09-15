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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONTEXT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/MsgFileInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 获取不满意回复上下文响
                */
                class Context : public AbstractModel
                {
                public:
                    Context();
                    ~Context() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息记录ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordBizId 消息记录ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordBizId() const;

                    /**
                     * 设置消息记录ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordBizId 消息记录ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordBizId(const std::string& _recordBizId);

                    /**
                     * 判断参数 RecordBizId 是否已赋值
                     * @return RecordBizId 是否已赋值
                     * 
                     */
                    bool RecordBizIdHasBeenSet() const;

                    /**
                     * 获取是否为用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVisitor 是否为用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsVisitor() const;

                    /**
                     * 设置是否为用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isVisitor 是否为用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsVisitor(const bool& _isVisitor);

                    /**
                     * 判断参数 IsVisitor 是否已赋值
                     * @return IsVisitor 是否已赋值
                     * 
                     */
                    bool IsVisitorHasBeenSet() const;

                    /**
                     * 获取昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NickName 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nickName 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Avatar 头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avatar 头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 消息内容
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
                     * 获取文档信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileInfos 文档信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MsgFileInfo> GetFileInfos() const;

                    /**
                     * 设置文档信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileInfos 文档信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileInfos(const std::vector<MsgFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取回复方式，15：澄清确认回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplyMethod 回复方式，15：澄清确认回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplyMethod() const;

                    /**
                     * 设置回复方式，15：澄清确认回复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replyMethod 回复方式，15：澄清确认回复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplyMethod(const uint64_t& _replyMethod);

                    /**
                     * 判断参数 ReplyMethod 是否已赋值
                     * @return ReplyMethod 是否已赋值
                     * 
                     */
                    bool ReplyMethodHasBeenSet() const;

                private:

                    /**
                     * 消息记录ID信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordBizId;
                    bool m_recordBizIdHasBeenSet;

                    /**
                     * 是否为用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVisitor;
                    bool m_isVisitorHasBeenSet;

                    /**
                     * 昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 头像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 消息内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 文档信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MsgFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 回复方式，15：澄清确认回复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replyMethod;
                    bool m_replyMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONTEXT_H_
