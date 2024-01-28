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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_CREATESAVINGPLANORDERREQUEST_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_CREATESAVINGPLANORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSavingPlanOrder请求参数结构体
                */
                class CreateSavingPlanOrderRequest : public AbstractModel
                {
                public:
                    CreateSavingPlanOrderRequest();
                    ~CreateSavingPlanOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域编码
                     * @return RegionId 地域编码
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域编码
                     * @param _regionId 地域编码
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
                     * 获取区域编码
                     * @return ZoneId 区域编码
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区域编码
                     * @param _zoneId 区域编码
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取预付费类型
                     * @return PrePayType 预付费类型
                     * 
                     */
                    std::string GetPrePayType() const;

                    /**
                     * 设置预付费类型
                     * @param _prePayType 预付费类型
                     * 
                     */
                    void SetPrePayType(const std::string& _prePayType);

                    /**
                     * 判断参数 PrePayType 是否已赋值
                     * @return PrePayType 是否已赋值
                     * 
                     */
                    bool PrePayTypeHasBeenSet() const;

                    /**
                     * 获取时长
                     * @return TimeSpan 时长
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置时长
                     * @param _timeSpan 时长
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取时长单位
                     * @return TimeUnit 时长单位
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时长单位
                     * @param _timeUnit 时长单位
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取商品唯一标识
                     * @return CommodityCode 商品唯一标识
                     * 
                     */
                    std::string GetCommodityCode() const;

                    /**
                     * 设置商品唯一标识
                     * @param _commodityCode 商品唯一标识
                     * 
                     */
                    void SetCommodityCode(const std::string& _commodityCode);

                    /**
                     * 判断参数 CommodityCode 是否已赋值
                     * @return CommodityCode 是否已赋值
                     * 
                     */
                    bool CommodityCodeHasBeenSet() const;

                    /**
                     * 获取承诺时长内的小额金额（单位：元）
                     * @return PromiseUseAmount 承诺时长内的小额金额（单位：元）
                     * 
                     */
                    int64_t GetPromiseUseAmount() const;

                    /**
                     * 设置承诺时长内的小额金额（单位：元）
                     * @param _promiseUseAmount 承诺时长内的小额金额（单位：元）
                     * 
                     */
                    void SetPromiseUseAmount(const int64_t& _promiseUseAmount);

                    /**
                     * 判断参数 PromiseUseAmount 是否已赋值
                     * @return PromiseUseAmount 是否已赋值
                     * 
                     */
                    bool PromiseUseAmountHasBeenSet() const;

                    /**
                     * 获取节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:"2023-10-01 00:00:00"，仅支持指定日期的0点时刻
                     * @return SpecifyEffectTime 节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:"2023-10-01 00:00:00"，仅支持指定日期的0点时刻
                     * 
                     */
                    std::string GetSpecifyEffectTime() const;

                    /**
                     * 设置节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:"2023-10-01 00:00:00"，仅支持指定日期的0点时刻
                     * @param _specifyEffectTime 节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:"2023-10-01 00:00:00"，仅支持指定日期的0点时刻
                     * 
                     */
                    void SetSpecifyEffectTime(const std::string& _specifyEffectTime);

                    /**
                     * 判断参数 SpecifyEffectTime 是否已赋值
                     * @return SpecifyEffectTime 是否已赋值
                     * 
                     */
                    bool SpecifyEffectTimeHasBeenSet() const;

                    /**
                     * 获取可重入ID
                     * @return ClientToken 可重入ID
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置可重入ID
                     * @param _clientToken 可重入ID
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 地域编码
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 区域编码
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 预付费类型
                     */
                    std::string m_prePayType;
                    bool m_prePayTypeHasBeenSet;

                    /**
                     * 时长
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 时长单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 商品唯一标识
                     */
                    std::string m_commodityCode;
                    bool m_commodityCodeHasBeenSet;

                    /**
                     * 承诺时长内的小额金额（单位：元）
                     */
                    int64_t m_promiseUseAmount;
                    bool m_promiseUseAmountHasBeenSet;

                    /**
                     * 节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:"2023-10-01 00:00:00"，仅支持指定日期的0点时刻
                     */
                    std::string m_specifyEffectTime;
                    bool m_specifyEffectTimeHasBeenSet;

                    /**
                     * 可重入ID
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_CREATESAVINGPLANORDERREQUEST_H_
