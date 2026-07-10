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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEIGNOREDIAGRECORDREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEIGNOREDIAGRECORDREQUEST_H_

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
                * CreateIgnoreDiagRecord请求参数结构体
                */
                class CreateIgnoreDiagRecordRequest : public AbstractModel
                {
                public:
                    CreateIgnoreDiagRecordRequest();
                    ~CreateIgnoreDiagRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>服务产品类型，取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）、redis（云数据库 Redis）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）。</p>
                     * @return Product <p>服务产品类型，取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）、redis（云数据库 Redis）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）。</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>服务产品类型，取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）、redis（云数据库 Redis）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）。</p>
                     * @param _product <p>服务产品类型，取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）、redis（云数据库 Redis）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）。</p>
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
                     * 获取<p>诊断项名称，用于指定需要忽略或取消忽略的诊断事件类型。</p>
                     * @return DiagItem <p>诊断项名称，用于指定需要忽略或取消忽略的诊断事件类型。</p>
                     * 
                     */
                    std::string GetDiagItem() const;

                    /**
                     * 设置<p>诊断项名称，用于指定需要忽略或取消忽略的诊断事件类型。</p>
                     * @param _diagItem <p>诊断项名称，用于指定需要忽略或取消忽略的诊断事件类型。</p>
                     * 
                     */
                    void SetDiagItem(const std::string& _diagItem);

                    /**
                     * 判断参数 DiagItem 是否已赋值
                     * @return DiagItem 是否已赋值
                     * 
                     */
                    bool DiagItemHasBeenSet() const;

                    /**
                     * 获取<p>忽略状态，取值：1（取消忽略），2（忽略）。</p>
                     * @return Status <p>忽略状态，取值：1（取消忽略），2（忽略）。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>忽略状态，取值：1（取消忽略），2（忽略）。</p>
                     * @param _status <p>忽略状态，取值：1（取消忽略），2（忽略）。</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>服务产品类型，取值：mysql（云数据库 MySQL）、cynosdb（TDSQL-C MySQL 版）、dcdb（TDSQL MySQL 版）、mariadb（TDSQL MariaDB 版）、redis（云数据库 Redis）、mongodb（云数据库 MongoDB）、postgres（云数据库 PostgreSQL）。</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>诊断项名称，用于指定需要忽略或取消忽略的诊断事件类型。</p>
                     */
                    std::string m_diagItem;
                    bool m_diagItemHasBeenSet;

                    /**
                     * <p>忽略状态，取值：1（取消忽略），2（忽略）。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEIGNOREDIAGRECORDREQUEST_H_
