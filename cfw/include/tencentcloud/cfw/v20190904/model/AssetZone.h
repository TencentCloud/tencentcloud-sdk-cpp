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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ASSETZONE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ASSETZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * AssetZone 
                */
                class AssetZone : public AbstractModel
                {
                public:
                    AssetZone();
                    ~AssetZone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
                     * @return Zone 地域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地域
                     * @param _zone 地域
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
                     * 获取地域英文
                     * @return ZoneEng 地域英文
                     * 
                     */
                    std::string GetZoneEng() const;

                    /**
                     * 设置地域英文
                     * @param _zoneEng 地域英文
                     * 
                     */
                    void SetZoneEng(const std::string& _zoneEng);

                    /**
                     * 判断参数 ZoneEng 是否已赋值
                     * @return ZoneEng 是否已赋值
                     * 
                     */
                    bool ZoneEngHasBeenSet() const;

                private:

                    /**
                     * 地域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 地域英文
                     */
                    std::string m_zoneEng;
                    bool m_zoneEngHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ASSETZONE_H_
