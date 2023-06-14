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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_CREATEPERSONALACCOUNTREQUEST_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_CREATEPERSONALACCOUNTREQUEST_H_

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
                * CreatePersonalAccount请求参数结构体
                */
                class CreatePersonalAccountRequest : public AbstractModel
                {
                public:
                    CreatePersonalAccountRequest();
                    ~CreatePersonalAccountRequest() = default;
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
                     * 获取操作名CreatePersonalAccount
                     * @return Operation 操作名CreatePersonalAccount
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名CreatePersonalAccount
                     * @param _operation 操作名CreatePersonalAccount
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
                     * 获取个人用户姓名
                     * @return Name 个人用户姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置个人用户姓名
                     * @param _name 个人用户姓名
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
                     * 获取个人用户证件类型，0代表身份证，详情请见常见问题
                     * @return IdentType 个人用户证件类型，0代表身份证，详情请见常见问题
                     * 
                     */
                    int64_t GetIdentType() const;

                    /**
                     * 设置个人用户证件类型，0代表身份证，详情请见常见问题
                     * @param _identType 个人用户证件类型，0代表身份证，详情请见常见问题
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
                     * 获取个人用户证件号码
                     * @return IdentNo 个人用户证件号码
                     * 
                     */
                    std::string GetIdentNo() const;

                    /**
                     * 设置个人用户证件号码
                     * @param _identNo 个人用户证件号码
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
                     * 获取个人用户手机号
                     * @return MobilePhone 个人用户手机号
                     * 
                     */
                    std::string GetMobilePhone() const;

                    /**
                     * 设置个人用户手机号
                     * @param _mobilePhone 个人用户手机号
                     * 
                     */
                    void SetMobilePhone(const std::string& _mobilePhone);

                    /**
                     * 判断参数 MobilePhone 是否已赋值
                     * @return MobilePhone 是否已赋值
                     * 
                     */
                    bool MobilePhoneHasBeenSet() const;

                private:

                    /**
                     * 模块名AccountMng
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名CreatePersonalAccount
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 个人用户姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 个人用户证件类型，0代表身份证，详情请见常见问题
                     */
                    int64_t m_identType;
                    bool m_identTypeHasBeenSet;

                    /**
                     * 个人用户证件号码
                     */
                    std::string m_identNo;
                    bool m_identNoHasBeenSet;

                    /**
                     * 个人用户手机号
                     */
                    std::string m_mobilePhone;
                    bool m_mobilePhoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_CREATEPERSONALACCOUNTREQUEST_H_
