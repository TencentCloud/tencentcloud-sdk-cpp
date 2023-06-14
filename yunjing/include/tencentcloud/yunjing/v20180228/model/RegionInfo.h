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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_REGIONINFO_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_REGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 地域信息
                */
                class RegionInfo : public AbstractModel
                {
                public:
                    RegionInfo();
                    ~RegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域标志，如 ap-guangzhou，ap-shanghai，ap-beijing
                     * @return Region 地域标志，如 ap-guangzhou，ap-shanghai，ap-beijing
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域标志，如 ap-guangzhou，ap-shanghai，ap-beijing
                     * @param _region 地域标志，如 ap-guangzhou，ap-shanghai，ap-beijing
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
                     * 获取地域中文名，如华南地区（广州），华东地区（上海金融），华北地区（北京）
                     * @return RegionName 地域中文名，如华南地区（广州），华东地区（上海金融），华北地区（北京）
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域中文名，如华南地区（广州），华东地区（上海金融），华北地区（北京）
                     * @param _regionName 地域中文名，如华南地区（广州），华东地区（上海金融），华北地区（北京）
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
                     * 获取地域ID
                     * @return RegionId 地域ID
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域ID
                     * @param _regionId 地域ID
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
                     * 获取地域代码，如 gz，sh，bj
                     * @return RegionCode 地域代码，如 gz，sh，bj
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域代码，如 gz，sh，bj
                     * @param _regionCode 地域代码，如 gz，sh，bj
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                private:

                    /**
                     * 地域标志，如 ap-guangzhou，ap-shanghai，ap-beijing
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域中文名，如华南地区（广州），华东地区（上海金融），华北地区（北京）
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域代码，如 gz，sh，bj
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_REGIONINFO_H_
