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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBinlogBackupOverview请求参数结构体
                */
                class DescribeBinlogBackupOverviewRequest : public AbstractModel
                {
                public:
                    DescribeBinlogBackupOverviewRequest();
                    ~DescribeBinlogBackupOverviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询日志备份概览的云数据库产品类型。可取值为：mysql 指双节点/三节点的高可用实例，mysql-basic 指单节点云盘版实例，mysql-cluster 指云盘版（原集群版）实例。
                     * @return Product 需要查询日志备份概览的云数据库产品类型。可取值为：mysql 指双节点/三节点的高可用实例，mysql-basic 指单节点云盘版实例，mysql-cluster 指云盘版（原集群版）实例。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置需要查询日志备份概览的云数据库产品类型。可取值为：mysql 指双节点/三节点的高可用实例，mysql-basic 指单节点云盘版实例，mysql-cluster 指云盘版（原集群版）实例。
                     * @param _product 需要查询日志备份概览的云数据库产品类型。可取值为：mysql 指双节点/三节点的高可用实例，mysql-basic 指单节点云盘版实例，mysql-cluster 指云盘版（原集群版）实例。
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
                     * 需要查询日志备份概览的云数据库产品类型。可取值为：mysql 指双节点/三节点的高可用实例，mysql-basic 指单节点云盘版实例，mysql-cluster 指云盘版（原集群版）实例。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWREQUEST_H_
