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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * 可用区信息
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区ID
                     * @return Zone 可用区ID
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID
                     * @param _zone 可用区ID
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
                     * 获取可用区整型ID
                     * @return ZoneId 可用区整型ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置可用区整型ID
                     * @param _zoneId 可用区整型ID
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
                     * 获取可用区描述
                     * @return ZoneDescription 可用区描述
                     * 
                     */
                    std::string GetZoneDescription() const;

                    /**
                     * 设置可用区描述
                     * @param _zoneDescription 可用区描述
                     * 
                     */
                    void SetZoneDescription(const std::string& _zoneDescription);

                    /**
                     * 判断参数 ZoneDescription 是否已赋值
                     * @return ZoneDescription 是否已赋值
                     * 
                     */
                    bool ZoneDescriptionHasBeenSet() const;

                private:

                    /**
                     * 可用区ID
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区整型ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 可用区描述
                     */
                    std::string m_zoneDescription;
                    bool m_zoneDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_ZONEINFO_H_
