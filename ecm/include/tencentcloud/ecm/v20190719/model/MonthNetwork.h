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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MONTHNETWORK_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MONTHNETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 客户对应月份的带宽信息
                */
                class MonthNetwork : public AbstractModel
                {
                public:
                    MonthNetwork();
                    ~MonthNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点zone信息
                     * @return ZoneInfo 节点zone信息
                     * 
                     */
                    ZoneInfo GetZoneInfo() const;

                    /**
                     * 设置节点zone信息
                     * @param _zoneInfo 节点zone信息
                     * 
                     */
                    void SetZoneInfo(const ZoneInfo& _zoneInfo);

                    /**
                     * 判断参数 ZoneInfo 是否已赋值
                     * @return ZoneInfo 是否已赋值
                     * 
                     */
                    bool ZoneInfoHasBeenSet() const;

                    /**
                     * 获取带宽月份 示例"202103"
                     * @return Month 带宽月份 示例"202103"
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置带宽月份 示例"202103"
                     * @param _month 带宽月份 示例"202103"
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取带宽包id 格式如"bwp-xxxxxxxx"
                     * @return BandwidthPkgId 带宽包id 格式如"bwp-xxxxxxxx"
                     * 
                     */
                    std::string GetBandwidthPkgId() const;

                    /**
                     * 设置带宽包id 格式如"bwp-xxxxxxxx"
                     * @param _bandwidthPkgId 带宽包id 格式如"bwp-xxxxxxxx"
                     * 
                     */
                    void SetBandwidthPkgId(const std::string& _bandwidthPkgId);

                    /**
                     * 判断参数 BandwidthPkgId 是否已赋值
                     * @return BandwidthPkgId 是否已赋值
                     * 
                     */
                    bool BandwidthPkgIdHasBeenSet() const;

                    /**
                     * 获取运营商简称 取值范围"CUCC;CTCC;CMCC"
                     * @return Isp 运营商简称 取值范围"CUCC;CTCC;CMCC"
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 设置运营商简称 取值范围"CUCC;CTCC;CMCC"
                     * @param _isp 运营商简称 取值范围"CUCC;CTCC;CMCC"
                     * 
                     */
                    void SetIsp(const std::string& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取入网带宽包峰值,取值范围0.0-xxx.xxx
                     * @return TrafficMaxIn 入网带宽包峰值,取值范围0.0-xxx.xxx
                     * 
                     */
                    double GetTrafficMaxIn() const;

                    /**
                     * 设置入网带宽包峰值,取值范围0.0-xxx.xxx
                     * @param _trafficMaxIn 入网带宽包峰值,取值范围0.0-xxx.xxx
                     * 
                     */
                    void SetTrafficMaxIn(const double& _trafficMaxIn);

                    /**
                     * 判断参数 TrafficMaxIn 是否已赋值
                     * @return TrafficMaxIn 是否已赋值
                     * 
                     */
                    bool TrafficMaxInHasBeenSet() const;

                    /**
                     * 获取出网带宽包峰值,取值范围0.0-xxx.xxx
                     * @return TrafficMaxOut 出网带宽包峰值,取值范围0.0-xxx.xxx
                     * 
                     */
                    double GetTrafficMaxOut() const;

                    /**
                     * 设置出网带宽包峰值,取值范围0.0-xxx.xxx
                     * @param _trafficMaxOut 出网带宽包峰值,取值范围0.0-xxx.xxx
                     * 
                     */
                    void SetTrafficMaxOut(const double& _trafficMaxOut);

                    /**
                     * 判断参数 TrafficMaxOut 是否已赋值
                     * @return TrafficMaxOut 是否已赋值
                     * 
                     */
                    bool TrafficMaxOutHasBeenSet() const;

                    /**
                     * 获取计费带宽,取值范围0.0-xxx.xxx
                     * @return FeeTraffic 计费带宽,取值范围0.0-xxx.xxx
                     * 
                     */
                    double GetFeeTraffic() const;

                    /**
                     * 设置计费带宽,取值范围0.0-xxx.xxx
                     * @param _feeTraffic 计费带宽,取值范围0.0-xxx.xxx
                     * 
                     */
                    void SetFeeTraffic(const double& _feeTraffic);

                    /**
                     * 判断参数 FeeTraffic 是否已赋值
                     * @return FeeTraffic 是否已赋值
                     * 
                     */
                    bool FeeTrafficHasBeenSet() const;

                    /**
                     * 获取月计费带宽起始时间 格式"yyyy-mm-dd HH:mm:ss"
                     * @return StartTime 月计费带宽起始时间 格式"yyyy-mm-dd HH:mm:ss"
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置月计费带宽起始时间 格式"yyyy-mm-dd HH:mm:ss"
                     * @param _startTime 月计费带宽起始时间 格式"yyyy-mm-dd HH:mm:ss"
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取月计费带宽结束时间 格式"yyyy-mm-dd HH:mm:ss"
                     * @return EndTime 月计费带宽结束时间 格式"yyyy-mm-dd HH:mm:ss"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置月计费带宽结束时间 格式"yyyy-mm-dd HH:mm:ss"
                     * @param _endTime 月计费带宽结束时间 格式"yyyy-mm-dd HH:mm:ss"
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取月计费带宽实际有效天数 整形必须大于等于0
                     * @return EffectiveDays 月计费带宽实际有效天数 整形必须大于等于0
                     * 
                     */
                    int64_t GetEffectiveDays() const;

                    /**
                     * 设置月计费带宽实际有效天数 整形必须大于等于0
                     * @param _effectiveDays 月计费带宽实际有效天数 整形必须大于等于0
                     * 
                     */
                    void SetEffectiveDays(const int64_t& _effectiveDays);

                    /**
                     * 判断参数 EffectiveDays 是否已赋值
                     * @return EffectiveDays 是否已赋值
                     * 
                     */
                    bool EffectiveDaysHasBeenSet() const;

                    /**
                     * 获取指定月份的实际天数 实例 30
                     * @return MonthDays 指定月份的实际天数 实例 30
                     * 
                     */
                    int64_t GetMonthDays() const;

                    /**
                     * 设置指定月份的实际天数 实例 30
                     * @param _monthDays 指定月份的实际天数 实例 30
                     * 
                     */
                    void SetMonthDays(const int64_t& _monthDays);

                    /**
                     * 判断参数 MonthDays 是否已赋值
                     * @return MonthDays 是否已赋值
                     * 
                     */
                    bool MonthDaysHasBeenSet() const;

                    /**
                     * 获取有效天占比 保留小数点后四位0.2134
                     * @return EffectiveDaysRate 有效天占比 保留小数点后四位0.2134
                     * 
                     */
                    double GetEffectiveDaysRate() const;

                    /**
                     * 设置有效天占比 保留小数点后四位0.2134
                     * @param _effectiveDaysRate 有效天占比 保留小数点后四位0.2134
                     * 
                     */
                    void SetEffectiveDaysRate(const double& _effectiveDaysRate);

                    /**
                     * 判断参数 EffectiveDaysRate 是否已赋值
                     * @return EffectiveDaysRate 是否已赋值
                     * 
                     */
                    bool EffectiveDaysRateHasBeenSet() const;

                    /**
                     * 获取计费带宽包类型 实例"Address","LoadBalance","AddressIpv6"
                     * @return BandwidthPkgType 计费带宽包类型 实例"Address","LoadBalance","AddressIpv6"
                     * 
                     */
                    std::string GetBandwidthPkgType() const;

                    /**
                     * 设置计费带宽包类型 实例"Address","LoadBalance","AddressIpv6"
                     * @param _bandwidthPkgType 计费带宽包类型 实例"Address","LoadBalance","AddressIpv6"
                     * 
                     */
                    void SetBandwidthPkgType(const std::string& _bandwidthPkgType);

                    /**
                     * 判断参数 BandwidthPkgType 是否已赋值
                     * @return BandwidthPkgType 是否已赋值
                     * 
                     */
                    bool BandwidthPkgTypeHasBeenSet() const;

                private:

                    /**
                     * 节点zone信息
                     */
                    ZoneInfo m_zoneInfo;
                    bool m_zoneInfoHasBeenSet;

                    /**
                     * 带宽月份 示例"202103"
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 带宽包id 格式如"bwp-xxxxxxxx"
                     */
                    std::string m_bandwidthPkgId;
                    bool m_bandwidthPkgIdHasBeenSet;

                    /**
                     * 运营商简称 取值范围"CUCC;CTCC;CMCC"
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 入网带宽包峰值,取值范围0.0-xxx.xxx
                     */
                    double m_trafficMaxIn;
                    bool m_trafficMaxInHasBeenSet;

                    /**
                     * 出网带宽包峰值,取值范围0.0-xxx.xxx
                     */
                    double m_trafficMaxOut;
                    bool m_trafficMaxOutHasBeenSet;

                    /**
                     * 计费带宽,取值范围0.0-xxx.xxx
                     */
                    double m_feeTraffic;
                    bool m_feeTrafficHasBeenSet;

                    /**
                     * 月计费带宽起始时间 格式"yyyy-mm-dd HH:mm:ss"
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 月计费带宽结束时间 格式"yyyy-mm-dd HH:mm:ss"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 月计费带宽实际有效天数 整形必须大于等于0
                     */
                    int64_t m_effectiveDays;
                    bool m_effectiveDaysHasBeenSet;

                    /**
                     * 指定月份的实际天数 实例 30
                     */
                    int64_t m_monthDays;
                    bool m_monthDaysHasBeenSet;

                    /**
                     * 有效天占比 保留小数点后四位0.2134
                     */
                    double m_effectiveDaysRate;
                    bool m_effectiveDaysRateHasBeenSet;

                    /**
                     * 计费带宽包类型 实例"Address","LoadBalance","AddressIpv6"
                     */
                    std::string m_bandwidthPkgType;
                    bool m_bandwidthPkgTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MONTHNETWORK_H_
