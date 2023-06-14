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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_PLANINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_PLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * edgeone套餐信息
                */
                class PlanInfo : public AbstractModel
                {
                public:
                    PlanInfo();
                    ~PlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结算货币类型，取值有：
<li> CNY ：人民币结算； </li>
<li> USD ：美元结算。</li>
                     * @return Currency 结算货币类型，取值有：
<li> CNY ：人民币结算； </li>
<li> USD ：美元结算。</li>
                     * 
                     */
                    std::string GetCurrency() const;

                    /**
                     * 设置结算货币类型，取值有：
<li> CNY ：人民币结算； </li>
<li> USD ：美元结算。</li>
                     * @param _currency 结算货币类型，取值有：
<li> CNY ：人民币结算； </li>
<li> USD ：美元结算。</li>
                     * 
                     */
                    void SetCurrency(const std::string& _currency);

                    /**
                     * 判断参数 Currency 是否已赋值
                     * @return Currency 是否已赋值
                     * 
                     */
                    bool CurrencyHasBeenSet() const;

                    /**
                     * 获取套餐所含流量，该流量数值为安全加速流量，内容加速流量和智能加速流量的总和（单位：字节）。
                     * @return Flux 套餐所含流量，该流量数值为安全加速流量，内容加速流量和智能加速流量的总和（单位：字节）。
                     * 
                     */
                    uint64_t GetFlux() const;

                    /**
                     * 设置套餐所含流量，该流量数值为安全加速流量，内容加速流量和智能加速流量的总和（单位：字节）。
                     * @param _flux 套餐所含流量，该流量数值为安全加速流量，内容加速流量和智能加速流量的总和（单位：字节）。
                     * 
                     */
                    void SetFlux(const uint64_t& _flux);

                    /**
                     * 判断参数 Flux 是否已赋值
                     * @return Flux 是否已赋值
                     * 
                     */
                    bool FluxHasBeenSet() const;

                    /**
                     * 获取结算周期，取值有：
<li> y ：按年结算； </li>
<li> m ：按月结算；</li>
<li> h ：按小时结算； </li>
<li> M ：按分钟结算；</li>
<li> s ：按秒结算。 </li>
                     * @return Frequency 结算周期，取值有：
<li> y ：按年结算； </li>
<li> m ：按月结算；</li>
<li> h ：按小时结算； </li>
<li> M ：按分钟结算；</li>
<li> s ：按秒结算。 </li>
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置结算周期，取值有：
<li> y ：按年结算； </li>
<li> m ：按月结算；</li>
<li> h ：按小时结算； </li>
<li> M ：按分钟结算；</li>
<li> s ：按秒结算。 </li>
                     * @param _frequency 结算周期，取值有：
<li> y ：按年结算； </li>
<li> m ：按月结算；</li>
<li> h ：按小时结算； </li>
<li> M ：按分钟结算；</li>
<li> s ：按秒结算。 </li>
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取套餐类型，取值有：
<li> sta ：全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot ：全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm ：中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot ：中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent ：全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot ： 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm ：中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot ：中国大陆内容分发网络企业版套餐附带bot管理；</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>
                     * @return PlanType 套餐类型，取值有：
<li> sta ：全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot ：全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm ：中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot ：中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent ：全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot ： 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm ：中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot ：中国大陆内容分发网络企业版套餐附带bot管理；</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>
                     * 
                     */
                    std::string GetPlanType() const;

                    /**
                     * 设置套餐类型，取值有：
<li> sta ：全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot ：全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm ：中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot ：中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent ：全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot ： 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm ：中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot ：中国大陆内容分发网络企业版套餐附带bot管理；</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>
                     * @param _planType 套餐类型，取值有：
<li> sta ：全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot ：全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm ：中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot ：中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent ：全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot ： 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm ：中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot ：中国大陆内容分发网络企业版套餐附带bot管理；</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>
                     * 
                     */
                    void SetPlanType(const std::string& _planType);

                    /**
                     * 判断参数 PlanType 是否已赋值
                     * @return PlanType 是否已赋值
                     * 
                     */
                    bool PlanTypeHasBeenSet() const;

                    /**
                     * 获取套餐价格（单位：分）。
                     * @return Price 套餐价格（单位：分）。
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置套餐价格（单位：分）。
                     * @param _price 套餐价格（单位：分）。
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取套餐所含请求次数，该请求次数为安全加速请求次数。（单位：次）。
                     * @return Request 套餐所含请求次数，该请求次数为安全加速请求次数。（单位：次）。
                     * 
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置套餐所含请求次数，该请求次数为安全加速请求次数。（单位：次）。
                     * @param _request 套餐所含请求次数，该请求次数为安全加速请求次数。（单位：次）。
                     * 
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取套餐所能绑定的站点个数。
                     * @return SiteNumber 套餐所能绑定的站点个数。
                     * 
                     */
                    uint64_t GetSiteNumber() const;

                    /**
                     * 设置套餐所能绑定的站点个数。
                     * @param _siteNumber 套餐所能绑定的站点个数。
                     * 
                     */
                    void SetSiteNumber(const uint64_t& _siteNumber);

                    /**
                     * 判断参数 SiteNumber 是否已赋值
                     * @return SiteNumber 是否已赋值
                     * 
                     */
                    bool SiteNumberHasBeenSet() const;

                    /**
                     * 获取套餐加速区域类型，取值有：
<li> mainland ：中国大陆； </li>
<li> overseas ：全球（不包括中国大陆）；</li>
<li> global ：全球（包括中国大陆）。 </li>
                     * @return Area 套餐加速区域类型，取值有：
<li> mainland ：中国大陆； </li>
<li> overseas ：全球（不包括中国大陆）；</li>
<li> global ：全球（包括中国大陆）。 </li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置套餐加速区域类型，取值有：
<li> mainland ：中国大陆； </li>
<li> overseas ：全球（不包括中国大陆）；</li>
<li> global ：全球（包括中国大陆）。 </li>
                     * @param _area 套餐加速区域类型，取值有：
<li> mainland ：中国大陆； </li>
<li> overseas ：全球（不包括中国大陆）；</li>
<li> global ：全球（包括中国大陆）。 </li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 结算货币类型，取值有：
<li> CNY ：人民币结算； </li>
<li> USD ：美元结算。</li>
                     */
                    std::string m_currency;
                    bool m_currencyHasBeenSet;

                    /**
                     * 套餐所含流量，该流量数值为安全加速流量，内容加速流量和智能加速流量的总和（单位：字节）。
                     */
                    uint64_t m_flux;
                    bool m_fluxHasBeenSet;

                    /**
                     * 结算周期，取值有：
<li> y ：按年结算； </li>
<li> m ：按月结算；</li>
<li> h ：按小时结算； </li>
<li> M ：按分钟结算；</li>
<li> s ：按秒结算。 </li>
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 套餐类型，取值有：
<li> sta ：全球内容分发网络（不包括中国大陆）标准版套餐； </li>
<li> sta_with_bot ：全球内容分发网络（不包括中国大陆）标准版套餐附带bot管理；</li>
<li> sta_cm ：中国大陆内容分发网络标准版套餐； </li>
<li> sta_cm_with_bot ：中国大陆内容分发网络标准版套餐附带bot管理；</li>
<li> sta_global ：全球内容分发网络（包括中国大陆）标准版套餐； </li>
<li> sta_global_with_bot ：全球内容分发网络（包括中国大陆）标准版套餐附带bot管理；</li>
<li> ent ：全球内容分发网络（不包括中国大陆）企业版套餐； </li>
<li> ent_with_bot ： 全球内容分发网络（不包括中国大陆）企业版套餐附带bot管理；</li>
<li> ent_cm ：中国大陆内容分发网络企业版套餐； </li>
<li> ent_cm_with_bot ：中国大陆内容分发网络企业版套餐附带bot管理；</li>
<li> ent_global ：全球内容分发网络（包括中国大陆）企业版套餐； </li>
<li> ent_global_with_bot ：全球内容分发网络（包括中国大陆）企业版套餐附带bot管理。</li>
                     */
                    std::string m_planType;
                    bool m_planTypeHasBeenSet;

                    /**
                     * 套餐价格（单位：分）。
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 套餐所含请求次数，该请求次数为安全加速请求次数。（单位：次）。
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * 套餐所能绑定的站点个数。
                     */
                    uint64_t m_siteNumber;
                    bool m_siteNumberHasBeenSet;

                    /**
                     * 套餐加速区域类型，取值有：
<li> mainland ：中国大陆； </li>
<li> overseas ：全球（不包括中国大陆）；</li>
<li> global ：全球（包括中国大陆）。 </li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_PLANINFO_H_
