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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEACCTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEACCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreateAcct请求参数结构体
                */
                class CreateAcctRequest : public AbstractModel
                {
                public:
                    CreateAcctRequest();
                    ~CreateAcctRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫平台分配的支付MidasAppId
                     * @return MidasAppId 聚鑫平台分配的支付MidasAppId
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫平台分配的支付MidasAppId
                     * @param MidasAppId 聚鑫平台分配的支付MidasAppId
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取业务平台的子商户ID，唯一
                     * @return SubMchId 业务平台的子商户ID，唯一
                     */
                    std::string GetSubMchId() const;

                    /**
                     * 设置业务平台的子商户ID，唯一
                     * @param SubMchId 业务平台的子商户ID，唯一
                     */
                    void SetSubMchId(const std::string& _subMchId);

                    /**
                     * 判断参数 SubMchId 是否已赋值
                     * @return SubMchId 是否已赋值
                     */
                    bool SubMchIdHasBeenSet() const;

                    /**
                     * 获取子商户名称
                     * @return SubMchName 子商户名称
                     */
                    std::string GetSubMchName() const;

                    /**
                     * 设置子商户名称
                     * @param SubMchName 子商户名称
                     */
                    void SetSubMchName(const std::string& _subMchName);

                    /**
                     * 判断参数 SubMchName 是否已赋值
                     * @return SubMchName 是否已赋值
                     */
                    bool SubMchNameHasBeenSet() const;

                    /**
                     * 获取子商户地址
                     * @return Address 子商户地址
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置子商户地址
                     * @param Address 子商户地址
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取子商户联系人
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @return Contact 子商户联系人
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string GetContact() const;

                    /**
                     * 设置子商户联系人
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @param Contact 子商户联系人
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    void SetContact(const std::string& _contact);

                    /**
                     * 判断参数 Contact 是否已赋值
                     * @return Contact 是否已赋值
                     */
                    bool ContactHasBeenSet() const;

                    /**
                     * 获取联系人手机号
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @return Mobile 联系人手机号
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置联系人手机号
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @param Mobile 联系人手机号
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取邮箱 
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @return Email 邮箱 
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱 
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     * @param Email 邮箱 
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param MidasSecretId 聚鑫分配的安全ID
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param MidasSignature 按照聚鑫安全密钥计算的签名
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取子商户类型：
个人: personal
企业：enterprise
缺省： enterprise
                     * @return SubMchType 子商户类型：
个人: personal
企业：enterprise
缺省： enterprise
                     */
                    std::string GetSubMchType() const;

                    /**
                     * 设置子商户类型：
个人: personal
企业：enterprise
缺省： enterprise
                     * @param SubMchType 子商户类型：
个人: personal
企业：enterprise
缺省： enterprise
                     */
                    void SetSubMchType(const std::string& _subMchType);

                    /**
                     * 判断参数 SubMchType 是否已赋值
                     * @return SubMchType 是否已赋值
                     */
                    bool SubMchTypeHasBeenSet() const;

                    /**
                     * 获取不填则默认子商户名称
                     * @return ShortName 不填则默认子商户名称
                     */
                    std::string GetShortName() const;

                    /**
                     * 设置不填则默认子商户名称
                     * @param ShortName 不填则默认子商户名称
                     */
                    void SetShortName(const std::string& _shortName);

                    /**
                     * 判断参数 ShortName 是否已赋值
                     * @return ShortName 是否已赋值
                     */
                    bool ShortNameHasBeenSet() const;

                    /**
                     * 获取子商户会员类型：
general:普通子账户
merchant:商户子账户
缺省： general
                     * @return SubMerchantMemberType 子商户会员类型：
general:普通子账户
merchant:商户子账户
缺省： general
                     */
                    std::string GetSubMerchantMemberType() const;

                    /**
                     * 设置子商户会员类型：
general:普通子账户
merchant:商户子账户
缺省： general
                     * @param SubMerchantMemberType 子商户会员类型：
general:普通子账户
merchant:商户子账户
缺省： general
                     */
                    void SetSubMerchantMemberType(const std::string& _subMerchantMemberType);

                    /**
                     * 判断参数 SubMerchantMemberType 是否已赋值
                     * @return SubMerchantMemberType 是否已赋值
                     */
                    bool SubMerchantMemberTypeHasBeenSet() const;

                private:

                    /**
                     * 聚鑫平台分配的支付MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 业务平台的子商户ID，唯一
                     */
                    std::string m_subMchId;
                    bool m_subMchIdHasBeenSet;

                    /**
                     * 子商户名称
                     */
                    std::string m_subMchName;
                    bool m_subMchNameHasBeenSet;

                    /**
                     * 子商户地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 子商户联系人
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string m_contact;
                    bool m_contactHasBeenSet;

                    /**
                     * 联系人手机号
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 邮箱 
<敏感信息>加密详见《商户端接口敏感信息加密说明》
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 子商户类型：
个人: personal
企业：enterprise
缺省： enterprise
                     */
                    std::string m_subMchType;
                    bool m_subMchTypeHasBeenSet;

                    /**
                     * 不填则默认子商户名称
                     */
                    std::string m_shortName;
                    bool m_shortNameHasBeenSet;

                    /**
                     * 子商户会员类型：
general:普通子账户
merchant:商户子账户
缺省： general
                     */
                    std::string m_subMerchantMemberType;
                    bool m_subMerchantMemberTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEACCTREQUEST_H_
