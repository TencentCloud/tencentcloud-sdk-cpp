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
                     * 获取产品名称代码
                     * @return BusinessCodes 产品名称代码
                     * 
                     */
                    std::string GetBusinessCodes() const;

                    /**
                     * 设置产品名称代码
                     * @param _businessCodes 产品名称代码
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
                     * 获取子产品名称代码
                     * @return ProductCodes 子产品名称代码
                     * 
                     */
                    std::string GetProductCodes() const;

                    /**
                     * 设置子产品名称代码
                     * @param _productCodes 子产品名称代码
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
                     * 获取组件类型代码
                     * @return ComponentCode 组件类型代码
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置组件类型代码
                     * @param _componentCode 组件类型代码
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
                     * 获取可用区ID：资源所属可用区ID
                     * @return ZoneIds 可用区ID：资源所属可用区ID
                     * 
                     */
                    std::string GetZoneIds() const;

                    /**
                     * 设置可用区ID：资源所属可用区ID
                     * @param _zoneIds 可用区ID：资源所属可用区ID
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
                     * 获取地域ID:资源所属地域ID
                     * @return RegionIds 地域ID:资源所属地域ID
                     * 
                     */
                    std::string GetRegionIds() const;

                    /**
                     * 设置地域ID:资源所属地域ID
                     * @param _regionIds 地域ID:资源所属地域ID
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
                     * 获取项目ID:资源所属项目ID
                     * @return ProjectIds 项目ID:资源所属项目ID
                     * 
                     */
                    std::string GetProjectIds() const;

                    /**
                     * 设置项目ID:资源所属项目ID
                     * @param _projectIds 项目ID:资源所属项目ID
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
                     * 获取计费模式 prePay(表示包年包月)/postPay(表示按量计费)
                     * @return PayModes 计费模式 prePay(表示包年包月)/postPay(表示按量计费)
                     * 
                     */
                    std::string GetPayModes() const;

                    /**
                     * 设置计费模式 prePay(表示包年包月)/postPay(表示按量计费)
                     * @param _payModes 计费模式 prePay(表示包年包月)/postPay(表示按量计费)
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
                     * 获取交易类型，查询交易类型（请使用交易类型code入参）
                     * @return ActionTypes 交易类型，查询交易类型（请使用交易类型code入参）
                     * 
                     */
                    std::string GetActionTypes() const;

                    /**
                     * 设置交易类型，查询交易类型（请使用交易类型code入参）
                     * @param _actionTypes 交易类型，查询交易类型（请使用交易类型code入参）
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
                     * 获取分账标签键
                     * @return Tags 分账标签键
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置分账标签键
                     * @param _tags 分账标签键
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
                     * 获取费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：
cashPayAmount:现金 
incentivePayAmount:赠送金 
voucherPayAmount:优惠券 
tax:税金 
costBeforeTax:税前价
                     * @return FeeType 费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：
cashPayAmount:现金 
incentivePayAmount:赠送金 
voucherPayAmount:优惠券 
tax:税金 
costBeforeTax:税前价
                     * 
                     */
                    std::string GetFeeType() const;

                    /**
                     * 设置费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：
cashPayAmount:现金 
incentivePayAmount:赠送金 
voucherPayAmount:优惠券 
tax:税金 
costBeforeTax:税前价
                     * @param _feeType 费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：
cashPayAmount:现金 
incentivePayAmount:赠送金 
voucherPayAmount:优惠券 
tax:税金 
costBeforeTax:税前价
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
                     * 获取查询成本分析数据的用户UIN
                     * @return PayerUins 查询成本分析数据的用户UIN
                     * 
                     */
                    std::string GetPayerUins() const;

                    /**
                     * 设置查询成本分析数据的用户UIN
                     * @param _payerUins 查询成本分析数据的用户UIN
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
                     * 获取使用资源的用户UIN
                     * @return OwnerUins 使用资源的用户UIN
                     * 
                     */
                    std::string GetOwnerUins() const;

                    /**
                     * 设置使用资源的用户UIN
                     * @param _ownerUins 使用资源的用户UIN
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
                     * 获取消耗类型，查询消耗类型（请使用消耗类型code入参）
                     * @return ConsumptionTypes 消耗类型，查询消耗类型（请使用消耗类型code入参）
                     * 
                     */
                    std::string GetConsumptionTypes() const;

                    /**
                     * 设置消耗类型，查询消耗类型（请使用消耗类型code入参）
                     * @param _consumptionTypes 消耗类型，查询消耗类型（请使用消耗类型code入参）
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
                     * 产品名称代码
                     */
                    std::string m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * 子产品名称代码
                     */
                    std::string m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * 组件类型代码
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * 可用区ID：资源所属可用区ID
                     */
                    std::string m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 地域ID:资源所属地域ID
                     */
                    std::string m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * 项目ID:资源所属项目ID
                     */
                    std::string m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 计费模式 prePay(表示包年包月)/postPay(表示按量计费)
                     */
                    std::string m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * 交易类型，查询交易类型（请使用交易类型code入参）
                     */
                    std::string m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * 分账标签键
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 费用类型，查询费用类型（请使用费用类型code入参)入参枚举如下：
cashPayAmount:现金 
incentivePayAmount:赠送金 
voucherPayAmount:优惠券 
tax:税金 
costBeforeTax:税前价
                     */
                    std::string m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * 查询成本分析数据的用户UIN
                     */
                    std::string m_payerUins;
                    bool m_payerUinsHasBeenSet;

                    /**
                     * 使用资源的用户UIN
                     */
                    std::string m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * 消耗类型，查询消耗类型（请使用消耗类型code入参）
                     */
                    std::string m_consumptionTypes;
                    bool m_consumptionTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONS_H_
