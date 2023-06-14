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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_BUNKZONE_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_BUNKZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * 点位包含铺位信息
                */
                class BunkZone : public AbstractModel
                {
                public:
                    BunkZone();
                    ~BunkZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点位ID
                     * @return ZoneId 点位ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置点位ID
                     * @param _zoneId 点位ID
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
                     * 获取点位名称
                     * @return ZoneName 点位名称
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置点位名称
                     * @param _zoneName 点位名称
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
                     * 获取铺位编码
                     * @return BunkCodes 铺位编码
                     * 
                     */
                    std::string GetBunkCodes() const;

                    /**
                     * 设置铺位编码
                     * @param _bunkCodes 铺位编码
                     * 
                     */
                    void SetBunkCodes(const std::string& _bunkCodes);

                    /**
                     * 判断参数 BunkCodes 是否已赋值
                     * @return BunkCodes 是否已赋值
                     * 
                     */
                    bool BunkCodesHasBeenSet() const;

                private:

                    /**
                     * 点位ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 点位名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 铺位编码
                     */
                    std::string m_bunkCodes;
                    bool m_bunkCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_BUNKZONE_H_
