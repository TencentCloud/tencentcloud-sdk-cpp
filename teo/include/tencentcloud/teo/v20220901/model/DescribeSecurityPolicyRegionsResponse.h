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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREGIONSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/GeoIp.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyRegions返回参数结构体
                */
                class DescribeSecurityPolicyRegionsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyRegionsResponse();
                    ~DescribeSecurityPolicyRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总地域信息数。
                     * @return Count 总地域信息数。
                     */
                    int64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取地域信息。
                     * @return GeoIps 地域信息。
                     */
                    std::vector<GeoIp> GetGeoIps() const;

                    /**
                     * 判断参数 GeoIps 是否已赋值
                     * @return GeoIps 是否已赋值
                     */
                    bool GeoIpsHasBeenSet() const;

                private:

                    /**
                     * 总地域信息数。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 地域信息。
                     */
                    std::vector<GeoIp> m_geoIps;
                    bool m_geoIpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREGIONSRESPONSE_H_
