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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/ResourceCreationLimitPolicy.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * UpdateFleetAttributes请求参数结构体
                */
                class UpdateFleetAttributesRequest : public AbstractModel
                {
                public:
                    UpdateFleetAttributesRequest();
                    ~UpdateFleetAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队 Id
                     * @return FleetId 服务器舰队 Id
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队 Id
                     * @param FleetId 服务器舰队 Id
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取服务器舰队描述
                     * @return Description 服务器舰队描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置服务器舰队描述
                     * @param Description 服务器舰队描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取服务器舰队名称
                     * @return Name 服务器舰队名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务器舰队名称
                     * @param Name 服务器舰队名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取新建游戏会话保护策略
                     * @return NewGameSessionProtectionPolicy 新建游戏会话保护策略
                     */
                    std::string GetNewGameSessionProtectionPolicy() const;

                    /**
                     * 设置新建游戏会话保护策略
                     * @param NewGameSessionProtectionPolicy 新建游戏会话保护策略
                     */
                    void SetNewGameSessionProtectionPolicy(const std::string& _newGameSessionProtectionPolicy);

                    /**
                     * 判断参数 NewGameSessionProtectionPolicy 是否已赋值
                     * @return NewGameSessionProtectionPolicy 是否已赋值
                     */
                    bool NewGameSessionProtectionPolicyHasBeenSet() const;

                    /**
                     * 获取资源创建限制策略
                     * @return ResourceCreationLimitPolicy 资源创建限制策略
                     */
                    ResourceCreationLimitPolicy GetResourceCreationLimitPolicy() const;

                    /**
                     * 设置资源创建限制策略
                     * @param ResourceCreationLimitPolicy 资源创建限制策略
                     */
                    void SetResourceCreationLimitPolicy(const ResourceCreationLimitPolicy& _resourceCreationLimitPolicy);

                    /**
                     * 判断参数 ResourceCreationLimitPolicy 是否已赋值
                     * @return ResourceCreationLimitPolicy 是否已赋值
                     */
                    bool ResourceCreationLimitPolicyHasBeenSet() const;

                    /**
                     * 获取时限保护超时时间，默认60分钟
                     * @return GameServerSessionProtectionTimeLimit 时限保护超时时间，默认60分钟
                     */
                    int64_t GetGameServerSessionProtectionTimeLimit() const;

                    /**
                     * 设置时限保护超时时间，默认60分钟
                     * @param GameServerSessionProtectionTimeLimit 时限保护超时时间，默认60分钟
                     */
                    void SetGameServerSessionProtectionTimeLimit(const int64_t& _gameServerSessionProtectionTimeLimit);

                    /**
                     * 判断参数 GameServerSessionProtectionTimeLimit 是否已赋值
                     * @return GameServerSessionProtectionTimeLimit 是否已赋值
                     */
                    bool GameServerSessionProtectionTimeLimitHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队 Id
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 服务器舰队描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 服务器舰队名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 新建游戏会话保护策略
                     */
                    std::string m_newGameSessionProtectionPolicy;
                    bool m_newGameSessionProtectionPolicyHasBeenSet;

                    /**
                     * 资源创建限制策略
                     */
                    ResourceCreationLimitPolicy m_resourceCreationLimitPolicy;
                    bool m_resourceCreationLimitPolicyHasBeenSet;

                    /**
                     * 时限保护超时时间，默认60分钟
                     */
                    int64_t m_gameServerSessionProtectionTimeLimit;
                    bool m_gameServerSessionProtectionTimeLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETATTRIBUTESREQUEST_H_
