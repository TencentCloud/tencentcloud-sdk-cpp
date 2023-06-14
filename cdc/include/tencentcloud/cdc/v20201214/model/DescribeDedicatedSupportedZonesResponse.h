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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDSUPPORTEDZONESRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDSUPPORTEDZONESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/RegionZoneInfo.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedSupportedZones返回参数结构体
                */
                class DescribeDedicatedSupportedZonesResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedSupportedZonesResponse();
                    ~DescribeDedicatedSupportedZonesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的可用区列表
                     * @return ZoneSet 支持的可用区列表
                     * 
                     */
                    std::vector<RegionZoneInfo> GetZoneSet() const;

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     * 
                     */
                    bool ZoneSetHasBeenSet() const;

                private:

                    /**
                     * 支持的可用区列表
                     */
                    std::vector<RegionZoneInfo> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDSUPPORTEDZONESRESPONSE_H_
