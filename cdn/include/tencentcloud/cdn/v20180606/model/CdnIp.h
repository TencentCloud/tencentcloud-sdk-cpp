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
                * CdnIp 属性详情。
                */
                class CdnIp : public AbstractModel
                {
                public:
                    CdnIp();
                    ~CdnIp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点 ip。
                     * @return Ip 节点 ip。
                     */
                    std::string GetIp() const;

                    /**
                     * 设置节点 ip。
                     * @param Ip 节点 ip。
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取是否为腾讯云 CDN 加速节点。yes 表示该节点为腾讯云 CDN 节点，no 表示该节点不是腾讯云 CDN 节点。
                     * @return Platform 是否为腾讯云 CDN 加速节点。yes 表示该节点为腾讯云 CDN 节点，no 表示该节点不是腾讯云 CDN 节点。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置是否为腾讯云 CDN 加速节点。yes 表示该节点为腾讯云 CDN 节点，no 表示该节点不是腾讯云 CDN 节点。
                     * @param Platform 是否为腾讯云 CDN 加速节点。yes 表示该节点为腾讯云 CDN 节点，no 表示该节点不是腾讯云 CDN 节点。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取表示该节点所处的省份/国家。unknown 表示节点位置未知。
                     * @return Location 表示该节点所处的省份/国家。unknown 表示节点位置未知。
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置表示该节点所处的省份/国家。unknown 表示节点位置未知。
                     * @param Location 表示该节点所处的省份/国家。unknown 表示节点位置未知。
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取节点上下线历史记录。
                     * @return History 节点上下线历史记录。
                     */
                    std::vector<CdnIpHistory> GetHistory() const;

                    /**
                     * 设置节点上下线历史记录。
                     * @param History 节点上下线历史记录。
                     */
                    void SetHistory(const std::vector<CdnIpHistory>& _history);

                    /**
                     * 判断参数 History 是否已赋值
                     * @return History 是否已赋值
                     */
                    bool HistoryHasBeenSet() const;

                    /**
                     * 获取节点的服务地域。mainland 表示服务地域为中国境内，overseas 表示服务地域为中国境外， unknown 表示服务地域未知。
                     * @return Area 节点的服务地域。mainland 表示服务地域为中国境内，overseas 表示服务地域为中国境外， unknown 表示服务地域未知。
                     */
                    std::string GetArea() const;

                    /**
                     * 设置节点的服务地域。mainland 表示服务地域为中国境内，overseas 表示服务地域为中国境外， unknown 表示服务地域未知。
                     * @param Area 节点的服务地域。mainland 表示服务地域为中国境内，overseas 表示服务地域为中国境外， unknown 表示服务地域未知。
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 节点 ip。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 是否为腾讯云 CDN 加速节点。yes 表示该节点为腾讯云 CDN 节点，no 表示该节点不是腾讯云 CDN 节点。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 表示该节点所处的省份/国家。unknown 表示节点位置未知。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 节点上下线历史记录。
                     */
                    std::vector<CdnIpHistory> m_history;
                    bool m_historyHasBeenSet;

                    /**
                     * 节点的服务地域。mainland 表示服务地域为中国境内，overseas 表示服务地域为中国境外， unknown 表示服务地域未知。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CDNIP_H_
