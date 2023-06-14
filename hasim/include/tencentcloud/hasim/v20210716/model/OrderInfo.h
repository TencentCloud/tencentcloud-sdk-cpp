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

#ifndef TENCENTCLOUD_HASIM_V20210716_MODEL_ORDERINFO_H_
#define TENCENTCLOUD_HASIM_V20210716_MODEL_ORDERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hasim
    {
        namespace V20210716
        {
            namespace Model
            {
                /**
                * 订单信息
                */
                class OrderInfo : public AbstractModel
                {
                public:
                    OrderInfo();
                    ~OrderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子订单ID
                     * @return DealName 子订单ID
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置子订单ID
                     * @param _dealName 子订单ID
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取订单账户
                     * @return Uin 订单账户
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置订单账户
                     * @param _uin 订单账户
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuyNum 购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBuyNum() const;

                    /**
                     * 设置购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buyNum 购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuyNum(const int64_t& _buyNum);

                    /**
                     * 判断参数 BuyNum 是否已赋值
                     * @return BuyNum 是否已赋值
                     * 
                     */
                    bool BuyNumHasBeenSet() const;

                    /**
                     * 获取行业代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndustryCode 行业代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndustryCode() const;

                    /**
                     * 设置行业代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _industryCode 行业代码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndustryCode(const std::string& _industryCode);

                    /**
                     * 判断参数 IndustryCode 是否已赋值
                     * @return IndustryCode 是否已赋值
                     * 
                     */
                    bool IndustryCodeHasBeenSet() const;

                    /**
                     * 获取地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _address 地址
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Contact 联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContact() const;

                    /**
                     * 设置联系人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contact 联系人
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msisdn 电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsisdn() const;

                    /**
                     * 设置电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msisdn 电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsisdn(const std::string& _msisdn);

                    /**
                     * 判断参数 Msisdn 是否已赋值
                     * @return Msisdn 是否已赋值
                     * 
                     */
                    bool MsisdnHasBeenSet() const;

                    /**
                     * 获取卡片规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Specification 卡片规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置卡片规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specification 卡片规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取用户订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 用户订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置用户订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 用户订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDealId 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bigDealId 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditStatus 审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditStatus 审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditStatus(const std::string& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取发货状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowStatus 发货状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlowStatus() const;

                    /**
                     * 设置发货状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowStatus 发货状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlowStatus(const std::string& _flowStatus);

                    /**
                     * 判断参数 FlowStatus 是否已赋值
                     * @return FlowStatus 是否已赋值
                     * 
                     */
                    bool FlowStatusHasBeenSet() const;

                    /**
                     * 获取审批备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 审批备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置审批备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 审批备注
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取退费订单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RefundBigDealId 退费订单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRefundBigDealId() const;

                    /**
                     * 设置退费订单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refundBigDealId 退费订单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefundBigDealId(const std::string& _refundBigDealId);

                    /**
                     * 判断参数 RefundBigDealId 是否已赋值
                     * @return RefundBigDealId 是否已赋值
                     * 
                     */
                    bool RefundBigDealIdHasBeenSet() const;

                private:

                    /**
                     * 子订单ID
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 订单账户
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 购买数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_buyNum;
                    bool m_buyNumHasBeenSet;

                    /**
                     * 行业代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_industryCode;
                    bool m_industryCodeHasBeenSet;

                    /**
                     * 地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 联系人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contact;
                    bool m_contactHasBeenSet;

                    /**
                     * 电话号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msisdn;
                    bool m_msisdnHasBeenSet;

                    /**
                     * 卡片规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 用户订单备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * 审批状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 发货状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 审批备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 退费订单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_refundBigDealId;
                    bool m_refundBigDealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HASIM_V20210716_MODEL_ORDERINFO_H_
