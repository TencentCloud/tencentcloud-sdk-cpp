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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANCOVERAGEDETAIL_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANCOVERAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * 节省计划覆盖率数据
                */
                class SavingPlanCoverageDetail : public AbstractModel
                {
                public:
                    SavingPlanCoverageDetail();
                    ~SavingPlanCoverageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID
                     * @return ResourceId 资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID
                     * @param _resourceId 资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID
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
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取产品编码
                     * @return ProductCode 产品编码
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品编码
                     * @param _productCode 产品编码
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取子产品编码
                     * @return SubProductCode 子产品编码
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品编码
                     * @param _subProductCode 子产品编码
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取费用起始日期，格式yyyy-MM-dd
                     * @return StartDate 费用起始日期，格式yyyy-MM-dd
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置费用起始日期，格式yyyy-MM-dd
                     * @param _startDate 费用起始日期，格式yyyy-MM-dd
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取费用结束日期，格式yyyy-MM-dd，目前与StartDate相等
                     * @return EndDate 费用结束日期，格式yyyy-MM-dd，目前与StartDate相等
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置费用结束日期，格式yyyy-MM-dd，目前与StartDate相等
                     * @param _endDate 费用结束日期，格式yyyy-MM-dd，目前与StartDate相等
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取节省计划覆盖金额（即节省计划支付金额）
                     * @return SpCoveredAmount 节省计划覆盖金额（即节省计划支付金额）
                     * 
                     */
                    double GetSpCoveredAmount() const;

                    /**
                     * 设置节省计划覆盖金额（即节省计划支付金额）
                     * @param _spCoveredAmount 节省计划覆盖金额（即节省计划支付金额）
                     * 
                     */
                    void SetSpCoveredAmount(const double& _spCoveredAmount);

                    /**
                     * 判断参数 SpCoveredAmount 是否已赋值
                     * @return SpCoveredAmount 是否已赋值
                     * 
                     */
                    bool SpCoveredAmountHasBeenSet() const;

                    /**
                     * 获取节省计划未覆盖金额（即优惠后总价）
                     * @return SpUncoveredAmount 节省计划未覆盖金额（即优惠后总价）
                     * 
                     */
                    double GetSpUncoveredAmount() const;

                    /**
                     * 设置节省计划未覆盖金额（即优惠后总价）
                     * @param _spUncoveredAmount 节省计划未覆盖金额（即优惠后总价）
                     * 
                     */
                    void SetSpUncoveredAmount(const double& _spUncoveredAmount);

                    /**
                     * 判断参数 SpUncoveredAmount 是否已赋值
                     * @return SpUncoveredAmount 是否已赋值
                     * 
                     */
                    bool SpUncoveredAmountHasBeenSet() const;

                    /**
                     * 获取总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）
                     * @return TotalRealAmount 总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）
                     * 
                     */
                    double GetTotalRealAmount() const;

                    /**
                     * 设置总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）
                     * @param _totalRealAmount 总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）
                     * 
                     */
                    void SetTotalRealAmount(const double& _totalRealAmount);

                    /**
                     * 判断参数 TotalRealAmount 是否已赋值
                     * @return TotalRealAmount 是否已赋值
                     * 
                     */
                    bool TotalRealAmountHasBeenSet() const;

                    /**
                     * 获取按量计费预期金额（即折前价 * 折扣）
                     * @return ExpectedAmount 按量计费预期金额（即折前价 * 折扣）
                     * 
                     */
                    double GetExpectedAmount() const;

                    /**
                     * 设置按量计费预期金额（即折前价 * 折扣）
                     * @param _expectedAmount 按量计费预期金额（即折前价 * 折扣）
                     * 
                     */
                    void SetExpectedAmount(const double& _expectedAmount);

                    /**
                     * 判断参数 ExpectedAmount 是否已赋值
                     * @return ExpectedAmount 是否已赋值
                     * 
                     */
                    bool ExpectedAmountHasBeenSet() const;

                    /**
                     * 获取覆盖率结果，取值[0, 100]
                     * @return SpCoverage 覆盖率结果，取值[0, 100]
                     * 
                     */
                    double GetSpCoverage() const;

                    /**
                     * 设置覆盖率结果，取值[0, 100]
                     * @param _spCoverage 覆盖率结果，取值[0, 100]
                     * 
                     */
                    void SetSpCoverage(const double& _spCoverage);

                    /**
                     * 判断参数 SpCoverage 是否已赋值
                     * @return SpCoverage 是否已赋值
                     * 
                     */
                    bool SpCoverageHasBeenSet() const;

                    /**
                     * 获取支付者昵称
                     * @return PayerUinName 支付者昵称
                     * 
                     */
                    std::string GetPayerUinName() const;

                    /**
                     * 设置支付者昵称
                     * @param _payerUinName 支付者昵称
                     * 
                     */
                    void SetPayerUinName(const std::string& _payerUinName);

                    /**
                     * 判断参数 PayerUinName 是否已赋值
                     * @return PayerUinName 是否已赋值
                     * 
                     */
                    bool PayerUinNameHasBeenSet() const;

                    /**
                     * 获取使用者昵称
                     * @return OwnerUinName 使用者昵称
                     * 
                     */
                    std::string GetOwnerUinName() const;

                    /**
                     * 设置使用者昵称
                     * @param _ownerUinName 使用者昵称
                     * 
                     */
                    void SetOwnerUinName(const std::string& _ownerUinName);

                    /**
                     * 判断参数 OwnerUinName 是否已赋值
                     * @return OwnerUinName 是否已赋值
                     * 
                     */
                    bool OwnerUinNameHasBeenSet() const;

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
                     * 获取计费项名称
                     * @return SubBillingItemName 计费项名称
                     * 
                     */
                    std::string GetSubBillingItemName() const;

                    /**
                     * 设置计费项名称
                     * @param _subBillingItemName 计费项名称
                     * 
                     */
                    void SetSubBillingItemName(const std::string& _subBillingItemName);

                    /**
                     * 判断参数 SubBillingItemName 是否已赋值
                     * @return SubBillingItemName 是否已赋值
                     * 
                     */
                    bool SubBillingItemNameHasBeenSet() const;

                    /**
                     * 获取计费细项名称
                     * @return BillingItemName 计费细项名称
                     * 
                     */
                    std::string GetBillingItemName() const;

                    /**
                     * 设置计费细项名称
                     * @param _billingItemName 计费细项名称
                     * 
                     */
                    void SetBillingItemName(const std::string& _billingItemName);

                    /**
                     * 判断参数 BillingItemName 是否已赋值
                     * @return BillingItemName 是否已赋值
                     * 
                     */
                    bool BillingItemNameHasBeenSet() const;

                    /**
                     * 获取子产品名称
                     * @return SubProductName 子产品名称
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置子产品名称
                     * @param _subProductName 子产品名称
                     * 
                     */
                    void SetSubProductName(const std::string& _subProductName);

                    /**
                     * 判断参数 SubProductName 是否已赋值
                     * @return SubProductName 是否已赋值
                     * 
                     */
                    bool SubProductNameHasBeenSet() const;

                private:

                    /**
                     * 资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 地域ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 产品编码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 子产品编码
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 费用起始日期，格式yyyy-MM-dd
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 费用结束日期，格式yyyy-MM-dd，目前与StartDate相等
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 节省计划覆盖金额（即节省计划支付金额）
                     */
                    double m_spCoveredAmount;
                    bool m_spCoveredAmountHasBeenSet;

                    /**
                     * 节省计划未覆盖金额（即优惠后总价）
                     */
                    double m_spUncoveredAmount;
                    bool m_spUncoveredAmountHasBeenSet;

                    /**
                     * 总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）
                     */
                    double m_totalRealAmount;
                    bool m_totalRealAmountHasBeenSet;

                    /**
                     * 按量计费预期金额（即折前价 * 折扣）
                     */
                    double m_expectedAmount;
                    bool m_expectedAmountHasBeenSet;

                    /**
                     * 覆盖率结果，取值[0, 100]
                     */
                    double m_spCoverage;
                    bool m_spCoverageHasBeenSet;

                    /**
                     * 支付者昵称
                     */
                    std::string m_payerUinName;
                    bool m_payerUinNameHasBeenSet;

                    /**
                     * 使用者昵称
                     */
                    std::string m_ownerUinName;
                    bool m_ownerUinNameHasBeenSet;

                    /**
                     * 支付者uin
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * 计费项名称
                     */
                    std::string m_subBillingItemName;
                    bool m_subBillingItemNameHasBeenSet;

                    /**
                     * 计费细项名称
                     */
                    std::string m_billingItemName;
                    bool m_billingItemNameHasBeenSet;

                    /**
                     * 子产品名称
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANCOVERAGEDETAIL_H_
