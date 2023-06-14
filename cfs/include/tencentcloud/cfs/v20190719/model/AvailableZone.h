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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEZONE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AvailableType.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 版本控制-可用区数组
                */
                class AvailableZone : public AbstractModel
                {
                public:
                    AvailableZone();
                    ~AvailableZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区名称
                     * @return Zone 可用区名称
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区名称
                     * @param _zone 可用区名称
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取可用区ID
                     * @return ZoneId 可用区ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneId 可用区ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取可用区中文名称
                     * @return ZoneCnName 可用区中文名称
                     * 
                     */
                    std::string GetZoneCnName() const;

                    /**
                     * 设置可用区中文名称
                     * @param _zoneCnName 可用区中文名称
                     * 
                     */
                    void SetZoneCnName(const std::string& _zoneCnName);

                    /**
                     * 判断参数 ZoneCnName 是否已赋值
                     * @return ZoneCnName 是否已赋值
                     * 
                     */
                    bool ZoneCnNameHasBeenSet() const;

                    /**
                     * 获取Type数组
                     * @return Types Type数组
                     * 
                     */
                    std::vector<AvailableType> GetTypes() const;

                    /**
                     * 设置Type数组
                     * @param _types Type数组
                     * 
                     */
                    void SetTypes(const std::vector<AvailableType>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取可用区中英文名称
                     * @return ZoneName 可用区中英文名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区中英文名称
                     * @param _zoneName 可用区中英文名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                private:

                    /**
                     * 可用区名称
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区中文名称
                     */
                    std::string m_zoneCnName;
                    bool m_zoneCnNameHasBeenSet;

                    /**
                     * Type数组
                     */
                    std::vector<AvailableType> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * 可用区中英文名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLEZONE_H_
