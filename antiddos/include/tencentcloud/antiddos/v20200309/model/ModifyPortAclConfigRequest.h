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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYPORTACLCONFIGREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYPORTACLCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/AclConfig.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyPortAclConfig请求参数结构体
                */
                class ModifyPortAclConfigRequest : public AbstractModel
                {
                public:
                    ModifyPortAclConfigRequest();
                    ~ModifyPortAclConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源实例ID
                     * @return InstanceId 资源实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例ID
                     * @param _instanceId 资源实例ID
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
                     * 获取旧端口acl策略
                     * @return OldAclConfig 旧端口acl策略
                     * 
                     */
                    AclConfig GetOldAclConfig() const;

                    /**
                     * 设置旧端口acl策略
                     * @param _oldAclConfig 旧端口acl策略
                     * 
                     */
                    void SetOldAclConfig(const AclConfig& _oldAclConfig);

                    /**
                     * 判断参数 OldAclConfig 是否已赋值
                     * @return OldAclConfig 是否已赋值
                     * 
                     */
                    bool OldAclConfigHasBeenSet() const;

                    /**
                     * 获取新端口acl策略
                     * @return NewAclConfig 新端口acl策略
                     * 
                     */
                    AclConfig GetNewAclConfig() const;

                    /**
                     * 设置新端口acl策略
                     * @param _newAclConfig 新端口acl策略
                     * 
                     */
                    void SetNewAclConfig(const AclConfig& _newAclConfig);

                    /**
                     * 判断参数 NewAclConfig 是否已赋值
                     * @return NewAclConfig 是否已赋值
                     * 
                     */
                    bool NewAclConfigHasBeenSet() const;

                private:

                    /**
                     * 资源实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 旧端口acl策略
                     */
                    AclConfig m_oldAclConfig;
                    bool m_oldAclConfigHasBeenSet;

                    /**
                     * 新端口acl策略
                     */
                    AclConfig m_newAclConfig;
                    bool m_newAclConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYPORTACLCONFIGREQUEST_H_
