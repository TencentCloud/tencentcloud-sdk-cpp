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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_CREATEENTERPRISEACCOUNTREQUEST_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_CREATEENTERPRISEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * CreateEnterpriseAccount请求参数结构体
                */
                class CreateEnterpriseAccountRequest : public AbstractModel
                {
                public:
                    CreateEnterpriseAccountRequest();
                    ~CreateEnterpriseAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名AccountMng
                     * @return Module 模块名AccountMng
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名AccountMng
                     * @param _module 模块名AccountMng
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名CreateEnterpriseAccount
                     * @return Operation 操作名CreateEnterpriseAccount
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名CreateEnterpriseAccount
                     * @param _operation 操作名CreateEnterpriseAccount
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取企业用户名称
                     * @return Name 企业用户名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置企业用户名称
                     * @param _name 企业用户名称
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
                     * 获取企业用户证件类型，8代表营业执照，详情请见常见问题
                     * @return IdentType 企业用户证件类型，8代表营业执照，详情请见常见问题
                     * 
                     */
                    int64_t GetIdentType() const;

                    /**
                     * 设置企业用户证件类型，8代表营业执照，详情请见常见问题
                     * @param _identType 企业用户证件类型，8代表营业执照，详情请见常见问题
                     * 
                     */
                    void SetIdentType(const int64_t& _identType);

                    /**
                     * 判断参数 IdentType 是否已赋值
                     * @return IdentType 是否已赋值
                     * 
                     */
                    bool IdentTypeHasBeenSet() const;

                    /**
                     * 获取企业用户营业执照号码
                     * @return IdentNo 企业用户营业执照号码
                     * 
                     */
                    std::string GetIdentNo() const;

                    /**
                     * 设置企业用户营业执照号码
                     * @param _identNo 企业用户营业执照号码
                     * 
                     */
                    void SetIdentNo(const std::string& _identNo);

                    /**
                     * 判断参数 IdentNo 是否已赋值
                     * @return IdentNo 是否已赋值
                     * 
                     */
                    bool IdentNoHasBeenSet() const;

                    /**
                     * 获取企业联系人手机号
                     * @return MobilePhone 企业联系人手机号
                     * 
                     */
                    std::string GetMobilePhone() const;

                    /**
                     * 设置企业联系人手机号
                     * @param _mobilePhone 企业联系人手机号
                     * 
                     */
                    void SetMobilePhone(const std::string& _mobilePhone);

                    /**
                     * 判断参数 MobilePhone 是否已赋值
                     * @return MobilePhone 是否已赋值
                     * 
                     */
                    bool MobilePhoneHasBeenSet() const;

                    /**
                     * 获取经办人姓名
                     * @return TransactorName 经办人姓名
                     * 
                     */
                    std::string GetTransactorName() const;

                    /**
                     * 设置经办人姓名
                     * @param _transactorName 经办人姓名
                     * 
                     */
                    void SetTransactorName(const std::string& _transactorName);

                    /**
                     * 判断参数 TransactorName 是否已赋值
                     * @return TransactorName 是否已赋值
                     * 
                     */
                    bool TransactorNameHasBeenSet() const;

                    /**
                     * 获取经办人证件类型，0代表身份证
                     * @return TransactorIdentType 经办人证件类型，0代表身份证
                     * 
                     */
                    int64_t GetTransactorIdentType() const;

                    /**
                     * 设置经办人证件类型，0代表身份证
                     * @param _transactorIdentType 经办人证件类型，0代表身份证
                     * 
                     */
                    void SetTransactorIdentType(const int64_t& _transactorIdentType);

                    /**
                     * 判断参数 TransactorIdentType 是否已赋值
                     * @return TransactorIdentType 是否已赋值
                     * 
                     */
                    bool TransactorIdentTypeHasBeenSet() const;

                    /**
                     * 获取经办人证件号码
                     * @return TransactorIdentNo 经办人证件号码
                     * 
                     */
                    std::string GetTransactorIdentNo() const;

                    /**
                     * 设置经办人证件号码
                     * @param _transactorIdentNo 经办人证件号码
                     * 
                     */
                    void SetTransactorIdentNo(const std::string& _transactorIdentNo);

                    /**
                     * 判断参数 TransactorIdentNo 是否已赋值
                     * @return TransactorIdentNo 是否已赋值
                     * 
                     */
                    bool TransactorIdentNoHasBeenSet() const;

                    /**
                     * 获取经办人手机号
                     * @return TransactorPhone 经办人手机号
                     * 
                     */
                    std::string GetTransactorPhone() const;

                    /**
                     * 设置经办人手机号
                     * @param _transactorPhone 经办人手机号
                     * 
                     */
                    void SetTransactorPhone(const std::string& _transactorPhone);

                    /**
                     * 判断参数 TransactorPhone 是否已赋值
                     * @return TransactorPhone 是否已赋值
                     * 
                     */
                    bool TransactorPhoneHasBeenSet() const;

                    /**
                     * 获取企业联系人邮箱
                     * @return Email 企业联系人邮箱
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置企业联系人邮箱
                     * @param _email 企业联系人邮箱
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * 模块名AccountMng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名CreateEnterpriseAccount
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 企业用户名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 企业用户证件类型，8代表营业执照，详情请见常见问题
                     */
                    int64_t m_identType;
                    bool m_identTypeHasBeenSet;

                    /**
                     * 企业用户营业执照号码
                     */
                    std::string m_identNo;
                    bool m_identNoHasBeenSet;

                    /**
                     * 企业联系人手机号
                     */
                    std::string m_mobilePhone;
                    bool m_mobilePhoneHasBeenSet;

                    /**
                     * 经办人姓名
                     */
                    std::string m_transactorName;
                    bool m_transactorNameHasBeenSet;

                    /**
                     * 经办人证件类型，0代表身份证
                     */
                    int64_t m_transactorIdentType;
                    bool m_transactorIdentTypeHasBeenSet;

                    /**
                     * 经办人证件号码
                     */
                    std::string m_transactorIdentNo;
                    bool m_transactorIdentNoHasBeenSet;

                    /**
                     * 经办人手机号
                     */
                    std::string m_transactorPhone;
                    bool m_transactorPhoneHasBeenSet;

                    /**
                     * 企业联系人邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_CREATEENTERPRISEACCOUNTREQUEST_H_
