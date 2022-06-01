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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSSETTINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeHostsSetting请求参数结构体
                */
                class DescribeHostsSettingRequest : public AbstractModel
                {
                public:
                    DescribeHostsSettingRequest();
                    ~DescribeHostsSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID
                     * @return ZoneId 站点ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID
                     * @param ZoneId 站点ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量，默认为 0
                     * @return Offset 分页查询偏移量，默认为 0
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为 0
                     * @param Offset 分页查询偏移量，默认为 0
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目，默认为 100，最大可设置为 1000
                     * @return Limit 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认为 100，最大可设置为 1000
                     * @param Limit 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取指定域名查询
                     * @return Hosts 指定域名查询
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置指定域名查询
                     * @param Hosts 指定域名查询
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     */
                    bool HostsHasBeenSet() const;

                private:

                    /**
                     * 站点ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 分页查询偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为 100，最大可设置为 1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定域名查询
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEHOSTSSETTINGREQUEST_H_
