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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATESREQUEST_H_

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
                * DescribeWebSecurityTemplates请求参数结构体
                */
                class DescribeWebSecurityTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeWebSecurityTemplatesRequest();
                    ~DescribeWebSecurityTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID 列表。单次查询最多传入 100 个站点。
                     * @return ZoneIds 站点 ID 列表。单次查询最多传入 100 个站点。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置站点 ID 列表。单次查询最多传入 100 个站点。
                     * @param _zoneIds 站点 ID 列表。单次查询最多传入 100 个站点。
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID 列表。单次查询最多传入 100 个站点。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEWEBSECURITYTEMPLATESREQUEST_H_
