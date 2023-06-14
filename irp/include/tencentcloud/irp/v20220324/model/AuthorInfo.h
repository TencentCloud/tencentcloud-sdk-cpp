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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_AUTHORINFO_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_AUTHORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * 作者信息
                */
                class AuthorInfo : public AbstractModel
                {
                public:
                    AuthorInfo();
                    ~AuthorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作者id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 作者id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置作者id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 作者id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取作者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 作者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置作者名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 作者名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取作者来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceId 作者来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSourceId() const;

                    /**
                     * 设置作者来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceId 作者来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceId(const int64_t& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取关注类型：1-关注，2-取关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowType 关注类型：1-关注，2-取关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFollowType() const;

                    /**
                     * 设置关注类型：1-关注，2-取关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followType 关注类型：1-关注，2-取关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFollowType(const int64_t& _followType);

                    /**
                     * 判断参数 FollowType 是否已赋值
                     * @return FollowType 是否已赋值
                     * 
                     */
                    bool FollowTypeHasBeenSet() const;

                    /**
                     * 获取作者头像icon地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IconUrl 作者头像icon地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置作者头像icon地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iconUrl 作者头像icon地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                private:

                    /**
                     * 作者id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 作者名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 作者来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 关注类型：1-关注，2-取关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_followType;
                    bool m_followTypeHasBeenSet;

                    /**
                     * 作者头像icon地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_AUTHORINFO_H_
