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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETEAUDITLOGFILEREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETEAUDITLOGFILEREQUEST_H_

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
                * DeleteAuditLogFile请求参数结构体
                */
                class DeleteAuditLogFileRequest : public AbstractModel
                {
                public:
                    DeleteAuditLogFileRequest();
                    ~DeleteAuditLogFileRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB， "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL， "postgres" - 云数据库 PostgreSQL。
                     * @return Product 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB， "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL， "postgres" - 云数据库 PostgreSQL。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB， "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL， "postgres" - 云数据库 PostgreSQL。
                     * @param _product 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB， "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL， "postgres" - 云数据库 PostgreSQL。
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
                     * 获取NodeRequestType主要标识数据库产品类型，与Product保持一致。该字段规则如下： 当product为"dcdb"则输入"dcdb"， 当product为"mariadb"则输入"mariadb"， 当product为"mysql"则输入"mysql"， 当product为"cynosdb"则输入"mysql"， 当product为"postgres"则输入"postgres"。
                     * @return NodeRequestType NodeRequestType主要标识数据库产品类型，与Product保持一致。该字段规则如下： 当product为"dcdb"则输入"dcdb"， 当product为"mariadb"则输入"mariadb"， 当product为"mysql"则输入"mysql"， 当product为"cynosdb"则输入"mysql"， 当product为"postgres"则输入"postgres"。
                     * 
                     */
                    std::string GetNodeRequestType() const;

                    /**
                     * 设置NodeRequestType主要标识数据库产品类型，与Product保持一致。该字段规则如下： 当product为"dcdb"则输入"dcdb"， 当product为"mariadb"则输入"mariadb"， 当product为"mysql"则输入"mysql"， 当product为"cynosdb"则输入"mysql"， 当product为"postgres"则输入"postgres"。
                     * @param _nodeRequestType NodeRequestType主要标识数据库产品类型，与Product保持一致。该字段规则如下： 当product为"dcdb"则输入"dcdb"， 当product为"mariadb"则输入"mariadb"， 当product为"mysql"则输入"mysql"， 当product为"cynosdb"则输入"mysql"， 当product为"postgres"则输入"postgres"。
                     * 
                     */
                    void SetNodeRequestType(const std::string& _nodeRequestType);

                    /**
                     * 判断参数 NodeRequestType 是否已赋值
                     * @return NodeRequestType 是否已赋值
                     * 
                     */
                    bool NodeRequestTypeHasBeenSet() const;

                    /**
                     * 获取实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
                     * @return InstanceId 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
                     * @param _instanceId 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
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
                     * 获取审计日志文件生成异步任务ID。可通过[查询审计日志文件](https://cloud.tencent.com/document/product/1130/90371)获得。
                     * @return AsyncRequestId 审计日志文件生成异步任务ID。可通过[查询审计日志文件](https://cloud.tencent.com/document/product/1130/90371)获得。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置审计日志文件生成异步任务ID。可通过[查询审计日志文件](https://cloud.tencent.com/document/product/1130/90371)获得。
                     * @param _asyncRequestId 审计日志文件生成异步任务ID。可通过[查询审计日志文件](https://cloud.tencent.com/document/product/1130/90371)获得。
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB， "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB for MySQL， "postgres" - 云数据库 PostgreSQL。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * NodeRequestType主要标识数据库产品类型，与Product保持一致。该字段规则如下： 当product为"dcdb"则输入"dcdb"， 当product为"mariadb"则输入"mariadb"， 当product为"mysql"则输入"mysql"， 当product为"cynosdb"则输入"mysql"， 当product为"postgres"则输入"postgres"。
                     */
                    std::string m_nodeRequestType;
                    bool m_nodeRequestTypeHasBeenSet;

                    /**
                     * 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计日志文件生成异步任务ID。可通过[查询审计日志文件](https://cloud.tencent.com/document/product/1130/90371)获得。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETEAUDITLOGFILEREQUEST_H_
