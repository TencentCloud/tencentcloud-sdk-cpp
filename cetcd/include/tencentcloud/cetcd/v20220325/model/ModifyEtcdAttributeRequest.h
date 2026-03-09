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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * ModifyEtcdAttribute请求参数结构体
                */
                class ModifyEtcdAttributeRequest : public AbstractModel
                {
                public:
                    ModifyEtcdAttributeRequest();
                    ~ModifyEtcdAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取实例名
                     * @return Name 实例名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名
                     * @param _name 实例名
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
                     * 获取实例描述
                     * @return Description 实例描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置实例描述
                     * @param _description 实例描述
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
                     * 获取root账号密码
                     * @return Password root账号密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置root账号密码
                     * @param _password root账号密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取同步auth状态
                     * @return EnableAuth 同步auth状态
                     * 
                     */
                    bool GetEnableAuth() const;

                    /**
                     * 设置同步auth状态
                     * @param _enableAuth 同步auth状态
                     * 
                     */
                    void SetEnableAuth(const bool& _enableAuth);

                    /**
                     * 判断参数 EnableAuth 是否已赋值
                     * @return EnableAuth 是否已赋值
                     * 
                     */
                    bool EnableAuthHasBeenSet() const;

                    /**
                     * 获取删除集群关联的cos数据
                     * @return EnableDeleteCos 删除集群关联的cos数据
                     * 
                     */
                    bool GetEnableDeleteCos() const;

                    /**
                     * 设置删除集群关联的cos数据
                     * @param _enableDeleteCos 删除集群关联的cos数据
                     * 
                     */
                    void SetEnableDeleteCos(const bool& _enableDeleteCos);

                    /**
                     * 判断参数 EnableDeleteCos 是否已赋值
                     * @return EnableDeleteCos 是否已赋值
                     * 
                     */
                    bool EnableDeleteCosHasBeenSet() const;

                    /**
                     * 获取子网id，数组
                     * @return SubnetIds 子网id，数组
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网id，数组
                     * @param _subnetIds 子网id，数组
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * root账号密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 同步auth状态
                     */
                    bool m_enableAuth;
                    bool m_enableAuthHasBeenSet;

                    /**
                     * 删除集群关联的cos数据
                     */
                    bool m_enableDeleteCos;
                    bool m_enableDeleteCosHasBeenSet;

                    /**
                     * 子网id，数组
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_MODIFYETCDATTRIBUTEREQUEST_H_
