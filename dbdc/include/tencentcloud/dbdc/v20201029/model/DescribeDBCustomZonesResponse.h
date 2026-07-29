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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMZONESRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMZONESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/ZoneInfo.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomZones返回参数结构体
                */
                class DescribeDBCustomZonesResponse : public AbstractModel
                {
                public:
                    DescribeDBCustomZonesResponse();
                    ~DescribeDBCustomZonesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询支持售卖的地域对应的可用区，State字段值如为SELL则代表正常售卖。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneSet <p>查询支持售卖的地域对应的可用区，State字段值如为SELL则代表正常售卖。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ZoneInfo> GetZoneSet() const;

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     * 
                     */
                    bool ZoneSetHasBeenSet() const;

                private:

                    /**
                     * <p>查询支持售卖的地域对应的可用区，State字段值如为SELL则代表正常售卖。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ZoneInfo> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMZONESRESPONSE_H_
