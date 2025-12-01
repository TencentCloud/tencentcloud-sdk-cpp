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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFOOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFOOPTION_H_

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
                * 创建合同，若对方签署人的企业信息还未在腾讯电子签注册。则在进行引导企业注册时控制企业填写信息的个性化参数。
具体可查看[视频](https://qian.tencent.com/developers/video/?menu=scene&id=6)
                */
                class RegisterInfoOption : public AbstractModel
                {
                public:
                    RegisterInfoOption();
                    ~RegisterInfoOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否允许编辑企业注册时的法人姓名。
<br/>true：允许编辑<br/>false：不允许编辑（默认值）<br/>

注意：
RegisterInfo 中的LegalName值不为空的时候，才可设置为不可编辑。
                     * @return LegalNameSame 是否允许编辑企业注册时的法人姓名。
<br/>true：允许编辑<br/>false：不允许编辑（默认值）<br/>

注意：
RegisterInfo 中的LegalName值不为空的时候，才可设置为不可编辑。
                     * 
                     */
                    bool GetLegalNameSame() const;

                    /**
                     * 设置是否允许编辑企业注册时的法人姓名。
<br/>true：允许编辑<br/>false：不允许编辑（默认值）<br/>

注意：
RegisterInfo 中的LegalName值不为空的时候，才可设置为不可编辑。
                     * @param _legalNameSame 是否允许编辑企业注册时的法人姓名。
<br/>true：允许编辑<br/>false：不允许编辑（默认值）<br/>

注意：
RegisterInfo 中的LegalName值不为空的时候，才可设置为不可编辑。
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
                     * 获取是否允许编辑企业注册时统一社会信用代码。
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>


注意：
RegisterInfo 中的UnifiedSocialCreditCode值不为空的时候，才可设置为不可编辑。

                     * @return UnifiedSocialCreditCodeCNameSame 是否允许编辑企业注册时统一社会信用代码。
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>


注意：
RegisterInfo 中的UnifiedSocialCreditCode值不为空的时候，才可设置为不可编辑。

                     * 
                     */
                    bool GetUnifiedSocialCreditCodeCNameSame() const;

                    /**
                     * 设置是否允许编辑企业注册时统一社会信用代码。
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>


注意：
RegisterInfo 中的UnifiedSocialCreditCode值不为空的时候，才可设置为不可编辑。

                     * @param _unifiedSocialCreditCodeCNameSame 是否允许编辑企业注册时统一社会信用代码。
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>


注意：
RegisterInfo 中的UnifiedSocialCreditCode值不为空的时候，才可设置为不可编辑。

                     * 
                     */
                    void SetUnifiedSocialCreditCodeCNameSame(const bool& _unifiedSocialCreditCodeCNameSame);

                    /**
                     * 判断参数 UnifiedSocialCreditCodeCNameSame 是否已赋值
                     * @return UnifiedSocialCreditCodeCNameSame 是否已赋值
                     * 
                     */
                    bool UnifiedSocialCreditCodeCNameSameHasBeenSet() const;

                    /**
                     * 获取是否允许编辑企业注册时的证照类型
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>

注意：
RegisterInfo 中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。
                     * @return OrganizationIdCardTypeSame 是否允许编辑企业注册时的证照类型
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>

注意：
RegisterInfo 中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。
                     * 
                     */
                    bool GetOrganizationIdCardTypeSame() const;

                    /**
                     * 设置是否允许编辑企业注册时的证照类型
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>

注意：
RegisterInfo 中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。
                     * @param _organizationIdCardTypeSame 是否允许编辑企业注册时的证照类型
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>

注意：
RegisterInfo 中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。
                     * 
                     */
                    void SetOrganizationIdCardTypeSame(const bool& _organizationIdCardTypeSame);

                    /**
                     * 判断参数 OrganizationIdCardTypeSame 是否已赋值
                     * @return OrganizationIdCardTypeSame 是否已赋值
                     * 
                     */
                    bool OrganizationIdCardTypeSameHasBeenSet() const;

                private:

                    /**
                     * 是否允许编辑企业注册时的法人姓名。
<br/>true：允许编辑<br/>false：不允许编辑（默认值）<br/>

注意：
RegisterInfo 中的LegalName值不为空的时候，才可设置为不可编辑。
                     */
                    bool m_legalNameSame;
                    bool m_legalNameSameHasBeenSet;

                    /**
                     * 是否允许编辑企业注册时统一社会信用代码。
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>


注意：
RegisterInfo 中的UnifiedSocialCreditCode值不为空的时候，才可设置为不可编辑。

                     */
                    bool m_unifiedSocialCreditCodeCNameSame;
                    bool m_unifiedSocialCreditCodeCNameSameHasBeenSet;

                    /**
                     * 是否允许编辑企业注册时的证照类型
<br/>true:不允许编辑。
<br/>false:允许编辑（默认值）。
<br/>

注意：
RegisterInfo 中的OrganizationIdCardType值不为空的时候，才可设置为不可编辑。
                     */
                    bool m_organizationIdCardTypeSame;
                    bool m_organizationIdCardTypeSameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REGISTERINFOOPTION_H_
