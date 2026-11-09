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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEMCPTOKEN_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEMCPTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓实例MCP Token
                */
                class AndroidInstanceMCPToken : public AbstractModel
                {
                public:
                    AndroidInstanceMCPToken();
                    ~AndroidInstanceMCPToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内部 ID，格式 k_ + 16 位 hex</p>
                     * @return TokenId <p>内部 ID，格式 k_ + 16 位 hex</p>
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置<p>内部 ID，格式 k_ + 16 位 hex</p>
                     * @param _tokenId <p>内部 ID，格式 k_ + 16 位 hex</p>
                     * 
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取<p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p>
                     * @return Role <p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p>
                     * @param _role <p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p>
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
                     * 获取<p>备注名</p>
                     * @return TokenName <p>备注名</p>
                     * 
                     */
                    std::string GetTokenName() const;

                    /**
                     * 设置<p>备注名</p>
                     * @param _tokenName <p>备注名</p>
                     * 
                     */
                    void SetTokenName(const std::string& _tokenName);

                    /**
                     * 判断参数 TokenName 是否已赋值
                     * @return TokenName 是否已赋值
                     * 
                     */
                    bool TokenNameHasBeenSet() const;

                    /**
                     * 获取<p>USER 角色可访问的实例白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowedInstanceIds <p>USER 角色可访问的实例白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAllowedInstanceIds() const;

                    /**
                     * 设置<p>USER 角色可访问的实例白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowedInstanceIds <p>USER 角色可访问的实例白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowedInstanceIds(const std::vector<std::string>& _allowedInstanceIds);

                    /**
                     * 判断参数 AllowedInstanceIds 是否已赋值
                     * @return AllowedInstanceIds 是否已赋值
                     * 
                     */
                    bool AllowedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>参数格式：ISO8601 字符串；</p>
                     * @return CreateTime <p>创建时间</p><p>参数格式：ISO8601 字符串；</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：ISO8601 字符串；</p>
                     * @param _createTime <p>创建时间</p><p>参数格式：ISO8601 字符串；</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p><p>参数格式：ISO8601 字符串；永不过期时为空串</p>
                     * @return ExpiresTime <p>过期时间</p><p>参数格式：ISO8601 字符串；永不过期时为空串</p>
                     * 
                     */
                    std::string GetExpiresTime() const;

                    /**
                     * 设置<p>过期时间</p><p>参数格式：ISO8601 字符串；永不过期时为空串</p>
                     * @param _expiresTime <p>过期时间</p><p>参数格式：ISO8601 字符串；永不过期时为空串</p>
                     * 
                     */
                    void SetExpiresTime(const std::string& _expiresTime);

                    /**
                     * 判断参数 ExpiresTime 是否已赋值
                     * @return ExpiresTime 是否已赋值
                     * 
                     */
                    bool ExpiresTimeHasBeenSet() const;

                    /**
                     * 获取<p>或 EXPIRED；EXPIRED 由 ExpiresTime 推导。已删除的不出现在列表里</p><p>枚举值：</p><ul><li>ACTIVE： 正常可用的</li><li>EXPIRED： 过期的</li></ul>
                     * @return Status <p>或 EXPIRED；EXPIRED 由 ExpiresTime 推导。已删除的不出现在列表里</p><p>枚举值：</p><ul><li>ACTIVE： 正常可用的</li><li>EXPIRED： 过期的</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>或 EXPIRED；EXPIRED 由 ExpiresTime 推导。已删除的不出现在列表里</p><p>枚举值：</p><ul><li>ACTIVE： 正常可用的</li><li>EXPIRED： 过期的</li></ul>
                     * @param _status <p>或 EXPIRED；EXPIRED 由 ExpiresTime 推导。已删除的不出现在列表里</p><p>枚举值：</p><ul><li>ACTIVE： 正常可用的</li><li>EXPIRED： 过期的</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>内部 ID，格式 k_ + 16 位 hex</p>
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * <p>ROOT / USER（大小写敏感），默认 USER。ROOT 可访问该 AppId 下全部实例</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>备注名</p>
                     */
                    std::string m_tokenName;
                    bool m_tokenNameHasBeenSet;

                    /**
                     * <p>USER 角色可访问的实例白名单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allowedInstanceIds;
                    bool m_allowedInstanceIdsHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：ISO8601 字符串；</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>过期时间</p><p>参数格式：ISO8601 字符串；永不过期时为空串</p>
                     */
                    std::string m_expiresTime;
                    bool m_expiresTimeHasBeenSet;

                    /**
                     * <p>或 EXPIRED；EXPIRED 由 ExpiresTime 推导。已删除的不出现在列表里</p><p>枚举值：</p><ul><li>ACTIVE： 正常可用的</li><li>EXPIRED： 过期的</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEMCPTOKEN_H_
