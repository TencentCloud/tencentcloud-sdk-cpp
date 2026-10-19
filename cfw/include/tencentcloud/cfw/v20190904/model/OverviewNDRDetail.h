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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWNDRDETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWNDRDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览 NDR 带宽详情
                */
                class OverviewNDRDetail : public AbstractModel
                {
                public:
                    OverviewNDRDetail();
                    ~OverviewNDRDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>NDR 能力或服务状态标识。</p>
                     * @return Status <p>NDR 能力或服务状态标识。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>NDR 能力或服务状态标识。</p>
                     * @param _status <p>NDR 能力或服务状态标识。</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>NDR 总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @return TotalMbps <p>NDR 总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    int64_t GetTotalMbps() const;

                    /**
                     * 设置<p>NDR 总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * @param _totalMbps <p>NDR 总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     * 
                     */
                    void SetTotalMbps(const int64_t& _totalMbps);

                    /**
                     * 判断参数 TotalMbps 是否已赋值
                     * @return TotalMbps 是否已赋值
                     * 
                     */
                    bool TotalMbpsHasBeenSet() const;

                    /**
                     * 获取<p>入方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return InMaxBps <p>入方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetInMaxBps() const;

                    /**
                     * 设置<p>入方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _inMaxBps <p>入方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetInMaxBps(const int64_t& _inMaxBps);

                    /**
                     * 判断参数 InMaxBps 是否已赋值
                     * @return InMaxBps 是否已赋值
                     * 
                     */
                    bool InMaxBpsHasBeenSet() const;

                    /**
                     * 获取<p>出方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return OutMaxBps <p>出方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetOutMaxBps() const;

                    /**
                     * 设置<p>出方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _outMaxBps <p>出方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetOutMaxBps(const int64_t& _outMaxBps);

                    /**
                     * 判断参数 OutMaxBps 是否已赋值
                     * @return OutMaxBps 是否已赋值
                     * 
                     */
                    bool OutMaxBpsHasBeenSet() const;

                    /**
                     * 获取<p>总体峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @return MaxFlowBps <p>总体峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    int64_t GetMaxFlowBps() const;

                    /**
                     * 设置<p>总体峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * @param _maxFlowBps <p>总体峰值流量，单位为 bps。</p><p>单位：bps</p>
                     * 
                     */
                    void SetMaxFlowBps(const int64_t& _maxFlowBps);

                    /**
                     * 判断参数 MaxFlowBps 是否已赋值
                     * @return MaxFlowBps 是否已赋值
                     * 
                     */
                    bool MaxFlowBpsHasBeenSet() const;

                    /**
                     * 获取<p>当前流量使用率。</p><p>单位：%</p>
                     * @return FlowPercent <p>当前流量使用率。</p><p>单位：%</p>
                     * 
                     */
                    double GetFlowPercent() const;

                    /**
                     * 设置<p>当前流量使用率。</p><p>单位：%</p>
                     * @param _flowPercent <p>当前流量使用率。</p><p>单位：%</p>
                     * 
                     */
                    void SetFlowPercent(const double& _flowPercent);

                    /**
                     * 判断参数 FlowPercent 是否已赋值
                     * @return FlowPercent 是否已赋值
                     * 
                     */
                    bool FlowPercentHasBeenSet() const;

                private:

                    /**
                     * <p>NDR 能力或服务状态标识。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>NDR 总带宽，单位为 Mbps。</p><p>单位：Mbps</p>
                     */
                    int64_t m_totalMbps;
                    bool m_totalMbpsHasBeenSet;

                    /**
                     * <p>入方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_inMaxBps;
                    bool m_inMaxBpsHasBeenSet;

                    /**
                     * <p>出方向峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_outMaxBps;
                    bool m_outMaxBpsHasBeenSet;

                    /**
                     * <p>总体峰值流量，单位为 bps。</p><p>单位：bps</p>
                     */
                    int64_t m_maxFlowBps;
                    bool m_maxFlowBpsHasBeenSet;

                    /**
                     * <p>当前流量使用率。</p><p>单位：%</p>
                     */
                    double m_flowPercent;
                    bool m_flowPercentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWNDRDETAIL_H_
