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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDZONECHOOSEINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDZONECHOOSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/ZonesInfo.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * 分片节点可用区选择
                */
                class ShardZoneChooseInfo : public AbstractModel
                {
                public:
                    ShardZoneChooseInfo();
                    ~ShardZoneChooseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主可用区
                     * @return MasterZone 主可用区
                     * 
                     */
                    ZonesInfo GetMasterZone() const;

                    /**
                     * 设置主可用区
                     * @param _masterZone 主可用区
                     * 
                     */
                    void SetMasterZone(const ZonesInfo& _masterZone);

                    /**
                     * 判断参数 MasterZone 是否已赋值
                     * @return MasterZone 是否已赋值
                     * 
                     */
                    bool MasterZoneHasBeenSet() const;

                    /**
                     * 获取可选的从可用区
                     * @return SlaveZones 可选的从可用区
                     * 
                     */
                    std::vector<ZonesInfo> GetSlaveZones() const;

                    /**
                     * 设置可选的从可用区
                     * @param _slaveZones 可选的从可用区
                     * 
                     */
                    void SetSlaveZones(const std::vector<ZonesInfo>& _slaveZones);

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * 
                     */
                    bool SlaveZonesHasBeenSet() const;

                private:

                    /**
                     * 主可用区
                     */
                    ZonesInfo m_masterZone;
                    bool m_masterZoneHasBeenSet;

                    /**
                     * 可选的从可用区
                     */
                    std::vector<ZonesInfo> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_SHARDZONECHOOSEINFO_H_
