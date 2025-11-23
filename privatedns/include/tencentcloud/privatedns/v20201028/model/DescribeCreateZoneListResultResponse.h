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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATEZONELISTRESULTRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATEZONELISTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeCreateZoneListResult返回参数结构体
                */
                class DescribeCreateZoneListResultResponse : public AbstractModel
                {
                public:
                    DescribeCreateZoneListResultResponse();
                    ~DescribeCreateZoneListResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域域名和zoneId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZonesInfo 私有域域名和zoneId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ZoneInfo> GetZonesInfo() const;

                    /**
                     * 判断参数 ZonesInfo 是否已赋值
                     * @return ZonesInfo 是否已赋值
                     * 
                     */
                    bool ZonesInfoHasBeenSet() const;

                private:

                    /**
                     * 私有域域名和zoneId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ZoneInfo> m_zonesInfo;
                    bool m_zonesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBECREATEZONELISTRESULTRESPONSE_H_
