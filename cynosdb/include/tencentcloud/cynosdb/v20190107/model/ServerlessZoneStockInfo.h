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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSZONESTOCKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSZONESTOCKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SlaveZoneStockInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * serverless类型的可用区库存信息
                */
                class ServerlessZoneStockInfo : public AbstractModel
                {
                public:
                    ServerlessZoneStockInfo();
                    ~ServerlessZoneStockInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * 获取存储量
                     * @return StockCount 存储量
                     * 
                     */
                    int64_t GetStockCount() const;

                    /**
                     * 设置存储量
                     * @param _stockCount 存储量
                     * 
                     */
                    void SetStockCount(const int64_t& _stockCount);

                    /**
                     * 判断参数 StockCount 是否已赋值
                     * @return StockCount 是否已赋值
                     * 
                     */
                    bool StockCountHasBeenSet() const;

                    /**
                     * 获取是否包含库存
                     * @return HasStock 是否包含库存
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置是否包含库存
                     * @param _hasStock 是否包含库存
                     * 
                     */
                    void SetHasStock(const bool& _hasStock);

                    /**
                     * 判断参数 HasStock 是否已赋值
                     * @return HasStock 是否已赋值
                     * 
                     */
                    bool HasStockHasBeenSet() const;

                    /**
                     * 获取从可用区库存信息
                     * @return SlaveZoneStockInfos 从可用区库存信息
                     * 
                     */
                    std::vector<SlaveZoneStockInfo> GetSlaveZoneStockInfos() const;

                    /**
                     * 设置从可用区库存信息
                     * @param _slaveZoneStockInfos 从可用区库存信息
                     * 
                     */
                    void SetSlaveZoneStockInfos(const std::vector<SlaveZoneStockInfo>& _slaveZoneStockInfos);

                    /**
                     * 判断参数 SlaveZoneStockInfos 是否已赋值
                     * @return SlaveZoneStockInfos 是否已赋值
                     * 
                     */
                    bool SlaveZoneStockInfosHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 存储量
                     */
                    int64_t m_stockCount;
                    bool m_stockCountHasBeenSet;

                    /**
                     * 是否包含库存
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                    /**
                     * 从可用区库存信息
                     */
                    std::vector<SlaveZoneStockInfo> m_slaveZoneStockInfos;
                    bool m_slaveZoneStockInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SERVERLESSZONESTOCKINFO_H_
