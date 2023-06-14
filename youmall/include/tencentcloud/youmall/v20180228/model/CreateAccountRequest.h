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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEACCOUNTREQUEST_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateAccount请求参数结构体
                */
                class CreateAccountRequest : public AbstractModel
                {
                public:
                    CreateAccountRequest();
                    ~CreateAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团ID
                     * @return CompanyId 集团ID
                     * 
                     */
                    std::string GetCompanyId() const;

                    /**
                     * 设置集团ID
                     * @param _companyId 集团ID
                     * 
                     */
                    void SetCompanyId(const std::string& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

                    /**
                     * 获取账号名；需要是手机号
                     * @return Name 账号名；需要是手机号
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账号名；需要是手机号
                     * @param _name 账号名；需要是手机号
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
                     * 获取密码；需要是(`~!@#$%^&*()_+=-）中的至少两种且八位以上
                     * @return Password 密码；需要是(`~!@#$%^&*()_+=-）中的至少两种且八位以上
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码；需要是(`~!@#$%^&*()_+=-）中的至少两种且八位以上
                     * @param _password 密码；需要是(`~!@#$%^&*()_+=-）中的至少两种且八位以上
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
                     * 获取客户门店编码
                     * @return ShopCode 客户门店编码
                     * 
                     */
                    std::string GetShopCode() const;

                    /**
                     * 设置客户门店编码
                     * @param _shopCode 客户门店编码
                     * 
                     */
                    void SetShopCode(const std::string& _shopCode);

                    /**
                     * 判断参数 ShopCode 是否已赋值
                     * @return ShopCode 是否已赋值
                     * 
                     */
                    bool ShopCodeHasBeenSet() const;

                    /**
                     * 获取备注说明; 30个字符以内
                     * @return Remark 备注说明; 30个字符以内
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注说明; 30个字符以内
                     * @param _remark 备注说明; 30个字符以内
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 集团ID
                     */
                    std::string m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 账号名；需要是手机号
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 密码；需要是(`~!@#$%^&*()_+=-）中的至少两种且八位以上
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 客户门店编码
                     */
                    std::string m_shopCode;
                    bool m_shopCodeHasBeenSet;

                    /**
                     * 备注说明; 30个字符以内
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_CREATEACCOUNTREQUEST_H_
