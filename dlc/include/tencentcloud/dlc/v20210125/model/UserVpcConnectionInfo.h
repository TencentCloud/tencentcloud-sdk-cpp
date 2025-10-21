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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_USERVPCCONNECTIONINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_USERVPCCONNECTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 用户vpc网络连接信息
                */
                class UserVpcConnectionInfo : public AbstractModel
                {
                public:
                    UserVpcConnectionInfo();
                    ~UserVpcConnectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineNetworkId 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineNetworkId() const;

                    /**
                     * 设置引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineNetworkId 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineNetworkId(const std::string& _engineNetworkId);

                    /**
                     * 判断参数 EngineNetworkId 是否已赋值
                     * @return EngineNetworkId 是否已赋值
                     * 
                     */
                    bool EngineNetworkIdHasBeenSet() const;

                    /**
                     * 获取用户vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVpcId 用户vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserVpcId() const;

                    /**
                     * 设置用户vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVpcId 用户vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserVpcId(const std::string& _userVpcId);

                    /**
                     * 判断参数 UserVpcId 是否已赋值
                     * @return UserVpcId 是否已赋值
                     * 
                     */
                    bool UserVpcIdHasBeenSet() const;

                    /**
                     * 获取用户终端节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVpcEndpointId 用户终端节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserVpcEndpointId() const;

                    /**
                     * 设置用户终端节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVpcEndpointId 用户终端节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserVpcEndpointId(const std::string& _userVpcEndpointId);

                    /**
                     * 判断参数 UserVpcEndpointId 是否已赋值
                     * @return UserVpcEndpointId 是否已赋值
                     * 
                     */
                    bool UserVpcEndpointIdHasBeenSet() const;

                    /**
                     * 获取用户终端节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVpcEndpointName 用户终端节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserVpcEndpointName() const;

                    /**
                     * 设置用户终端节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVpcEndpointName 用户终端节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserVpcEndpointName(const std::string& _userVpcEndpointName);

                    /**
                     * 判断参数 UserVpcEndpointName 是否已赋值
                     * @return UserVpcEndpointName 是否已赋值
                     * 
                     */
                    bool UserVpcEndpointNameHasBeenSet() const;

                    /**
                     * 获取接入点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessConnectionInfos 接入点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAccessConnectionInfos() const;

                    /**
                     * 设置接入点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessConnectionInfos 接入点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessConnectionInfos(const std::vector<std::string>& _accessConnectionInfos);

                    /**
                     * 判断参数 AccessConnectionInfos 是否已赋值
                     * @return AccessConnectionInfos 是否已赋值
                     * 
                     */
                    bool AccessConnectionInfosHasBeenSet() const;

                private:

                    /**
                     * 引擎网络ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineNetworkId;
                    bool m_engineNetworkIdHasBeenSet;

                    /**
                     * 用户vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userVpcId;
                    bool m_userVpcIdHasBeenSet;

                    /**
                     * 用户终端节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userVpcEndpointId;
                    bool m_userVpcEndpointIdHasBeenSet;

                    /**
                     * 用户终端节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userVpcEndpointName;
                    bool m_userVpcEndpointNameHasBeenSet;

                    /**
                     * 接入点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_accessConnectionInfos;
                    bool m_accessConnectionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_USERVPCCONNECTIONINFO_H_
