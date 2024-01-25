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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHAUDITDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHAUDITDTO_H_

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
                * 代码搜索审计信息
                */
                class CodeSearchAuditDTO : public AbstractModel
                {
                public:
                    CodeSearchAuditDTO();
                    ~CodeSearchAuditDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId 当前租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTenantId() const;

                    /**
                     * 设置当前租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId 当前租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenantId(const uint64_t& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取当前用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserId 当前用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOwnerUserId() const;

                    /**
                     * 设置当前用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserId 当前用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserId(const uint64_t& _ownerUserId);

                    /**
                     * 判断参数 OwnerUserId 是否已赋值
                     * @return OwnerUserId 是否已赋值
                     * 
                     */
                    bool OwnerUserIdHasBeenSet() const;

                    /**
                     * 获取当前用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 当前用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置当前用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 当前用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const uint64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keyword 关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyword 关键词
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 当前租户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 当前用户主账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ownerUserId;
                    bool m_ownerUserIdHasBeenSet;

                    /**
                     * 当前用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 关键词
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CODESEARCHAUDITDTO_H_
