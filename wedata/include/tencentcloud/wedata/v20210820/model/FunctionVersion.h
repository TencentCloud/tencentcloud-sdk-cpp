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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONVERSION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 函数提交版本信息
                */
                class FunctionVersion : public AbstractModel
                {
                public:
                    FunctionVersion();
                    ~FunctionVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本号：V0 V1 V2
                     * @return Tag 版本号：V0 V1 V2
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置版本号：V0 V1 V2
                     * @param _tag 版本号：V0 V1 V2
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取提交人 ID
                     * @return UserId 提交人 ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置提交人 ID
                     * @param _userId 提交人 ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取变更类型：ADD、MODIFY
                     * @return Type 变更类型：ADD、MODIFY
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置变更类型：ADD、MODIFY
                     * @param _type 变更类型：ADD、MODIFY
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
                     * 获取备注
                     * @return Comment 备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注
                     * @param _comment 备注
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取提交时间: UTC 秒数
                     * @return Timestamp 提交时间: UTC 秒数
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置提交时间: UTC 秒数
                     * @param _timestamp 提交时间: UTC 秒数
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
                     * 获取提交人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 提交人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置提交人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 提交人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取版本内容：json string 格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 版本内容：json string 格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置版本内容：json string 格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 版本内容：json string 格式
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

                private:

                    /**
                     * 版本号：V0 V1 V2
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 提交人 ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 变更类型：ADD、MODIFY
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 提交时间: UTC 秒数
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 提交人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 版本内容：json string 格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_FUNCTIONVERSION_H_
