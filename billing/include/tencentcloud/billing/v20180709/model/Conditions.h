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
                     * 获取只支持6和12两个值
                     * @return TimeRange 只支持6和12两个值
                     * 
                     */
                    uint64_t GetTimeRange() const;

                    /**
                     * 设置只支持6和12两个值
                     * @param _timeRange 只支持6和12两个值
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
                     * 获取产品名称代码
                     * @return BusinessCode 产品名称代码
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置产品名称代码
                     * @param _businessCode 产品名称代码
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
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
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
                     * 获取付费模式，可选prePay和postPay
                     * @return PayMode 付费模式，可选prePay和postPay
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费模式，可选prePay和postPay
                     * @param _payMode 付费模式，可选prePay和postPay
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
                     * 获取资源关键字
                     * @return ResourceKeyword 资源关键字
                     * 
                     */
                    std::string GetResourceKeyword() const;

                    /**
                     * 设置资源关键字
                     * @param _resourceKeyword 资源关键字
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
                     * 获取产品名称代码
                     * @return BusinessCodes 产品名称代码
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置产品名称代码
                     * @param _businessCodes 产品名称代码
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
                     * 获取子产品名称代码
                     * @return ProductCodes 子产品名称代码
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置子产品名称代码
                     * @param _productCodes 子产品名称代码
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
                     * 获取地域ID
                     * @return RegionIds 地域ID
                     * 
                     */
                    std::vector<int64_t> GetRegionIds() const;

                    /**
                     * 设置地域ID
                     * @param _regionIds 地域ID
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
                     * 获取项目ID
                     * @return ProjectIds 项目ID
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目ID
                     * @param _projectIds 项目ID
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
                     * 获取付费模式，可选prePay和postPay
                     * @return PayModes 付费模式，可选prePay和postPay
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置付费模式，可选prePay和postPay
                     * @param _payModes 付费模式，可选prePay和postPay
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
                     * 获取交易类型
                     * @return ActionTypes 交易类型
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置交易类型
                     * @param _actionTypes 交易类型
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
                     * 获取是否隐藏0元流水
                     * @return HideFreeCost 是否隐藏0元流水
                     * 
                     */
                    int64_t GetHideFreeCost() const;

                    /**
                     * 设置是否隐藏0元流水
                     * @param _hideFreeCost 是否隐藏0元流水
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
                     * 获取排序规则，可选desc和asc
                     * @return OrderByCost 排序规则，可选desc和asc
                     * 
                     */
                    std::string GetOrderByCost() const;

                    /**
                     * 设置排序规则，可选desc和asc
                     * @param _orderByCost 排序规则，可选desc和asc
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
                     * 获取交易ID
                     * @return BillIds 交易ID
                     * 
                     */
                    std::vector<std::string> GetBillIds() const;

                    /**
                     * 设置交易ID
                     * @param _billIds 交易ID
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
                     * 获取组件编码
                     * @return ComponentCodes 组件编码
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置组件编码
                     * @param _componentCodes 组件编码
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
                     * 获取文件ID
                     * @return FileIds 文件ID
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置文件ID
                     * @param _fileIds 文件ID
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
                     * 获取文件类型
                     * @return FileTypes 文件类型
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置文件类型
                     * @param _fileTypes 文件类型
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::vector<uint64_t> GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 只支持6和12两个值
                     */
                    uint64_t m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * 产品名称代码
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 地域ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 付费模式，可选prePay和postPay
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 资源关键字
                     */
                    std::string m_resourceKeyword;
                    bool m_resourceKeywordHasBeenSet;

                    /**
                     * 产品名称代码
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * 子产品名称代码
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * 地域ID
                     */
                    std::vector<int64_t> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 付费模式，可选prePay和postPay
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * 交易类型
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * 是否隐藏0元流水
                     */
                    int64_t m_hideFreeCost;
                    bool m_hideFreeCostHasBeenSet;

                    /**
                     * 排序规则，可选desc和asc
                     */
                    std::string m_orderByCost;
                    bool m_orderByCostHasBeenSet;

                    /**
                     * 交易ID
                     */
                    std::vector<std::string> m_billIds;
                    bool m_billIdsHasBeenSet;

                    /**
                     * 组件编码
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * 文件ID
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * 状态
                     */
                    std::vector<uint64_t> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONDITIONS_H_
