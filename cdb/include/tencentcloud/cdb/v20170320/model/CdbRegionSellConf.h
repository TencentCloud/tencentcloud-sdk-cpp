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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CDBREGIONSELLCONF_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CDBREGIONSELLCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/CdbZoneSellConf.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 地域售卖配置
                */
                class CdbRegionSellConf : public AbstractModel
                {
                public:
                    CdbRegionSellConf();
                    ~CdbRegionSellConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域中文名称
                     * @return RegionName 地域中文名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域中文名称
                     * @param _regionName 地域中文名称
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
                     * 获取所属大区
                     * @return Area 所属大区
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置所属大区
                     * @param _area 所属大区
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取是否为默认地域
                     * @return IsDefaultRegion 是否为默认地域
                     * 
                     */
                    int64_t GetIsDefaultRegion() const;

                    /**
                     * 设置是否为默认地域
                     * @param _isDefaultRegion 是否为默认地域
                     * 
                     */
                    void SetIsDefaultRegion(const int64_t& _isDefaultRegion);

                    /**
                     * 判断参数 IsDefaultRegion 是否已赋值
                     * @return IsDefaultRegion 是否已赋值
                     * 
                     */
                    bool IsDefaultRegionHasBeenSet() const;

                    /**
                     * 获取地域名称
                     * @return Region 地域名称
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域名称
                     * @param _region 地域名称
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
                     * 获取地域的可用区售卖配置
                     * @return RegionConfig 地域的可用区售卖配置
                     * 
                     */
                    std::vector<CdbZoneSellConf> GetRegionConfig() const;

                    /**
                     * 设置地域的可用区售卖配置
                     * @param _regionConfig 地域的可用区售卖配置
                     * 
                     */
                    void SetRegionConfig(const std::vector<CdbZoneSellConf>& _regionConfig);

                    /**
                     * 判断参数 RegionConfig 是否已赋值
                     * @return RegionConfig 是否已赋值
                     * 
                     */
                    bool RegionConfigHasBeenSet() const;

                private:

                    /**
                     * 地域中文名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 所属大区
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 是否为默认地域
                     */
                    int64_t m_isDefaultRegion;
                    bool m_isDefaultRegionHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域的可用区售卖配置
                     */
                    std::vector<CdbZoneSellConf> m_regionConfig;
                    bool m_regionConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBREGIONSELLCONF_H_
