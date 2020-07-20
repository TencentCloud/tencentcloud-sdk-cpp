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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTDEALELEM_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTDEALELEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/partners/v20180321/model/DealGoodsPriceElem.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 描述代理商代付的订单信息
                */
                class AgentDealElem : public AbstractModel
                {
                public:
                    AgentDealElem();
                    ~AgentDealElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单自增 ID
                     * @return DealId 订单自增 ID
                     */
                    std::string GetDealId() const;

                    /**
                     * 设置订单自增 ID
                     * @param DealId 订单自增 ID
                     */
                    void SetDealId(const std::string& _dealId);

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     */
                    bool DealIdHasBeenSet() const;

                    /**
                     * 获取订单号
                     * @return DealName 订单号
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置订单号
                     * @param DealName 订单号
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取商品类型 ID
                     * @return GoodsCategoryId 商品类型 ID
                     */
                    std::string GetGoodsCategoryId() const;

                    /**
                     * 设置商品类型 ID
                     * @param GoodsCategoryId 商品类型 ID
                     */
                    void SetGoodsCategoryId(const std::string& _goodsCategoryId);

                    /**
                     * 判断参数 GoodsCategoryId 是否已赋值
                     * @return GoodsCategoryId 是否已赋值
                     */
                    bool GoodsCategoryIdHasBeenSet() const;

                    /**
                     * 获取订单所有者
                     * @return OwnerUin 订单所有者
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置订单所有者
                     * @param OwnerUin 订单所有者
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取订单所有者对应 appId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 订单所有者对应 appId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置订单所有者对应 appId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppId 订单所有者对应 appId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GoodsNum 商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGoodsNum() const;

                    /**
                     * 设置商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GoodsNum 商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGoodsNum(const std::string& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取价格详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GoodsPrice 价格详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DealGoodsPriceElem GetGoodsPrice() const;

                    /**
                     * 设置价格详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GoodsPrice 价格详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGoodsPrice(const DealGoodsPriceElem& _goodsPrice);

                    /**
                     * 判断参数 GoodsPrice 是否已赋值
                     * @return GoodsPrice 是否已赋值
                     */
                    bool GoodsPriceHasBeenSet() const;

                    /**
                     * 获取下单人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creater 下单人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置下单人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Creater 下单人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatTime 下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreatTime() const;

                    /**
                     * 设置下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatTime 下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatTime(const std::string& _creatTime);

                    /**
                     * 判断参数 CreatTime 是否已赋值
                     * @return CreatTime 是否已赋值
                     */
                    bool CreatTimeHasBeenSet() const;

                    /**
                     * 获取支付结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayEndTime 支付结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayEndTime() const;

                    /**
                     * 设置支付结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PayEndTime 支付结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayEndTime(const std::string& _payEndTime);

                    /**
                     * 判断参数 PayEndTime 是否已赋值
                     * @return PayEndTime 是否已赋值
                     */
                    bool PayEndTimeHasBeenSet() const;

                    /**
                     * 获取扣费流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillId 扣费流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置扣费流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BillId 扣费流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBillId(const std::string& _billId);

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     */
                    bool BillIdHasBeenSet() const;

                    /**
                     * 获取支付人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Payer 支付人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayer() const;

                    /**
                     * 设置支付人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Payer 支付人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayer(const std::string& _payer);

                    /**
                     * 判断参数 Payer 是否已赋值
                     * @return Payer 是否已赋值
                     */
                    bool PayerHasBeenSet() const;

                    /**
                     * 获取订单状态，中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealStatus 订单状态，中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDealStatus() const;

                    /**
                     * 设置订单状态，中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DealStatus 订单状态，中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDealStatus(const std::string& _dealStatus);

                    /**
                     * 判断参数 DealStatus 是否已赋值
                     * @return DealStatus 是否已赋值
                     */
                    bool DealStatusHasBeenSet() const;

                    /**
                     * 获取订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GoodsName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGoodsName() const;

                    /**
                     * 设置产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GoodsName 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGoodsName(const std::string& _goodsName);

                    /**
                     * 判断参数 GoodsName 是否已赋值
                     * @return GoodsName 是否已赋值
                     */
                    bool GoodsNameHasBeenSet() const;

                    /**
                     * 获取客户备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientRemark 客户备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientRemark() const;

                    /**
                     * 设置客户备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientRemark 客户备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientRemark(const std::string& _clientRemark);

                    /**
                     * 判断参数 ClientRemark 是否已赋值
                     * @return ClientRemark 是否已赋值
                     */
                    bool ClientRemarkHasBeenSet() const;

                    /**
                     * 获取订单操作类型，purchase（新购），renew（续费），modify（配置变更）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActionType 订单操作类型，purchase（新购），renew（续费），modify（配置变更）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置订单操作类型，purchase（新购），renew（续费），modify（配置变更）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ActionType 订单操作类型，purchase（新购），renew（续费），modify（配置变更）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取代金券抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VoucherDecline 代金券抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVoucherDecline() const;

                    /**
                     * 设置代金券抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VoucherDecline 代金券抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVoucherDecline(const std::string& _voucherDecline);

                    /**
                     * 判断参数 VoucherDecline 是否已赋值
                     * @return VoucherDecline 是否已赋值
                     */
                    bool VoucherDeclineHasBeenSet() const;

                    /**
                     * 获取大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDealId 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 设置大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BigDealId 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBigDealId(const std::string& _bigDealId);

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取客户类型（new：新拓；old：存量；assign：指派）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientType 客户类型（new：新拓；old：存量；assign：指派）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置客户类型（new：新拓；old：存量；assign：指派）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClientType 客户类型（new：新拓；old：存量；assign：指派）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取项目类型（self：自拓；repeat：直销；platform：官网合作）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectType 项目类型（self：自拓；repeat：直销；platform：官网合作）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectType() const;

                    /**
                     * 设置项目类型（self：自拓；repeat：直销；platform：官网合作）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectType 项目类型（self：自拓；repeat：直销；platform：官网合作）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectType(const std::string& _projectType);

                    /**
                     * 判断参数 ProjectType 是否已赋值
                     * @return ProjectType 是否已赋值
                     */
                    bool ProjectTypeHasBeenSet() const;

                    /**
                     * 获取业务员账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SalesUin 业务员账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSalesUin() const;

                    /**
                     * 设置业务员账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SalesUin 业务员账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSalesUin(const std::string& _salesUin);

                    /**
                     * 判断参数 SalesUin 是否已赋值
                     * @return SalesUin 是否已赋值
                     */
                    bool SalesUinHasBeenSet() const;

                    /**
                     * 获取支付方式，0：自付；1：代付
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerMode 支付方式，0：自付；1：代付
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayerMode() const;

                    /**
                     * 设置支付方式，0：自付；1：代付
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PayerMode 支付方式，0：自付；1：代付
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayerMode(const std::string& _payerMode);

                    /**
                     * 判断参数 PayerMode 是否已赋值
                     * @return PayerMode 是否已赋值
                     */
                    bool PayerModeHasBeenSet() const;

                    /**
                     * 获取活动ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActivityId 活动ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ActivityId 活动ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取订单过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OverdueTime 订单过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOverdueTime() const;

                    /**
                     * 设置订单过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OverdueTime 订单过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOverdueTime(const std::string& _overdueTime);

                    /**
                     * 判断参数 OverdueTime 是否已赋值
                     * @return OverdueTime 是否已赋值
                     */
                    bool OverdueTimeHasBeenSet() const;

                private:

                    /**
                     * 订单自增 ID
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 商品类型 ID
                     */
                    std::string m_goodsCategoryId;
                    bool m_goodsCategoryIdHasBeenSet;

                    /**
                     * 订单所有者
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 订单所有者对应 appId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 商品数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 价格详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DealGoodsPriceElem m_goodsPrice;
                    bool m_goodsPriceHasBeenSet;

                    /**
                     * 下单人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * 下单时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatTime;
                    bool m_creatTimeHasBeenSet;

                    /**
                     * 支付结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payEndTime;
                    bool m_payEndTimeHasBeenSet;

                    /**
                     * 扣费流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * 支付人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payer;
                    bool m_payerHasBeenSet;

                    /**
                     * 订单状态，中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealStatus;
                    bool m_dealStatusHasBeenSet;

                    /**
                     * 订单的状态(1：未支付;2：已支付;3：发货中;4：已发货;5：发货失败;6：已退款;7：已关单;8：订单过期;9：订单已失效;10：产品已失效;11：代付拒绝;12：支付中)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 产品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_goodsName;
                    bool m_goodsNameHasBeenSet;

                    /**
                     * 客户备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientRemark;
                    bool m_clientRemarkHasBeenSet;

                    /**
                     * 订单操作类型，purchase（新购），renew（续费），modify（配置变更）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 代金券抵扣金额，单位分
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_voucherDecline;
                    bool m_voucherDeclineHasBeenSet;

                    /**
                     * 大订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * 客户类型（new：新拓；old：存量；assign：指派）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * 项目类型（self：自拓；repeat：直销；platform：官网合作）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * 业务员账号ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_salesUin;
                    bool m_salesUinHasBeenSet;

                    /**
                     * 支付方式，0：自付；1：代付
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payerMode;
                    bool m_payerModeHasBeenSet;

                    /**
                     * 活动ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 订单过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_overdueTime;
                    bool m_overdueTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTDEALELEM_H_
