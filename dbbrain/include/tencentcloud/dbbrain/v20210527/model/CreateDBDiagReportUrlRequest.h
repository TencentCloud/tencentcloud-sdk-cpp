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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLREQUEST_H_

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
                * CreateDBDiagReportUrl请求参数结构体
                */
                class CreateDBDiagReportUrlRequest : public AbstractModel
                {
                public:
                    CreateDBDiagReportUrlRequest();
                    ~CreateDBDiagReportUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
示例值：cdb-dctw4edd
                     * @return InstanceId 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
示例值：cdb-dctw4edd
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
示例值：cdb-dctw4edd
                     * @param _instanceId 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
示例值：cdb-dctw4edd
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
                     * 获取健康报告相应的任务ID，可通过[DescribeDBDiagReportTasks](https://cloud.tencent.com/document/product/1130/54873)查询。
                     * @return AsyncRequestId 健康报告相应的任务ID，可通过[DescribeDBDiagReportTasks](https://cloud.tencent.com/document/product/1130/54873)查询。
                     * 
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置健康报告相应的任务ID，可通过[DescribeDBDiagReportTasks](https://cloud.tencent.com/document/product/1130/54873)查询。
                     * @param _asyncRequestId 健康报告相应的任务ID，可通过[DescribeDBDiagReportTasks](https://cloud.tencent.com/document/product/1130/54873)查询。
                     * 
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，"mariadb" - 云数据库 MariaDB，"dcdb" - 云数据库 TDSQL MySQL，默认为"mysql"。
                     * @return Product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，"mariadb" - 云数据库 MariaDB，"dcdb" - 云数据库 TDSQL MySQL，默认为"mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，"mariadb" - 云数据库 MariaDB，"dcdb" - 云数据库 TDSQL MySQL，默认为"mysql"。
                     * @param _product 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，"mariadb" - 云数据库 MariaDB，"dcdb" - 云数据库 TDSQL MySQL，默认为"mysql"。
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
                     * 实例 ID。可通过 [DescribeDiagDBInstances](https://cloud.tencent.com/document/api/1130/57798) 接口获取。
示例值：cdb-dctw4edd
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 健康报告相应的任务ID，可通过[DescribeDBDiagReportTasks](https://cloud.tencent.com/document/product/1130/54873)查询。
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * 服务产品类型，支持值："mysql" - 云数据库 MySQL；"cynosdb" - 云数据库 TDSQL-C for MySQL，"redis" - 云数据库 Redis，"mongodb" - 云数据库 MongoDB，"mariadb" - 云数据库 MariaDB，"dcdb" - 云数据库 TDSQL MySQL，默认为"mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLREQUEST_H_
