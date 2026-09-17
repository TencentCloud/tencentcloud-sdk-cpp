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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_GUILD_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_GUILD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 公会信息
                */
                class Guild : public AbstractModel
                {
                public:
                    Guild();
                    ~Guild() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>公会唯一ID</p>
                     * @return GuildId <p>公会唯一ID</p>
                     * 
                     */
                    std::string GetGuildId() const;

                    /**
                     * 设置<p>公会唯一ID</p>
                     * @param _guildId <p>公会唯一ID</p>
                     * 
                     */
                    void SetGuildId(const std::string& _guildId);

                    /**
                     * 判断参数 GuildId 是否已赋值
                     * @return GuildId 是否已赋值
                     * 
                     */
                    bool GuildIdHasBeenSet() const;

                    /**
                     * 获取<p>公会名称，允许空串</p>
                     * @return GuildName <p>公会名称，允许空串</p>
                     * 
                     */
                    std::string GetGuildName() const;

                    /**
                     * 设置<p>公会名称，允许空串</p>
                     * @param _guildName <p>公会名称，允许空串</p>
                     * 
                     */
                    void SetGuildName(const std::string& _guildName);

                    /**
                     * 判断参数 GuildName 是否已赋值
                     * @return GuildName 是否已赋值
                     * 
                     */
                    bool GuildNameHasBeenSet() const;

                    /**
                     * 获取<p>公会签名，允许空串</p>
                     * @return GuildSignature <p>公会签名，允许空串</p>
                     * 
                     */
                    std::string GetGuildSignature() const;

                    /**
                     * 设置<p>公会签名，允许空串</p>
                     * @param _guildSignature <p>公会签名，允许空串</p>
                     * 
                     */
                    void SetGuildSignature(const std::string& _guildSignature);

                    /**
                     * 判断参数 GuildSignature 是否已赋值
                     * @return GuildSignature 是否已赋值
                     * 
                     */
                    bool GuildSignatureHasBeenSet() const;

                    /**
                     * 获取<p>公会会长账号ID</p>
                     * @return PresidentUserId <p>公会会长账号ID</p>
                     * 
                     */
                    std::string GetPresidentUserId() const;

                    /**
                     * 设置<p>公会会长账号ID</p>
                     * @param _presidentUserId <p>公会会长账号ID</p>
                     * 
                     */
                    void SetPresidentUserId(const std::string& _presidentUserId);

                    /**
                     * 判断参数 PresidentUserId 是否已赋值
                     * @return PresidentUserId 是否已赋值
                     * 
                     */
                    bool PresidentUserIdHasBeenSet() const;

                    /**
                     * 获取<p>公会会长角色ID</p>
                     * @return PresidentRoleId <p>公会会长角色ID</p>
                     * 
                     */
                    std::string GetPresidentRoleId() const;

                    /**
                     * 设置<p>公会会长角色ID</p>
                     * @param _presidentRoleId <p>公会会长角色ID</p>
                     * 
                     */
                    void SetPresidentRoleId(const std::string& _presidentRoleId);

                    /**
                     * 判断参数 PresidentRoleId 是否已赋值
                     * @return PresidentRoleId 是否已赋值
                     * 
                     */
                    bool PresidentRoleIdHasBeenSet() const;

                private:

                    /**
                     * <p>公会唯一ID</p>
                     */
                    std::string m_guildId;
                    bool m_guildIdHasBeenSet;

                    /**
                     * <p>公会名称，允许空串</p>
                     */
                    std::string m_guildName;
                    bool m_guildNameHasBeenSet;

                    /**
                     * <p>公会签名，允许空串</p>
                     */
                    std::string m_guildSignature;
                    bool m_guildSignatureHasBeenSet;

                    /**
                     * <p>公会会长账号ID</p>
                     */
                    std::string m_presidentUserId;
                    bool m_presidentUserIdHasBeenSet;

                    /**
                     * <p>公会会长角色ID</p>
                     */
                    std::string m_presidentRoleId;
                    bool m_presidentRoleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_GUILD_H_
