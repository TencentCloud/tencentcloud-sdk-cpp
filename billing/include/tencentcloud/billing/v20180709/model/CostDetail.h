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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_COSTDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_COSTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/CostComponentSet.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 消耗明细数据类型
                */
                class CostDetail : public AbstractModel
                {
                public:
                    CostDetail();
                    ~CostDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支付者uin
                     * @return PayerUin 支付者uin
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置支付者uin
                     * @param _payerUin 支付者uin
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return BusinessCodeName 产品名称
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置产品名称
                     * @param _businessCodeName 产品名称
                     * 
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     * 
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取子产品名称
                     * @return ProductCodeName 子产品名称
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置子产品名称
                     * @param _productCodeName 子产品名称
                     * 
                     */
                    void SetProductCodeName(const std::string& _productCodeName);

                    /**
                     * 判断参数 ProductCodeName 是否已赋值
                     * @return ProductCodeName 是否已赋值
                     * 
                     */
                    bool ProductCodeNameHasBeenSet() const;

                    /**
                     * 获取计费模式名称
                     * @return PayModeName 计费模式名称
                     * 
                     */
                    std::string GetPayModeName() const;

                    /**
                     * 设置计费模式名称
                     * @param _payModeName 计费模式名称
                     * 
                     */
                    void SetPayModeName(const std::string& _payModeName);

                    /**
                     * 判断参数 PayModeName 是否已赋值
                     * @return PayModeName 是否已赋值
                     * 
                     */
                    bool PayModeNameHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return RegionName 区域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置区域名称
                     * @param _regionName 区域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地区名称
                     * @return ZoneName 地区名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置地区名称
                     * @param _zoneName 地区名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param _resourceName 资源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取类型名称
                     * @return ActionTypeName 类型名称
                     * 
                     */
                    std::string GetActionTypeName() const;

                    /**
                     * 设置类型名称
                     * @param _actionTypeName 类型名称
                     * 
                     */
                    void SetActionTypeName(const std::string& _actionTypeName);

                    /**
                     * 判断参数 ActionTypeName 是否已赋值
                     * @return ActionTypeName 是否已赋值
                     * 
                     */
                    bool ActionTypeNameHasBeenSet() const;

                    /**
                     * 获取订单id
                     * @return OrderId 订单id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单id
                     * @param _orderId 订单id
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
                     * 获取交易id
                     * @return BillId 交易id
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置交易id
                     * @param _billId 交易id
                     * 
                     */
                    void SetBillId(const std::string& _billId);

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     * 
                     */
                    bool BillIdHasBeenSet() const;

                    /**
                     * 获取费用开始时间
                     * @return FeeBeginTime 费用开始时间
                     * 
                     */
                    std::string GetFeeBeginTime() const;

                    /**
                     * 设置费用开始时间
                     * @param _feeBeginTime 费用开始时间
                     * 
                     */
                    void SetFeeBeginTime(const std::string& _feeBeginTime);

                    /**
                     * 判断参数 FeeBeginTime 是否已赋值
                     * @return FeeBeginTime 是否已赋值
                     * 
                     */
                    bool FeeBeginTimeHasBeenSet() const;

                    /**
                     * 获取费用结束时间
                     * @return FeeEndTime 费用结束时间
                     * 
                     */
                    std::string GetFeeEndTime() const;

                    /**
                     * 设置费用结束时间
                     * @param _feeEndTime 费用结束时间
                     * 
                     */
                    void SetFeeEndTime(const std::string& _feeEndTime);

                    /**
                     * 判断参数 FeeEndTime 是否已赋值
                     * @return FeeEndTime 是否已赋值
                     * 
                     */
                    bool FeeEndTimeHasBeenSet() const;

                    /**
                     * 获取组件明细
                     * @return ComponentSet 组件明细
                     * 
                     */
                    std::vector<CostComponentSet> GetComponentSet() const;

                    /**
                     * 设置组件明细
                     * @param _componentSet 组件明细
                     * 
                     */
                    void SetComponentSet(const std::vector<CostComponentSet>& _componentSet);

                    /**
                     * 判断参数 ComponentSet 是否已赋值
                     * @return ComponentSet 是否已赋值
                     * 
                     */
                    bool ComponentSetHasBeenSet() const;

                    /**
                     * 获取子产品名称代码
                     * @return ProductCode 子产品名称代码
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置子产品名称代码
                     * @param _productCode 子产品名称代码
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                private:

                    /**
                     * 支付者uin
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * 子产品名称
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * 计费模式名称
                     */
                    std::string m_payModeName;
                    bool m_payModeNameHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地区名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 类型名称
                     */
                    std::string m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                    /**
                     * 订单id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 交易id
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * 费用开始时间
                     */
                    std::string m_feeBeginTime;
                    bool m_feeBeginTimeHasBeenSet;

                    /**
                     * 费用结束时间
                     */
                    std::string m_feeEndTime;
                    bool m_feeEndTimeHasBeenSet;

                    /**
                     * 组件明细
                     */
                    std::vector<CostComponentSet> m_componentSet;
                    bool m_componentSetHasBeenSet;

                    /**
                     * 子产品名称代码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_COSTDETAIL_H_
