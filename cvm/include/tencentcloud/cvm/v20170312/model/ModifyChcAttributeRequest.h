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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyChcAttribute请求参数结构体
                */
                class ModifyChcAttributeRequest : public AbstractModel
                {
                public:
                    ModifyChcAttributeRequest();
                    ~ModifyChcAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CHC物理服务器ID。
                     * @return ChcIds CHC物理服务器ID。
                     * 
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置CHC物理服务器ID。
                     * @param _chcIds CHC物理服务器ID。
                     * 
                     */
                    void SetChcIds(const std::vector<std::string>& _chcIds);

                    /**
                     * 判断参数 ChcIds 是否已赋值
                     * @return ChcIds 是否已赋值
                     * 
                     */
                    bool ChcIdsHasBeenSet() const;

                    /**
                     * 获取CHC物理服务器名称
                     * @return InstanceName CHC物理服务器名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CHC物理服务器名称
                     * @param _instanceName CHC物理服务器名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取服务器类型
                     * @return DeviceType 服务器类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置服务器类型
                     * @param _deviceType 服务器类型
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取合法字符为字母,数字, 横线和下划线
                     * @return BmcUser 合法字符为字母,数字, 横线和下划线
                     * 
                     */
                    std::string GetBmcUser() const;

                    /**
                     * 设置合法字符为字母,数字, 横线和下划线
                     * @param _bmcUser 合法字符为字母,数字, 横线和下划线
                     * 
                     */
                    void SetBmcUser(const std::string& _bmcUser);

                    /**
                     * 判断参数 BmcUser 是否已赋值
                     * @return BmcUser 是否已赋值
                     * 
                     */
                    bool BmcUserHasBeenSet() const;

                    /**
                     * 获取密码8-16位字符, 允许数字，字母， 和特殊字符()`~!@#$%^&*-+=_|{}[]:;'<>,.?/
                     * @return Password 密码8-16位字符, 允许数字，字母， 和特殊字符()`~!@#$%^&*-+=_|{}[]:;'<>,.?/
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码8-16位字符, 允许数字，字母， 和特殊字符()`~!@#$%^&*-+=_|{}[]:;'<>,.?/
                     * @param _password 密码8-16位字符, 允许数字，字母， 和特殊字符()`~!@#$%^&*-+=_|{}[]:;'<>,.?/
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
                     * 获取bmc网络的安全组列表
                     * @return BmcSecurityGroupIds bmc网络的安全组列表
                     * 
                     */
                    std::vector<std::string> GetBmcSecurityGroupIds() const;

                    /**
                     * 设置bmc网络的安全组列表
                     * @param _bmcSecurityGroupIds bmc网络的安全组列表
                     * 
                     */
                    void SetBmcSecurityGroupIds(const std::vector<std::string>& _bmcSecurityGroupIds);

                    /**
                     * 判断参数 BmcSecurityGroupIds 是否已赋值
                     * @return BmcSecurityGroupIds 是否已赋值
                     * 
                     */
                    bool BmcSecurityGroupIdsHasBeenSet() const;

                private:

                    /**
                     * CHC物理服务器ID。
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                    /**
                     * CHC物理服务器名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 服务器类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 合法字符为字母,数字, 横线和下划线
                     */
                    std::string m_bmcUser;
                    bool m_bmcUserHasBeenSet;

                    /**
                     * 密码8-16位字符, 允许数字，字母， 和特殊字符()`~!@#$%^&*-+=_|{}[]:;'<>,.?/
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * bmc网络的安全组列表
                     */
                    std::vector<std::string> m_bmcSecurityGroupIds;
                    bool m_bmcSecurityGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYCHCATTRIBUTEREQUEST_H_
