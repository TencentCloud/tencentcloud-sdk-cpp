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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKINFO_H_

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
                * 告警中心-阻断事件结构体
                */
                class BlockInfo : public AbstractModel
                {
                public:
                    BlockInfo();
                    ~BlockInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源IP
                     * @return SrcIP 源IP
                     * 
                     */
                    std::string GetSrcIP() const;

                    /**
                     * 设置源IP
                     * @param _srcIP 源IP
                     * 
                     */
                    void SetSrcIP(const std::string& _srcIP);

                    /**
                     * 判断参数 SrcIP 是否已赋值
                     * @return SrcIP 是否已赋值
                     * 
                     */
                    bool SrcIPHasBeenSet() const;

                    /**
                     * 获取目的ip
                     * @return DstIP 目的ip
                     * 
                     */
                    std::string GetDstIP() const;

                    /**
                     * 设置目的ip
                     * @param _dstIP 目的ip
                     * 
                     */
                    void SetDstIP(const std::string& _dstIP);

                    /**
                     * 判断参数 DstIP 是否已赋值
                     * @return DstIP 是否已赋值
                     * 
                     */
                    bool DstIPHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return DstPort 端口
                     * 
                     */
                    std::string GetDstPort() const;

                    /**
                     * 设置端口
                     * @param _dstPort 端口
                     * 
                     */
                    void SetDstPort(const std::string& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取appid信息
                     * @return AppID appid信息
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置appid信息
                     * @param _appID appid信息
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取资产名称
                     * @return AssetName 资产名称
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名称
                     * @param _assetName 资产名称
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Zone 地域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地域
                     * @param _zone 地域
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取最晚时间
                     * @return MaxDate 最晚时间
                     * 
                     */
                    std::string GetMaxDate() const;

                    /**
                     * 设置最晚时间
                     * @param _maxDate 最晚时间
                     * 
                     */
                    void SetMaxDate(const std::string& _maxDate);

                    /**
                     * 判断参数 MaxDate 是否已赋值
                     * @return MaxDate 是否已赋值
                     * 
                     */
                    bool MaxDateHasBeenSet() const;

                    /**
                     * 获取最近时间
                     * @return MinDate 最近时间
                     * 
                     */
                    std::string GetMinDate() const;

                    /**
                     * 设置最近时间
                     * @param _minDate 最近时间
                     * 
                     */
                    void SetMinDate(const std::string& _minDate);

                    /**
                     * 判断参数 MinDate 是否已赋值
                     * @return MinDate 是否已赋值
                     * 
                     */
                    bool MinDateHasBeenSet() const;

                    /**
                     * 获取方向  1入站 0出战
                     * @return Direction 方向  1入站 0出战
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置方向  1入站 0出战
                     * @param _direction 方向  1入站 0出战
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取来源  1拦截列表，2虚拟补丁，3威胁情报，4基础防御
                     * @return BlockSource 来源  1拦截列表，2虚拟补丁，3威胁情报，4基础防御
                     * 
                     */
                    int64_t GetBlockSource() const;

                    /**
                     * 设置来源  1拦截列表，2虚拟补丁，3威胁情报，4基础防御
                     * @param _blockSource 来源  1拦截列表，2虚拟补丁，3威胁情报，4基础防御
                     * 
                     */
                    void SetBlockSource(const int64_t& _blockSource);

                    /**
                     * 判断参数 BlockSource 是否已赋值
                     * @return BlockSource 是否已赋值
                     * 
                     */
                    bool BlockSourceHasBeenSet() const;

                    /**
                     * 获取国加
                     * @return Country 国加
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国加
                     * @param _country 国加
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取次数
                     * @return Count 次数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置次数
                     * @param _count 次数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取拦截频率
                     * @return AvgCount 拦截频率
                     * 
                     */
                    double GetAvgCount() const;

                    /**
                     * 设置拦截频率
                     * @param _avgCount 拦截频率
                     * 
                     */
                    void SetAvgCount(const double& _avgCount);

                    /**
                     * 判断参数 AvgCount 是否已赋值
                     * @return AvgCount 是否已赋值
                     * 
                     */
                    bool AvgCountHasBeenSet() const;

                    /**
                     * 获取置顶位
                     * @return IsTop 置顶位
                     * 
                     */
                    int64_t GetIsTop() const;

                    /**
                     * 设置置顶位
                     * @param _isTop 置顶位
                     * 
                     */
                    void SetIsTop(const int64_t& _isTop);

                    /**
                     * 判断参数 IsTop 是否已赋值
                     * @return IsTop 是否已赋值
                     * 
                     */
                    bool IsTopHasBeenSet() const;

                    /**
                     * 获取记录唯一标识
                     * @return UniqueId 记录唯一标识
                     * 
                     */
                    std::string GetUniqueId() const;

                    /**
                     * 设置记录唯一标识
                     * @param _uniqueId 记录唯一标识
                     * 
                     */
                    void SetUniqueId(const std::string& _uniqueId);

                    /**
                     * 判断参数 UniqueId 是否已赋值
                     * @return UniqueId 是否已赋值
                     * 
                     */
                    bool UniqueIdHasBeenSet() const;

                    /**
                     * 获取1是 0不是
                     * @return ByPass 1是 0不是
                     * 
                     */
                    int64_t GetByPass() const;

                    /**
                     * 设置1是 0不是
                     * @param _byPass 1是 0不是
                     * 
                     */
                    void SetByPass(const int64_t& _byPass);

                    /**
                     * 判断参数 ByPass 是否已赋值
                     * @return ByPass 是否已赋值
                     * 
                     */
                    bool ByPassHasBeenSet() const;

                    /**
                     * 获取1是 0不是
                     * @return Block 1是 0不是
                     * 
                     */
                    int64_t GetBlock() const;

                    /**
                     * 设置1是 0不是
                     * @param _block 1是 0不是
                     * 
                     */
                    void SetBlock(const int64_t& _block);

                    /**
                     * 判断参数 Block 是否已赋值
                     * @return Block 是否已赋值
                     * 
                     */
                    bool BlockHasBeenSet() const;

                    /**
                     * 获取1是 0不是
                     * @return Ignore 1是 0不是
                     * 
                     */
                    int64_t GetIgnore() const;

                    /**
                     * 设置1是 0不是
                     * @param _ignore 1是 0不是
                     * 
                     */
                    void SetIgnore(const int64_t& _ignore);

                    /**
                     * 判断参数 Ignore 是否已赋值
                     * @return Ignore 是否已赋值
                     * 
                     */
                    bool IgnoreHasBeenSet() const;

                    /**
                     * 获取WhiteTag信息
                     * @return WhiteTag WhiteTag信息
                     * 
                     */
                    std::string GetWhiteTag() const;

                    /**
                     * 设置WhiteTag信息
                     * @param _whiteTag WhiteTag信息
                     * 
                     */
                    void SetWhiteTag(const std::string& _whiteTag);

                    /**
                     * 判断参数 WhiteTag 是否已赋值
                     * @return WhiteTag 是否已赋值
                     * 
                     */
                    bool WhiteTagHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙日志，目的资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstAssetId vpc间防火墙日志，目的资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstAssetId() const;

                    /**
                     * 设置vpc间防火墙日志，目的资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstAssetId vpc间防火墙日志，目的资产id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstAssetId(const std::string& _dstAssetId);

                    /**
                     * 判断参数 DstAssetId 是否已赋值
                     * @return DstAssetId 是否已赋值
                     * 
                     */
                    bool DstAssetIdHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙日志，目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstAssetName vpc间防火墙日志，目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstAssetName() const;

                    /**
                     * 设置vpc间防火墙日志，目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstAssetName vpc间防火墙日志，目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstAssetName(const std::string& _dstAssetName);

                    /**
                     * 判断参数 DstAssetName 是否已赋值
                     * @return DstAssetName 是否已赋值
                     * 
                     */
                    bool DstAssetNameHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙日志，源VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcVpc vpc间防火墙日志，源VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcVpc() const;

                    /**
                     * 设置vpc间防火墙日志，源VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcVpc vpc间防火墙日志，源VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcVpc(const std::string& _srcVpc);

                    /**
                     * 判断参数 SrcVpc 是否已赋值
                     * @return SrcVpc 是否已赋值
                     * 
                     */
                    bool SrcVpcHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙日志，源VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcVpcName vpc间防火墙日志，源VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcVpcName() const;

                    /**
                     * 设置vpc间防火墙日志，源VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcVpcName vpc间防火墙日志，源VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcVpcName(const std::string& _srcVpcName);

                    /**
                     * 判断参数 SrcVpcName 是否已赋值
                     * @return SrcVpcName 是否已赋值
                     * 
                     */
                    bool SrcVpcNameHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙日志，目的VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstVpc vpc间防火墙日志，目的VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstVpc() const;

                    /**
                     * 设置vpc间防火墙日志，目的VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstVpc vpc间防火墙日志，目的VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstVpc(const std::string& _dstVpc);

                    /**
                     * 判断参数 DstVpc 是否已赋值
                     * @return DstVpc 是否已赋值
                     * 
                     */
                    bool DstVpcHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙日志，目的VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstVpcName vpc间防火墙日志，目的VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstVpcName() const;

                    /**
                     * 设置vpc间防火墙日志，目的VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstVpcName vpc间防火墙日志，目的VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstVpcName(const std::string& _dstVpcName);

                    /**
                     * 判断参数 DstVpcName 是否已赋值
                     * @return DstVpcName 是否已赋值
                     * 
                     */
                    bool DstVpcNameHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙开关边id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EdgeId vpc间防火墙开关边id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置vpc间防火墙开关边id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _edgeId vpc间防火墙开关边id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取vpc间防火墙开关边名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EdgeName vpc间防火墙开关边名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEdgeName() const;

                    /**
                     * 设置vpc间防火墙开关边名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _edgeName vpc间防火墙开关边名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEdgeName(const std::string& _edgeName);

                    /**
                     * 判断参数 EdgeName 是否已赋值
                     * @return EdgeName 是否已赋值
                     * 
                     */
                    bool EdgeNameHasBeenSet() const;

                    /**
                     * 获取日志来源 move：vpc间防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogSource 日志来源 move：vpc间防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置日志来源 move：vpc间防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logSource 日志来源 move：vpc间防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogSource(const std::string& _logSource);

                    /**
                     * 判断参数 LogSource 是否已赋值
                     * @return LogSource 是否已赋值
                     * 
                     */
                    bool LogSourceHasBeenSet() const;

                    /**
                     * 获取是否加入隔离列表，1是 0不是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Isolate 是否加入隔离列表，1是 0不是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsolate() const;

                    /**
                     * 设置是否加入隔离列表，1是 0不是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolate 是否加入隔离列表，1是 0不是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolate(const int64_t& _isolate);

                    /**
                     * 判断参数 Isolate 是否已赋值
                     * @return Isolate 是否已赋值
                     * 
                     */
                    bool IsolateHasBeenSet() const;

                    /**
                     * 获取是否加入隔离列表，1是 0不是
                     * @return Hide 是否加入隔离列表，1是 0不是
                     * 
                     */
                    int64_t GetHide() const;

                    /**
                     * 设置是否加入隔离列表，1是 0不是
                     * @param _hide 是否加入隔离列表，1是 0不是
                     * 
                     */
                    void SetHide(const int64_t& _hide);

                    /**
                     * 判断参数 Hide 是否已赋值
                     * @return Hide 是否已赋值
                     * 
                     */
                    bool HideHasBeenSet() const;

                    /**
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 源IP
                     */
                    std::string m_srcIP;
                    bool m_srcIPHasBeenSet;

                    /**
                     * 目的ip
                     */
                    std::string m_dstIP;
                    bool m_dstIPHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * appid信息
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 资产名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 最晚时间
                     */
                    std::string m_maxDate;
                    bool m_maxDateHasBeenSet;

                    /**
                     * 最近时间
                     */
                    std::string m_minDate;
                    bool m_minDateHasBeenSet;

                    /**
                     * 方向  1入站 0出战
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 来源  1拦截列表，2虚拟补丁，3威胁情报，4基础防御
                     */
                    int64_t m_blockSource;
                    bool m_blockSourceHasBeenSet;

                    /**
                     * 国加
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 拦截频率
                     */
                    double m_avgCount;
                    bool m_avgCountHasBeenSet;

                    /**
                     * 置顶位
                     */
                    int64_t m_isTop;
                    bool m_isTopHasBeenSet;

                    /**
                     * 记录唯一标识
                     */
                    std::string m_uniqueId;
                    bool m_uniqueIdHasBeenSet;

                    /**
                     * 1是 0不是
                     */
                    int64_t m_byPass;
                    bool m_byPassHasBeenSet;

                    /**
                     * 1是 0不是
                     */
                    int64_t m_block;
                    bool m_blockHasBeenSet;

                    /**
                     * 1是 0不是
                     */
                    int64_t m_ignore;
                    bool m_ignoreHasBeenSet;

                    /**
                     * WhiteTag信息
                     */
                    std::string m_whiteTag;
                    bool m_whiteTagHasBeenSet;

                    /**
                     * vpc间防火墙日志，目的资产id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstAssetId;
                    bool m_dstAssetIdHasBeenSet;

                    /**
                     * vpc间防火墙日志，目的资产名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstAssetName;
                    bool m_dstAssetNameHasBeenSet;

                    /**
                     * vpc间防火墙日志，源VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcVpc;
                    bool m_srcVpcHasBeenSet;

                    /**
                     * vpc间防火墙日志，源VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcVpcName;
                    bool m_srcVpcNameHasBeenSet;

                    /**
                     * vpc间防火墙日志，目的VPC id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstVpc;
                    bool m_dstVpcHasBeenSet;

                    /**
                     * vpc间防火墙日志，目的VPC名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstVpcName;
                    bool m_dstVpcNameHasBeenSet;

                    /**
                     * vpc间防火墙开关边id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * vpc间防火墙开关边名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_edgeName;
                    bool m_edgeNameHasBeenSet;

                    /**
                     * 日志来源 move：vpc间防火墙
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                    /**
                     * 是否加入隔离列表，1是 0不是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isolate;
                    bool m_isolateHasBeenSet;

                    /**
                     * 是否加入隔离列表，1是 0不是
                     */
                    int64_t m_hide;
                    bool m_hideHasBeenSet;

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BLOCKINFO_H_
