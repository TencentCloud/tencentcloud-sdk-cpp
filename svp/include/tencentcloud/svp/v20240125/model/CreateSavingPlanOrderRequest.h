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
                     * 获取<p>地域编码</p>
                     * @return RegionId <p>地域编码</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域编码</p>
                     * @param _regionId <p>地域编码</p>
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
                     * 获取<p>区域编码</p>
                     * @return ZoneId <p>区域编码</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>区域编码</p>
                     * @param _zoneId <p>区域编码</p>
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
                     * 获取<p>预付费类型</p><p>枚举值：</p><ul><li>1： 全预费</li><li>2： 部分预付</li><li>3： 不预付</li></ul>
                     * @return PrePayType <p>预付费类型</p><p>枚举值：</p><ul><li>1： 全预费</li><li>2： 部分预付</li><li>3： 不预付</li></ul>
                     * 
                     */
                    std::string GetPrePayType() const;

                    /**
                     * 设置<p>预付费类型</p><p>枚举值：</p><ul><li>1： 全预费</li><li>2： 部分预付</li><li>3： 不预付</li></ul>
                     * @param _prePayType <p>预付费类型</p><p>枚举值：</p><ul><li>1： 全预费</li><li>2： 部分预付</li><li>3： 不预付</li></ul>
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
                     * 获取<p>时长</p>
                     * @return TimeSpan <p>时长</p>
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置<p>时长</p>
                     * @param _timeSpan <p>时长</p>
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
                     * 获取<p>时长单位</p>
                     * @return TimeUnit <p>时长单位</p>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>时长单位</p>
                     * @param _timeUnit <p>时长单位</p>
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
                     * 获取<p>商品唯一标识</p>
                     * @return CommodityCode <p>商品唯一标识</p>
                     * 
                     */
                    std::string GetCommodityCode() const;

                    /**
                     * 设置<p>商品唯一标识</p>
                     * @param _commodityCode <p>商品唯一标识</p>
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
                     * 获取<p>承诺时长内的小额金额（单位：元）</p>
                     * @return PromiseUseAmount <p>承诺时长内的小额金额（单位：元）</p>
                     * 
                     */
                    int64_t GetPromiseUseAmount() const;

                    /**
                     * 设置<p>承诺时长内的小额金额（单位：元）</p>
                     * @param _promiseUseAmount <p>承诺时长内的小额金额（单位：元）</p>
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
                     * 获取<p>节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:&quot;2023-10-01 00:00:00&quot;，仅支持指定日期的0点时刻</p>
                     * @return SpecifyEffectTime <p>节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:&quot;2023-10-01 00:00:00&quot;，仅支持指定日期的0点时刻</p>
                     * 
                     */
                    std::string GetSpecifyEffectTime() const;

                    /**
                     * 设置<p>节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:&quot;2023-10-01 00:00:00&quot;，仅支持指定日期的0点时刻</p>
                     * @param _specifyEffectTime <p>节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:&quot;2023-10-01 00:00:00&quot;，仅支持指定日期的0点时刻</p>
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
                     * 获取<p>可重入ID</p>
                     * @return ClientToken <p>可重入ID</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>可重入ID</p>
                     * @param _clientToken <p>可重入ID</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>节省计划结算类型</p><p>枚举值：</p><ul><li>1： 小时结算包</li><li>2： 日结算包</li><li>3： 月结算包</li></ul><p>默认值：1</p><p>不填写是默认是小时结算包</p>
                     * @return CommitmentPeriod <p>节省计划结算类型</p><p>枚举值：</p><ul><li>1： 小时结算包</li><li>2： 日结算包</li><li>3： 月结算包</li></ul><p>默认值：1</p><p>不填写是默认是小时结算包</p>
                     * 
                     */
                    int64_t GetCommitmentPeriod() const;

                    /**
                     * 设置<p>节省计划结算类型</p><p>枚举值：</p><ul><li>1： 小时结算包</li><li>2： 日结算包</li><li>3： 月结算包</li></ul><p>默认值：1</p><p>不填写是默认是小时结算包</p>
                     * @param _commitmentPeriod <p>节省计划结算类型</p><p>枚举值：</p><ul><li>1： 小时结算包</li><li>2： 日结算包</li><li>3： 月结算包</li></ul><p>默认值：1</p><p>不填写是默认是小时结算包</p>
                     * 
                     */
                    void SetCommitmentPeriod(const int64_t& _commitmentPeriod);

                    /**
                     * 判断参数 CommitmentPeriod 是否已赋值
                     * @return CommitmentPeriod 是否已赋值
                     * 
                     */
                    bool CommitmentPeriodHasBeenSet() const;

                private:

                    /**
                     * <p>地域编码</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>区域编码</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>预付费类型</p><p>枚举值：</p><ul><li>1： 全预费</li><li>2： 部分预付</li><li>3： 不预付</li></ul>
                     */
                    std::string m_prePayType;
                    bool m_prePayTypeHasBeenSet;

                    /**
                     * <p>时长</p>
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>时长单位</p>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>商品唯一标识</p>
                     */
                    std::string m_commodityCode;
                    bool m_commodityCodeHasBeenSet;

                    /**
                     * <p>承诺时长内的小额金额（单位：元）</p>
                     */
                    int64_t m_promiseUseAmount;
                    bool m_promiseUseAmountHasBeenSet;

                    /**
                     * <p>节省计划的指定生效时间，若不传则为当前下单时间。传参数格式:&quot;2023-10-01 00:00:00&quot;，仅支持指定日期的0点时刻</p>
                     */
                    std::string m_specifyEffectTime;
                    bool m_specifyEffectTimeHasBeenSet;

                    /**
                     * <p>可重入ID</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>节省计划结算类型</p><p>枚举值：</p><ul><li>1： 小时结算包</li><li>2： 日结算包</li><li>3： 月结算包</li></ul><p>默认值：1</p><p>不填写是默认是小时结算包</p>
                     */
                    int64_t m_commitmentPeriod;
                    bool m_commitmentPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_CREATESAVINGPLANORDERREQUEST_H_
