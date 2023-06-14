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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CDNIP_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CDNIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CdnIpHistory.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * IP 属性信息
                */
                class CdnIp : public AbstractModel
                {
                public:
                    CdnIp();
                    ~CdnIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定查询的 IP
                     * @return Ip 指定查询的 IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置指定查询的 IP
                     * @param _ip 指定查询的 IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取IP 归属：
yes：节点归属于腾讯云 CDN
no：节点不属于腾讯云 CDN
                     * @return Platform IP 归属：
yes：节点归属于腾讯云 CDN
no：节点不属于腾讯云 CDN
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置IP 归属：
yes：节点归属于腾讯云 CDN
no：节点不属于腾讯云 CDN
                     * @param _platform IP 归属：
yes：节点归属于腾讯云 CDN
no：节点不属于腾讯云 CDN
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取节点所处的省份/国家
unknown 表示节点位置未知
                     * @return Location 节点所处的省份/国家
unknown 表示节点位置未知
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置节点所处的省份/国家
unknown 表示节点位置未知
                     * @param _location 节点所处的省份/国家
unknown 表示节点位置未知
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取节点上下线历史记录
                     * @return History 节点上下线历史记录
                     * 
                     */
                    std::vector<CdnIpHistory> GetHistory() const;

                    /**
                     * 设置节点上下线历史记录
                     * @param _history 节点上下线历史记录
                     * 
                     */
                    void SetHistory(const std::vector<CdnIpHistory>& _history);

                    /**
                     * 判断参数 History 是否已赋值
                     * @return History 是否已赋值
                     * 
                     */
                    bool HistoryHasBeenSet() const;

                    /**
                     * 获取节点的所在区域
mainland：中国境内加速节点
overseas：中国境外加速节点
unknown：服务地域无法获取
                     * @return Area 节点的所在区域
mainland：中国境内加速节点
overseas：中国境外加速节点
unknown：服务地域无法获取
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置节点的所在区域
mainland：中国境内加速节点
overseas：中国境外加速节点
unknown：服务地域无法获取
                     * @param _area 节点的所在区域
mainland：中国境内加速节点
overseas：中国境外加速节点
unknown：服务地域无法获取
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取节点的所在城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 节点的所在城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置节点的所在城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _city 节点的所在城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                private:

                    /**
                     * 指定查询的 IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * IP 归属：
yes：节点归属于腾讯云 CDN
no：节点不属于腾讯云 CDN
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 节点所处的省份/国家
unknown 表示节点位置未知
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 节点上下线历史记录
                     */
                    std::vector<CdnIpHistory> m_history;
                    bool m_historyHasBeenSet;

                    /**
                     * 节点的所在区域
mainland：中国境内加速节点
overseas：中国境外加速节点
unknown：服务地域无法获取
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 节点的所在城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CDNIP_H_
