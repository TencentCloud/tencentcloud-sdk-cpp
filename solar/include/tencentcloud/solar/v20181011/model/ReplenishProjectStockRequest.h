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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_REPLENISHPROJECTSTOCKREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_REPLENISHPROJECTSTOCKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ReplenishProjectStock请求参数结构体
                */
                class ReplenishProjectStockRequest : public AbstractModel
                {
                public:
                    ReplenishProjectStockRequest();
                    ~ReplenishProjectStockRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return SubProjectId 项目id
                     * 
                     */
                    std::string GetSubProjectId() const;

                    /**
                     * 设置项目id
                     * @param _subProjectId 项目id
                     * 
                     */
                    void SetSubProjectId(const std::string& _subProjectId);

                    /**
                     * 判断参数 SubProjectId 是否已赋值
                     * @return SubProjectId 是否已赋值
                     * 
                     */
                    bool SubProjectIdHasBeenSet() const;

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
                     * 获取奖品数量
                     * @return PrizeNum 奖品数量
                     * 
                     */
                    uint64_t GetPrizeNum() const;

                    /**
                     * 设置奖品数量
                     * @param _prizeNum 奖品数量
                     * 
                     */
                    void SetPrizeNum(const uint64_t& _prizeNum);

                    /**
                     * 判断参数 PrizeNum 是否已赋值
                     * @return PrizeNum 是否已赋值
                     * 
                     */
                    bool PrizeNumHasBeenSet() const;

                    /**
                     * 获取奖池索引
                     * @return PoolIndex 奖池索引
                     * 
                     */
                    uint64_t GetPoolIndex() const;

                    /**
                     * 设置奖池索引
                     * @param _poolIndex 奖池索引
                     * 
                     */
                    void SetPoolIndex(const uint64_t& _poolIndex);

                    /**
                     * 判断参数 PoolIndex 是否已赋值
                     * @return PoolIndex 是否已赋值
                     * 
                     */
                    bool PoolIndexHasBeenSet() const;

                    /**
                     * 获取奖池名称
                     * @return PoolName 奖池名称
                     * 
                     */
                    std::string GetPoolName() const;

                    /**
                     * 设置奖池名称
                     * @param _poolName 奖池名称
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
                     * 项目id
                     */
                    std::string m_subProjectId;
                    bool m_subProjectIdHasBeenSet;

                    /**
                     * 奖品id
                     */
                    std::string m_prizeId;
                    bool m_prizeIdHasBeenSet;

                    /**
                     * 奖品数量
                     */
                    uint64_t m_prizeNum;
                    bool m_prizeNumHasBeenSet;

                    /**
                     * 奖池索引
                     */
                    uint64_t m_poolIndex;
                    bool m_poolIndexHasBeenSet;

                    /**
                     * 奖池名称
                     */
                    std::string m_poolName;
                    bool m_poolNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_REPLENISHPROJECTSTOCKREQUEST_H_
