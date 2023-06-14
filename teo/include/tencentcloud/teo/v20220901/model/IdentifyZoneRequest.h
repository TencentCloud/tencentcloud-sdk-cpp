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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONEREQUEST_H_

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
                * IdentifyZone请求参数结构体
                */
                class IdentifyZoneRequest : public AbstractModel
                {
                public:
                    IdentifyZoneRequest();
                    ~IdentifyZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param _zoneName 站点名称。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取站点下的子域名。如果验证站点下的子域名，则传该值，否则为空。

                     * @return Domain 站点下的子域名。如果验证站点下的子域名，则传该值，否则为空。

                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置站点下的子域名。如果验证站点下的子域名，则传该值，否则为空。

                     * @param _domain 站点下的子域名。如果验证站点下的子域名，则传该值，否则为空。

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
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 站点下的子域名。如果验证站点下的子域名，则传该值，否则为空。

                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFYZONEREQUEST_H_
