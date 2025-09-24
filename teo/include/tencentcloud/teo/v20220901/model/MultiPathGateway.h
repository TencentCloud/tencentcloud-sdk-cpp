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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MultiPathGatewayLine.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 多通道安全网关详情
                */
                class MultiPathGateway : public AbstractModel
                {
                public:
                    MultiPathGateway();
                    ~MultiPathGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关 ID。
                     * @return GatewayId 网关 ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关 ID。
                     * @param _gatewayId 网关 ID。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取网关名。
                     * @return GatewayName 网关名。
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置网关名。
                     * @param _gatewayName 网关名。
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取网关类型，取值有：
<li> cloud：云上网关，腾讯云创建和管理的网关。</li>
<li> private：自有网关，用户部署的私有网关。</li>
                     * @return GatewayType 网关类型，取值有：
<li> cloud：云上网关，腾讯云创建和管理的网关。</li>
<li> private：自有网关，用户部署的私有网关。</li>
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置网关类型，取值有：
<li> cloud：云上网关，腾讯云创建和管理的网关。</li>
<li> private：自有网关，用户部署的私有网关。</li>
                     * @param _gatewayType 网关类型，取值有：
<li> cloud：云上网关，腾讯云创建和管理的网关。</li>
<li> private：自有网关，用户部署的私有网关。</li>
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取网关端口，范围 1～65535（除去 8888 ）。
                     * @return GatewayPort 网关端口，范围 1～65535（除去 8888 ）。
                     * 
                     */
                    int64_t GetGatewayPort() const;

                    /**
                     * 设置网关端口，范围 1～65535（除去 8888 ）。
                     * @param _gatewayPort 网关端口，范围 1～65535（除去 8888 ）。
                     * 
                     */
                    void SetGatewayPort(const int64_t& _gatewayPort);

                    /**
                     * 判断参数 GatewayPort 是否已赋值
                     * @return GatewayPort 是否已赋值
                     * 
                     */
                    bool GatewayPortHasBeenSet() const;

                    /**
                     * 获取网关状态，取值有：
<li> creating : 创建中；</li>
<li> online : 在线；</li>
<li> offline : 离线；</li>
<li> disable : 已停用。</li>
                     * @return Status 网关状态，取值有：
<li> creating : 创建中；</li>
<li> online : 在线；</li>
<li> offline : 离线；</li>
<li> disable : 已停用。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置网关状态，取值有：
<li> creating : 创建中；</li>
<li> online : 在线；</li>
<li> offline : 离线；</li>
<li> disable : 已停用。</li>
                     * @param _status 网关状态，取值有：
<li> creating : 创建中；</li>
<li> online : 在线；</li>
<li> offline : 离线；</li>
<li> disable : 已停用。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取网关 IP， 格式为 IPv4。
                     * @return GatewayIP 网关 IP， 格式为 IPv4。
                     * 
                     */
                    std::string GetGatewayIP() const;

                    /**
                     * 设置网关 IP， 格式为 IPv4。
                     * @param _gatewayIP 网关 IP， 格式为 IPv4。
                     * 
                     */
                    void SetGatewayIP(const std::string& _gatewayIP);

                    /**
                     * 判断参数 GatewayIP 是否已赋值
                     * @return GatewayIP 是否已赋值
                     * 
                     */
                    bool GatewayIPHasBeenSet() const;

                    /**
                     * 获取网关地域 Id，可以从接口 DescribeMultiPathGatewayRegions 获取 RegionId 列表。
                     * @return RegionId 网关地域 Id，可以从接口 DescribeMultiPathGatewayRegions 获取 RegionId 列表。
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置网关地域 Id，可以从接口 DescribeMultiPathGatewayRegions 获取 RegionId 列表。
                     * @param _regionId 网关地域 Id，可以从接口 DescribeMultiPathGatewayRegions 获取 RegionId 列表。
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取线路信息，当查询网关信息详情 DescribeMultiPathGateway 的时候会返回，当查询网关列表 DescribeMultiPathGateways 的时候不会返回。
                     * @return Lines 线路信息，当查询网关信息详情 DescribeMultiPathGateway 的时候会返回，当查询网关列表 DescribeMultiPathGateways 的时候不会返回。
                     * 
                     */
                    std::vector<MultiPathGatewayLine> GetLines() const;

                    /**
                     * 设置线路信息，当查询网关信息详情 DescribeMultiPathGateway 的时候会返回，当查询网关列表 DescribeMultiPathGateways 的时候不会返回。
                     * @param _lines 线路信息，当查询网关信息详情 DescribeMultiPathGateway 的时候会返回，当查询网关列表 DescribeMultiPathGateways 的时候不会返回。
                     * 
                     */
                    void SetLines(const std::vector<MultiPathGatewayLine>& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                    /**
                     * 获取网关回源 IP 列表发生了变化是否需要重新确认，取值有：<li>true：回源 IP 列表发生了变化，需要确认；</li><li>false：回源 IP 列表未发生变化，无需确认。</li>
                     * @return NeedConfirm 网关回源 IP 列表发生了变化是否需要重新确认，取值有：<li>true：回源 IP 列表发生了变化，需要确认；</li><li>false：回源 IP 列表未发生变化，无需确认。</li>
                     * 
                     */
                    std::string GetNeedConfirm() const;

                    /**
                     * 设置网关回源 IP 列表发生了变化是否需要重新确认，取值有：<li>true：回源 IP 列表发生了变化，需要确认；</li><li>false：回源 IP 列表未发生变化，无需确认。</li>
                     * @param _needConfirm 网关回源 IP 列表发生了变化是否需要重新确认，取值有：<li>true：回源 IP 列表发生了变化，需要确认；</li><li>false：回源 IP 列表未发生变化，无需确认。</li>
                     * 
                     */
                    void SetNeedConfirm(const std::string& _needConfirm);

                    /**
                     * 判断参数 NeedConfirm 是否已赋值
                     * @return NeedConfirm 是否已赋值
                     * 
                     */
                    bool NeedConfirmHasBeenSet() const;

                private:

                    /**
                     * 网关 ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关名。
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * 网关类型，取值有：
<li> cloud：云上网关，腾讯云创建和管理的网关。</li>
<li> private：自有网关，用户部署的私有网关。</li>
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * 网关端口，范围 1～65535（除去 8888 ）。
                     */
                    int64_t m_gatewayPort;
                    bool m_gatewayPortHasBeenSet;

                    /**
                     * 网关状态，取值有：
<li> creating : 创建中；</li>
<li> online : 在线；</li>
<li> offline : 离线；</li>
<li> disable : 已停用。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 网关 IP， 格式为 IPv4。
                     */
                    std::string m_gatewayIP;
                    bool m_gatewayIPHasBeenSet;

                    /**
                     * 网关地域 Id，可以从接口 DescribeMultiPathGatewayRegions 获取 RegionId 列表。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 线路信息，当查询网关信息详情 DescribeMultiPathGateway 的时候会返回，当查询网关列表 DescribeMultiPathGateways 的时候不会返回。
                     */
                    std::vector<MultiPathGatewayLine> m_lines;
                    bool m_linesHasBeenSet;

                    /**
                     * 网关回源 IP 列表发生了变化是否需要重新确认，取值有：<li>true：回源 IP 列表发生了变化，需要确认；</li><li>false：回源 IP 列表未发生变化，无需确认。</li>
                     */
                    std::string m_needConfirm;
                    bool m_needConfirmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAY_H_
