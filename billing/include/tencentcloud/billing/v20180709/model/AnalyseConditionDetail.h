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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AnalyseBusinessDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseProjectDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseRegionDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalysePayModeDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseActionTypeDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseZoneDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseOwnerUinDetail.h>
#include <tencentcloud/billing/v20180709/model/AnalyseAmountDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 成本分析过滤框复杂类型
                */
                class AnalyseConditionDetail : public AbstractModel
                {
                public:
                    AnalyseConditionDetail();
                    ~AnalyseConditionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品
                     * @return Business 产品
                     * 
                     */
                    std::vector<AnalyseBusinessDetail> GetBusiness() const;

                    /**
                     * 设置产品
                     * @param _business 产品
                     * 
                     */
                    void SetBusiness(const std::vector<AnalyseBusinessDetail>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取项目
                     * @return Project 项目
                     * 
                     */
                    std::vector<AnalyseProjectDetail> GetProject() const;

                    /**
                     * 设置项目
                     * @param _project 项目
                     * 
                     */
                    void SetProject(const std::vector<AnalyseProjectDetail>& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::vector<AnalyseRegionDetail> GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::vector<AnalyseRegionDetail>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取计费模式
                     * @return PayMode 计费模式
                     * 
                     */
                    std::vector<AnalysePayModeDetail> GetPayMode() const;

                    /**
                     * 设置计费模式
                     * @param _payMode 计费模式
                     * 
                     */
                    void SetPayMode(const std::vector<AnalysePayModeDetail>& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取交易类型
                     * @return ActionType 交易类型
                     * 
                     */
                    std::vector<AnalyseActionTypeDetail> GetActionType() const;

                    /**
                     * 设置交易类型
                     * @param _actionType 交易类型
                     * 
                     */
                    void SetActionType(const std::vector<AnalyseActionTypeDetail>& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::vector<AnalyseZoneDetail> GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::vector<AnalyseZoneDetail>& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取资源所有者Uin
                     * @return OwnerUin 资源所有者Uin
                     * 
                     */
                    std::vector<AnalyseOwnerUinDetail> GetOwnerUin() const;

                    /**
                     * 设置资源所有者Uin
                     * @param _ownerUin 资源所有者Uin
                     * 
                     */
                    void SetOwnerUin(const std::vector<AnalyseOwnerUinDetail>& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取费用类型
                     * @return Amount 费用类型
                     * 
                     */
                    std::vector<AnalyseAmountDetail> GetAmount() const;

                    /**
                     * 设置费用类型
                     * @param _amount 费用类型
                     * 
                     */
                    void SetAmount(const std::vector<AnalyseAmountDetail>& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                private:

                    /**
                     * 产品
                     */
                    std::vector<AnalyseBusinessDetail> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 项目
                     */
                    std::vector<AnalyseProjectDetail> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 地域
                     */
                    std::vector<AnalyseRegionDetail> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 计费模式
                     */
                    std::vector<AnalysePayModeDetail> m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 交易类型
                     */
                    std::vector<AnalyseActionTypeDetail> m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::vector<AnalyseZoneDetail> m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 资源所有者Uin
                     */
                    std::vector<AnalyseOwnerUinDetail> m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 费用类型
                     */
                    std::vector<AnalyseAmountDetail> m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSECONDITIONDETAIL_H_
