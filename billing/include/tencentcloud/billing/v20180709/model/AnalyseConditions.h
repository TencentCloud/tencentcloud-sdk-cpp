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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 成本分析查询条件
                */
                class AnalyseConditions : public AbstractModel
                {
                public:
                    AnalyseConditions();
                    ~AnalyseConditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产品名称代码</p>
                     * @return BusinessCodes <p>产品名称代码</p>
                     * 
                     */
                    std::string GetBusinessCodes() const;

                    /**
                     * 设置<p>产品名称代码</p>
                     * @param _businessCodes <p>产品名称代码</p>
                     * 
                     */
                    void SetBusinessCodes(const std::string& _businessCodes);

                    /**
                     * 判断参数 BusinessCodes 是否已赋值
                     * @return BusinessCodes 是否已赋值
                     * 
                     */
                    bool BusinessCodesHasBeenSet() const;

                    /**
                     * 获取<p>子产品名称代码</p>
                     * @return ProductCodes <p>子产品名称代码</p>
                     * 
                     */
                    std::string GetProductCodes() const;

                    /**
                     * 设置<p>子产品名称代码</p>
                     * @param _productCodes <p>子产品名称代码</p>
                     * 
                     */
                    void SetProductCodes(const std::string& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

                    /**
                     * 获取<p>组件类型代码</p>
                     * @return ComponentCode <p>组件类型代码</p>
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置<p>组件类型代码</p>
                     * @param _componentCode <p>组件类型代码</p>
                     * 
                     */
                    void SetComponentCode(const std::string& _componentCode);

                    /**
                     * 判断参数 ComponentCode 是否已赋值
                     * @return ComponentCode 是否已赋值
                     * 
                     */
                    bool ComponentCodeHasBeenSet() const;

                    /**
                     * 获取<p>可用区ID：资源所属可用区ID</p>
                     * @return ZoneIds <p>可用区ID：资源所属可用区ID</p>
                     * 
                     */
                    std::string GetZoneIds() const;

                    /**
                     * 设置<p>可用区ID：资源所属可用区ID</p>
                     * @param _zoneIds <p>可用区ID：资源所属可用区ID</p>
                     * 
                     */
                    void SetZoneIds(const std::string& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>地域ID:资源所属地域ID</p>
                     * @return RegionIds <p>地域ID:资源所属地域ID</p>
                     * 
                     */
                    std::string GetRegionIds() const;

                    /**
                     * 设置<p>地域ID:资源所属地域ID</p>
                     * @param _regionIds <p>地域ID:资源所属地域ID</p>
                     * 
                     */
                    void SetRegionIds(const std::string& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取<p>项目ID:资源所属项目ID</p>
                     * @return ProjectIds <p>项目ID:资源所属项目ID</p>
                     * 
                     */
                    std::string GetProjectIds() const;

                    /**
                     * 设置<p>项目ID:资源所属项目ID</p>
                     * @param _projectIds <p>项目ID:资源所属项目ID</p>
                     * 
                     */
                    void SetProjectIds(const std::string& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取<p>计费模式 prePay(表示包年包月)/postPay(表示按量计费)</p>
                     * @return PayModes <p>计费模式 prePay(表示包年包月)/postPay(表示按量计费)</p>
                     * 
                     */
                    std::string GetPayModes() const;

                    /**
                     * 设置<p>计费模式 prePay(表示包年包月)/postPay(表示按量计费)</p>
                     * @param _payModes <p>计费模式 prePay(表示包年包月)/postPay(表示按量计费)</p>
                     * 
                     */
                    void SetPayModes(const std::string& _payModes);

                    /**
                     * 判断参数 PayModes 是否已赋值
                     * @return PayModes 是否已赋值
                     * 
                     */
                    bool PayModesHasBeenSet() const;

                    /**
                     * 获取<p>交易类型，查询交易类型（请使用交易类型code入参）</p>
                     * @return ActionTypes <p>交易类型，查询交易类型（请使用交易类型code入参）</p>
                     * 
                     */
                    std::string GetActionTypes() const;

                    /**
                     * 设置<p>交易类型，查询交易类型（请使用交易类型code入参）</p>
                     * @param _actionTypes <p>交易类型，查询交易类型（请使用交易类型code入参）</p>
                     * 
                     */
                    void SetActionTypes(const std::string& _actionTypes);

                    /**
                     * 判断参数 ActionTypes 是否已赋值
                     * @return ActionTypes 是否已赋值
                     * 
                     */
                    bool ActionTypesHasBeenSet() const;

                    /**
                     * 获取<p>分账标签</p>
                     * @return Tags <p>分账标签</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>分账标签</p>
                     * @param _tags <p>分账标签</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：<br>cashPayAmount:现金<br>incentivePayAmount:赠送金<br>voucherPayAmount:优惠券<br>tax:税金<br>costBeforeTax:税前价</p>
                     * @return FeeType <p>费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：<br>cashPayAmount:现金<br>incentivePayAmount:赠送金<br>voucherPayAmount:优惠券<br>tax:税金<br>costBeforeTax:税前价</p>
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置<p>费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：<br>cashPayAmount:现金<br>incentivePayAmount:赠送金<br>voucherPayAmount:优惠券<br>tax:税金<br>costBeforeTax:税前价</p>
                     * @param _feeType <p>费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：<br>cashPayAmount:现金<br>incentivePayAmount:赠送金<br>voucherPayAmount:优惠券<br>tax:税金<br>costBeforeTax:税前价</p>
                     * 
                     */
                    void SetFeeType(const std::string& _feeType);

                    /**
                     * 判断参数 FeeType 是否已赋值
                     * @return FeeType 是否已赋值
                     * 
                     */
                    bool FeeTypeHasBeenSet() const;

                    /**
                     * 获取<p>查询成本分析数据的用户UIN</p>
                     * @return PayerUins <p>查询成本分析数据的用户UIN</p>
                     * 
                     */
                    std::string GetPayerUins() const;

                    /**
                     * 设置<p>查询成本分析数据的用户UIN</p>
                     * @param _payerUins <p>查询成本分析数据的用户UIN</p>
                     * 
                     */
                    void SetPayerUins(const std::string& _payerUins);

                    /**
                     * 判断参数 PayerUins 是否已赋值
                     * @return PayerUins 是否已赋值
                     * 
                     */
                    bool PayerUinsHasBeenSet() const;

                    /**
                     * 获取<p>使用资源的用户UIN</p>
                     * @return OwnerUins <p>使用资源的用户UIN</p>
                     * 
                     */
                    std::string GetOwnerUins() const;

                    /**
                     * 设置<p>使用资源的用户UIN</p>
                     * @param _ownerUins <p>使用资源的用户UIN</p>
                     * 
                     */
                    void SetOwnerUins(const std::string& _ownerUins);

                    /**
                     * 判断参数 OwnerUins 是否已赋值
                     * @return OwnerUins 是否已赋值
                     * 
                     */
                    bool OwnerUinsHasBeenSet() const;

                    /**
                     * 获取<p>消耗类型，查询消耗类型（请使用消耗类型code入参）</p>
                     * @return ConsumptionTypes <p>消耗类型，查询消耗类型（请使用消耗类型code入参）</p>
                     * 
                     */
                    std::string GetConsumptionTypes() const;

                    /**
                     * 设置<p>消耗类型，查询消耗类型（请使用消耗类型code入参）</p>
                     * @param _consumptionTypes <p>消耗类型，查询消耗类型（请使用消耗类型code入参）</p>
                     * 
                     */
                    void SetConsumptionTypes(const std::string& _consumptionTypes);

                    /**
                     * 判断参数 ConsumptionTypes 是否已赋值
                     * @return ConsumptionTypes 是否已赋值
                     * 
                     */
                    bool ConsumptionTypesHasBeenSet() const;

                private:

                    /**
                     * <p>产品名称代码</p>
                     */
                    std::string m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * <p>子产品名称代码</p>
                     */
                    std::string m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * <p>组件类型代码</p>
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * <p>可用区ID：资源所属可用区ID</p>
                     */
                    std::string m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>地域ID:资源所属地域ID</p>
                     */
                    std::string m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * <p>项目ID:资源所属项目ID</p>
                     */
                    std::string m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>计费模式 prePay(表示包年包月)/postPay(表示按量计费)</p>
                     */
                    std::string m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * <p>交易类型，查询交易类型（请使用交易类型code入参）</p>
                     */
                    std::string m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * <p>分账标签</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：<br>cashPayAmount:现金<br>incentivePayAmount:赠送金<br>voucherPayAmount:优惠券<br>tax:税金<br>costBeforeTax:税前价</p>
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * <p>查询成本分析数据的用户UIN</p>
                     */
                    std::string m_payerUins;
                    bool m_payerUinsHasBeenSet;

                    /**
                     * <p>使用资源的用户UIN</p>
                     */
                    std::string m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * <p>消耗类型，查询消耗类型（请使用消耗类型code入参）</p>
                     */
                    std::string m_consumptionTypes;
                    bool m_consumptionTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONS_H_
