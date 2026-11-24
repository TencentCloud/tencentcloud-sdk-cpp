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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBEUSERAVAILABLECLOUDDEDICATEDZONESRESPONSE_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBEUSERAVAILABLECLOUDDEDICATEDZONESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZone.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * DescribeUserAvailableCloudDedicatedZones返回参数结构体
                */
                class DescribeUserAvailableCloudDedicatedZonesResponse : public AbstractModel
                {
                public:
                    DescribeUserAvailableCloudDedicatedZonesResponse();
                    ~DescribeUserAvailableCloudDedicatedZonesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回当前用户可使用的专属可用区 ID 
                     * @return ZoneIdSet 返回当前用户可使用的专属可用区 ID 
                     * 
                     */
                    std::vector<std::string> GetZoneIdSet() const;

                    /**
                     * 判断参数 ZoneIdSet 是否已赋值
                     * @return ZoneIdSet 是否已赋值
                     * 
                     */
                    bool ZoneIdSetHasBeenSet() const;

                    /**
                     * 获取专属可用区列表信息。
                     * @return ZoneSet 专属可用区列表信息。
                     * 
                     */
                    std::vector<CloudDedicatedZone> GetZoneSet() const;

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     * 
                     */
                    bool ZoneSetHasBeenSet() const;

                private:

                    /**
                     * 返回当前用户可使用的专属可用区 ID 
                     */
                    std::vector<std::string> m_zoneIdSet;
                    bool m_zoneIdSetHasBeenSet;

                    /**
                     * 专属可用区列表信息。
                     */
                    std::vector<CloudDedicatedZone> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBEUSERAVAILABLECLOUDDEDICATEDZONESRESPONSE_H_
