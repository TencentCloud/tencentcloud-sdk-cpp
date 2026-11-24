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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONE_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * 专属可用区信息
                */
                class CloudDedicatedZone : public AbstractModel
                {
                public:
                    CloudDedicatedZone();
                    ~CloudDedicatedZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专属可用区所属的可用区
                     * @return Zone 专属可用区所属的可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置专属可用区所属的可用区
                     * @param _zone 专属可用区所属的可用区
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
                     * 获取地域系统中的可用区ID
                     * @return ZoneId 地域系统中的可用区ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置地域系统中的可用区ID
                     * @param _zoneId 地域系统中的可用区ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取专属可用区名称
                     * @return ZoneName 专属可用区名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置专属可用区名称
                     * @param _zoneName 专属可用区名称
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取是否为轻量专属可用区
                     * @return IsLiteMode 是否为轻量专属可用区
                     * 
                     */
                    bool GetIsLiteMode() const;

                    /**
                     * 设置是否为轻量专属可用区
                     * @param _isLiteMode 是否为轻量专属可用区
                     * 
                     */
                    void SetIsLiteMode(const bool& _isLiteMode);

                    /**
                     * 判断参数 IsLiteMode 是否已赋值
                     * @return IsLiteMode 是否已赋值
                     * 
                     */
                    bool IsLiteModeHasBeenSet() const;

                    /**
                     * 获取可用区所在地域
                     * @return Region 可用区所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置可用区所在地域
                     * @param _region 可用区所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 专属可用区所属的可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 地域系统中的可用区ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 专属可用区名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 是否为轻量专属可用区
                     */
                    bool m_isLiteMode;
                    bool m_isLiteModeHasBeenSet;

                    /**
                     * 可用区所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_CLOUDDEDICATEDZONE_H_
