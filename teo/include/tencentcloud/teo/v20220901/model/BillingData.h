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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BILLINGDATA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BILLINGDATA_H_

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
                * 计费数据项。
                */
                class BillingData : public AbstractModel
                {
                public:
                    BillingData();
                    ~BillingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据时间戳。
                     * @return Time 数据时间戳。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置数据时间戳。
                     * @param _time 数据时间戳。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取数值。
                     * @return Value 数值。
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置数值。
                     * @param _value 数值。
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取数据点所属站点 ID。若使用内容标识符功能，则该项值为内容标识符。
                     * @return ZoneId 数据点所属站点 ID。若使用内容标识符功能，则该项值为内容标识符。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置数据点所属站点 ID。若使用内容标识符功能，则该项值为内容标识符。
                     * @param _zoneId 数据点所属站点 ID。若使用内容标识符功能，则该项值为内容标识符。
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
                     * 获取数据点所属域名。
                     * @return Host 数据点所属域名。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置数据点所属域名。
                     * @param _host 数据点所属域名。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取数据点所属四层代理实例 ID。
                     * @return ProxyId 数据点所属四层代理实例 ID。
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置数据点所属四层代理实例 ID。
                     * @param _proxyId 数据点所属四层代理实例 ID。
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
                     * 获取数据点所属计费大区 ID。计费大区以实际服务用户客户端的 EdgeOne 节点所在区域为准。取值有：<li>CH：中国大陆境内</li><li>AF：非洲</li><li>AS1：亚太一区</li><li>AS2：亚太二区</li><li>AS3：亚太三区</li><li>EU：欧洲</li><li>MidEast：中东</li><li>NA：北美</li><li> SA：南美</li>
                     * @return RegionId 数据点所属计费大区 ID。计费大区以实际服务用户客户端的 EdgeOne 节点所在区域为准。取值有：<li>CH：中国大陆境内</li><li>AF：非洲</li><li>AS1：亚太一区</li><li>AS2：亚太二区</li><li>AS3：亚太三区</li><li>EU：欧洲</li><li>MidEast：中东</li><li>NA：北美</li><li> SA：南美</li>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置数据点所属计费大区 ID。计费大区以实际服务用户客户端的 EdgeOne 节点所在区域为准。取值有：<li>CH：中国大陆境内</li><li>AF：非洲</li><li>AS1：亚太一区</li><li>AS2：亚太二区</li><li>AS3：亚太三区</li><li>EU：欧洲</li><li>MidEast：中东</li><li>NA：北美</li><li> SA：南美</li>
                     * @param _regionId 数据点所属计费大区 ID。计费大区以实际服务用户客户端的 EdgeOne 节点所在区域为准。取值有：<li>CH：中国大陆境内</li><li>AF：非洲</li><li>AS1：亚太一区</li><li>AS2：亚太二区</li><li>AS3：亚太三区</li><li>EU：欧洲</li><li>MidEast：中东</li><li>NA：北美</li><li> SA：南美</li>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 数据时间戳。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 数值。
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 数据点所属站点 ID。若使用内容标识符功能，则该项值为内容标识符。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 数据点所属域名。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 数据点所属四层代理实例 ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 数据点所属计费大区 ID。计费大区以实际服务用户客户端的 EdgeOne 节点所在区域为准。取值有：<li>CH：中国大陆境内</li><li>AF：非洲</li><li>AS1：亚太一区</li><li>AS2：亚太二区</li><li>AS3：亚太三区</li><li>EU：欧洲</li><li>MidEast：中东</li><li>NA：北美</li><li> SA：南美</li>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BILLINGDATA_H_
