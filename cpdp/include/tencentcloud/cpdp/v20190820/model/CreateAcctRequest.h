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
#include <tencentcloud/cpdp/v20190820/model/OrganizationInfo.h>


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
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫平台分配的支付MidasAppId
                     * @param _midasAppId 聚鑫平台分配的支付MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取业务平台的子商户ID，唯一
                     * @return SubMchId 业务平台的子商户ID，唯一
                     * 
                     */
                    std::string GetSubMchId() const;

                    /**
                     * 设置业务平台的子商户ID，唯一
                     * @param _subMchId 业务平台的子商户ID，唯一
                     * 
                     */
                    void SetSubMchId(const std::string& _subMchId);

                    /**
                     * 判断参数 SubMchId 是否已赋值
                     * @return SubMchId 是否已赋值
                     * 
                     */
                    bool SubMchIdHasBeenSet() const;

                    /**
                     * 获取子商户名称
                     * @return SubMchName 子商户名称
                     * 
                     */
                    std::string GetSubMchName() const;

                    /**
                     * 设置子商户名称
                     * @param _subMchName 子商户名称
                     * 
                     */
                    void SetSubMchName(const std::string& _subMchName);

                    /**
                     * 判断参数 SubMchName 是否已赋值
                     * @return SubMchName 是否已赋值
                     * 
                     */
                    bool SubMchNameHasBeenSet() const;

                    /**
                     * 获取子商户地址
                     * @return Address 子商户地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置子商户地址
                     * @param _address 子商户地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取子商户联系人
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return Contact 子商户联系人
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetContact() const;

                    /**
                     * 设置子商户联系人
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _contact 子商户联系人
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetContact(const std::string& _contact);

                    /**
                     * 判断参数 Contact 是否已赋值
                     * @return Contact 是否已赋值
                     * 
                     */
                    bool ContactHasBeenSet() const;

                    /**
                     * 获取联系人手机号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return Mobile 联系人手机号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置联系人手机号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _mobile 联系人手机号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取邮箱 
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return Email 邮箱 
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱 
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _email 邮箱 
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param _midasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     * 
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param _midasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     * 
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取子商户类型：
个人: personal
企业: enterprise
个体工商户: individual
缺省: enterprise
                     * @return SubMchType 子商户类型：
个人: personal
企业: enterprise
个体工商户: individual
缺省: enterprise
                     * 
                     */
                    std::string GetSubMchType() const;

                    /**
                     * 设置子商户类型：
个人: personal
企业: enterprise
个体工商户: individual
缺省: enterprise
                     * @param _subMchType 子商户类型：
个人: personal
企业: enterprise
个体工商户: individual
缺省: enterprise
                     * 
                     */
                    void SetSubMchType(const std::string& _subMchType);

                    /**
                     * 判断参数 SubMchType 是否已赋值
                     * @return SubMchType 是否已赋值
                     * 
                     */
                    bool SubMchTypeHasBeenSet() const;

                    /**
                     * 获取不填则默认子商户名称
                     * @return ShortName 不填则默认子商户名称
                     * 
                     */
                    std::string GetShortName() const;

                    /**
                     * 设置不填则默认子商户名称
                     * @param _shortName 不填则默认子商户名称
                     * 
                     */
                    void SetShortName(const std::string& _shortName);

                    /**
                     * 判断参数 ShortName 是否已赋值
                     * @return ShortName 是否已赋值
                     * 
                     */
                    bool ShortNameHasBeenSet() const;

                    /**
                     * 获取子商户会员类型：
general: 普通子账户
merchant: 商户子账户
缺省: general
                     * @return SubMerchantMemberType 子商户会员类型：
general: 普通子账户
merchant: 商户子账户
缺省: general
                     * 
                     */
                    std::string GetSubMerchantMemberType() const;

                    /**
                     * 设置子商户会员类型：
general: 普通子账户
merchant: 商户子账户
缺省: general
                     * @param _subMerchantMemberType 子商户会员类型：
general: 普通子账户
merchant: 商户子账户
缺省: general
                     * 
                     */
                    void SetSubMerchantMemberType(const std::string& _subMerchantMemberType);

                    /**
                     * 判断参数 SubMerchantMemberType 是否已赋值
                     * @return SubMerchantMemberType 是否已赋值
                     * 
                     */
                    bool SubMerchantMemberTypeHasBeenSet() const;

                    /**
                     * 获取子商户密钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return SubMerchantKey 子商户密钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetSubMerchantKey() const;

                    /**
                     * 设置子商户密钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _subMerchantKey 子商户密钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetSubMerchantKey(const std::string& _subMerchantKey);

                    /**
                     * 判断参数 SubMerchantKey 是否已赋值
                     * @return SubMerchantKey 是否已赋值
                     * 
                     */
                    bool SubMerchantKeyHasBeenSet() const;

                    /**
                     * 获取子商户私钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return SubMerchantPrivateKey 子商户私钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetSubMerchantPrivateKey() const;

                    /**
                     * 设置子商户私钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _subMerchantPrivateKey 子商户私钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetSubMerchantPrivateKey(const std::string& _subMerchantPrivateKey);

                    /**
                     * 判断参数 SubMerchantPrivateKey 是否已赋值
                     * @return SubMerchantPrivateKey 是否已赋值
                     * 
                     */
                    bool SubMerchantPrivateKeyHasBeenSet() const;

                    /**
                     * 获取敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * @return EncryptType 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * @param _encryptType 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取银行生成的子商户账户，已开户的场景需要录入
                     * @return SubAcctNo 银行生成的子商户账户，已开户的场景需要录入
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置银行生成的子商户账户，已开户的场景需要录入
                     * @param _subAcctNo 银行生成的子商户账户，已开户的场景需要录入
                     * 
                     */
                    void SetSubAcctNo(const std::string& _subAcctNo);

                    /**
                     * 判断参数 SubAcctNo 是否已赋值
                     * @return SubAcctNo 是否已赋值
                     * 
                     */
                    bool SubAcctNoHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _midasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                    /**
                     * 获取店铺名称
企业、个体工商户必输
                     * @return SubMerchantStoreName 店铺名称
企业、个体工商户必输
                     * 
                     */
                    std::string GetSubMerchantStoreName() const;

                    /**
                     * 设置店铺名称
企业、个体工商户必输
                     * @param _subMerchantStoreName 店铺名称
企业、个体工商户必输
                     * 
                     */
                    void SetSubMerchantStoreName(const std::string& _subMerchantStoreName);

                    /**
                     * 判断参数 SubMerchantStoreName 是否已赋值
                     * @return SubMerchantStoreName 是否已赋值
                     * 
                     */
                    bool SubMerchantStoreNameHasBeenSet() const;

                    /**
                     * 获取公司信息
                     * @return OrganizationInfo 公司信息
                     * 
                     */
                    OrganizationInfo GetOrganizationInfo() const;

                    /**
                     * 设置公司信息
                     * @param _organizationInfo 公司信息
                     * 
                     */
                    void SetOrganizationInfo(const OrganizationInfo& _organizationInfo);

                    /**
                     * 判断参数 OrganizationInfo 是否已赋值
                     * @return OrganizationInfo 是否已赋值
                     * 
                     */
                    bool OrganizationInfoHasBeenSet() const;

                    /**
                     * 获取子商户证件类型
1 - 身份证
3 - 回乡证
4 - 中国护照
5 - 台胞证
19 - 外国护照
52 - 组织机构代码证
68 - 营业执照 
73 - 统一社会信用代码
                     * @return SubMerchantIdType 子商户证件类型
1 - 身份证
3 - 回乡证
4 - 中国护照
5 - 台胞证
19 - 外国护照
52 - 组织机构代码证
68 - 营业执照 
73 - 统一社会信用代码
                     * 
                     */
                    std::string GetSubMerchantIdType() const;

                    /**
                     * 设置子商户证件类型
1 - 身份证
3 - 回乡证
4 - 中国护照
5 - 台胞证
19 - 外国护照
52 - 组织机构代码证
68 - 营业执照 
73 - 统一社会信用代码
                     * @param _subMerchantIdType 子商户证件类型
1 - 身份证
3 - 回乡证
4 - 中国护照
5 - 台胞证
19 - 外国护照
52 - 组织机构代码证
68 - 营业执照 
73 - 统一社会信用代码
                     * 
                     */
                    void SetSubMerchantIdType(const std::string& _subMerchantIdType);

                    /**
                     * 判断参数 SubMerchantIdType 是否已赋值
                     * @return SubMerchantIdType 是否已赋值
                     * 
                     */
                    bool SubMerchantIdTypeHasBeenSet() const;

                    /**
                     * 获取子商户证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @return SubMerchantIdCode 子商户证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    std::string GetSubMerchantIdCode() const;

                    /**
                     * 设置子商户证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * @param _subMerchantIdCode 子商户证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     * 
                     */
                    void SetSubMerchantIdCode(const std::string& _subMerchantIdCode);

                    /**
                     * 判断参数 SubMerchantIdCode 是否已赋值
                     * @return SubMerchantIdCode 是否已赋值
                     * 
                     */
                    bool SubMerchantIdCodeHasBeenSet() const;

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
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_contact;
                    bool m_contactHasBeenSet;

                    /**
                     * 联系人手机号
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 邮箱 
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
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
企业: enterprise
个体工商户: individual
缺省: enterprise
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
general: 普通子账户
merchant: 商户子账户
缺省: general
                     */
                    std::string m_subMerchantMemberType;
                    bool m_subMerchantMemberTypeHasBeenSet;

                    /**
                     * 子商户密钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_subMerchantKey;
                    bool m_subMerchantKeyHasBeenSet;

                    /**
                     * 子商户私钥
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_subMerchantPrivateKey;
                    bool m_subMerchantPrivateKeyHasBeenSet;

                    /**
                     * 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * 银行生成的子商户账户，已开户的场景需要录入
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                    /**
                     * 店铺名称
企业、个体工商户必输
                     */
                    std::string m_subMerchantStoreName;
                    bool m_subMerchantStoreNameHasBeenSet;

                    /**
                     * 公司信息
                     */
                    OrganizationInfo m_organizationInfo;
                    bool m_organizationInfoHasBeenSet;

                    /**
                     * 子商户证件类型
1 - 身份证
3 - 回乡证
4 - 中国护照
5 - 台胞证
19 - 外国护照
52 - 组织机构代码证
68 - 营业执照 
73 - 统一社会信用代码
                     */
                    std::string m_subMerchantIdType;
                    bool m_subMerchantIdTypeHasBeenSet;

                    /**
                     * 子商户证件号码
<敏感信息>加密详见<a href="https://cloud.tencent.com/document/product/1122/48979" target="_blank">《商户端接口敏感信息加密说明》</a>
                     */
                    std::string m_subMerchantIdCode;
                    bool m_subMerchantIdCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEACCTREQUEST_H_
