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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYLINE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYLINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 多通道安全网关线路信息
                */
                class MultiPathGatewayLine : public AbstractModel
                {
                public:
                    MultiPathGatewayLine();
                    ~MultiPathGatewayLine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线路 ID ， 其中 line-0 和 line-1 为系统内置线路 ID，取值有:
<li> line-0：直连线路，不支持添加、编辑和删除；</li>
<li> line-1： EdgeOne 四层代理线路，支持修改实例和规则，不支持删除；</li>
<li> line-2 及以上：EdgeOne 四层代理线路或者自定义线路，支持修改、删除实例和规则。</li>
                     * @return LineId 线路 ID ， 其中 line-0 和 line-1 为系统内置线路 ID，取值有:
<li> line-0：直连线路，不支持添加、编辑和删除；</li>
<li> line-1： EdgeOne 四层代理线路，支持修改实例和规则，不支持删除；</li>
<li> line-2 及以上：EdgeOne 四层代理线路或者自定义线路，支持修改、删除实例和规则。</li>
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置线路 ID ， 其中 line-0 和 line-1 为系统内置线路 ID，取值有:
<li> line-0：直连线路，不支持添加、编辑和删除；</li>
<li> line-1： EdgeOne 四层代理线路，支持修改实例和规则，不支持删除；</li>
<li> line-2 及以上：EdgeOne 四层代理线路或者自定义线路，支持修改、删除实例和规则。</li>
                     * @param _lineId 线路 ID ， 其中 line-0 和 line-1 为系统内置线路 ID，取值有:
<li> line-0：直连线路，不支持添加、编辑和删除；</li>
<li> line-1： EdgeOne 四层代理线路，支持修改实例和规则，不支持删除；</li>
<li> line-2 及以上：EdgeOne 四层代理线路或者自定义线路，支持修改、删除实例和规则。</li>
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                    /**
                     * 获取线路类型，取值有：
<li>direct ：直连线路，不支持编辑、不支持删除；</li>
<li>proxy ：EdgeOne 四层代理线路，支持编辑修改实例和规则，不支持删除；</li>
<li>custom ：自定义线路，支持编辑、支持删除。</li>
                     * @return LineType 线路类型，取值有：
<li>direct ：直连线路，不支持编辑、不支持删除；</li>
<li>proxy ：EdgeOne 四层代理线路，支持编辑修改实例和规则，不支持删除；</li>
<li>custom ：自定义线路，支持编辑、支持删除。</li>
                     * 
                     */
                    std::string GetLineType() const;

                    /**
                     * 设置线路类型，取值有：
<li>direct ：直连线路，不支持编辑、不支持删除；</li>
<li>proxy ：EdgeOne 四层代理线路，支持编辑修改实例和规则，不支持删除；</li>
<li>custom ：自定义线路，支持编辑、支持删除。</li>
                     * @param _lineType 线路类型，取值有：
<li>direct ：直连线路，不支持编辑、不支持删除；</li>
<li>proxy ：EdgeOne 四层代理线路，支持编辑修改实例和规则，不支持删除；</li>
<li>custom ：自定义线路，支持编辑、支持删除。</li>
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
                     * 获取线路地址，格式为 host:port 。
                     * @return LineAddress 线路地址，格式为 host:port 。
                     * 
                     */
                    std::string GetLineAddress() const;

                    /**
                     * 设置线路地址，格式为 host:port 。
                     * @param _lineAddress 线路地址，格式为 host:port 。
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
                     * 获取四层代理实例 ID  ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
                     * @return ProxyId 四层代理实例 ID  ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置四层代理实例 ID  ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
                     * @param _proxyId 四层代理实例 ID  ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
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
                     * 获取转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
                     * @return RuleId 转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
                     * @param _ruleId 转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
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
                     * 线路 ID ， 其中 line-0 和 line-1 为系统内置线路 ID，取值有:
<li> line-0：直连线路，不支持添加、编辑和删除；</li>
<li> line-1： EdgeOne 四层代理线路，支持修改实例和规则，不支持删除；</li>
<li> line-2 及以上：EdgeOne 四层代理线路或者自定义线路，支持修改、删除实例和规则。</li>
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * 线路类型，取值有：
<li>direct ：直连线路，不支持编辑、不支持删除；</li>
<li>proxy ：EdgeOne 四层代理线路，支持编辑修改实例和规则，不支持删除；</li>
<li>custom ：自定义线路，支持编辑、支持删除。</li>
                     */
                    std::string m_lineType;
                    bool m_lineTypeHasBeenSet;

                    /**
                     * 线路地址，格式为 host:port 。
                     */
                    std::string m_lineAddress;
                    bool m_lineAddressHasBeenSet;

                    /**
                     * 四层代理实例 ID  ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 转发规则 ID ，当线路类型 LineType 取值为 proxy（EdgeOne 四层代理）返回。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYLINE_H_
