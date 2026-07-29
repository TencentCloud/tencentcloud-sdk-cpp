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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERLEVELSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERLEVELSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterLevels返回参数结构体
                */
                class DescribeClusterLevelsResponse : public AbstractModel
                {
                public:
                    DescribeClusterLevelsResponse();
                    ~DescribeClusterLevelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群类型列表</p>
                     * @return LevelList <p>集群类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetLevelList() const;

                    /**
                     * 判断参数 LevelList 是否已赋值
                     * @return LevelList 是否已赋值
                     * 
                     */
                    bool LevelListHasBeenSet() const;

                    /**
                     * 获取<p>专区列表</p>
                     * @return Zones <p>专区列表</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * <p>集群类型列表</p>
                     */
                    std::vector<std::string> m_levelList;
                    bool m_levelListHasBeenSet;

                    /**
                     * <p>专区列表</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERLEVELSRESPONSE_H_
