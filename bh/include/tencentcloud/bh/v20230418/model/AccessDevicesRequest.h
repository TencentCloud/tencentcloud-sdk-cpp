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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_ACCESSDEVICESREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_ACCESSDEVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AccessDevices请求参数结构体
                */
                class AccessDevicesRequest : public AbstractModel
                {
                public:
                    AccessDevicesRequest();
                    ~AccessDevicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产的登录账号
                     * @return Account 资产的登录账号
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置资产的登录账号
                     * @param _account 资产的登录账号
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取运维端登录账号
                     * @return LoginAccount 运维端登录账号
                     * @deprecated
                     */
                    std::string GetLoginAccount() const;

                    /**
                     * 设置运维端登录账号
                     * @param _loginAccount 运维端登录账号
                     * @deprecated
                     */
                    void SetLoginAccount(const std::string& _loginAccount);

                    /**
                     * 判断参数 LoginAccount 是否已赋值
                     * @return LoginAccount 是否已赋值
                     * @deprecated
                     */
                    bool LoginAccountHasBeenSet() const;

                    /**
                     * 获取运维端登录密码
                     * @return LoginPassword 运维端登录密码
                     * @deprecated
                     */
                    std::string GetLoginPassword() const;

                    /**
                     * 设置运维端登录密码
                     * @param _loginPassword 运维端登录密码
                     * @deprecated
                     */
                    void SetLoginPassword(const std::string& _loginPassword);

                    /**
                     * 判断参数 LoginPassword 是否已赋值
                     * @return LoginPassword 是否已赋值
                     * @deprecated
                     */
                    bool LoginPasswordHasBeenSet() const;

                    /**
                     * 获取资产ID
                     * @return DeviceId 资产ID
                     * 
                     */
                    uint64_t GetDeviceId() const;

                    /**
                     * 设置资产ID
                     * @param _deviceId 资产ID
                     * 
                     */
                    void SetDeviceId(const uint64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取资源id(优先使用DeviceId)
                     * @return InstanceId 资源id(优先使用DeviceId)
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源id(优先使用DeviceId)
                     * @param _instanceId 资源id(优先使用DeviceId)
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
                     * 获取未托管密码私钥时，填入
                     * @return Password 未托管密码私钥时，填入
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置未托管密码私钥时，填入
                     * @param _password 未托管密码私钥时，填入
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
                     * 获取未托管密码私钥时，填入
                     * @return PrivateKey 未托管密码私钥时，填入
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置未托管密码私钥时，填入
                     * @param _privateKey 未托管密码私钥时，填入
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                    /**
                     * 获取未托管密码私钥时，填入
                     * @return PrivateKeyPassword 未托管密码私钥时，填入
                     * 
                     */
                    std::string GetPrivateKeyPassword() const;

                    /**
                     * 设置未托管密码私钥时，填入
                     * @param _privateKeyPassword 未托管密码私钥时，填入
                     * 
                     */
                    void SetPrivateKeyPassword(const std::string& _privateKeyPassword);

                    /**
                     * 判断参数 PrivateKeyPassword 是否已赋值
                     * @return PrivateKeyPassword 是否已赋值
                     * 
                     */
                    bool PrivateKeyPasswordHasBeenSet() const;

                    /**
                     * 获取客户端工具
                     * @return Exe 客户端工具
                     * 
                     */
                    std::string GetExe() const;

                    /**
                     * 设置客户端工具
                     * @param _exe 客户端工具
                     * 
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     * 
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取RDP挂载盘符驱动（mstsc支持）
                     * @return Drivers RDP挂载盘符驱动（mstsc支持）
                     * 
                     */
                    std::vector<std::string> GetDrivers() const;

                    /**
                     * 设置RDP挂载盘符驱动（mstsc支持）
                     * @param _drivers RDP挂载盘符驱动（mstsc支持）
                     * 
                     */
                    void SetDrivers(const std::vector<std::string>& _drivers);

                    /**
                     * 判断参数 Drivers 是否已赋值
                     * @return Drivers 是否已赋值
                     * 
                     */
                    bool DriversHasBeenSet() const;

                    /**
                     * 获取窗口宽度（RDP支持）
                     * @return Width 窗口宽度（RDP支持）
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置窗口宽度（RDP支持）
                     * @param _width 窗口宽度（RDP支持）
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取窗口高度（RDP支持）
                     * @return Height 窗口高度（RDP支持）
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置窗口高度（RDP支持）
                     * @param _height 窗口高度（RDP支持）
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取是否内网访问（默认不是）
                     * @return IntranetAccess 是否内网访问（默认不是）
                     * 
                     */
                    bool GetIntranetAccess() const;

                    /**
                     * 设置是否内网访问（默认不是）
                     * @param _intranetAccess 是否内网访问（默认不是）
                     * 
                     */
                    void SetIntranetAccess(const bool& _intranetAccess);

                    /**
                     * 判断参数 IntranetAccess 是否已赋值
                     * @return IntranetAccess 是否已赋值
                     * 
                     */
                    bool IntranetAccessHasBeenSet() const;

                    /**
                     * 获取是否自动管理访问串，删掉过期的，新建可用的（默认false）
                     * @return AutoManageAccessCredential 是否自动管理访问串，删掉过期的，新建可用的（默认false）
                     * 
                     */
                    bool GetAutoManageAccessCredential() const;

                    /**
                     * 设置是否自动管理访问串，删掉过期的，新建可用的（默认false）
                     * @param _autoManageAccessCredential 是否自动管理访问串，删掉过期的，新建可用的（默认false）
                     * 
                     */
                    void SetAutoManageAccessCredential(const bool& _autoManageAccessCredential);

                    /**
                     * 判断参数 AutoManageAccessCredential 是否已赋值
                     * @return AutoManageAccessCredential 是否已赋值
                     * 
                     */
                    bool AutoManageAccessCredentialHasBeenSet() const;

                private:

                    /**
                     * 资产的登录账号
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 运维端登录账号
                     */
                    std::string m_loginAccount;
                    bool m_loginAccountHasBeenSet;

                    /**
                     * 运维端登录密码
                     */
                    std::string m_loginPassword;
                    bool m_loginPasswordHasBeenSet;

                    /**
                     * 资产ID
                     */
                    uint64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 资源id(优先使用DeviceId)
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 未托管密码私钥时，填入
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 未托管密码私钥时，填入
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                    /**
                     * 未托管密码私钥时，填入
                     */
                    std::string m_privateKeyPassword;
                    bool m_privateKeyPasswordHasBeenSet;

                    /**
                     * 客户端工具
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * RDP挂载盘符驱动（mstsc支持）
                     */
                    std::vector<std::string> m_drivers;
                    bool m_driversHasBeenSet;

                    /**
                     * 窗口宽度（RDP支持）
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 窗口高度（RDP支持）
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 是否内网访问（默认不是）
                     */
                    bool m_intranetAccess;
                    bool m_intranetAccessHasBeenSet;

                    /**
                     * 是否自动管理访问串，删掉过期的，新建可用的（默认false）
                     */
                    bool m_autoManageAccessCredential;
                    bool m_autoManageAccessCredentialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_ACCESSDEVICESREQUEST_H_
