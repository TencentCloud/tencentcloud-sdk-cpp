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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYCOPYPAIRATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYCOPYPAIRATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/LoginSettings.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * ModifyCopyPairAttribute请求参数结构体
                */
                class ModifyCopyPairAttributeRequest : public AbstractModel
                {
                public:
                    ModifyCopyPairAttributeRequest();
                    ~ModifyCopyPairAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要修改属性的复制对ID</p>
                     * @return CopyPairId <p>要修改属性的复制对ID</p>
                     * 
                     */
                    std::string GetCopyPairId() const;

                    /**
                     * 设置<p>要修改属性的复制对ID</p>
                     * @param _copyPairId <p>要修改属性的复制对ID</p>
                     * 
                     */
                    void SetCopyPairId(const std::string& _copyPairId);

                    /**
                     * 判断参数 CopyPairId 是否已赋值
                     * @return CopyPairId 是否已赋值
                     * 
                     */
                    bool CopyPairIdHasBeenSet() const;

                    /**
                     * 获取<p>要修改的复制对类型，可选值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     * @return CopyPairType <p>要修改的复制对类型，可选值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     * 
                     */
                    std::string GetCopyPairType() const;

                    /**
                     * 设置<p>要修改的复制对类型，可选值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     * @param _copyPairType <p>要修改的复制对类型，可选值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     * 
                     */
                    void SetCopyPairType(const std::string& _copyPairType);

                    /**
                     * 判断参数 CopyPairType 是否已赋值
                     * @return CopyPairType 是否已赋值
                     * 
                     */
                    bool CopyPairTypeHasBeenSet() const;

                    /**
                     * 获取<p>修改复制对名称（长度最大支持 64 个字符）</p>
                     * @return CopyPairName <p>修改复制对名称（长度最大支持 64 个字符）</p>
                     * 
                     */
                    std::string GetCopyPairName() const;

                    /**
                     * 设置<p>修改复制对名称（长度最大支持 64 个字符）</p>
                     * @param _copyPairName <p>修改复制对名称（长度最大支持 64 个字符）</p>
                     * 
                     */
                    void SetCopyPairName(const std::string& _copyPairName);

                    /**
                     * 判断参数 CopyPairName 是否已赋值
                     * @return CopyPairName 是否已赋值
                     * 
                     */
                    bool CopyPairNameHasBeenSet() const;

                    /**
                     * 获取<p>容灾端实例类型（仅容灾端CVM未创建时可修改）</p>
                     * @return InstanceType <p>容灾端实例类型（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>容灾端实例类型（仅容灾端CVM未创建时可修改）</p>
                     * @param _instanceType <p>容灾端实例类型（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>容灾端实例VPC IP（仅容灾端CVM未创建时可修改）</p>
                     * @return PrivateIpAddress <p>容灾端实例VPC IP（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置<p>容灾端实例VPC IP（仅容灾端CVM未创建时可修改）</p>
                     * @param _privateIpAddress <p>容灾端实例VPC IP（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>是否使用默认IP，与PrivateIpAddress互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     * @return UseDefaultPrivateIp <p>是否使用默认IP，与PrivateIpAddress互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    bool GetUseDefaultPrivateIp() const;

                    /**
                     * 设置<p>是否使用默认IP，与PrivateIpAddress互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     * @param _useDefaultPrivateIp <p>是否使用默认IP，与PrivateIpAddress互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    void SetUseDefaultPrivateIp(const bool& _useDefaultPrivateIp);

                    /**
                     * 判断参数 UseDefaultPrivateIp 是否已赋值
                     * @return UseDefaultPrivateIp 是否已赋值
                     * 
                     */
                    bool UseDefaultPrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>实例登录设置，需要修改的时候才传（仅容灾端CVM未创建时可修改）</p>
                     * @return LoginSettings <p>实例登录设置，需要修改的时候才传（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>实例登录设置，需要修改的时候才传（仅容灾端CVM未创建时可修改）</p>
                     * @param _loginSettings <p>实例登录设置，需要修改的时候才传（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>是否自动生成密码，与LoginSettings互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     * @return UseDefaultPassword <p>是否自动生成密码，与LoginSettings互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    bool GetUseDefaultPassword() const;

                    /**
                     * 设置<p>是否自动生成密码，与LoginSettings互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     * @param _useDefaultPassword <p>是否自动生成密码，与LoginSettings互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     * 
                     */
                    void SetUseDefaultPassword(const bool& _useDefaultPassword);

                    /**
                     * 判断参数 UseDefaultPassword 是否已赋值
                     * @return UseDefaultPassword 是否已赋值
                     * 
                     */
                    bool UseDefaultPasswordHasBeenSet() const;

                private:

                    /**
                     * <p>要修改属性的复制对ID</p>
                     */
                    std::string m_copyPairId;
                    bool m_copyPairIdHasBeenSet;

                    /**
                     * <p>要修改的复制对类型，可选值：INSTANCE。</p><p>枚举值：</p><ul><li>INSTANCE： CVM复制对</li></ul>
                     */
                    std::string m_copyPairType;
                    bool m_copyPairTypeHasBeenSet;

                    /**
                     * <p>修改复制对名称（长度最大支持 64 个字符）</p>
                     */
                    std::string m_copyPairName;
                    bool m_copyPairNameHasBeenSet;

                    /**
                     * <p>容灾端实例类型（仅容灾端CVM未创建时可修改）</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>容灾端实例VPC IP（仅容灾端CVM未创建时可修改）</p>
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * <p>是否使用默认IP，与PrivateIpAddress互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     */
                    bool m_useDefaultPrivateIp;
                    bool m_useDefaultPrivateIpHasBeenSet;

                    /**
                     * <p>实例登录设置，需要修改的时候才传（仅容灾端CVM未创建时可修改）</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>是否自动生成密码，与LoginSettings互斥，不能同时使用（仅容灾端CVM未创建时可修改）</p>
                     */
                    bool m_useDefaultPassword;
                    bool m_useDefaultPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYCOPYPAIRATTRIBUTEREQUEST_H_
