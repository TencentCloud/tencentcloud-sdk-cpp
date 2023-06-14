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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECIFICATIONINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECIFICATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/SpecItem.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 实例规格信息
                */
                class SpecificationInfo : public AbstractModel
                {
                public:
                    SpecificationInfo();
                    ~SpecificationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域信息
                     * @return Region 地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param _region 地域信息
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取可用区信息
                     * @return Zone 可用区信息
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息
                     * @param _zone 可用区信息
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
                     * 获取售卖规格信息
                     * @return SpecItems 售卖规格信息
                     * 
                     */
                    std::vector<SpecItem> GetSpecItems() const;

                    /**
                     * 设置售卖规格信息
                     * @param _specItems 售卖规格信息
                     * 
                     */
                    void SetSpecItems(const std::vector<SpecItem>& _specItems);

                    /**
                     * 判断参数 SpecItems 是否已赋值
                     * @return SpecItems 是否已赋值
                     * 
                     */
                    bool SpecItemsHasBeenSet() const;

                    /**
                     * 获取是否支持跨可用区部署 1-支持，0-不支持
                     * @return SupportMultiAZ 是否支持跨可用区部署 1-支持，0-不支持
                     * 
                     */
                    int64_t GetSupportMultiAZ() const;

                    /**
                     * 设置是否支持跨可用区部署 1-支持，0-不支持
                     * @param _supportMultiAZ 是否支持跨可用区部署 1-支持，0-不支持
                     * 
                     */
                    void SetSupportMultiAZ(const int64_t& _supportMultiAZ);

                    /**
                     * 判断参数 SupportMultiAZ 是否已赋值
                     * @return SupportMultiAZ 是否已赋值
                     * 
                     */
                    bool SupportMultiAZHasBeenSet() const;

                private:

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区信息
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 售卖规格信息
                     */
                    std::vector<SpecItem> m_specItems;
                    bool m_specItemsHasBeenSet;

                    /**
                     * 是否支持跨可用区部署 1-支持，0-不支持
                     */
                    int64_t m_supportMultiAZ;
                    bool m_supportMultiAZHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SPECIFICATIONINFO_H_
