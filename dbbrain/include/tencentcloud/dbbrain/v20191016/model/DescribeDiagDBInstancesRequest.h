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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDIAGDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDIAGDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeDiagDBInstances请求参数结构体
                */
                class DescribeDiagDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeDiagDBInstancesRequest();
                    ~DescribeDiagDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否是DBbrain支持的实例，固定传 true。
                     * @return IsSupported 是否是DBbrain支持的实例，固定传 true。
                     * 
                     */
                    bool GetIsSupported() const;

                    /**
                     * 设置是否是DBbrain支持的实例，固定传 true。
                     * @param _isSupported 是否是DBbrain支持的实例，固定传 true。
                     * 
                     */
                    void SetIsSupported(const bool& _isSupported);

                    /**
                     * 判断参数 IsSupported 是否已赋值
                     * @return IsSupported 是否已赋值
                     * 
                     */
                    bool IsSupportedHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
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
                     * 获取分页参数，偏移量。
                     * @return Offset 分页参数，偏移量。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，偏移量。
                     * @param _offset 分页参数，偏移量。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页参数，分页值。
                     * @return Limit 分页参数，分页值。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，分页值。
                     * @param _limit 分页参数，分页值。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取根据实例名称条件查询。
                     * @return InstanceNames 根据实例名称条件查询。
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置根据实例名称条件查询。
                     * @param _instanceNames 根据实例名称条件查询。
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取根据实例ID条件查询。
                     * @return InstanceIds 根据实例ID条件查询。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置根据实例ID条件查询。
                     * @param _instanceIds 根据实例ID条件查询。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取根据地域条件查询。
                     * @return Regions 根据地域条件查询。
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置根据地域条件查询。
                     * @param _regions 根据地域条件查询。
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * 是否是DBbrain支持的实例，固定传 true。
                     */
                    bool m_isSupported;
                    bool m_isSupportedHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 分页参数，偏移量。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数，分页值。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 根据实例名称条件查询。
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 根据实例ID条件查询。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 根据地域条件查询。
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDIAGDBINSTANCESREQUEST_H_
