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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETESQLFILTERSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETESQLFILTERSREQUEST_H_

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
                * DeleteSqlFilters请求参数结构体
                */
                class DeleteSqlFiltersRequest : public AbstractModel
                {
                public:
                    DeleteSqlFiltersRequest();
                    ~DeleteSqlFiltersRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取限流任务ID列表。
                     * @return FilterIds 限流任务ID列表。
                     * 
                     */
                    std::vector<int64_t> GetFilterIds() const;

                    /**
                     * 设置限流任务ID列表。
                     * @param _filterIds 限流任务ID列表。
                     * 
                     */
                    void SetFilterIds(const std::vector<int64_t>& _filterIds);

                    /**
                     * 判断参数 FilterIds 是否已赋值
                     * @return FilterIds 是否已赋值
                     * 
                     */
                    bool FilterIdsHasBeenSet() const;

                    /**
                     * 获取通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     * @return SessionToken 通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     * 
                     */
                    std::string GetSessionToken() const;

                    /**
                     * 设置通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     * @param _sessionToken 通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     * 
                     */
                    void SetSessionToken(const std::string& _sessionToken);

                    /**
                     * 判断参数 SessionToken 是否已赋值
                     * @return SessionToken 是否已赋值
                     * 
                     */
                    bool SessionTokenHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 限流任务ID列表。
                     */
                    std::vector<int64_t> m_filterIds;
                    bool m_filterIdsHasBeenSet;

                    /**
                     * 通过VerifyUserAccount获取有效期为5分钟的会话token，使用后会自动延长token有效期至五分钟后。
                     */
                    std::string m_sessionToken;
                    bool m_sessionTokenHasBeenSet;

                    /**
                     * 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETESQLFILTERSREQUEST_H_
