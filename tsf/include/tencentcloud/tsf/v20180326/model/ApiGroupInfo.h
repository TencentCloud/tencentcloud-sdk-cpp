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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APIGROUPINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APIGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GatewayDeployGroup.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * API分组信息
                */
                class ApiGroupInfo : public AbstractModel
                {
                public:
                    ApiGroupInfo();
                    ~ApiGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Api Group Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId Api Group Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Api Group Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId Api Group Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Api Group 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName Api Group 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Api Group 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName Api Group 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取分组上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupContext 分组上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupContext() const;

                    /**
                     * 设置分组上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupContext 分组上下文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupContext(const std::string& _groupContext);

                    /**
                     * 判断参数 GroupContext 是否已赋值
                     * @return GroupContext 是否已赋值
                     * 
                     */
                    bool GroupContextHasBeenSet() const;

                    /**
                     * 获取鉴权类型。 secret： 密钥鉴权； none:无鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthType 鉴权类型。 secret： 密钥鉴权； none:无鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置鉴权类型。 secret： 密钥鉴权； none:无鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authType 鉴权类型。 secret： 密钥鉴权； none:无鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取发布状态, drafted: 未发布。 released: 发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 发布状态, drafted: 未发布。 released: 发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置发布状态, drafted: 未发布。 released: 发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 发布状态, drafted: 未发布。 released: 发布
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分组创建时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedTime 分组创建时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置分组创建时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdTime 分组创建时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取分组更新时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedTime 分组更新时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置分组更新时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedTime 分组更新时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取api分组已绑定的网关部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindedGatewayDeployGroups api分组已绑定的网关部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GatewayDeployGroup> GetBindedGatewayDeployGroups() const;

                    /**
                     * 设置api分组已绑定的网关部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindedGatewayDeployGroups api分组已绑定的网关部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindedGatewayDeployGroups(const std::vector<GatewayDeployGroup>& _bindedGatewayDeployGroups);

                    /**
                     * 判断参数 BindedGatewayDeployGroups 是否已赋值
                     * @return BindedGatewayDeployGroups 是否已赋值
                     * 
                     */
                    bool BindedGatewayDeployGroupsHasBeenSet() const;

                    /**
                     * 获取api 个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiCount api 个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetApiCount() const;

                    /**
                     * 设置api 个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiCount api 个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiCount(const int64_t& _apiCount);

                    /**
                     * 判断参数 ApiCount 是否已赋值
                     * @return ApiCount 是否已赋值
                     * 
                     */
                    bool ApiCountHasBeenSet() const;

                    /**
                     * 获取访问group的ACL类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AclMode 访问group的ACL类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAclMode() const;

                    /**
                     * 设置访问group的ACL类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aclMode 访问group的ACL类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAclMode(const std::string& _aclMode);

                    /**
                     * 判断参数 AclMode 是否已赋值
                     * @return AclMode 是否已赋值
                     * 
                     */
                    bool AclModeHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取分组类型。 ms： 微服务分组； external:外部Api分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupType 分组类型。 ms： 微服务分组； external:外部Api分组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置分组类型。 ms： 微服务分组； external:外部Api分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupType 分组类型。 ms： 微服务分组； external:外部Api分组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取网关实例的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayInstanceType 网关实例的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayInstanceType() const;

                    /**
                     * 设置网关实例的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayInstanceType 网关实例的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayInstanceType(const std::string& _gatewayInstanceType);

                    /**
                     * 判断参数 GatewayInstanceType 是否已赋值
                     * @return GatewayInstanceType 是否已赋值
                     * 
                     */
                    bool GatewayInstanceTypeHasBeenSet() const;

                    /**
                     * 获取网关实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayInstanceId 网关实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayInstanceId 网关实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

                    /**
                     * 获取命名空间参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceNameKey 命名空间参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceNameKey() const;

                    /**
                     * 设置命名空间参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceNameKey 命名空间参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceNameKey(const std::string& _namespaceNameKey);

                    /**
                     * 判断参数 NamespaceNameKey 是否已赋值
                     * @return NamespaceNameKey 是否已赋值
                     * 
                     */
                    bool NamespaceNameKeyHasBeenSet() const;

                    /**
                     * 获取微服务名参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceNameKey 微服务名参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceNameKey() const;

                    /**
                     * 设置微服务名参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceNameKey 微服务名参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceNameKey(const std::string& _serviceNameKey);

                    /**
                     * 判断参数 ServiceNameKey 是否已赋值
                     * @return ServiceNameKey 是否已赋值
                     * 
                     */
                    bool ServiceNameKeyHasBeenSet() const;

                    /**
                     * 获取命名空间参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceNameKeyPosition 命名空间参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceNameKeyPosition() const;

                    /**
                     * 设置命名空间参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceNameKeyPosition 命名空间参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceNameKeyPosition(const std::string& _namespaceNameKeyPosition);

                    /**
                     * 判断参数 NamespaceNameKeyPosition 是否已赋值
                     * @return NamespaceNameKeyPosition 是否已赋值
                     * 
                     */
                    bool NamespaceNameKeyPositionHasBeenSet() const;

                    /**
                     * 获取微服务名参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceNameKeyPosition 微服务名参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceNameKeyPosition() const;

                    /**
                     * 设置微服务名参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceNameKeyPosition 微服务名参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceNameKeyPosition(const std::string& _serviceNameKeyPosition);

                    /**
                     * 判断参数 ServiceNameKeyPosition 是否已赋值
                     * @return ServiceNameKeyPosition 是否已赋值
                     * 
                     */
                    bool ServiceNameKeyPositionHasBeenSet() const;

                    /**
                     * 获取网关实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayInstanceIdList 网关实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGatewayInstanceIdList() const;

                    /**
                     * 设置网关实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayInstanceIdList 网关实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayInstanceIdList(const std::vector<std::string>& _gatewayInstanceIdList);

                    /**
                     * 判断参数 GatewayInstanceIdList 是否已赋值
                     * @return GatewayInstanceIdList 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdListHasBeenSet() const;

                private:

                    /**
                     * Api Group Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Api Group 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 分组上下文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupContext;
                    bool m_groupContextHasBeenSet;

                    /**
                     * 鉴权类型。 secret： 密钥鉴权； none:无鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 发布状态, drafted: 未发布。 released: 发布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分组创建时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 分组更新时间 如:2019-06-20 15:51:28
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * api分组已绑定的网关部署组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GatewayDeployGroup> m_bindedGatewayDeployGroups;
                    bool m_bindedGatewayDeployGroupsHasBeenSet;

                    /**
                     * api 个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_apiCount;
                    bool m_apiCountHasBeenSet;

                    /**
                     * 访问group的ACL类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aclMode;
                    bool m_aclModeHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 分组类型。 ms： 微服务分组； external:外部Api分组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 网关实例的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayInstanceType;
                    bool m_gatewayInstanceTypeHasBeenSet;

                    /**
                     * 网关实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                    /**
                     * 命名空间参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceNameKey;
                    bool m_namespaceNameKeyHasBeenSet;

                    /**
                     * 微服务名参数key值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceNameKey;
                    bool m_serviceNameKeyHasBeenSet;

                    /**
                     * 命名空间参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceNameKeyPosition;
                    bool m_namespaceNameKeyPositionHasBeenSet;

                    /**
                     * 微服务名参数位置，path，header或query，默认是path
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceNameKeyPosition;
                    bool m_serviceNameKeyPositionHasBeenSet;

                    /**
                     * 网关实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_gatewayInstanceIdList;
                    bool m_gatewayInstanceIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIGROUPINFO_H_
