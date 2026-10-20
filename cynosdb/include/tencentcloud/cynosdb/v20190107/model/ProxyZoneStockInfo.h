/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONESTOCKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONESTOCKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 数据库代理规格
                */
                class ProxyZoneStockInfo : public AbstractModel
                {
                public:
                    ProxyZoneStockInfo();
                    ~ProxyZoneStockInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>CPU库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     * @return CpuStock <p>CPU库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     * 
                     */
                    int64_t GetCpuStock() const;

                    /**
                     * 设置<p>CPU库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     * @param _cpuStock <p>CPU库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     * 
                     */
                    void SetCpuStock(const int64_t& _cpuStock);

                    /**
                     * 判断参数 CpuStock 是否已赋值
                     * @return CpuStock 是否已赋值
                     * 
                     */
                    bool CpuStockHasBeenSet() const;

                    /**
                     * 获取<p>内存库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     * @return MemStock <p>内存库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     * 
                     */
                    int64_t GetMemStock() const;

                    /**
                     * 设置<p>内存库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     * @param _memStock <p>内存库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     * 
                     */
                    void SetMemStock(const int64_t& _memStock);

                    /**
                     * 判断参数 MemStock 是否已赋值
                     * @return MemStock 是否已赋值
                     * 
                     */
                    bool MemStockHasBeenSet() const;

                private:

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>CPU库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     */
                    int64_t m_cpuStock;
                    bool m_cpuStockHasBeenSet;

                    /**
                     * <p>内存库存</p><p>该字段不作为发货是否有资源的判断标准，资源请参考CheckProxyStockInfos</p>
                     */
                    int64_t m_memStock;
                    bool m_memStockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PROXYZONESTOCKINFO_H_
