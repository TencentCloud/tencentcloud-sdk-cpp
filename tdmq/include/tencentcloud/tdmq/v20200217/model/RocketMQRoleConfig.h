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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROLECONFIG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROLECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/DetailedRolePerm.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ角色配置信息
                */
                class RocketMQRoleConfig : public AbstractModel
                {
                public:
                    RocketMQRoleConfig();
                    ~RocketMQRoleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色名，对应SecretKey
                     * @return RoleName 角色名，对应SecretKey
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名，对应SecretKey
                     * @param _roleName 角色名，对应SecretKey
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取accessKey
                     * @return RoleToken accessKey
                     * 
                     */
                    std::string GetRoleToken() const;

                    /**
                     * 设置accessKey
                     * @param _roleToken accessKey
                     * 
                     */
                    void SetRoleToken(const std::string& _roleToken);

                    /**
                     * 判断参数 RoleToken 是否已赋值
                     * @return RoleToken 是否已赋值
                     * 
                     */
                    bool RoleTokenHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return EnvironmentId 命名空间
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间
                     * @param _environmentId 命名空间
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取角色权限
                     * @return Permissions 角色权限
                     * 
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置角色权限
                     * @param _permissions 角色权限
                     * 
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     * 
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * @return PermType 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * @param _permType 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                    /**
                     * 获取Topic和Group维度权限配置
                     * @return DetailedRolePerms Topic和Group维度权限配置
                     * 
                     */
                    std::vector<DetailedRolePerm> GetDetailedRolePerms() const;

                    /**
                     * 设置Topic和Group维度权限配置
                     * @param _detailedRolePerms Topic和Group维度权限配置
                     * 
                     */
                    void SetDetailedRolePerms(const std::vector<DetailedRolePerm>& _detailedRolePerms);

                    /**
                     * 判断参数 DetailedRolePerms 是否已赋值
                     * @return DetailedRolePerms 是否已赋值
                     * 
                     */
                    bool DetailedRolePermsHasBeenSet() const;

                private:

                    /**
                     * 角色名，对应SecretKey
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * accessKey
                     */
                    std::string m_roleToken;
                    bool m_roleTokenHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 角色权限
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 权限类型，默认按集群授权（Cluster：集群级别；TopicAndGroup：主题&消费组级别）
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * Topic和Group维度权限配置
                     */
                    std::vector<DetailedRolePerm> m_detailedRolePerms;
                    bool m_detailedRolePermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQROLECONFIG_H_
