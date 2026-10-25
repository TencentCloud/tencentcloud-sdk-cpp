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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DIALPROBE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DIALPROBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 一次目标探测结果
                */
                class DialProbe : public AbstractModel
                {
                public:
                    DialProbe();
                    ~DialProbe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>探测目标 IP</p>
                     * @return TargetIp <p>探测目标 IP</p>
                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置<p>探测目标 IP</p>
                     * @param _targetIp <p>探测目标 IP</p>
                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取<p>本次探测是否成功</p>
                     * @return PingSuccess <p>本次探测是否成功</p>
                     * 
                     */
                    bool GetPingSuccess() const;

                    /**
                     * 设置<p>本次探测是否成功</p>
                     * @param _pingSuccess <p>本次探测是否成功</p>
                     * 
                     */
                    void SetPingSuccess(const bool& _pingSuccess);

                    /**
                     * 判断参数 PingSuccess 是否已赋值
                     * @return PingSuccess 是否已赋值
                     * 
                     */
                    bool PingSuccessHasBeenSet() const;

                    /**
                     * 获取<p>发送包数</p>
                     * @return Sent <p>发送包数</p>
                     * 
                     */
                    double GetSent() const;

                    /**
                     * 设置<p>发送包数</p>
                     * @param _sent <p>发送包数</p>
                     * 
                     */
                    void SetSent(const double& _sent);

                    /**
                     * 判断参数 Sent 是否已赋值
                     * @return Sent 是否已赋值
                     * 
                     */
                    bool SentHasBeenSet() const;

                    /**
                     * 获取<p>接收包数</p>
                     * @return Received <p>接收包数</p>
                     * 
                     */
                    double GetReceived() const;

                    /**
                     * 设置<p>接收包数</p>
                     * @param _received <p>接收包数</p>
                     * 
                     */
                    void SetReceived(const double& _received);

                    /**
                     * 判断参数 Received 是否已赋值
                     * @return Received 是否已赋值
                     * 
                     */
                    bool ReceivedHasBeenSet() const;

                    /**
                     * 获取<p>丢包率，0 到 100</p>
                     * @return Loss <p>丢包率，0 到 100</p>
                     * 
                     */
                    double GetLoss() const;

                    /**
                     * 设置<p>丢包率，0 到 100</p>
                     * @param _loss <p>丢包率，0 到 100</p>
                     * 
                     */
                    void SetLoss(const double& _loss);

                    /**
                     * 判断参数 Loss 是否已赋值
                     * @return Loss 是否已赋值
                     * 
                     */
                    bool LossHasBeenSet() const;

                    /**
                     * 获取<p>最小时延，单位毫秒</p>
                     * @return Min <p>最小时延，单位毫秒</p>
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置<p>最小时延，单位毫秒</p>
                     * @param _min <p>最小时延，单位毫秒</p>
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取<p>最大时延，单位毫秒</p>
                     * @return Max <p>最大时延，单位毫秒</p>
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置<p>最大时延，单位毫秒</p>
                     * @param _max <p>最大时延，单位毫秒</p>
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取<p>平均时延，单位毫秒</p>
                     * @return Avg <p>平均时延，单位毫秒</p>
                     * 
                     */
                    double GetAvg() const;

                    /**
                     * 设置<p>平均时延，单位毫秒</p>
                     * @param _avg <p>平均时延，单位毫秒</p>
                     * 
                     */
                    void SetAvg(const double& _avg);

                    /**
                     * 判断参数 Avg 是否已赋值
                     * @return Avg 是否已赋值
                     * 
                     */
                    bool AvgHasBeenSet() const;

                    /**
                     * 获取<p>探测协议</p>
                     * @return Protocol <p>探测协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>探测协议</p>
                     * @param _protocol <p>探测协议</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>探测目标域名或地址</p>
                     * @return Domain <p>探测目标域名或地址</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>探测目标域名或地址</p>
                     * @param _domain <p>探测目标域名或地址</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>未探测原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkipReason <p>未探测原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSkipReason() const;

                    /**
                     * 设置<p>未探测原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skipReason <p>未探测原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkipReason(const std::string& _skipReason);

                    /**
                     * 判断参数 SkipReason 是否已赋值
                     * @return SkipReason 是否已赋值
                     * 
                     */
                    bool SkipReasonHasBeenSet() const;

                    /**
                     * 获取<p>目标 IP 所在地区。与客户端地区无关。无法解析时为未知。</p>
                     * @return Region <p>目标 IP 所在地区。与客户端地区无关。无法解析时为未知。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>目标 IP 所在地区。与客户端地区无关。无法解析时为未知。</p>
                     * @param _region <p>目标 IP 所在地区。与客户端地区无关。无法解析时为未知。</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>目标 IP 所属运营商。与客户端运营商无关。无法解析时为未知。</p>
                     * @return Operator <p>目标 IP 所属运营商。与客户端运营商无关。无法解析时为未知。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>目标 IP 所属运营商。与客户端运营商无关。无法解析时为未知。</p>
                     * @param _operator <p>目标 IP 所属运营商。与客户端运营商无关。无法解析时为未知。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>探测目标 IP</p>
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * <p>本次探测是否成功</p>
                     */
                    bool m_pingSuccess;
                    bool m_pingSuccessHasBeenSet;

                    /**
                     * <p>发送包数</p>
                     */
                    double m_sent;
                    bool m_sentHasBeenSet;

                    /**
                     * <p>接收包数</p>
                     */
                    double m_received;
                    bool m_receivedHasBeenSet;

                    /**
                     * <p>丢包率，0 到 100</p>
                     */
                    double m_loss;
                    bool m_lossHasBeenSet;

                    /**
                     * <p>最小时延，单位毫秒</p>
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>最大时延，单位毫秒</p>
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * <p>平均时延，单位毫秒</p>
                     */
                    double m_avg;
                    bool m_avgHasBeenSet;

                    /**
                     * <p>探测协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>探测目标域名或地址</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>未探测原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_skipReason;
                    bool m_skipReasonHasBeenSet;

                    /**
                     * <p>目标 IP 所在地区。与客户端地区无关。无法解析时为未知。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>目标 IP 所属运营商。与客户端运营商无关。无法解析时为未知。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DIALPROBE_H_
