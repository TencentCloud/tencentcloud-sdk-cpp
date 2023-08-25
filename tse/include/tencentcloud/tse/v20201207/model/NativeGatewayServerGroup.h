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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVERGROUP_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayNodeConfig.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategy.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关分组信息
                */
                class NativeGatewayServerGroup : public AbstractModel
                {
                public:
                    NativeGatewayServerGroup();
                    ~NativeGatewayServerGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云原生网关分组唯一id
                     * @return GroupId 云原生网关分组唯一id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置云原生网关分组唯一id
                     * @param _groupId 云原生网关分组唯一id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取分组名
                     * @return Name 分组名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分组名
                     * @param _name 分组名
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
                     * 获取描述信息
                     * @return Description 描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param _description 描述信息
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取节点规格、节点数信息
                     * @return NodeConfig 节点规格、节点数信息
                     * 
                     */
                    CloudNativeAPIGatewayNodeConfig GetNodeConfig() const;

                    /**
                     * 设置节点规格、节点数信息
                     * @param _nodeConfig 节点规格、节点数信息
                     * 
                     */
                    void SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig);

                    /**
                     * 判断参数 NodeConfig 是否已赋值
                     * @return NodeConfig 是否已赋值
                     * 
                     */
                    bool NodeConfigHasBeenSet() const;

                    /**
                     * 获取网关分组状态。
                     * @return Status 网关分组状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置网关分组状态。
                     * @param _status 网关分组状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取是否是默认分组。
0：否。
1：是。
                     * @return IsFirstGroup 是否是默认分组。
0：否。
1：是。
                     * 
                     */
                    int64_t GetIsFirstGroup() const;

                    /**
                     * 设置是否是默认分组。
0：否。
1：是。
                     * @param _isFirstGroup 是否是默认分组。
0：否。
1：是。
                     * 
                     */
                    void SetIsFirstGroup(const int64_t& _isFirstGroup);

                    /**
                     * 判断参数 IsFirstGroup 是否已赋值
                     * @return IsFirstGroup 是否已赋值
                     * 
                     */
                    bool IsFirstGroupHasBeenSet() const;

                    /**
                     * 获取关联策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindingStrategy 关联策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CloudNativeAPIGatewayStrategy GetBindingStrategy() const;

                    /**
                     * 设置关联策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindingStrategy 关联策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindingStrategy(const CloudNativeAPIGatewayStrategy& _bindingStrategy);

                    /**
                     * 判断参数 BindingStrategy 是否已赋值
                     * @return BindingStrategy 是否已赋值
                     * 
                     */
                    bool BindingStrategyHasBeenSet() const;

                    /**
                     * 获取网关实例 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayId 网关实例 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例 id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayId 网关实例 id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternetMaxBandwidthOut 带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internetMaxBandwidthOut 带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetIds 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetIds() const;

                    /**
                     * 设置子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetIds 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetIds(const std::string& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * 云原生网关分组唯一id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 节点规格、节点数信息
                     */
                    CloudNativeAPIGatewayNodeConfig m_nodeConfig;
                    bool m_nodeConfigHasBeenSet;

                    /**
                     * 网关分组状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否是默认分组。
0：否。
1：是。
                     */
                    int64_t m_isFirstGroup;
                    bool m_isFirstGroupHasBeenSet;

                    /**
                     * 关联策略信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CloudNativeAPIGatewayStrategy m_bindingStrategy;
                    bool m_bindingStrategyHasBeenSet;

                    /**
                     * 网关实例 id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_NATIVEGATEWAYSERVERGROUP_H_
