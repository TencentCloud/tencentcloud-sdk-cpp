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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 发起流程快速注册相关信息
                */
                class RegisterInfo : public AbstractModel
                {
                public:
                    RegisterInfo();
                    ~RegisterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<font color="red">字段不再使用</font>，法人姓名
                     * @return LegalName <font color="red">字段不再使用</font>，法人姓名
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置<font color="red">字段不再使用</font>，法人姓名
                     * @param _legalName <font color="red">字段不再使用</font>，法人姓名
                     * 
                     */
                    void SetLegalName(const std::string& _legalName);

                    /**
                     * 判断参数 LegalName 是否已赋值
                     * @return LegalName 是否已赋值
                     * 
                     */
                    bool LegalNameHasBeenSet() const;

                    /**
                     * 获取社会统一信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uscc 社会统一信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetUscc() const;

                    /**
                     * 设置社会统一信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uscc 社会统一信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetUscc(const std::string& _uscc);

                    /**
                     * 判断参数 Uscc 是否已赋值
                     * @return Uscc 是否已赋值
                     * @deprecated
                     */
                    bool UsccHasBeenSet() const;

                    /**
                     * 获取<font color="red">字段不再使用</font>，社会统一信用代码
                     * @return UnifiedSocialCreditCode <font color="red">字段不再使用</font>，社会统一信用代码
                     * 
                     */
                    std::string GetUnifiedSocialCreditCode() const;

                    /**
                     * 设置<font color="red">字段不再使用</font>，社会统一信用代码
                     * @param _unifiedSocialCreditCode <font color="red">字段不再使用</font>，社会统一信用代码
                     * 
                     */
                    void SetUnifiedSocialCreditCode(const std::string& _unifiedSocialCreditCode);

                    /**
                     * 判断参数 UnifiedSocialCreditCode 是否已赋值
                     * @return UnifiedSocialCreditCode 是否已赋值
                     * 
                     */
                    bool UnifiedSocialCreditCodeHasBeenSet() const;

                    /**
                     * 获取组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。
                     * @return OrganizationAddress 组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。
                     * 
                     */
                    std::string GetOrganizationAddress() const;

                    /**
                     * 设置组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。
                     * @param _organizationAddress 组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。
                     * 
                     */
                    void SetOrganizationAddress(const std::string& _organizationAddress);

                    /**
                     * 判断参数 OrganizationAddress 是否已赋值
                     * @return OrganizationAddress 是否已赋值
                     * 
                     */
                    bool OrganizationAddressHasBeenSet() const;

                    /**
                     * 获取指定企业认证的授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * @return AuthorizationTypes 指定企业认证的授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * @deprecated
                     */
                    std::vector<uint64_t> GetAuthorizationTypes() const;

                    /**
                     * 设置指定企业认证的授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * @param _authorizationTypes 指定企业认证的授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * @deprecated
                     */
                    void SetAuthorizationTypes(const std::vector<uint64_t>& _authorizationTypes);

                    /**
                     * 判断参数 AuthorizationTypes 是否已赋值
                     * @return AuthorizationTypes 是否已赋值
                     * @deprecated
                     */
                    bool AuthorizationTypesHasBeenSet() const;

                    /**
                     * 获取指定企业认证的授权方式:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * @return AuthorizationType 指定企业认证的授权方式:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * 
                     */
                    int64_t GetAuthorizationType() const;

                    /**
                     * 设置指定企业认证的授权方式:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * @param _authorizationType 指定企业认证的授权方式:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     * 
                     */
                    void SetAuthorizationType(const int64_t& _authorizationType);

                    /**
                     * 判断参数 AuthorizationType 是否已赋值
                     * @return AuthorizationType 是否已赋值
                     * 
                     */
                    bool AuthorizationTypeHasBeenSet() const;

                private:

                    /**
                     * <font color="red">字段不再使用</font>，法人姓名
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * 社会统一信用代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uscc;
                    bool m_usccHasBeenSet;

                    /**
                     * <font color="red">字段不再使用</font>，社会统一信用代码
                     */
                    std::string m_unifiedSocialCreditCode;
                    bool m_unifiedSocialCreditCodeHasBeenSet;

                    /**
                     * 组织机构企业注册地址。 请确认该企业注册地址与企业营业执照中注册的地址一致。
                     */
                    std::string m_organizationAddress;
                    bool m_organizationAddressHasBeenSet;

                    /**
                     * 指定企业认证的授权方式 支持多选:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     */
                    std::vector<uint64_t> m_authorizationTypes;
                    bool m_authorizationTypesHasBeenSet;

                    /**
                     * 指定企业认证的授权方式:

<ul>
<li><strong>2</strong>: 法人授权方式</li>
<li><strong>5</strong>: 授权书+对公打款方式</li>
</ul>
                     */
                    int64_t m_authorizationType;
                    bool m_authorizationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFO_H_
