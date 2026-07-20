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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONAUTHORIZATIONOPTIONS_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONAUTHORIZATIONOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 企业认证可选项，其中包括 社会信用代码是否一致，企业名称是否一致，法人是否一致， 对公打款账号是否一致等信息。
代表生成链接的时候指定的这些信息不能被用户修改。

p.s. 注意这些选项一旦传递，相关的信息也不会被上传的营业执照里面包含的信息所覆盖。
                */
                class OrganizationAuthorizationOptions : public AbstractModel
                {
                public:
                    OrganizationAuthorizationOptions();
                    ~OrganizationAuthorizationOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     * @return UniformSocialCreditCodeSame <p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     * 
                     */
                    bool GetUniformSocialCreditCodeSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     * @param _uniformSocialCreditCodeSame <p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     * 
                     */
                    void SetUniformSocialCreditCodeSame(const bool& _uniformSocialCreditCodeSame);

                    /**
                     * 判断参数 UniformSocialCreditCodeSame 是否已赋值
                     * @return UniformSocialCreditCodeSame 是否已赋值
                     * 
                     */
                    bool UniformSocialCreditCodeSameHasBeenSet() const;

                    /**
                     * 获取<p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在企业名称不为空时有效</p>
                     * @return OrganizationNameSame <p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在企业名称不为空时有效</p>
                     * 
                     */
                    bool GetOrganizationNameSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在企业名称不为空时有效</p>
                     * @param _organizationNameSame <p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在企业名称不为空时有效</p>
                     * 
                     */
                    void SetOrganizationNameSame(const bool& _organizationNameSame);

                    /**
                     * 判断参数 OrganizationNameSame 是否已赋值
                     * @return OrganizationNameSame 是否已赋值
                     * 
                     */
                    bool OrganizationNameSameHasBeenSet() const;

                    /**
                     * 获取<p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在法人姓名不为空时有效</p>
                     * @return LegalNameSame <p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在法人姓名不为空时有效</p>
                     * 
                     */
                    bool GetLegalNameSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在法人姓名不为空时有效</p>
                     * @param _legalNameSame <p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在法人姓名不为空时有效</p>
                     * 
                     */
                    void SetLegalNameSame(const bool& _legalNameSame);

                    /**
                     * 判断参数 LegalNameSame 是否已赋值
                     * @return LegalNameSame 是否已赋值
                     * 
                     */
                    bool LegalNameSameHasBeenSet() const;

                    /**
                     * 获取<p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在对公打款账号不为空时有效</p>
                     * @return BankAccountNumberSame <p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在对公打款账号不为空时有效</p>
                     * 
                     */
                    bool GetBankAccountNumberSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在对公打款账号不为空时有效</p>
                     * @param _bankAccountNumberSame <p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在对公打款账号不为空时有效</p>
                     * 
                     */
                    void SetBankAccountNumberSame(const bool& _bankAccountNumberSame);

                    /**
                     * 判断参数 BankAccountNumberSame 是否已赋值
                     * @return BankAccountNumberSame 是否已赋值
                     * 
                     */
                    bool BankAccountNumberSameHasBeenSet() const;

                    /**
                     * 获取<p>对方打开链接认证时，公司地址是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时会回显接口传递的值，且不可更改</li></ul>p.s. 仅在公司地址（ProxyAddress）不为空时有效如下图所示：<img src="https://qcloudimg.tencent-cloud.cn/raw/4aa67a434cdf522c04e32f2e1de0382b.png" alt="示例"><p></p>
                     * @return AddressSame <p>对方打开链接认证时，公司地址是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时会回显接口传递的值，且不可更改</li></ul>p.s. 仅在公司地址（ProxyAddress）不为空时有效如下图所示：<img src="https://qcloudimg.tencent-cloud.cn/raw/4aa67a434cdf522c04e32f2e1de0382b.png" alt="示例"><p></p>
                     * 
                     */
                    bool GetAddressSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，公司地址是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时会回显接口传递的值，且不可更改</li></ul>p.s. 仅在公司地址（ProxyAddress）不为空时有效如下图所示：<img src="https://qcloudimg.tencent-cloud.cn/raw/4aa67a434cdf522c04e32f2e1de0382b.png" alt="示例"><p></p>
                     * @param _addressSame <p>对方打开链接认证时，公司地址是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时会回显接口传递的值，且不可更改</li></ul>p.s. 仅在公司地址（ProxyAddress）不为空时有效如下图所示：<img src="https://qcloudimg.tencent-cloud.cn/raw/4aa67a434cdf522c04e32f2e1de0382b.png" alt="示例"><p></p>
                     * 
                     */
                    void SetAddressSame(const bool& _addressSame);

                    /**
                     * 判断参数 AddressSame 是否已赋值
                     * @return AddressSame 是否已赋值
                     * 
                     */
                    bool AddressSameHasBeenSet() const;

                    /**
                     * 获取<p>对方打开链接认证时，公司营业执照是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致，用户可以进行修改</li><li><b>true</b>：启用状态，实际认证时回填的信息就是用户传递的值，并且不能修改</li></ul><p></p><p>p.s. 仅在公司营业执照（BusinessLicense）不为空时有效</p>如下图<img src="https://qcloudimg.tencent-cloud.cn/raw/7159637d5a8ac3d92b35813b1fc9660a.png" alt="示例">
                     * @return BizLicenseSame <p>对方打开链接认证时，公司营业执照是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致，用户可以进行修改</li><li><b>true</b>：启用状态，实际认证时回填的信息就是用户传递的值，并且不能修改</li></ul><p></p><p>p.s. 仅在公司营业执照（BusinessLicense）不为空时有效</p>如下图<img src="https://qcloudimg.tencent-cloud.cn/raw/7159637d5a8ac3d92b35813b1fc9660a.png" alt="示例">
                     * 
                     */
                    bool GetBizLicenseSame() const;

                    /**
                     * 设置<p>对方打开链接认证时，公司营业执照是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致，用户可以进行修改</li><li><b>true</b>：启用状态，实际认证时回填的信息就是用户传递的值，并且不能修改</li></ul><p></p><p>p.s. 仅在公司营业执照（BusinessLicense）不为空时有效</p>如下图<img src="https://qcloudimg.tencent-cloud.cn/raw/7159637d5a8ac3d92b35813b1fc9660a.png" alt="示例">
                     * @param _bizLicenseSame <p>对方打开链接认证时，公司营业执照是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致，用户可以进行修改</li><li><b>true</b>：启用状态，实际认证时回填的信息就是用户传递的值，并且不能修改</li></ul><p></p><p>p.s. 仅在公司营业执照（BusinessLicense）不为空时有效</p>如下图<img src="https://qcloudimg.tencent-cloud.cn/raw/7159637d5a8ac3d92b35813b1fc9660a.png" alt="示例">
                     * 
                     */
                    void SetBizLicenseSame(const bool& _bizLicenseSame);

                    /**
                     * 判断参数 BizLicenseSame 是否已赋值
                     * @return BizLicenseSame 是否已赋值
                     * 
                     */
                    bool BizLicenseSameHasBeenSet() const;

                private:

                    /**
                     * <p>对方打开链接认证时，对方填写的营业执照的社会信用代码是否与接口上传上来的要保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul></p>
                     */
                    bool m_uniformSocialCreditCodeSame;
                    bool m_uniformSocialCreditCodeSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，企业名称是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在企业名称不为空时有效</p>
                     */
                    bool m_organizationNameSame;
                    bool m_organizationNameSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，法人姓名是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在法人姓名不为空时有效</p>
                     */
                    bool m_legalNameSame;
                    bool m_legalNameSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，对公打款账号是否要与接口传递上来的保持一致。<ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时必须与接口传递的信息完全相符。</li></ul>p.s. 仅在对公打款账号不为空时有效</p>
                     */
                    bool m_bankAccountNumberSame;
                    bool m_bankAccountNumberSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，公司地址是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致。</li><li><b>true</b>：启用状态，实际认证时会回显接口传递的值，且不可更改</li></ul>p.s. 仅在公司地址（ProxyAddress）不为空时有效如下图所示：<img src="https://qcloudimg.tencent-cloud.cn/raw/4aa67a434cdf522c04e32f2e1de0382b.png" alt="示例"><p></p>
                     */
                    bool m_addressSame;
                    bool m_addressSameHasBeenSet;

                    /**
                     * <p>对方打开链接认证时，公司营业执照是否要与接口传递上来的保持一致。</p><ul><li><b>false（默认值）</b>：关闭状态，实际认证时允许与接口传递的信息存在不一致，用户可以进行修改</li><li><b>true</b>：启用状态，实际认证时回填的信息就是用户传递的值，并且不能修改</li></ul><p></p><p>p.s. 仅在公司营业执照（BusinessLicense）不为空时有效</p>如下图<img src="https://qcloudimg.tencent-cloud.cn/raw/7159637d5a8ac3d92b35813b1fc9660a.png" alt="示例">
                     */
                    bool m_bizLicenseSame;
                    bool m_bizLicenseSameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ORGANIZATIONAUTHORIZATIONOPTIONS_H_
