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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEZONESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEZONESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SaleRegion.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取地域信息
                     * @return RegionSet 地域信息
                     * 
                     */
                    std::vector<SaleRegion> GetRegionSet() const;

                    /**
                     * 判断参数 RegionSet 是否已赋值
                     * @return RegionSet 是否已赋值
                     * 
                     */
                    bool RegionSetHasBeenSet() const;

                private:

                    /**
                     * 地域信息
                     */
                    std::vector<SaleRegion> m_regionSet;
                    bool m_regionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEZONESRESPONSE_H_
