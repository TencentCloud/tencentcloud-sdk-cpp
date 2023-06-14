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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFORESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFORESPONSE_H_

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
                * QueryAcctInfo返回参数结构体
                */
                class QueryAcctInfoResponse : public AbstractModel
                {
                public:
                    QueryAcctInfoResponse();
                    ~QueryAcctInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取子商户名称
                     * @return SubMchName 子商户名称
                     * 
                     */
                    std::string GetSubMchName() const;

                    /**
                     * 判断参数 SubMchName 是否已赋值
                     * @return SubMchName 是否已赋值
                     * 
                     */
                    bool SubMchNameHasBeenSet() const;

                    /**
                     * 获取子商户类型：
个人: personal
企业：enterprise
缺省： enterprise
                     * @return SubMchType 子商户类型：
个人: personal
企业：enterprise
缺省： enterprise
                     * 
                     */
                    std::string GetSubMchType() const;

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
                     * 判断参数 ShortName 是否已赋值
                     * @return ShortName 是否已赋值
                     * 
                     */
                    bool ShortNameHasBeenSet() const;

                    /**
                     * 获取子商户地址
                     * @return Address 子商户地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取子商户联系人子商户联系人
<敏感信息>
                     * @return Contact 子商户联系人子商户联系人
<敏感信息>
                     * 
                     */
                    std::string GetContact() const;

                    /**
                     * 判断参数 Contact 是否已赋值
                     * @return Contact 是否已赋值
                     * 
                     */
                    bool ContactHasBeenSet() const;

                    /**
                     * 获取联系人手机号
<敏感信息>
                     * @return Mobile 联系人手机号
<敏感信息>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取邮箱 
<敏感信息>
                     * @return Email 邮箱 
<敏感信息>
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
                     * 获取子商户id
                     * @return SubMchId 子商户id
                     * 
                     */
                    std::string GetSubMchId() const;

                    /**
                     * 判断参数 SubMchId 是否已赋值
                     * @return SubMchId 是否已赋值
                     * 
                     */
                    bool SubMchIdHasBeenSet() const;

                    /**
                     * 获取子账户
                     * @return SubAcctNo 子账户
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 判断参数 SubAcctNo 是否已赋值
                     * @return SubAcctNo 是否已赋值
                     * 
                     */
                    bool SubAcctNoHasBeenSet() const;

                    /**
                     * 获取子商户会员类型：
general:普通子账户
merchant:商户子账户
缺省： general
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubMerchantMemberType 子商户会员类型：
general:普通子账户
merchant:商户子账户
缺省： general
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubMerchantMemberType() const;

                    /**
                     * 判断参数 SubMerchantMemberType 是否已赋值
                     * @return SubMerchantMemberType 是否已赋值
                     * 
                     */
                    bool SubMerchantMemberTypeHasBeenSet() const;

                private:

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 子商户名称
                     */
                    std::string m_subMchName;
                    bool m_subMchNameHasBeenSet;

                    /**
                     * 子商户类型：
个人: personal
企业：enterprise
缺省： enterprise
                     */
                    std::string m_subMchType;
                    bool m_subMchTypeHasBeenSet;

                    /**
                     * 不填则默认子商户名称
                     */
                    std::string m_shortName;
                    bool m_shortNameHasBeenSet;

                    /**
                     * 子商户地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 子商户联系人子商户联系人
<敏感信息>
                     */
                    std::string m_contact;
                    bool m_contactHasBeenSet;

                    /**
                     * 联系人手机号
<敏感信息>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 邮箱 
<敏感信息>
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 子商户id
                     */
                    std::string m_subMchId;
                    bool m_subMchIdHasBeenSet;

                    /**
                     * 子账户
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * 子商户会员类型：
general:普通子账户
merchant:商户子账户
缺省： general
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subMerchantMemberType;
                    bool m_subMerchantMemberTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFORESPONSE_H_
