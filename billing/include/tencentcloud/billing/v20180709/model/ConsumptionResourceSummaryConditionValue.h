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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYCONDITIONVALUE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYCONDITIONVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/ConditionBusiness.h>
#include <tencentcloud/billing/v20180709/model/ConditionProject.h>
#include <tencentcloud/billing/v20180709/model/ConditionRegion.h>
#include <tencentcloud/billing/v20180709/model/ConditionPayMode.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 消耗按资源汇总过滤条件
                */
                class ConsumptionResourceSummaryConditionValue : public AbstractModel
                {
                public:
                    ConsumptionResourceSummaryConditionValue();
                    ~ConsumptionResourceSummaryConditionValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取产品列表
                     * @return Business 产品列表
                     * 
                     */
                    std::vector<ConditionBusiness> GetBusiness() const;

                    /**
                     * 设置产品列表
                     * @param _business 产品列表
                     * 
                     */
                    void SetBusiness(const std::vector<ConditionBusiness>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取项目列表
                     * @return Project 项目列表
                     * 
                     */
                    std::vector<ConditionProject> GetProject() const;

                    /**
                     * 设置项目列表
                     * @param _project 项目列表
                     * 
                     */
                    void SetProject(const std::vector<ConditionProject>& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取地域列表
                     * @return Region 地域列表
                     * 
                     */
                    std::vector<ConditionRegion> GetRegion() const;

                    /**
                     * 设置地域列表
                     * @param _region 地域列表
                     * 
                     */
                    void SetRegion(const std::vector<ConditionRegion>& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取付费模式列表
                     * @return PayMode 付费模式列表
                     * 
                     */
                    std::vector<ConditionPayMode> GetPayMode() const;

                    /**
                     * 设置付费模式列表
                     * @param _payMode 付费模式列表
                     * 
                     */
                    void SetPayMode(const std::vector<ConditionPayMode>& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 产品列表
                     */
                    std::vector<ConditionBusiness> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 项目列表
                     */
                    std::vector<ConditionProject> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 地域列表
                     */
                    std::vector<ConditionRegion> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 付费模式列表
                     */
                    std::vector<ConditionPayMode> m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CONSUMPTIONRESOURCESUMMARYCONDITIONVALUE_H_
