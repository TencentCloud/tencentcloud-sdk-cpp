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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONDETAIL_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameServerSession.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 游戏服务器会话详情（GameServerSessionDetail）
                */
                class GameServerSessionDetail : public AbstractModel
                {
                public:
                    GameServerSessionDetail();
                    ~GameServerSessionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取游戏服务器会话
                     * @return GameServerSession 游戏服务器会话
                     * 
                     */
                    GameServerSession GetGameServerSession() const;

                    /**
                     * 设置游戏服务器会话
                     * @param _gameServerSession 游戏服务器会话
                     * 
                     */
                    void SetGameServerSession(const GameServerSession& _gameServerSession);

                    /**
                     * 判断参数 GameServerSession 是否已赋值
                     * @return GameServerSession 是否已赋值
                     * 
                     */
                    bool GameServerSessionHasBeenSet() const;

                    /**
                     * 获取保护策略，可选（NoProtection,FullProtection）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectionPolicy 保护策略，可选（NoProtection,FullProtection）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtectionPolicy() const;

                    /**
                     * 设置保护策略，可选（NoProtection,FullProtection）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectionPolicy 保护策略，可选（NoProtection,FullProtection）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtectionPolicy(const std::string& _protectionPolicy);

                    /**
                     * 判断参数 ProtectionPolicy 是否已赋值
                     * @return ProtectionPolicy 是否已赋值
                     * 
                     */
                    bool ProtectionPolicyHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话
                     */
                    GameServerSession m_gameServerSession;
                    bool m_gameServerSessionHasBeenSet;

                    /**
                     * 保护策略，可选（NoProtection,FullProtection）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protectionPolicy;
                    bool m_protectionPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONDETAIL_H_
