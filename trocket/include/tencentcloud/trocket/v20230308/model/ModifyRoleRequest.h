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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYROLEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/DetailedRolePerm.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ModifyRole请求参数结构体
                */
                class ModifyRoleRequest : public AbstractModel
                {
                public:
                    ModifyRoleRequest();
                    ~ModifyRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取角色名称
                     * @return Role 角色名称
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置角色名称
                     * @param _role 角色名称
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
                     * 获取是否开启消费
                     * @return PermRead 是否开启消费
                     * 
                     */
                    bool GetPermRead() const;

                    /**
                     * 设置是否开启消费
                     * @param _permRead 是否开启消费
                     * 
                     */
                    void SetPermRead(const bool& _permRead);

                    /**
                     * 判断参数 PermRead 是否已赋值
                     * @return PermRead 是否已赋值
                     * 
                     */
                    bool PermReadHasBeenSet() const;

                    /**
                     * 获取是否开启生产
                     * @return PermWrite 是否开启生产
                     * 
                     */
                    bool GetPermWrite() const;

                    /**
                     * 设置是否开启生产
                     * @param _permWrite 是否开启生产
                     * 
                     */
                    void SetPermWrite(const bool& _permWrite);

                    /**
                     * 判断参数 PermWrite 是否已赋值
                     * @return PermWrite 是否已赋值
                     * 
                     */
                    bool PermWriteHasBeenSet() const;

                    /**
                     * 获取权限类型，默认按集群授权（Cluster：集群维度；TopicAndGroup：主题和消费组维度）
                     * @return PermType 权限类型，默认按集群授权（Cluster：集群维度；TopicAndGroup：主题和消费组维度）
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置权限类型，默认按集群授权（Cluster：集群维度；TopicAndGroup：主题和消费组维度）
                     * @param _permType 权限类型，默认按集群授权（Cluster：集群维度；TopicAndGroup：主题和消费组维度）
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
                     * 获取Topic&Group维度权限配置
                     * @return DetailedPerms Topic&Group维度权限配置
                     * 
                     */
                    std::vector<DetailedRolePerm> GetDetailedPerms() const;

                    /**
                     * 设置Topic&Group维度权限配置
                     * @param _detailedPerms Topic&Group维度权限配置
                     * 
                     */
                    void SetDetailedPerms(const std::vector<DetailedRolePerm>& _detailedPerms);

                    /**
                     * 判断参数 DetailedPerms 是否已赋值
                     * @return DetailedPerms 是否已赋值
                     * 
                     */
                    bool DetailedPermsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * 是否开启消费
                     */
                    bool m_permRead;
                    bool m_permReadHasBeenSet;

                    /**
                     * 是否开启生产
                     */
                    bool m_permWrite;
                    bool m_permWriteHasBeenSet;

                    /**
                     * 权限类型，默认按集群授权（Cluster：集群维度；TopicAndGroup：主题和消费组维度）
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Topic&Group维度权限配置
                     */
                    std::vector<DetailedRolePerm> m_detailedPerms;
                    bool m_detailedPermsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYROLEREQUEST_H_
