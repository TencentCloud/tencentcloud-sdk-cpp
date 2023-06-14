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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_PROJECTSTOCK_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_PROJECTSTOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * 项目奖品库存
                */
                class ProjectStock : public AbstractModel
                {
                public:
                    ProjectStock();
                    ~ProjectStock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取奖品id
                     * @return PrizeId 奖品id
                     * 
                     */
                    std::string GetPrizeId() const;

                    /**
                     * 设置奖品id
                     * @param _prizeId 奖品id
                     * 
                     */
                    void SetPrizeId(const std::string& _prizeId);

                    /**
                     * 判断参数 PrizeId 是否已赋值
                     * @return PrizeId 是否已赋值
                     * 
                     */
                    bool PrizeIdHasBeenSet() const;

                    /**
                     * 获取奖品批次
                     * @return PrizeBat 奖品批次
                     * 
                     */
                    uint64_t GetPrizeBat() const;

                    /**
                     * 设置奖品批次
                     * @param _prizeBat 奖品批次
                     * 
                     */
                    void SetPrizeBat(const uint64_t& _prizeBat);

                    /**
                     * 判断参数 PrizeBat 是否已赋值
                     * @return PrizeBat 是否已赋值
                     * 
                     */
                    bool PrizeBatHasBeenSet() const;

                    /**
                     * 获取奖品名称
                     * @return PrizeName 奖品名称
                     * 
                     */
                    std::string GetPrizeName() const;

                    /**
                     * 设置奖品名称
                     * @param _prizeName 奖品名称
                     * 
                     */
                    void SetPrizeName(const std::string& _prizeName);

                    /**
                     * 判断参数 PrizeName 是否已赋值
                     * @return PrizeName 是否已赋值
                     * 
                     */
                    bool PrizeNameHasBeenSet() const;

                    /**
                     * 获取已分配奖品数量
                     * @return UsedStock 已分配奖品数量
                     * 
                     */
                    uint64_t GetUsedStock() const;

                    /**
                     * 设置已分配奖品数量
                     * @param _usedStock 已分配奖品数量
                     * 
                     */
                    void SetUsedStock(const uint64_t& _usedStock);

                    /**
                     * 判断参数 UsedStock 是否已赋值
                     * @return UsedStock 是否已赋值
                     * 
                     */
                    bool UsedStockHasBeenSet() const;

                    /**
                     * 获取该奖品剩余库存数量
                     * @return RemainStock 该奖品剩余库存数量
                     * 
                     */
                    uint64_t GetRemainStock() const;

                    /**
                     * 设置该奖品剩余库存数量
                     * @param _remainStock 该奖品剩余库存数量
                     * 
                     */
                    void SetRemainStock(const uint64_t& _remainStock);

                    /**
                     * 判断参数 RemainStock 是否已赋值
                     * @return RemainStock 是否已赋值
                     * 
                     */
                    bool RemainStockHasBeenSet() const;

                    /**
                     * 获取奖品所在奖池index
                     * @return PoolIdx 奖品所在奖池index
                     * 
                     */
                    uint64_t GetPoolIdx() const;

                    /**
                     * 设置奖品所在奖池index
                     * @param _poolIdx 奖品所在奖池index
                     * 
                     */
                    void SetPoolIdx(const uint64_t& _poolIdx);

                    /**
                     * 判断参数 PoolIdx 是否已赋值
                     * @return PoolIdx 是否已赋值
                     * 
                     */
                    bool PoolIdxHasBeenSet() const;

                    /**
                     * 获取奖品所在奖池名称
                     * @return PoolName 奖品所在奖池名称
                     * 
                     */
                    std::string GetPoolName() const;

                    /**
                     * 设置奖品所在奖池名称
                     * @param _poolName 奖品所在奖池名称
                     * 
                     */
                    void SetPoolName(const std::string& _poolName);

                    /**
                     * 判断参数 PoolName 是否已赋值
                     * @return PoolName 是否已赋值
                     * 
                     */
                    bool PoolNameHasBeenSet() const;

                private:

                    /**
                     * 奖品id
                     */
                    std::string m_prizeId;
                    bool m_prizeIdHasBeenSet;

                    /**
                     * 奖品批次
                     */
                    uint64_t m_prizeBat;
                    bool m_prizeBatHasBeenSet;

                    /**
                     * 奖品名称
                     */
                    std::string m_prizeName;
                    bool m_prizeNameHasBeenSet;

                    /**
                     * 已分配奖品数量
                     */
                    uint64_t m_usedStock;
                    bool m_usedStockHasBeenSet;

                    /**
                     * 该奖品剩余库存数量
                     */
                    uint64_t m_remainStock;
                    bool m_remainStockHasBeenSet;

                    /**
                     * 奖品所在奖池index
                     */
                    uint64_t m_poolIdx;
                    bool m_poolIdxHasBeenSet;

                    /**
                     * 奖品所在奖池名称
                     */
                    std::string m_poolName;
                    bool m_poolNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_PROJECTSTOCK_H_
