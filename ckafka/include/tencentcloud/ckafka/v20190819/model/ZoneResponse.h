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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ZoneInfo.h>
#include <tencentcloud/ckafka/v20190819/model/Price.h>
#include <tencentcloud/ckafka/v20190819/model/ClusterInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 查询kafka的zone信息返回的实体
                */
                class ZoneResponse : public AbstractModel
                {
                public:
                    ZoneResponse();
                    ~ZoneResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>zone列表</p>
                     * @return ZoneList <p>zone列表</p>
                     * 
                     */
                    std::vector<ZoneInfo> GetZoneList() const;

                    /**
                     * 设置<p>zone列表</p>
                     * @param _zoneList <p>zone列表</p>
                     * 
                     */
                    void SetZoneList(const std::vector<ZoneInfo>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取<p>最大购买实例个数</p>
                     * @return MaxBuyInstanceNum <p>最大购买实例个数</p>
                     * 
                     */
                    int64_t GetMaxBuyInstanceNum() const;

                    /**
                     * 设置<p>最大购买实例个数</p>
                     * @param _maxBuyInstanceNum <p>最大购买实例个数</p>
                     * 
                     */
                    void SetMaxBuyInstanceNum(const int64_t& _maxBuyInstanceNum);

                    /**
                     * 判断参数 MaxBuyInstanceNum 是否已赋值
                     * @return MaxBuyInstanceNum 是否已赋值
                     * 
                     */
                    bool MaxBuyInstanceNumHasBeenSet() const;

                    /**
                     * 获取<p>最大购买带宽 单位Mb/s</p>
                     * @return MaxBandwidth <p>最大购买带宽 单位Mb/s</p>
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置<p>最大购买带宽 单位Mb/s</p>
                     * @param _maxBandwidth <p>最大购买带宽 单位Mb/s</p>
                     * 
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取<p>后付费单位价格</p>
                     * @return UnitPrice <p>后付费单位价格</p>
                     * 
                     */
                    Price GetUnitPrice() const;

                    /**
                     * 设置<p>后付费单位价格</p>
                     * @param _unitPrice <p>后付费单位价格</p>
                     * 
                     */
                    void SetUnitPrice(const Price& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取<p>后付费消息单价</p>
                     * @return MessagePrice <p>后付费消息单价</p>
                     * 
                     */
                    Price GetMessagePrice() const;

                    /**
                     * 设置<p>后付费消息单价</p>
                     * @param _messagePrice <p>后付费消息单价</p>
                     * 
                     */
                    void SetMessagePrice(const Price& _messagePrice);

                    /**
                     * 判断参数 MessagePrice 是否已赋值
                     * @return MessagePrice 是否已赋值
                     * 
                     */
                    bool MessagePriceHasBeenSet() const;

                    /**
                     * 获取<p>用户独占集群信息</p>
                     * @return ClusterInfo <p>用户独占集群信息</p>
                     * 
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置<p>用户独占集群信息</p>
                     * @param _clusterInfo <p>用户独占集群信息</p>
                     * 
                     */
                    void SetClusterInfo(const std::vector<ClusterInfo>& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取<p>购买标准版配置</p>
                     * @return Standard <p>购买标准版配置</p>
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置<p>购买标准版配置</p>
                     * @param _standard <p>购买标准版配置</p>
                     * 
                     */
                    void SetStandard(const std::string& _standard);

                    /**
                     * 判断参数 Standard 是否已赋值
                     * @return Standard 是否已赋值
                     * 
                     */
                    bool StandardHasBeenSet() const;

                    /**
                     * 获取<p>购买标准版S2配置</p>
                     * @return StandardS2 <p>购买标准版S2配置</p>
                     * 
                     */
                    std::string GetStandardS2() const;

                    /**
                     * 设置<p>购买标准版S2配置</p>
                     * @param _standardS2 <p>购买标准版S2配置</p>
                     * 
                     */
                    void SetStandardS2(const std::string& _standardS2);

                    /**
                     * 判断参数 StandardS2 是否已赋值
                     * @return StandardS2 是否已赋值
                     * 
                     */
                    bool StandardS2HasBeenSet() const;

                    /**
                     * 获取<p>购买专业版配置</p>
                     * @return Profession <p>购买专业版配置</p>
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置<p>购买专业版配置</p>
                     * @param _profession <p>购买专业版配置</p>
                     * 
                     */
                    void SetProfession(const std::string& _profession);

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     * 
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取<p>购买物理独占版配置</p>
                     * @return Physical <p>购买物理独占版配置</p>
                     * 
                     */
                    std::string GetPhysical() const;

                    /**
                     * 设置<p>购买物理独占版配置</p>
                     * @param _physical <p>购买物理独占版配置</p>
                     * 
                     */
                    void SetPhysical(const std::string& _physical);

                    /**
                     * 判断参数 Physical 是否已赋值
                     * @return Physical 是否已赋值
                     * 
                     */
                    bool PhysicalHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写   已废弃,无实际意义</p>
                     * @return PublicNetwork <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写   已废弃,无实际意义</p>
                     * 
                     */
                    std::string GetPublicNetwork() const;

                    /**
                     * 设置<p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写   已废弃,无实际意义</p>
                     * @param _publicNetwork <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写   已废弃,无实际意义</p>
                     * 
                     */
                    void SetPublicNetwork(const std::string& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽配置</p>
                     * @return PublicNetworkLimit <p>公网带宽配置</p>
                     * 
                     */
                    std::string GetPublicNetworkLimit() const;

                    /**
                     * 设置<p>公网带宽配置</p>
                     * @param _publicNetworkLimit <p>公网带宽配置</p>
                     * 
                     */
                    void SetPublicNetworkLimit(const std::string& _publicNetworkLimit);

                    /**
                     * 判断参数 PublicNetworkLimit 是否已赋值
                     * @return PublicNetworkLimit 是否已赋值
                     * 
                     */
                    bool PublicNetworkLimitHasBeenSet() const;

                    /**
                     * 获取<p>请求Id</p>
                     * @return RequestId <p>请求Id</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>请求Id</p>
                     * @param _requestId <p>请求Id</p>
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取<p>分页offset</p>
                     * @return Offset <p>分页offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页offset</p>
                     * @param _offset <p>分页offset</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页limit</p>
                     * @return Limit <p>分页limit</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页limit</p>
                     * @param _limit <p>分页limit</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>是否必须录入tag</p>
                     * @return ForceCheckTag <p>是否必须录入tag</p>
                     * 
                     */
                    bool GetForceCheckTag() const;

                    /**
                     * 设置<p>是否必须录入tag</p>
                     * @param _forceCheckTag <p>是否必须录入tag</p>
                     * 
                     */
                    void SetForceCheckTag(const bool& _forceCheckTag);

                    /**
                     * 判断参数 ForceCheckTag 是否已赋值
                     * @return ForceCheckTag 是否已赋值
                     * 
                     */
                    bool ForceCheckTagHasBeenSet() const;

                private:

                    /**
                     * <p>zone列表</p>
                     */
                    std::vector<ZoneInfo> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * <p>最大购买实例个数</p>
                     */
                    int64_t m_maxBuyInstanceNum;
                    bool m_maxBuyInstanceNumHasBeenSet;

                    /**
                     * <p>最大购买带宽 单位Mb/s</p>
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * <p>后付费单位价格</p>
                     */
                    Price m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * <p>后付费消息单价</p>
                     */
                    Price m_messagePrice;
                    bool m_messagePriceHasBeenSet;

                    /**
                     * <p>用户独占集群信息</p>
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * <p>购买标准版配置</p>
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * <p>购买标准版S2配置</p>
                     */
                    std::string m_standardS2;
                    bool m_standardS2HasBeenSet;

                    /**
                     * <p>购买专业版配置</p>
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * <p>购买物理独占版配置</p>
                     */
                    std::string m_physical;
                    bool m_physicalHasBeenSet;

                    /**
                     * <p>公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写   已废弃,无实际意义</p>
                     */
                    std::string m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <p>公网带宽配置</p>
                     */
                    std::string m_publicNetworkLimit;
                    bool m_publicNetworkLimitHasBeenSet;

                    /**
                     * <p>请求Id</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>分页offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页limit</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>是否必须录入tag</p>
                     */
                    bool m_forceCheckTag;
                    bool m_forceCheckTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
