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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEZONESRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEZONESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Zone.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeZones返回参数结构体
                */
                class DescribeZonesResponse : public AbstractModel
                {
                public:
                    DescribeZonesResponse();
                    ~DescribeZonesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区列表
                     * @return Zones 可用区列表
                     * 
                     */
                    std::vector<Zone> GetZones() const;

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * 可用区列表
                     */
                    std::vector<Zone> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEZONESRESPONSE_H_
