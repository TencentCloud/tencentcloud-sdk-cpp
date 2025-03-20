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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/SpecItemInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述某个地域下某个可用区的可售卖规格详细信息。
                */
                class SpecInfo : public AbstractModel
                {
                public:
                    SpecInfo();
                    ~SpecInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域英文编码，对应RegionSet的Region字段
                     * @return Region 地域英文编码，对应RegionSet的Region字段
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文编码，对应RegionSet的Region字段
                     * @param _region 地域英文编码，对应RegionSet的Region字段
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
                     * 获取区域英文编码，对应ZoneSet的Zone字段
                     * @return Zone 区域英文编码，对应ZoneSet的Zone字段
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置区域英文编码，对应ZoneSet的Zone字段
                     * @param _zone 区域英文编码，对应ZoneSet的Zone字段
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
                     * 获取规格详细信息列表
                     * @return SpecItemInfoList 规格详细信息列表
                     * 
                     */
                    std::vector<SpecItemInfo> GetSpecItemInfoList() const;

                    /**
                     * 设置规格详细信息列表
                     * @param _specItemInfoList 规格详细信息列表
                     * 
                     */
                    void SetSpecItemInfoList(const std::vector<SpecItemInfo>& _specItemInfoList);

                    /**
                     * 判断参数 SpecItemInfoList 是否已赋值
                     * @return SpecItemInfoList 是否已赋值
                     * 
                     */
                    bool SpecItemInfoListHasBeenSet() const;

                    /**
                     * 获取支持KMS的地域
                     * @return SupportKMSRegions 支持KMS的地域
                     * 
                     */
                    std::vector<std::string> GetSupportKMSRegions() const;

                    /**
                     * 设置支持KMS的地域
                     * @param _supportKMSRegions 支持KMS的地域
                     * 
                     */
                    void SetSupportKMSRegions(const std::vector<std::string>& _supportKMSRegions);

                    /**
                     * 判断参数 SupportKMSRegions 是否已赋值
                     * @return SupportKMSRegions 是否已赋值
                     * 
                     */
                    bool SupportKMSRegionsHasBeenSet() const;

                private:

                    /**
                     * 地域英文编码，对应RegionSet的Region字段
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 区域英文编码，对应ZoneSet的Zone字段
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 规格详细信息列表
                     */
                    std::vector<SpecItemInfo> m_specItemInfoList;
                    bool m_specItemInfoListHasBeenSet;

                    /**
                     * 支持KMS的地域
                     */
                    std::vector<std::string> m_supportKMSRegions;
                    bool m_supportKMSRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SPECINFO_H_
