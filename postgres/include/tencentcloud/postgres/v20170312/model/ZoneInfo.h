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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述可用区的编码和状态信息
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该可用区的英文名称
                     * @return Zone 该可用区的英文名称
                     */
                    std::string GetZone() const;

                    /**
                     * 设置该可用区的英文名称
                     * @param Zone 该可用区的英文名称
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取该可用区的中文名称
                     * @return ZoneName 该可用区的中文名称
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置该可用区的中文名称
                     * @param ZoneName 该可用区的中文名称
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取该可用区对应的数字编号
                     * @return ZoneId 该可用区对应的数字编号
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置该可用区对应的数字编号
                     * @param ZoneId 该可用区对应的数字编号
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     * @return ZoneState 可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     */
                    std::string GetZoneState() const;

                    /**
                     * 设置可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     * @param ZoneState 可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     */
                    void SetZoneState(const std::string& _zoneState);

                    /**
                     * 判断参数 ZoneState 是否已赋值
                     * @return ZoneState 是否已赋值
                     */
                    bool ZoneStateHasBeenSet() const;

                private:

                    /**
                     * 该可用区的英文名称
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 该可用区的中文名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 该可用区对应的数字编号
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     */
                    std::string m_zoneState;
                    bool m_zoneStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ZONEINFO_H_
