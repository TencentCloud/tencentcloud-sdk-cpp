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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * 查询客户信用额度出参复杂类型
                */
                class QueryCustomersCreditData : public AbstractModel
                {
                public:
                    QueryCustomersCreditData();
                    ~QueryCustomersCreditData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
                     * @return Name 名字
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param Name 名字
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param Type 类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取电话
                     * @return Mobile 电话
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置电话
                     * @param Mobile 电话
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取邮箱
                     * @return Email 邮箱
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱
                     * @param Email 邮箱
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取欠费标记
                     * @return Arrears 欠费标记
                     */
                    std::string GetArrears() const;

                    /**
                     * 设置欠费标记
                     * @param Arrears 欠费标记
                     */
                    void SetArrears(const std::string& _arrears);

                    /**
                     * 判断参数 Arrears 是否已赋值
                     * @return Arrears 是否已赋值
                     */
                    bool ArrearsHasBeenSet() const;

                    /**
                     * 获取绑定时间
                     * @return AssociationTime 绑定时间
                     */
                    std::string GetAssociationTime() const;

                    /**
                     * 设置绑定时间
                     * @param AssociationTime 绑定时间
                     */
                    void SetAssociationTime(const std::string& _associationTime);

                    /**
                     * 判断参数 AssociationTime 是否已赋值
                     * @return AssociationTime 是否已赋值
                     */
                    bool AssociationTimeHasBeenSet() const;

                    /**
                     * 获取最近到期时间
                     * @return RecentExpiry 最近到期时间
                     */
                    std::string GetRecentExpiry() const;

                    /**
                     * 设置最近到期时间
                     * @param RecentExpiry 最近到期时间
                     */
                    void SetRecentExpiry(const std::string& _recentExpiry);

                    /**
                     * 判断参数 RecentExpiry 是否已赋值
                     * @return RecentExpiry 是否已赋值
                     */
                    bool RecentExpiryHasBeenSet() const;

                    /**
                     * 获取子客uin
                     * @return ClientUin 子客uin
                     */
                    uint64_t GetClientUin() const;

                    /**
                     * 设置子客uin
                     * @param ClientUin 子客uin
                     */
                    void SetClientUin(const uint64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取子客授信额度
                     * @return Credit 子客授信额度
                     */
                    double GetCredit() const;

                    /**
                     * 设置子客授信额度
                     * @param Credit 子客授信额度
                     */
                    void SetCredit(const double& _credit);

                    /**
                     * 判断参数 Credit 是否已赋值
                     * @return Credit 是否已赋值
                     */
                    bool CreditHasBeenSet() const;

                    /**
                     * 获取子客剩余额度
                     * @return RemainingCredit 子客剩余额度
                     */
                    double GetRemainingCredit() const;

                    /**
                     * 设置子客剩余额度
                     * @param RemainingCredit 子客剩余额度
                     */
                    void SetRemainingCredit(const double& _remainingCredit);

                    /**
                     * 判断参数 RemainingCredit 是否已赋值
                     * @return RemainingCredit 是否已赋值
                     */
                    bool RemainingCreditHasBeenSet() const;

                    /**
                     * 获取0：未实名 1: 个人实名 2：企业实名
                     * @return IdentifyType 0：未实名 1: 个人实名 2：企业实名
                     */
                    uint64_t GetIdentifyType() const;

                    /**
                     * 设置0：未实名 1: 个人实名 2：企业实名
                     * @param IdentifyType 0：未实名 1: 个人实名 2：企业实名
                     */
                    void SetIdentifyType(const uint64_t& _identifyType);

                    /**
                     * 判断参数 IdentifyType 是否已赋值
                     * @return IdentifyType 是否已赋值
                     */
                    bool IdentifyTypeHasBeenSet() const;

                    /**
                     * 获取客户备注
                     * @return Remark 客户备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置客户备注
                     * @param Remark 客户备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取强制状态
                     * @return Force 强制状态
                     */
                    int64_t GetForce() const;

                    /**
                     * 设置强制状态
                     * @param Force 强制状态
                     */
                    void SetForce(const int64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 电话
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 邮箱
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 欠费标记
                     */
                    std::string m_arrears;
                    bool m_arrearsHasBeenSet;

                    /**
                     * 绑定时间
                     */
                    std::string m_associationTime;
                    bool m_associationTimeHasBeenSet;

                    /**
                     * 最近到期时间
                     */
                    std::string m_recentExpiry;
                    bool m_recentExpiryHasBeenSet;

                    /**
                     * 子客uin
                     */
                    uint64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 子客授信额度
                     */
                    double m_credit;
                    bool m_creditHasBeenSet;

                    /**
                     * 子客剩余额度
                     */
                    double m_remainingCredit;
                    bool m_remainingCreditHasBeenSet;

                    /**
                     * 0：未实名 1: 个人实名 2：企业实名
                     */
                    uint64_t m_identifyType;
                    bool m_identifyTypeHasBeenSet;

                    /**
                     * 客户备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 强制状态
                     */
                    int64_t m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYCUSTOMERSCREDITDATA_H_
