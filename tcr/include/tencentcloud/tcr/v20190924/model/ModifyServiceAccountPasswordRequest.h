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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTPASSWORDREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * ModifyServiceAccountPassword请求参数结构体
                */
                class ModifyServiceAccountPasswordRequest : public AbstractModel
                {
                public:
                    ModifyServiceAccountPasswordRequest();
                    ~ModifyServiceAccountPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取服务级账号名
                     * @return Name 服务级账号名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置服务级账号名
                     * @param _name 服务级账号名
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
                     * 获取是否随机生成密码
                     * @return Random 是否随机生成密码
                     * 
                     */
                    bool GetRandom() const;

                    /**
                     * 设置是否随机生成密码
                     * @param _random 是否随机生成密码
                     * 
                     */
                    void SetRandom(const bool& _random);

                    /**
                     * 判断参数 Random 是否已赋值
                     * @return Random 是否已赋值
                     * 
                     */
                    bool RandomHasBeenSet() const;

                    /**
                     * 获取服务级账号密码，长度在8到20之间且需包含至少一个大写字符，一个小写字符和一个数字
                     * @return Password 服务级账号密码，长度在8到20之间且需包含至少一个大写字符，一个小写字符和一个数字
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置服务级账号密码，长度在8到20之间且需包含至少一个大写字符，一个小写字符和一个数字
                     * @param _password 服务级账号密码，长度在8到20之间且需包含至少一个大写字符，一个小写字符和一个数字
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 服务级账号名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否随机生成密码
                     */
                    bool m_random;
                    bool m_randomHasBeenSet;

                    /**
                     * 服务级账号密码，长度在8到20之间且需包含至少一个大写字符，一个小写字符和一个数字
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSERVICEACCOUNTPASSWORDREQUEST_H_
