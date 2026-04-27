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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APIKEYAUTHAPPLYVO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APIKEYAUTHAPPLYVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 创建ApiKey接口出参
                */
                class ApiKeyAuthApplyVO : public AbstractModel
                {
                public:
                    ApiKeyAuthApplyVO();
                    ~ApiKeyAuthApplyVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>企业id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpId <p>企业id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置<p>企业id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpId <p>企业id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取<p>apiKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiKey <p>apiKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiKey() const;

                    /**
                     * 设置<p>apiKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiKey <p>apiKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiKey(const std::string& _apiKey);

                    /**
                     * 判断参数 ApiKey 是否已赋值
                     * @return ApiKey 是否已赋值
                     * 
                     */
                    bool ApiKeyHasBeenSet() const;

                    /**
                     * 获取<p>默认用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultUser <p>默认用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultUser() const;

                    /**
                     * 设置<p>默认用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultUser <p>默认用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultUser(const std::string& _defaultUser);

                    /**
                     * 判断参数 DefaultUser 是否已赋值
                     * @return DefaultUser 是否已赋值
                     * 
                     */
                    bool DefaultUserHasBeenSet() const;

                    /**
                     * 获取<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedUser <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdUser <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedUser <p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置<p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedUser <p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>企业id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * <p>apiKey</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiKey;
                    bool m_apiKeyHasBeenSet;

                    /**
                     * <p>默认用户</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultUser;
                    bool m_defaultUserHasBeenSet;

                    /**
                     * <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APIKEYAUTHAPPLYVO_H_
