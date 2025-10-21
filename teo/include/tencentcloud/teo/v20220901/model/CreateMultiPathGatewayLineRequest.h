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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateMultiPathGatewayLine请求参数结构体
                */
                class CreateMultiPathGatewayLineRequest : public AbstractModel
                {
                public:
                    CreateMultiPathGatewayLineRequest();
                    ~CreateMultiPathGatewayLineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID 。
                     * @return ZoneId 站点 ID 。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID 。
                     * @param _zoneId 站点 ID 。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取多通道安全网关 ID 。
                     * @return GatewayId 多通道安全网关 ID 。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置多通道安全网关 ID 。
                     * @param _gatewayId 多通道安全网关 ID 。
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
                     * 获取线路类型，取值有：
 <li>direct ：直连线路，不支持修改和删除。</li> <li>proxy ：EdgeOne 四层代理线路，支持修改实例 ID 和规则 ID，不支持删除。</li> <li>custom ：自定义线路，支持修改、删除实例 ID 和规则 ID。</li>
                     * @return LineType 线路类型，取值有：
 <li>direct ：直连线路，不支持修改和删除。</li> <li>proxy ：EdgeOne 四层代理线路，支持修改实例 ID 和规则 ID，不支持删除。</li> <li>custom ：自定义线路，支持修改、删除实例 ID 和规则 ID。</li>
                     * 
                     */
                    std::string GetLineType() const;

                    /**
                     * 设置线路类型，取值有：
 <li>direct ：直连线路，不支持修改和删除。</li> <li>proxy ：EdgeOne 四层代理线路，支持修改实例 ID 和规则 ID，不支持删除。</li> <li>custom ：自定义线路，支持修改、删除实例 ID 和规则 ID。</li>
                     * @param _lineType 线路类型，取值有：
 <li>direct ：直连线路，不支持修改和删除。</li> <li>proxy ：EdgeOne 四层代理线路，支持修改实例 ID 和规则 ID，不支持删除。</li> <li>custom ：自定义线路，支持修改、删除实例 ID 和规则 ID。</li>
                     * 
                     */
                    void SetLineType(const std::string& _lineType);

                    /**
                     * 判断参数 LineType 是否已赋值
                     * @return LineType 是否已赋值
                     * 
                     */
                    bool LineTypeHasBeenSet() const;

                    /**
                     * 获取线路地址，格式为 ip:port。
                     * @return LineAddress 线路地址，格式为 ip:port。
                     * 
                     */
                    std::string GetLineAddress() const;

                    /**
                     * 设置线路地址，格式为 ip:port。
                     * @param _lineAddress 线路地址，格式为 ip:port。
                     * 
                     */
                    void SetLineAddress(const std::string& _lineAddress);

                    /**
                     * 判断参数 LineAddress 是否已赋值
                     * @return LineAddress 是否已赋值
                     * 
                     */
                    bool LineAddressHasBeenSet() const;

                    /**
                     * 获取四层代理实例 ID，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可由接口 [DescribeL4Proxy](https://cloud.tencent.com/document/api/1552/103413) 获取。
                     * @return ProxyId 四层代理实例 ID，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可由接口 [DescribeL4Proxy](https://cloud.tencent.com/document/api/1552/103413) 获取。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置四层代理实例 ID，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可由接口 [DescribeL4Proxy](https://cloud.tencent.com/document/api/1552/103413) 获取。
                     * @param _proxyId 四层代理实例 ID，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可由接口 [DescribeL4Proxy](https://cloud.tencent.com/document/api/1552/103413) 获取。
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可以从接口 [DescribeL4ProxyRules](https://cloud.tencent.com/document/api/1552/103412) 获取。
                     * @return RuleId 转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可以从接口 [DescribeL4ProxyRules](https://cloud.tencent.com/document/api/1552/103412) 获取。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可以从接口 [DescribeL4ProxyRules](https://cloud.tencent.com/document/api/1552/103412) 获取。
                     * @param _ruleId 转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可以从接口 [DescribeL4ProxyRules](https://cloud.tencent.com/document/api/1552/103412) 获取。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 站点 ID 。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 多通道安全网关 ID 。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 线路类型，取值有：
 <li>direct ：直连线路，不支持修改和删除。</li> <li>proxy ：EdgeOne 四层代理线路，支持修改实例 ID 和规则 ID，不支持删除。</li> <li>custom ：自定义线路，支持修改、删除实例 ID 和规则 ID。</li>
                     */
                    std::string m_lineType;
                    bool m_lineTypeHasBeenSet;

                    /**
                     * 线路地址，格式为 ip:port。
                     */
                    std::string m_lineAddress;
                    bool m_lineAddressHasBeenSet;

                    /**
                     * 四层代理实例 ID，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可由接口 [DescribeL4Proxy](https://cloud.tencent.com/document/api/1552/103413) 获取。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）必传，可以从接口 [DescribeL4ProxyRules](https://cloud.tencent.com/document/api/1552/103412) 获取。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEMULTIPATHGATEWAYLINEREQUEST_H_
