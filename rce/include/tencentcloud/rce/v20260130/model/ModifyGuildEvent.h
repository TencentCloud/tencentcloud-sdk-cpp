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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYGUILDEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYGUILDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
#include <tencentcloud/rce/v20260130/model/Guild.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 编辑公会资料事件详情
                */
                class ModifyGuildEvent : public AbstractModel
                {
                public:
                    ModifyGuildEvent();
                    ~ModifyGuildEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>修改后的公会名，允许空串</p>
                     * @return GuildNameAfter <p>修改后的公会名，允许空串</p>
                     * 
                     */
                    std::string GetGuildNameAfter() const;

                    /**
                     * 设置<p>修改后的公会名，允许空串</p>
                     * @param _guildNameAfter <p>修改后的公会名，允许空串</p>
                     * 
                     */
                    void SetGuildNameAfter(const std::string& _guildNameAfter);

                    /**
                     * 判断参数 GuildNameAfter 是否已赋值
                     * @return GuildNameAfter 是否已赋值
                     * 
                     */
                    bool GuildNameAfterHasBeenSet() const;

                    /**
                     * 获取<p>修改后的公会签名，允许空串</p>
                     * @return GuildSignatureAfter <p>修改后的公会签名，允许空串</p>
                     * 
                     */
                    std::string GetGuildSignatureAfter() const;

                    /**
                     * 设置<p>修改后的公会签名，允许空串</p>
                     * @param _guildSignatureAfter <p>修改后的公会签名，允许空串</p>
                     * 
                     */
                    void SetGuildSignatureAfter(const std::string& _guildSignatureAfter);

                    /**
                     * 判断参数 GuildSignatureAfter 是否已赋值
                     * @return GuildSignatureAfter 是否已赋值
                     * 
                     */
                    bool GuildSignatureAfterHasBeenSet() const;

                    /**
                     * 获取<p>所属服务器ID，允许空串</p>
                     * @return ServerId <p>所属服务器ID，允许空串</p>
                     * 
                     */
                    std::string GetServerId() const;

                    /**
                     * 设置<p>所属服务器ID，允许空串</p>
                     * @param _serverId <p>所属服务器ID，允许空串</p>
                     * 
                     */
                    void SetServerId(const std::string& _serverId);

                    /**
                     * 判断参数 ServerId 是否已赋值
                     * @return ServerId 是否已赋值
                     * 
                     */
                    bool ServerIdHasBeenSet() const;

                    /**
                     * 获取<p>编辑者账号信息</p>
                     * @return UserInfo <p>编辑者账号信息</p>
                     * 
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置<p>编辑者账号信息</p>
                     * @param _userInfo <p>编辑者账号信息</p>
                     * 
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取<p>公会信息</p>
                     * @return Guild <p>公会信息</p>
                     * 
                     */
                    Guild GetGuild() const;

                    /**
                     * 设置<p>公会信息</p>
                     * @param _guild <p>公会信息</p>
                     * 
                     */
                    void SetGuild(const Guild& _guild);

                    /**
                     * 判断参数 Guild 是否已赋值
                     * @return Guild 是否已赋值
                     * 
                     */
                    bool GuildHasBeenSet() const;

                private:

                    /**
                     * <p>修改后的公会名，允许空串</p>
                     */
                    std::string m_guildNameAfter;
                    bool m_guildNameAfterHasBeenSet;

                    /**
                     * <p>修改后的公会签名，允许空串</p>
                     */
                    std::string m_guildSignatureAfter;
                    bool m_guildSignatureAfterHasBeenSet;

                    /**
                     * <p>所属服务器ID，允许空串</p>
                     */
                    std::string m_serverId;
                    bool m_serverIdHasBeenSet;

                    /**
                     * <p>编辑者账号信息</p>
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>公会信息</p>
                     */
                    Guild m_guild;
                    bool m_guildHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYGUILDEVENT_H_
