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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONDITIONS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONDITIONS_H_

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
                * 账单筛选条件对象
                */
                class Conditions : public AbstractModel
                {
                public:
                    Conditions();
                    ~Conditions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>只支持6个月和12个月两个值</p>
                     * @return TimeRange <p>只支持6个月和12个月两个值</p>
                     * 
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置<p>只支持6个月和12个月两个值</p>
                     * @param _timeRange <p>只支持6个月和12个月两个值</p>
                     * 
                     */
                    void SetTimeRange(const uint64_t& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取<p>产品名称代码</p>
                     * @return BusinessCode <p>产品名称代码</p>
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置<p>产品名称代码</p>
                     * @param _businessCode <p>产品名称代码</p>
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectId <p>项目ID</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectId <p>项目ID</p>
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>地域ID</p>
                     * @return RegionId <p>地域ID</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionId <p>地域ID</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>付费模式，可选prePay和postPay</p>
                     * @return PayMode <p>付费模式，可选prePay和postPay</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费模式，可选prePay和postPay</p>
                     * @param _payMode <p>付费模式，可选prePay和postPay</p>
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
                     * 获取<p>资源关键字</p>
                     * @return ResourceKeyword <p>资源关键字</p>
                     * 
                     */
                    std::string GetResourceKeyword() const;

                    /**
                     * 设置<p>资源关键字</p>
                     * @param _resourceKeyword <p>资源关键字</p>
                     * 
                     */
                    void SetResourceKeyword(const std::string& _resourceKeyword);

                    /**
                     * 判断参数 ResourceKeyword 是否已赋值
                     * @return ResourceKeyword 是否已赋值
                     * 
                     */
                    bool ResourceKeywordHasBeenSet() const;

                    /**
                     * 获取<p>产品名称代码</p>
                     * @return BusinessCodes <p>产品名称代码</p>
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置<p>产品名称代码</p>
                     * @param _businessCodes <p>产品名称代码</p>
                     * 
                     */
                    void SetBusinessCodes(const std::vector<std::string>& _businessCodes);

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
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置<p>子产品名称代码</p>
                     * @param _productCodes <p>子产品名称代码</p>
                     * 
                     */
                    void SetProductCodes(const std::vector<std::string>& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

                    /**
                     * 获取<p>地域ID</p>
                     * @return RegionIds <p>地域ID</p>
                     * 
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionIds <p>地域ID</p>
                     * 
                     */
                    void SetRegionIds(const std::vector<int64_t>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取<p>项目ID</p>
                     * @return ProjectIds <p>项目ID</p>
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _projectIds <p>项目ID</p>
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取<p>付费模式，可选prePay和postPay</p>
                     * @return PayModes <p>付费模式，可选prePay和postPay</p>
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置<p>付费模式，可选prePay和postPay</p>
                     * @param _payModes <p>付费模式，可选prePay和postPay</p>
                     * 
                     */
                    void SetPayModes(const std::vector<std::string>& _payModes);

                    /**
                     * 判断参数 PayModes 是否已赋值
                     * @return PayModes 是否已赋值
                     * 
                     */
                    bool PayModesHasBeenSet() const;

                    /**
                     * 获取<p>交易类型</p>
                     * @return ActionTypes <p>交易类型</p>
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置<p>交易类型</p>
                     * @param _actionTypes <p>交易类型</p>
                     * 
                     */
                    void SetActionTypes(const std::vector<std::string>& _actionTypes);

                    /**
                     * 判断参数 ActionTypes 是否已赋值
                     * @return ActionTypes 是否已赋值
                     * 
                     */
                    bool ActionTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否隐藏0元流水</p>
                     * @return HideFreeCost <p>是否隐藏0元流水</p>
                     * 
                     */
                    int64_t GetHideFreeCost() const;

                    /**
                     * 设置<p>是否隐藏0元流水</p>
                     * @param _hideFreeCost <p>是否隐藏0元流水</p>
                     * 
                     */
                    void SetHideFreeCost(const int64_t& _hideFreeCost);

                    /**
                     * 判断参数 HideFreeCost 是否已赋值
                     * @return HideFreeCost 是否已赋值
                     * 
                     */
                    bool HideFreeCostHasBeenSet() const;

                    /**
                     * 获取<p>排序规则，可选desc和asc</p>
                     * @return OrderByCost <p>排序规则，可选desc和asc</p>
                     * 
                     */
                    std::string GetOrderByCost() const;

                    /**
                     * 设置<p>排序规则，可选desc和asc</p>
                     * @param _orderByCost <p>排序规则，可选desc和asc</p>
                     * 
                     */
                    void SetOrderByCost(const std::string& _orderByCost);

                    /**
                     * 判断参数 OrderByCost 是否已赋值
                     * @return OrderByCost 是否已赋值
                     * 
                     */
                    bool OrderByCostHasBeenSet() const;

                    /**
                     * 获取<p>交易ID</p>
                     * @return BillIds <p>交易ID</p>
                     * 
                     */
                    std::vector<std::string> GetBillIds() const;

                    /**
                     * 设置<p>交易ID</p>
                     * @param _billIds <p>交易ID</p>
                     * 
                     */
                    void SetBillIds(const std::vector<std::string>& _billIds);

                    /**
                     * 判断参数 BillIds 是否已赋值
                     * @return BillIds 是否已赋值
                     * 
                     */
                    bool BillIdsHasBeenSet() const;

                    /**
                     * 获取<p>组件编码</p>
                     * @return ComponentCodes <p>组件编码</p>
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置<p>组件编码</p>
                     * @param _componentCodes <p>组件编码</p>
                     * 
                     */
                    void SetComponentCodes(const std::vector<std::string>& _componentCodes);

                    /**
                     * 判断参数 ComponentCodes 是否已赋值
                     * @return ComponentCodes 是否已赋值
                     * 
                     */
                    bool ComponentCodesHasBeenSet() const;

                    /**
                     * 获取<p>文件ID</p>
                     * @return FileIds <p>文件ID</p>
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置<p>文件ID</p>
                     * @param _fileIds <p>文件ID</p>
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取<p>文件类型</p>
                     * @return FileTypes <p>文件类型</p>
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置<p>文件类型</p>
                     * @param _fileTypes <p>文件类型</p>
                     * 
                     */
                    void SetFileTypes(const std::vector<std::string>& _fileTypes);

                    /**
                     * 判断参数 FileTypes 是否已赋值
                     * @return FileTypes 是否已赋值
                     * 
                     */
                    bool FileTypesHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
                     * 
                     */
                    void SetStatus(const std::vector<uint64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>只支持6个月和12个月两个值</p>
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * <p>产品名称代码</p>
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>付费模式，可选prePay和postPay</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>资源关键字</p>
                     */
                    std::string m_resourceKeyword;
                    bool m_resourceKeywordHasBeenSet;

                    /**
                     * <p>产品名称代码</p>
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * <p>子产品名称代码</p>
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * <p>项目ID</p>
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>付费模式，可选prePay和postPay</p>
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * <p>交易类型</p>
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * <p>是否隐藏0元流水</p>
                     */
                    int64_t m_hideFreeCost;
                    bool m_hideFreeCostHasBeenSet;

                    /**
                     * <p>排序规则，可选desc和asc</p>
                     */
                    std::string m_orderByCost;
                    bool m_orderByCostHasBeenSet;

                    /**
                     * <p>交易ID</p>
                     */
                    std::vector<std::string> m_billIds;
                    bool m_billIdsHasBeenSet;

                    /**
                     * <p>组件编码</p>
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * <p>文件ID</p>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * <p>文件类型</p>
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONDITIONS_H_
