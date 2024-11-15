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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTBILLELEM_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTBILLELEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 业务信息定义
                */
                class AgentBillElem : public AbstractModel
                {
                public:
                    AgentBillElem();
                    ~AgentBillElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理商账号ID
                     * @return Uin 代理商账号ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置代理商账号ID
                     * @param _uin 代理商账号ID
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
                     * 获取订单号，仅对预付费账单有意义
                     * @return OrderId 订单号，仅对预付费账单有意义
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号，仅对预付费账单有意义
                     * @param _orderId 订单号，仅对预付费账单有意义
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取代客账号ID
                     * @return ClientUin 代客账号ID
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置代客账号ID
                     * @param _clientUin 代客账号ID
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取代客备注名称
                     * @return ClientRemark 代客备注名称
                     * 
                     */
                    std::string GetClientRemark() const;

                    /**
                     * 设置代客备注名称
                     * @param _clientRemark 代客备注名称
                     * 
                     */
                    void SetClientRemark(const std::string& _clientRemark);

                    /**
                     * 判断参数 ClientRemark 是否已赋值
                     * @return ClientRemark 是否已赋值
                     * 
                     */
                    bool ClientRemarkHasBeenSet() const;

                    /**
                     * 获取支付时间
                     * @return PayTime 支付时间
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置支付时间
                     * @param _payTime 支付时间
                     * 
                     */
                    void SetPayTime(const std::string& _payTime);

                    /**
                     * 判断参数 PayTime 是否已赋值
                     * @return PayTime 是否已赋值
                     * 
                     */
                    bool PayTimeHasBeenSet() const;

                    /**
                     * 获取云产品名称
                     * @return GoodsType 云产品名称
                     * 
                     */
                    std::string GetGoodsType() const;

                    /**
                     * 设置云产品名称
                     * @param _goodsType 云产品名称
                     * 
                     */
                    void SetGoodsType(const std::string& _goodsType);

                    /**
                     * 判断参数 GoodsType 是否已赋值
                     * @return GoodsType 是否已赋值
                     * 
                     */
                    bool GoodsTypeHasBeenSet() const;

                    /**
                     * 获取预付费/后付费
                     * @return PayMode 预付费/后付费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置预付费/后付费
                     * @param _payMode 预付费/后付费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取支付月份
                     * @return SettleMonth 支付月份
                     * 
                     */
                    std::string GetSettleMonth() const;

                    /**
                     * 设置支付月份
                     * @param _settleMonth 支付月份
                     * 
                     */
                    void SetSettleMonth(const std::string& _settleMonth);

                    /**
                     * 判断参数 SettleMonth 是否已赋值
                     * @return SettleMonth 是否已赋值
                     * 
                     */
                    bool SettleMonthHasBeenSet() const;

                    /**
                     * 获取支付金额，单位分
                     * @return Amt 支付金额，单位分
                     * 
                     */
                    int64_t GetAmt() const;

                    /**
                     * 设置支付金额，单位分
                     * @param _amt 支付金额，单位分
                     * 
                     */
                    void SetAmt(const int64_t& _amt);

                    /**
                     * 判断参数 Amt 是否已赋值
                     * @return Amt 是否已赋值
                     * 
                     */
                    bool AmtHasBeenSet() const;

                    /**
                     * 获取agentpay：代付；selfpay：自付
                     * @return PayerMode agentpay：代付；selfpay：自付
                     * 
                     */
                    std::string GetPayerMode() const;

                    /**
                     * 设置agentpay：代付；selfpay：自付
                     * @param _payerMode agentpay：代付；selfpay：自付
                     * 
                     */
                    void SetPayerMode(const std::string& _payerMode);

                    /**
                     * 判断参数 PayerMode 是否已赋值
                     * @return PayerMode 是否已赋值
                     * 
                     */
                    bool PayerModeHasBeenSet() const;

                    /**
                     * 获取客户类型：可以为new(自拓)/assign(指定)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     * @return ClientType 客户类型：可以为new(自拓)/assign(指定)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     * 
                     */
                    std::string GetClientType() const;

                    /**
                     * 设置客户类型：可以为new(自拓)/assign(指定)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     * @param _clientType 客户类型：可以为new(自拓)/assign(指定)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     * 
                     */
                    void SetClientType(const std::string& _clientType);

                    /**
                     * 判断参数 ClientType 是否已赋值
                     * @return ClientType 是否已赋值
                     * 
                     */
                    bool ClientTypeHasBeenSet() const;

                    /**
                     * 获取项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     * @return ProjectType 项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     * 
                     */
                    std::string GetProjectType() const;

                    /**
                     * 设置项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     * @param _projectType 项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     * 
                     */
                    void SetProjectType(const std::string& _projectType);

                    /**
                     * 判断参数 ProjectType 是否已赋值
                     * @return ProjectType 是否已赋值
                     * 
                     */
                    bool ProjectTypeHasBeenSet() const;

                    /**
                     * 获取活动ID
                     * @return ActivityId 活动ID
                     * 
                     */
                    std::string GetActivityId() const;

                    /**
                     * 设置活动ID
                     * @param _activityId 活动ID
                     * 
                     */
                    void SetActivityId(const std::string& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                private:

                    /**
                     * 代理商账号ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 订单号，仅对预付费账单有意义
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 代客账号ID
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 代客备注名称
                     */
                    std::string m_clientRemark;
                    bool m_clientRemarkHasBeenSet;

                    /**
                     * 支付时间
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * 云产品名称
                     */
                    std::string m_goodsType;
                    bool m_goodsTypeHasBeenSet;

                    /**
                     * 预付费/后付费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 支付月份
                     */
                    std::string m_settleMonth;
                    bool m_settleMonthHasBeenSet;

                    /**
                     * 支付金额，单位分
                     */
                    int64_t m_amt;
                    bool m_amtHasBeenSet;

                    /**
                     * agentpay：代付；selfpay：自付
                     */
                    std::string m_payerMode;
                    bool m_payerModeHasBeenSet;

                    /**
                     * 客户类型：可以为new(自拓)/assign(指定)/old(官网)/direct(直销)/direct_newopp(直销(新商机))/空
                     */
                    std::string m_clientType;
                    bool m_clientTypeHasBeenSet;

                    /**
                     * 项目类型：可以为self(自拓项目)/platform(合作项目)/repeat(复算项目  )/空
                     */
                    std::string m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * 活动ID
                     */
                    std::string m_activityId;
                    bool m_activityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_AGENTBILLELEM_H_
