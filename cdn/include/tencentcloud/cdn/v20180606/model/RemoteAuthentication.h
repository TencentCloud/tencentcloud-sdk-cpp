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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/RemoteAuthenticationRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 远程鉴权规则配置，可以包含多种规则配置。
RemoteAuthenticationRules和Server 互斥，只需要配置其中一个。
若只配置Server ，RemoteAuthenticationRules中详细规则参数将采用默认参数；默认参数值见各个配置项中说明；
                */
                class RemoteAuthentication : public AbstractModel
                {
                public:
                    RemoteAuthentication();
                    ~RemoteAuthentication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取远程鉴权配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 远程鉴权配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置远程鉴权配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 远程鉴权配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取远程鉴权规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteAuthenticationRules 远程鉴权规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RemoteAuthenticationRule> GetRemoteAuthenticationRules() const;

                    /**
                     * 设置远程鉴权规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteAuthenticationRules 远程鉴权规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoteAuthenticationRules(const std::vector<RemoteAuthenticationRule>& _remoteAuthenticationRules);

                    /**
                     * 判断参数 RemoteAuthenticationRules 是否已赋值
                     * @return RemoteAuthenticationRules 是否已赋值
                     * 
                     */
                    bool RemoteAuthenticationRulesHasBeenSet() const;

                    /**
                     * 获取远程鉴权Server
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Server 远程鉴权Server
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置远程鉴权Server
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _server 远程鉴权Server
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                private:

                    /**
                     * 远程鉴权配置开关，取值有：
on：开启
off：关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 远程鉴权规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RemoteAuthenticationRule> m_remoteAuthenticationRules;
                    bool m_remoteAuthenticationRulesHasBeenSet;

                    /**
                     * 远程鉴权Server
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATION_H_
