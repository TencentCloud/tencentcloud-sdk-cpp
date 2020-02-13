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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEAPPREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateApp请求参数结构体
                */
                class CreateAppRequest : public AbstractModel
                {
                public:
                    CreateAppRequest();
                    ~CreateAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     * @return IdlType 应用数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     */
                    std::string GetIdlType() const;

                    /**
                     * 设置应用数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     * @param IdlType 应用数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     */
                    void SetIdlType(const std::string& _idlType);

                    /**
                     * 判断参数 IdlType 是否已赋值
                     * @return IdlType 是否已赋值
                     */
                    bool IdlTypeHasBeenSet() const;

                    /**
                     * 获取应用名称，可使用中文或英文字符，长度在30个字符以内
                     * @return AppName 应用名称，可使用中文或英文字符，长度在30个字符以内
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称，可使用中文或英文字符，长度在30个字符以内
                     * @param AppName 应用名称，可使用中文或英文字符，长度在30个字符以内
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取应用所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     * @return VpcId 应用所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置应用所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     * @param VpcId 应用所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取应用所绑定的子网实例ID，形如：subnet-pxir56ns
                     * @return SubnetId 应用所绑定的子网实例ID，形如：subnet-pxir56ns
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置应用所绑定的子网实例ID，形如：subnet-pxir56ns
                     * @param SubnetId 应用所绑定的子网实例ID，形如：subnet-pxir56ns
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取应用访问密码，可使用英文和数字字符，长度为12~16个字符
                     * @return Password 应用访问密码，可使用英文和数字字符，长度为12~16个字符
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置应用访问密码，可使用英文和数字字符，长度为12~16个字符
                     * @param Password 应用访问密码，可使用英文和数字字符，长度为12~16个字符
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 应用数据描述语言类型，如：`PROTO`，`TDR`或`MIX`
                     */
                    std::string m_idlType;
                    bool m_idlTypeHasBeenSet;

                    /**
                     * 应用名称，可使用中文或英文字符，长度在30个字符以内
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 应用所绑定的私有网络实例ID，形如：vpc-f49l6u0z
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 应用所绑定的子网实例ID，形如：subnet-pxir56ns
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 应用访问密码，可使用英文和数字字符，长度为12~16个字符
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATEAPPREQUEST_H_
