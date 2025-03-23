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
                     * 获取zone列表
                     * @return ZoneList zone列表
                     * 
                     */
                    std::vector<ZoneInfo> GetZoneList() const;

                    /**
                     * 设置zone列表
                     * @param _zoneList zone列表
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
                     * 获取最大购买实例个数
                     * @return MaxBuyInstanceNum 最大购买实例个数
                     * 
                     */
                    int64_t GetMaxBuyInstanceNum() const;

                    /**
                     * 设置最大购买实例个数
                     * @param _maxBuyInstanceNum 最大购买实例个数
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
                     * 获取最大购买带宽 单位Mb/s
                     * @return MaxBandwidth 最大购买带宽 单位Mb/s
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置最大购买带宽 单位Mb/s
                     * @param _maxBandwidth 最大购买带宽 单位Mb/s
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
                     * 获取后付费单位价格
                     * @return UnitPrice 后付费单位价格
                     * 
                     */
                    Price GetUnitPrice() const;

                    /**
                     * 设置后付费单位价格
                     * @param _unitPrice 后付费单位价格
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
                     * 获取后付费消息单价
                     * @return MessagePrice 后付费消息单价
                     * 
                     */
                    Price GetMessagePrice() const;

                    /**
                     * 设置后付费消息单价
                     * @param _messagePrice 后付费消息单价
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
                     * 获取用户独占集群信息
                     * @return ClusterInfo 用户独占集群信息
                     * 
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置用户独占集群信息
                     * @param _clusterInfo 用户独占集群信息
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
                     * 获取购买标准版配置
                     * @return Standard 购买标准版配置
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置购买标准版配置
                     * @param _standard 购买标准版配置
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
                     * 获取购买标准版S2配置
                     * @return StandardS2 购买标准版S2配置
                     * 
                     */
                    std::string GetStandardS2() const;

                    /**
                     * 设置购买标准版S2配置
                     * @param _standardS2 购买标准版S2配置
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
                     * 获取购买专业版配置
                     * @return Profession 购买专业版配置
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置购买专业版配置
                     * @param _profession 购买专业版配置
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
                     * 获取购买物理独占版配置
                     * @return Physical 购买物理独占版配置
                     * 
                     */
                    std::string GetPhysical() const;

                    /**
                     * 设置购买物理独占版配置
                     * @param _physical 购买物理独占版配置
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
                     * 获取公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * @return PublicNetwork 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * 
                     */
                    std::string GetPublicNetwork() const;

                    /**
                     * 设置公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     * @param _publicNetwork 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
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
                     * 获取公网带宽配置
                     * @return PublicNetworkLimit 公网带宽配置
                     * 
                     */
                    std::string GetPublicNetworkLimit() const;

                    /**
                     * 设置公网带宽配置
                     * @param _publicNetworkLimit 公网带宽配置
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
                     * 获取请求Id
                     * @return RequestId 请求Id
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求Id
                     * @param _requestId 请求Id
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
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取分页offset
                     * @return Offset 分页offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页offset
                     * @param _offset 分页offset
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
                     * 获取分页limit
                     * @return Limit 分页limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页limit
                     * @param _limit 分页limit
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
                     * 获取是否必须录入tag
                     * @return ForceCheckTag 是否必须录入tag
                     * 
                     */
                    bool GetForceCheckTag() const;

                    /**
                     * 设置是否必须录入tag
                     * @param _forceCheckTag 是否必须录入tag
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
                     * zone列表
                     */
                    std::vector<ZoneInfo> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * 最大购买实例个数
                     */
                    int64_t m_maxBuyInstanceNum;
                    bool m_maxBuyInstanceNumHasBeenSet;

                    /**
                     * 最大购买带宽 单位Mb/s
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * 后付费单位价格
                     */
                    Price m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * 后付费消息单价
                     */
                    Price m_messagePrice;
                    bool m_messagePriceHasBeenSet;

                    /**
                     * 用户独占集群信息
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * 购买标准版配置
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * 购买标准版S2配置
                     */
                    std::string m_standardS2;
                    bool m_standardS2HasBeenSet;

                    /**
                     * 购买专业版配置
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * 购买物理独占版配置
                     */
                    std::string m_physical;
                    bool m_physicalHasBeenSet;

                    /**
                     * 公网带宽 最小3Mbps  最大999Mbps 仅专业版支持填写
                     */
                    std::string m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * 公网带宽配置
                     */
                    std::string m_publicNetworkLimit;
                    bool m_publicNetworkLimitHasBeenSet;

                    /**
                     * 请求Id
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 分页offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否必须录入tag
                     */
                    bool m_forceCheckTag;
                    bool m_forceCheckTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
