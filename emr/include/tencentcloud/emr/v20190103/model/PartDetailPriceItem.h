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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PARTDETAILPRICEITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PARTDETAILPRICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 用于创建集群价格清单-节点组成部分价格
                */
                class PartDetailPriceItem : public AbstractModel
                {
                public:
                    PartDetailPriceItem();
                    ~PartDetailPriceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型包括：节点->node、系统盘->rootDisk、云数据盘->dataDisk、metaDB
                     * @return InstanceType 类型包括：节点->node、系统盘->rootDisk、云数据盘->dataDisk、metaDB
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置类型包括：节点->node、系统盘->rootDisk、云数据盘->dataDisk、metaDB
                     * @param _instanceType 类型包括：节点->node、系统盘->rootDisk、云数据盘->dataDisk、metaDB
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取单价（原价）
                     * @return Price 单价（原价）
                     * 
                     */
                    double GetPrice() const;

                    /**
                     * 设置单价（原价）
                     * @param _price 单价（原价）
                     * 
                     */
                    void SetPrice(const double& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取单价（折扣价）
                     * @return RealCost 单价（折扣价）
                     * 
                     */
                    double GetRealCost() const;

                    /**
                     * 设置单价（折扣价）
                     * @param _realCost 单价（折扣价）
                     * 
                     */
                    void SetRealCost(const double& _realCost);

                    /**
                     * 判断参数 RealCost 是否已赋值
                     * @return RealCost 是否已赋值
                     * 
                     */
                    bool RealCostHasBeenSet() const;

                    /**
                     * 获取总价（折扣价）
                     * @return RealTotalCost 总价（折扣价）
                     * 
                     */
                    double GetRealTotalCost() const;

                    /**
                     * 设置总价（折扣价）
                     * @param _realTotalCost 总价（折扣价）
                     * 
                     */
                    void SetRealTotalCost(const double& _realTotalCost);

                    /**
                     * 判断参数 RealTotalCost 是否已赋值
                     * @return RealTotalCost 是否已赋值
                     * 
                     */
                    bool RealTotalCostHasBeenSet() const;

                    /**
                     * 获取折扣
                     * @return Policy 折扣
                     * 
                     */
                    double GetPolicy() const;

                    /**
                     * 设置折扣
                     * @param _policy 折扣
                     * 
                     */
                    void SetPolicy(const double& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return GoodsNum 数量
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置数量
                     * @param _goodsNum 数量
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                private:

                    /**
                     * 类型包括：节点->node、系统盘->rootDisk、云数据盘->dataDisk、metaDB
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 单价（原价）
                     */
                    double m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 单价（折扣价）
                     */
                    double m_realCost;
                    bool m_realCostHasBeenSet;

                    /**
                     * 总价（折扣价）
                     */
                    double m_realTotalCost;
                    bool m_realTotalCostHasBeenSet;

                    /**
                     * 折扣
                     */
                    double m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PARTDETAILPRICEITEM_H_
