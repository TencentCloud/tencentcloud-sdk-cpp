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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBEREMAILBINDRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBEREMAILBINDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeOrganizationMemberEmailBind返回参数结构体
                */
                class DescribeOrganizationMemberEmailBindResponse : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberEmailBindResponse();
                    ~DescribeOrganizationMemberEmailBindResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定ID。
                     * @return BindId 绑定ID。
                     * 
                     */
                    uint64_t GetBindId() const;

                    /**
                     * 判断参数 BindId 是否已赋值
                     * @return BindId 是否已赋值
                     * 
                     */
                    bool BindIdHasBeenSet() const;

                    /**
                     * 获取申请时间。
                     * @return ApplyTime 申请时间。
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取邮箱地址。
                     * @return Email 邮箱地址。
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取安全手机号。
                     * @return Phone 安全手机号。
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取绑定状态。    未绑定：Unbound，待激活：Valid，绑定成功：Success，绑定失败：Failed
                     * @return BindStatus 绑定状态。    未绑定：Unbound，待激活：Valid，绑定成功：Success，绑定失败：Failed
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取绑定时间。
                     * @return BindTime 绑定时间。
                     * 
                     */
                    std::string GetBindTime() const;

                    /**
                     * 判断参数 BindTime 是否已赋值
                     * @return BindTime 是否已赋值
                     * 
                     */
                    bool BindTimeHasBeenSet() const;

                    /**
                     * 获取失败说明。
                     * @return Description 失败说明。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取安全手机绑定状态 。 未绑定：0，已绑定：1
                     * @return PhoneBind 安全手机绑定状态 。 未绑定：0，已绑定：1
                     * 
                     */
                    uint64_t GetPhoneBind() const;

                    /**
                     * 判断参数 PhoneBind 是否已赋值
                     * @return PhoneBind 是否已赋值
                     * 
                     */
                    bool PhoneBindHasBeenSet() const;

                    /**
                     * 获取国际区号。
                     * @return CountryCode 国际区号。
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                private:

                    /**
                     * 绑定ID。
                     */
                    uint64_t m_bindId;
                    bool m_bindIdHasBeenSet;

                    /**
                     * 申请时间。
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 邮箱地址。
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 安全手机号。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 绑定状态。    未绑定：Unbound，待激活：Valid，绑定成功：Success，绑定失败：Failed
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * 绑定时间。
                     */
                    std::string m_bindTime;
                    bool m_bindTimeHasBeenSet;

                    /**
                     * 失败说明。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 安全手机绑定状态 。 未绑定：0，已绑定：1
                     */
                    uint64_t m_phoneBind;
                    bool m_phoneBindHasBeenSet;

                    /**
                     * 国际区号。
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBEREMAILBINDRESPONSE_H_
