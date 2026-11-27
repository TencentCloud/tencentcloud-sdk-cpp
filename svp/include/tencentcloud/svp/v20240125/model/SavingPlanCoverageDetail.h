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
                     * 获取<p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
                     * @return ResourceId <p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
                     * @param _resourceId <p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
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
                     * 获取<p>地域ID</p>
                     * @return RegionId <p>地域ID</p>
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionId <p>地域ID</p>
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
                     * 获取<p>产品编码</p>
                     * @return ProductCode <p>产品编码</p>
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置<p>产品编码</p>
                     * @param _productCode <p>产品编码</p>
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
                     * 获取<p>子产品编码</p>
                     * @return SubProductCode <p>子产品编码</p>
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置<p>子产品编码</p>
                     * @param _subProductCode <p>子产品编码</p>
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
                     * 获取<p>费用起始日期，格式yyyy-MM-dd</p>
                     * @return StartDate <p>费用起始日期，格式yyyy-MM-dd</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>费用起始日期，格式yyyy-MM-dd</p>
                     * @param _startDate <p>费用起始日期，格式yyyy-MM-dd</p>
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
                     * 获取<p>费用结束日期，格式yyyy-MM-dd，目前与StartDate相等</p>
                     * @return EndDate <p>费用结束日期，格式yyyy-MM-dd，目前与StartDate相等</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>费用结束日期，格式yyyy-MM-dd，目前与StartDate相等</p>
                     * @param _endDate <p>费用结束日期，格式yyyy-MM-dd，目前与StartDate相等</p>
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
                     * 获取<p>节省计划覆盖金额（即节省计划支付金额）</p>
                     * @return SpCoveredAmount <p>节省计划覆盖金额（即节省计划支付金额）</p>
                     * 
                     */
                    double GetSpCoveredAmount() const;

                    /**
                     * 设置<p>节省计划覆盖金额（即节省计划支付金额）</p>
                     * @param _spCoveredAmount <p>节省计划覆盖金额（即节省计划支付金额）</p>
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
                     * 获取<p>节省计划未覆盖金额（即优惠后总价）</p>
                     * @return SpUncoveredAmount <p>节省计划未覆盖金额（即优惠后总价）</p>
                     * 
                     */
                    double GetSpUncoveredAmount() const;

                    /**
                     * 设置<p>节省计划未覆盖金额（即优惠后总价）</p>
                     * @param _spUncoveredAmount <p>节省计划未覆盖金额（即优惠后总价）</p>
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
                     * 获取<p>总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）</p>
                     * @return TotalRealAmount <p>总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）</p>
                     * 
                     */
                    double GetTotalRealAmount() const;

                    /**
                     * 设置<p>总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）</p>
                     * @param _totalRealAmount <p>总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）</p>
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
                     * 获取<p>按量计费预期金额（即折前价 * 折扣）</p>
                     * @return ExpectedAmount <p>按量计费预期金额（即折前价 * 折扣）</p>
                     * 
                     */
                    double GetExpectedAmount() const;

                    /**
                     * 设置<p>按量计费预期金额（即折前价 * 折扣）</p>
                     * @param _expectedAmount <p>按量计费预期金额（即折前价 * 折扣）</p>
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
                     * 获取<p>覆盖率结果，取值为百分比值，取值范围[0,100]</p>
                     * @return SpCoverage <p>覆盖率结果，取值为百分比值，取值范围[0,100]</p>
                     * 
                     */
                    double GetSpCoverage() const;

                    /**
                     * 设置<p>覆盖率结果，取值为百分比值，取值范围[0,100]</p>
                     * @param _spCoverage <p>覆盖率结果，取值为百分比值，取值范围[0,100]</p>
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
                     * 获取<p>支付者昵称</p>
                     * @return PayerUinName <p>支付者昵称</p>
                     * 
                     */
                    std::string GetPayerUinName() const;

                    /**
                     * 设置<p>支付者昵称</p>
                     * @param _payerUinName <p>支付者昵称</p>
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
                     * 获取<p>使用者昵称</p>
                     * @return OwnerUinName <p>使用者昵称</p>
                     * 
                     */
                    std::string GetOwnerUinName() const;

                    /**
                     * 设置<p>使用者昵称</p>
                     * @param _ownerUinName <p>使用者昵称</p>
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
                     * 获取<p>支付者uin</p>
                     * @return PayerUin <p>支付者uin</p>
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置<p>支付者uin</p>
                     * @param _payerUin <p>支付者uin</p>
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
                     * 获取<p>计费项名称</p>
                     * @return SubBillingItemName <p>计费项名称</p>
                     * 
                     */
                    std::string GetSubBillingItemName() const;

                    /**
                     * 设置<p>计费项名称</p>
                     * @param _subBillingItemName <p>计费项名称</p>
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
                     * 获取<p>计费细项名称</p>
                     * @return BillingItemName <p>计费细项名称</p>
                     * 
                     */
                    std::string GetBillingItemName() const;

                    /**
                     * 设置<p>计费细项名称</p>
                     * @param _billingItemName <p>计费细项名称</p>
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
                     * 获取<p>子产品名称</p>
                     * @return SubProductName <p>子产品名称</p>
                     * 
                     */
                    std::string GetSubProductName() const;

                    /**
                     * 设置<p>子产品名称</p>
                     * @param _subProductName <p>子产品名称</p>
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
                     * <p>资源 ID：账单中出账对象 ID，不同产品因资源形态不同，资源内容不完全相同，如云服务器 CVM 为对应的实例 ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>产品编码</p>
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * <p>子产品编码</p>
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * <p>费用起始日期，格式yyyy-MM-dd</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>费用结束日期，格式yyyy-MM-dd，目前与StartDate相等</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>节省计划覆盖金额（即节省计划支付金额）</p>
                     */
                    double m_spCoveredAmount;
                    bool m_spCoveredAmountHasBeenSet;

                    /**
                     * <p>节省计划未覆盖金额（即优惠后总价）</p>
                     */
                    double m_spUncoveredAmount;
                    bool m_spUncoveredAmountHasBeenSet;

                    /**
                     * <p>总支出（即节省计划未覆盖金额 + 节省计划覆盖金额）</p>
                     */
                    double m_totalRealAmount;
                    bool m_totalRealAmountHasBeenSet;

                    /**
                     * <p>按量计费预期金额（即折前价 * 折扣）</p>
                     */
                    double m_expectedAmount;
                    bool m_expectedAmountHasBeenSet;

                    /**
                     * <p>覆盖率结果，取值为百分比值，取值范围[0,100]</p>
                     */
                    double m_spCoverage;
                    bool m_spCoverageHasBeenSet;

                    /**
                     * <p>支付者昵称</p>
                     */
                    std::string m_payerUinName;
                    bool m_payerUinNameHasBeenSet;

                    /**
                     * <p>使用者昵称</p>
                     */
                    std::string m_ownerUinName;
                    bool m_ownerUinNameHasBeenSet;

                    /**
                     * <p>支付者uin</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                    /**
                     * <p>计费项名称</p>
                     */
                    std::string m_subBillingItemName;
                    bool m_subBillingItemNameHasBeenSet;

                    /**
                     * <p>计费细项名称</p>
                     */
                    std::string m_billingItemName;
                    bool m_billingItemNameHasBeenSet;

                    /**
                     * <p>子产品名称</p>
                     */
                    std::string m_subProductName;
                    bool m_subProductNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANCOVERAGEDETAIL_H_
