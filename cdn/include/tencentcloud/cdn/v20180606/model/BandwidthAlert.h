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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 带宽封顶配置，默认为关闭状态
                */
                class BandwidthAlert : public AbstractModel
                {
                public:
                    BandwidthAlert();
                    ~BandwidthAlert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带宽封顶配置开关
on：开启
off：关闭
                     * @return Switch 带宽封顶配置开关
on：开启
off：关闭
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置带宽封顶配置开关
on：开启
off：关闭
                     * @param Switch 带宽封顶配置开关
on：开启
off：关闭
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取带宽封顶阈值，单位为bps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BpsThreshold 带宽封顶阈值，单位为bps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBpsThreshold() const;

                    /**
                     * 设置带宽封顶阈值，单位为bps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BpsThreshold 带宽封顶阈值，单位为bps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBpsThreshold(const int64_t& _bpsThreshold);

                    /**
                     * 判断参数 BpsThreshold 是否已赋值
                     * @return BpsThreshold 是否已赋值
                     */
                    bool BpsThresholdHasBeenSet() const;

                    /**
                     * 获取达到阈值后的操作
RESOLVE_DNS_TO_ORIGIN：直接回源，仅自有源站域名支持
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CounterMeasure 达到阈值后的操作
RESOLVE_DNS_TO_ORIGIN：直接回源，仅自有源站域名支持
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCounterMeasure() const;

                    /**
                     * 设置达到阈值后的操作
RESOLVE_DNS_TO_ORIGIN：直接回源，仅自有源站域名支持
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CounterMeasure 达到阈值后的操作
RESOLVE_DNS_TO_ORIGIN：直接回源，仅自有源站域名支持
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCounterMeasure(const std::string& _counterMeasure);

                    /**
                     * 判断参数 CounterMeasure 是否已赋值
                     * @return CounterMeasure 是否已赋值
                     */
                    bool CounterMeasureHasBeenSet() const;

                    /**
                     * 获取上次触发带宽封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTriggerTime 上次触发带宽封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastTriggerTime() const;

                    /**
                     * 设置上次触发带宽封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastTriggerTime 上次触发带宽封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastTriggerTime(const std::string& _lastTriggerTime);

                    /**
                     * 判断参数 LastTriggerTime 是否已赋值
                     * @return LastTriggerTime 是否已赋值
                     */
                    bool LastTriggerTimeHasBeenSet() const;

                private:

                    /**
                     * 带宽封顶配置开关
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 带宽封顶阈值，单位为bps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bpsThreshold;
                    bool m_bpsThresholdHasBeenSet;

                    /**
                     * 达到阈值后的操作
RESOLVE_DNS_TO_ORIGIN：直接回源，仅自有源站域名支持
RETURN_404：全部请求返回 404
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_counterMeasure;
                    bool m_counterMeasureHasBeenSet;

                    /**
                     * 上次触发带宽封顶阈值的时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTriggerTime;
                    bool m_lastTriggerTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BANDWIDTHALERT_H_
