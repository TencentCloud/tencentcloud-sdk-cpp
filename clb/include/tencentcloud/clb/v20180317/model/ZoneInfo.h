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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 可用区相关信息
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区数值形式的唯一ID，如：100001
                     * @return ZoneId 可用区数值形式的唯一ID，如：100001
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置可用区数值形式的唯一ID，如：100001
                     * @param _zoneId 可用区数值形式的唯一ID，如：100001
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取可用区字符串形式的唯一ID，如：ap-guangzhou-1
                     * @return Zone 可用区字符串形式的唯一ID，如：ap-guangzhou-1
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区字符串形式的唯一ID，如：ap-guangzhou-1
                     * @param _zone 可用区字符串形式的唯一ID，如：ap-guangzhou-1
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
                     * 获取可用区名称，如：广州一区
                     * @return ZoneName 可用区名称，如：广州一区
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置可用区名称，如：广州一区
                     * @param _zoneName 可用区名称，如：广州一区
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
                     * 获取可用区所属地域，如：ap-guangzhou
                     * @return ZoneRegion 可用区所属地域，如：ap-guangzhou
                     * 
                     */
                    std::string GetZoneRegion() const;

                    /**
                     * 设置可用区所属地域，如：ap-guangzhou
                     * @param _zoneRegion 可用区所属地域，如：ap-guangzhou
                     * 
                     */
                    void SetZoneRegion(const std::string& _zoneRegion);

                    /**
                     * 判断参数 ZoneRegion 是否已赋值
                     * @return ZoneRegion 是否已赋值
                     * 
                     */
                    bool ZoneRegionHasBeenSet() const;

                    /**
                     * 获取可用区是否是LocalZone可用区，如：false
                     * @return LocalZone 可用区是否是LocalZone可用区，如：false
                     * 
                     */
                    bool GetLocalZone() const;

                    /**
                     * 设置可用区是否是LocalZone可用区，如：false
                     * @param _localZone 可用区是否是LocalZone可用区，如：false
                     * 
                     */
                    void SetLocalZone(const bool& _localZone);

                    /**
                     * 判断参数 LocalZone 是否已赋值
                     * @return LocalZone 是否已赋值
                     * 
                     */
                    bool LocalZoneHasBeenSet() const;

                    /**
                     * 获取可用区是否是EdgeZone可用区，如：false
                     * @return EdgeZone 可用区是否是EdgeZone可用区，如：false
                     * 
                     */
                    bool GetEdgeZone() const;

                    /**
                     * 设置可用区是否是EdgeZone可用区，如：false
                     * @param _edgeZone 可用区是否是EdgeZone可用区，如：false
                     * 
                     */
                    void SetEdgeZone(const bool& _edgeZone);

                    /**
                     * 判断参数 EdgeZone 是否已赋值
                     * @return EdgeZone 是否已赋值
                     * 
                     */
                    bool EdgeZoneHasBeenSet() const;

                private:

                    /**
                     * 可用区数值形式的唯一ID，如：100001
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区字符串形式的唯一ID，如：ap-guangzhou-1
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区名称，如：广州一区
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 可用区所属地域，如：ap-guangzhou
                     */
                    std::string m_zoneRegion;
                    bool m_zoneRegionHasBeenSet;

                    /**
                     * 可用区是否是LocalZone可用区，如：false
                     */
                    bool m_localZone;
                    bool m_localZoneHasBeenSet;

                    /**
                     * 可用区是否是EdgeZone可用区，如：false
                     */
                    bool m_edgeZone;
                    bool m_edgeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_ZONEINFO_H_
