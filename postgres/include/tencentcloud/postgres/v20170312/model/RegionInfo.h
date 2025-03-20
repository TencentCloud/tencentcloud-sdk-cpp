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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_REGIONINFO_H_

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
                * 描述地域的编码和状态等信息
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该地域对应的英文名称
                     * @return Region 该地域对应的英文名称
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置该地域对应的英文名称
                     * @param _region 该地域对应的英文名称
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
                     * 获取该地域对应的中文名称
                     * @return RegionName 该地域对应的中文名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置该地域对应的中文名称
                     * @param _regionName 该地域对应的中文名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取该地域对应的数字编号
                     * @return RegionId 该地域对应的数字编号
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置该地域对应的数字编号
                     * @param _regionId 该地域对应的数字编号
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     * @return RegionState 可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     * 
                     */
                    std::string GetRegionState() const;

                    /**
                     * 设置可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     * @param _regionState 可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     * 
                     */
                    void SetRegionState(const std::string& _regionState);

                    /**
                     * 判断参数 RegionState 是否已赋值
                     * @return RegionState 是否已赋值
                     * 
                     */
                    bool RegionStateHasBeenSet() const;

                    /**
                     * 获取该地域是否支持国际站售卖，0：不支持，1：支持
                     * @return SupportInternational 该地域是否支持国际站售卖，0：不支持，1：支持
                     * 
                     */
                    uint64_t GetSupportInternational() const;

                    /**
                     * 设置该地域是否支持国际站售卖，0：不支持，1：支持
                     * @param _supportInternational 该地域是否支持国际站售卖，0：不支持，1：支持
                     * 
                     */
                    void SetSupportInternational(const uint64_t& _supportInternational);

                    /**
                     * 判断参数 SupportInternational 是否已赋值
                     * @return SupportInternational 是否已赋值
                     * 
                     */
                    bool SupportInternationalHasBeenSet() const;

                private:

                    /**
                     * 该地域对应的英文名称
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 该地域对应的中文名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 该地域对应的数字编号
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可用状态，UNAVAILABLE表示不可用，AVAILABLE表示可用
                     */
                    std::string m_regionState;
                    bool m_regionStateHasBeenSet;

                    /**
                     * 该地域是否支持国际站售卖，0：不支持，1：支持
                     */
                    uint64_t m_supportInternational;
                    bool m_supportInternationalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_REGIONINFO_H_
