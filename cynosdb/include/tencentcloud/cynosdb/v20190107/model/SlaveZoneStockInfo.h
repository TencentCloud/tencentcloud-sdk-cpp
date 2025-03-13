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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONESTOCKINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONESTOCKINFO_H_

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
                * 备可用区库存信息
                */
                class SlaveZoneStockInfo : public AbstractModel
                {
                public:
                    SlaveZoneStockInfo();
                    ~SlaveZoneStockInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备可用区
                     * @return SlaveZone 备可用区
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置备可用区
                     * @param _slaveZone 备可用区
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取备可用区的库存数量	
                     * @return StockCount 备可用区的库存数量	
                     * 
                     */
                    uint64_t GetStockCount() const;

                    /**
                     * 设置备可用区的库存数量	
                     * @param _stockCount 备可用区的库存数量	
                     * 
                     */
                    void SetStockCount(const uint64_t& _stockCount);

                    /**
                     * 判断参数 StockCount 是否已赋值
                     * @return StockCount 是否已赋值
                     * 
                     */
                    bool StockCountHasBeenSet() const;

                    /**
                     * 获取备可用区是否有库存	
                     * @return HasStock 备可用区是否有库存	
                     * 
                     */
                    bool GetHasStock() const;

                    /**
                     * 设置备可用区是否有库存	
                     * @param _hasStock 备可用区是否有库存	
                     * 
                     */
                    void SetHasStock(const bool& _hasStock);

                    /**
                     * 判断参数 HasStock 是否已赋值
                     * @return HasStock 是否已赋值
                     * 
                     */
                    bool HasStockHasBeenSet() const;

                private:

                    /**
                     * 备可用区
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * 备可用区的库存数量	
                     */
                    uint64_t m_stockCount;
                    bool m_stockCountHasBeenSet;

                    /**
                     * 备可用区是否有库存	
                     */
                    bool m_hasStock;
                    bool m_hasStockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SLAVEZONESTOCKINFO_H_
