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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESERIALREGIONRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESERIALREGIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SerialRegionInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeSerialRegion返回参数结构体
                */
                class DescribeSerialRegionResponse : public AbstractModel
                {
                public:
                    DescribeSerialRegionResponse();
                    ~DescribeSerialRegionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>串行地域带宽分配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialRegionLst <p>串行地域带宽分配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SerialRegionInfo> GetSerialRegionLst() const;

                    /**
                     * 判断参数 SerialRegionLst 是否已赋值
                     * @return SerialRegionLst 是否已赋值
                     * 
                     */
                    bool SerialRegionLstHasBeenSet() const;

                    /**
                     * 获取<p>剩余可分配通用带宽 单位M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnUsedWidth <p>剩余可分配通用带宽 单位M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnUsedWidth() const;

                    /**
                     * 判断参数 UnUsedWidth 是否已赋值
                     * @return UnUsedWidth 是否已赋值
                     * 
                     */
                    bool UnUsedWidthHasBeenSet() const;

                    /**
                     * 获取<p>可配置实例个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnUsedQuota <p>可配置实例个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUnUsedQuota() const;

                    /**
                     * 判断参数 UnUsedQuota 是否已赋值
                     * @return UnUsedQuota 是否已赋值
                     * 
                     */
                    bool UnUsedQuotaHasBeenSet() const;

                    /**
                     * 获取<p>旁路带宽数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BypassWidth <p>旁路带宽数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBypassWidth() const;

                    /**
                     * 判断参数 BypassWidth 是否已赋值
                     * @return BypassWidth 是否已赋值
                     * 
                     */
                    bool BypassWidthHasBeenSet() const;

                    /**
                     * 获取<p>赠送的旁路带宽数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SendBypassWidth <p>赠送的旁路带宽数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSendBypassWidth() const;

                    /**
                     * 判断参数 SendBypassWidth 是否已赋值
                     * @return SendBypassWidth 是否已赋值
                     * 
                     */
                    bool SendBypassWidthHasBeenSet() const;

                    /**
                     * 获取<p>互联网边界防火墙总带宽</p>
                     * @return EdgeWidth <p>互联网边界防火墙总带宽</p>
                     * 
                     */
                    int64_t GetEdgeWidth() const;

                    /**
                     * 判断参数 EdgeWidth 是否已赋值
                     * @return EdgeWidth 是否已赋值
                     * 
                     */
                    bool EdgeWidthHasBeenSet() const;

                    /**
                     * 获取<p>互联网边界弹性开关</p>
                     * @return EdgeElasticSwitch <p>互联网边界弹性开关</p>
                     * 
                     */
                    int64_t GetEdgeElasticSwitch() const;

                    /**
                     * 判断参数 EdgeElasticSwitch 是否已赋值
                     * @return EdgeElasticSwitch 是否已赋值
                     * 
                     */
                    bool EdgeElasticSwitchHasBeenSet() const;

                    /**
                     * 获取<p>互联网边界弹性带宽值</p>
                     * @return EdgeElasticBandwidth <p>互联网边界弹性带宽值</p>
                     * 
                     */
                    int64_t GetEdgeElasticBandwidth() const;

                    /**
                     * 判断参数 EdgeElasticBandwidth 是否已赋值
                     * @return EdgeElasticBandwidth 是否已赋值
                     * 
                     */
                    bool EdgeElasticBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>互联网边界弹性带宽上限</p>
                     * @return EdgeElasticBandwidthLimit <p>互联网边界弹性带宽上限</p>
                     * 
                     */
                    int64_t GetEdgeElasticBandwidthLimit() const;

                    /**
                     * 判断参数 EdgeElasticBandwidthLimit 是否已赋值
                     * @return EdgeElasticBandwidthLimit 是否已赋值
                     * 
                     */
                    bool EdgeElasticBandwidthLimitHasBeenSet() const;

                    /**
                     * 获取<p>互联网边界防火墙计量开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 打开</li></ul>
                     * @return EdgeElasticTrafficSwitch <p>互联网边界防火墙计量开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 打开</li></ul>
                     * 
                     */
                    int64_t GetEdgeElasticTrafficSwitch() const;

                    /**
                     * 判断参数 EdgeElasticTrafficSwitch 是否已赋值
                     * @return EdgeElasticTrafficSwitch 是否已赋值
                     * 
                     */
                    bool EdgeElasticTrafficSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>串行地域带宽分配</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SerialRegionInfo> m_serialRegionLst;
                    bool m_serialRegionLstHasBeenSet;

                    /**
                     * <p>剩余可分配通用带宽 单位M</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unUsedWidth;
                    bool m_unUsedWidthHasBeenSet;

                    /**
                     * <p>可配置实例个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_unUsedQuota;
                    bool m_unUsedQuotaHasBeenSet;

                    /**
                     * <p>旁路带宽数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bypassWidth;
                    bool m_bypassWidthHasBeenSet;

                    /**
                     * <p>赠送的旁路带宽数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sendBypassWidth;
                    bool m_sendBypassWidthHasBeenSet;

                    /**
                     * <p>互联网边界防火墙总带宽</p>
                     */
                    int64_t m_edgeWidth;
                    bool m_edgeWidthHasBeenSet;

                    /**
                     * <p>互联网边界弹性开关</p>
                     */
                    int64_t m_edgeElasticSwitch;
                    bool m_edgeElasticSwitchHasBeenSet;

                    /**
                     * <p>互联网边界弹性带宽值</p>
                     */
                    int64_t m_edgeElasticBandwidth;
                    bool m_edgeElasticBandwidthHasBeenSet;

                    /**
                     * <p>互联网边界弹性带宽上限</p>
                     */
                    int64_t m_edgeElasticBandwidthLimit;
                    bool m_edgeElasticBandwidthLimitHasBeenSet;

                    /**
                     * <p>互联网边界防火墙计量开关</p><p>枚举值：</p><ul><li>0： 关闭</li><li>1： 打开</li></ul>
                     */
                    int64_t m_edgeElasticTrafficSwitch;
                    bool m_edgeElasticTrafficSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBESERIALREGIONRESPONSE_H_
