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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEREGION_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEREGION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SaleZone.h>
#include <tencentcloud/cynosdb/v20190107/model/Module.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 售卖地域信息
                */
                class SaleRegion : public AbstractModel
                {
                public:
                    SaleRegion();
                    ~SaleRegion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域英文名
                     * @return Region 地域英文名
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文名
                     * @param _region 地域英文名
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
                     * 获取地域数字ID
                     * @return RegionId 地域数字ID
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域数字ID
                     * @param _regionId 地域数字ID
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域中文名
                     * @return RegionZh 地域中文名
                     * 
                     */
                    std::string GetRegionZh() const;

                    /**
                     * 设置地域中文名
                     * @param _regionZh 地域中文名
                     * 
                     */
                    void SetRegionZh(const std::string& _regionZh);

                    /**
                     * 判断参数 RegionZh 是否已赋值
                     * @return RegionZh 是否已赋值
                     * 
                     */
                    bool RegionZhHasBeenSet() const;

                    /**
                     * 获取可售卖可用区列表
                     * @return ZoneSet 可售卖可用区列表
                     * 
                     */
                    std::vector<SaleZone> GetZoneSet() const;

                    /**
                     * 设置可售卖可用区列表
                     * @param _zoneSet 可售卖可用区列表
                     * 
                     */
                    void SetZoneSet(const std::vector<SaleZone>& _zoneSet);

                    /**
                     * 判断参数 ZoneSet 是否已赋值
                     * @return ZoneSet 是否已赋值
                     * 
                     */
                    bool ZoneSetHasBeenSet() const;

                    /**
                     * 获取引擎类型
                     * @return DbType 引擎类型
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置引擎类型
                     * @param _dbType 引擎类型
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取地域模块支持情况
                     * @return Modules 地域模块支持情况
                     * 
                     */
                    std::vector<Module> GetModules() const;

                    /**
                     * 设置地域模块支持情况
                     * @param _modules 地域模块支持情况
                     * 
                     */
                    void SetModules(const std::vector<Module>& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     * 
                     */
                    bool ModulesHasBeenSet() const;

                private:

                    /**
                     * 地域英文名
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地域数字ID
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域中文名
                     */
                    std::string m_regionZh;
                    bool m_regionZhHasBeenSet;

                    /**
                     * 可售卖可用区列表
                     */
                    std::vector<SaleZone> m_zoneSet;
                    bool m_zoneSetHasBeenSet;

                    /**
                     * 引擎类型
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 地域模块支持情况
                     */
                    std::vector<Module> m_modules;
                    bool m_modulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEREGION_H_
