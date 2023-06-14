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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_ZONESINFO_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_ZONESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 可用区信息
                */
                class ZonesInfo : public AbstractModel
                {
                public:
                    ZonesInfo();
                    ~ZonesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区英文ID
                     * @return Zone 可用区英文ID
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区英文ID
                     * @param _zone 可用区英文ID
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
                     * 获取可用区数字ID
                     * @return ZoneId 可用区数字ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区数字ID
                     * @param _zoneId 可用区数字ID
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
                     * 获取可用区中文名
                     * @return ZoneName 可用区中文名
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区中文名
                     * @param _zoneName 可用区中文名
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
                     * 获取是否在售
                     * @return OnSale 是否在售
                     * 
                     */
                    bool GetOnSale() const;

                    /**
                     * 设置是否在售
                     * @param _onSale 是否在售
                     * 
                     */
                    void SetOnSale(const bool& _onSale);

                    /**
                     * 判断参数 OnSale 是否已赋值
                     * @return OnSale 是否已赋值
                     * 
                     */
                    bool OnSaleHasBeenSet() const;

                private:

                    /**
                     * 可用区英文ID
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区数字ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区中文名
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 是否在售
                     */
                    bool m_onSale;
                    bool m_onSaleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_ZONESINFO_H_
