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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEFLEXPAYEEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEFLEXPAYEEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/PayeeTaxInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateFlexPayee请求参数结构体
                */
                class CreateFlexPayeeRequest : public AbstractModel
                {
                public:
                    CreateFlexPayeeRequest();
                    ~CreateFlexPayeeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户外部业务ID
                     * @return OutUserId 用户外部业务ID
                     * 
                     */
                    std::string GetOutUserId() const;

                    /**
                     * 设置用户外部业务ID
                     * @param _outUserId 用户外部业务ID
                     * 
                     */
                    void SetOutUserId(const std::string& _outUserId);

                    /**
                     * 判断参数 OutUserId 是否已赋值
                     * @return OutUserId 是否已赋值
                     * 
                     */
                    bool OutUserIdHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param _name 姓名
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
                     * 获取证件号
                     * @return IdNo 证件号
                     * 
                     */
                    std::string GetIdNo() const;

                    /**
                     * 设置证件号
                     * @param _idNo 证件号
                     * 
                     */
                    void SetIdNo(const std::string& _idNo);

                    /**
                     * 判断参数 IdNo 是否已赋值
                     * @return IdNo 是否已赋值
                     * 
                     */
                    bool IdNoHasBeenSet() const;

                    /**
                     * 获取账户名称
                     * @return AccountName 账户名称
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账户名称
                     * @param _accountName 账户名称
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取服务商ID
                     * @return ServiceProviderId 服务商ID
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置服务商ID
                     * @param _serviceProviderId 服务商ID
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取计税信息
                     * @return TaxInfo 计税信息
                     * 
                     */
                    PayeeTaxInfo GetTaxInfo() const;

                    /**
                     * 设置计税信息
                     * @param _taxInfo 计税信息
                     * 
                     */
                    void SetTaxInfo(const PayeeTaxInfo& _taxInfo);

                    /**
                     * 判断参数 TaxInfo 是否已赋值
                     * @return TaxInfo 是否已赋值
                     * 
                     */
                    bool TaxInfoHasBeenSet() const;

                    /**
                     * 获取证件类型
0:身份证
1:社会信用代码
                     * @return IdType 证件类型
0:身份证
1:社会信用代码
                     * 
                     */
                    int64_t GetIdType() const;

                    /**
                     * 设置证件类型
0:身份证
1:社会信用代码
                     * @param _idType 证件类型
0:身份证
1:社会信用代码
                     * 
                     */
                    void SetIdType(const int64_t& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取手机号码
                     * @return PhoneNo 手机号码
                     * 
                     */
                    std::string GetPhoneNo() const;

                    /**
                     * 设置手机号码
                     * @param _phoneNo 手机号码
                     * 
                     */
                    void SetPhoneNo(const std::string& _phoneNo);

                    /**
                     * 判断参数 PhoneNo 是否已赋值
                     * @return PhoneNo 是否已赋值
                     * 
                     */
                    bool PhoneNoHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @return Environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @param _environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 用户外部业务ID
                     */
                    std::string m_outUserId;
                    bool m_outUserIdHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 证件号
                     */
                    std::string m_idNo;
                    bool m_idNoHasBeenSet;

                    /**
                     * 账户名称
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 服务商ID
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * 计税信息
                     */
                    PayeeTaxInfo m_taxInfo;
                    bool m_taxInfoHasBeenSet;

                    /**
                     * 证件类型
0:身份证
1:社会信用代码
                     */
                    int64_t m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 手机号码
                     */
                    std::string m_phoneNo;
                    bool m_phoneNoHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEFLEXPAYEEREQUEST_H_
