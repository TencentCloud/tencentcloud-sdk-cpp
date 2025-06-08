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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDAGGREGATIONSLOWLOGSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDAGGREGATIONSLOWLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeIndexRecommendAggregationSlowLogs请求参数结构体
                */
                class DescribeIndexRecommendAggregationSlowLogsRequest : public AbstractModel
                {
                public:
                    DescribeIndexRecommendAggregationSlowLogsRequest();
                    ~DescribeIndexRecommendAggregationSlowLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务产品类型，支持值包括："mongodb" - 云数据库 。
                     * @return Product 服务产品类型，支持值包括："mongodb" - 云数据库 。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括："mongodb" - 云数据库 。
                     * @param _product 服务产品类型，支持值包括："mongodb" - 云数据库 。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库名称。
                     * @return Db 数据库名称。
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置数据库名称。
                     * @param _db 数据库名称。
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取表名。
                     * @return Collection 表名。
                     * 
                     */
                    std::string GetCollection() const;

                    /**
                     * 设置表名。
                     * @param _collection 表名。
                     * 
                     */
                    void SetCollection(const std::string& _collection);

                    /**
                     * 判断参数 Collection 是否已赋值
                     * @return Collection 是否已赋值
                     * 
                     */
                    bool CollectionHasBeenSet() const;

                    /**
                     * 获取签名。这个值是DescribelndexRecommendInfo接口返回
                     * @return Signs 签名。这个值是DescribelndexRecommendInfo接口返回
                     * 
                     */
                    std::vector<std::string> GetSigns() const;

                    /**
                     * 设置签名。这个值是DescribelndexRecommendInfo接口返回
                     * @param _signs 签名。这个值是DescribelndexRecommendInfo接口返回
                     * 
                     */
                    void SetSigns(const std::vector<std::string>& _signs);

                    /**
                     * 判断参数 Signs 是否已赋值
                     * @return Signs 是否已赋值
                     * 
                     */
                    bool SignsHasBeenSet() const;

                private:

                    /**
                     * 服务产品类型，支持值包括："mongodb" - 云数据库 。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库名称。
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * 表名。
                     */
                    std::string m_collection;
                    bool m_collectionHasBeenSet;

                    /**
                     * 签名。这个值是DescribelndexRecommendInfo接口返回
                     */
                    std::vector<std::string> m_signs;
                    bool m_signsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEINDEXRECOMMENDAGGREGATIONSLOWLOGSREQUEST_H_
