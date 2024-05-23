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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYDIAGDBINSTANCECONFREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYDIAGDBINSTANCECONFREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/InstanceConfs.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * ModifyDiagDBInstanceConf请求参数结构体
                */
                class ModifyDiagDBInstanceConfRequest : public AbstractModel
                {
                public:
                    ModifyDiagDBInstanceConfRequest();
                    ~ModifyDiagDBInstanceConfRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例配置，包括巡检、概览开关等。
                     * @return InstanceConfs 实例配置，包括巡检、概览开关等。
                     * 
                     */
                    InstanceConfs GetInstanceConfs() const;

                    /**
                     * 设置实例配置，包括巡检、概览开关等。
                     * @param _instanceConfs 实例配置，包括巡检、概览开关等。
                     * 
                     */
                    void SetInstanceConfs(const InstanceConfs& _instanceConfs);

                    /**
                     * 判断参数 InstanceConfs 是否已赋值
                     * @return InstanceConfs 是否已赋值
                     * 
                     */
                    bool InstanceConfsHasBeenSet() const;

                    /**
                     * 获取生效实例地域，取值为"All"，代表全地域。
                     * @return Regions 生效实例地域，取值为"All"，代表全地域。
                     * 
                     */
                    std::string GetRegions() const;

                    /**
                     * 设置生效实例地域，取值为"All"，代表全地域。
                     * @param _regions 生效实例地域，取值为"All"，代表全地域。
                     * 
                     */
                    void SetRegions(const std::string& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis。
                     * @return Product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis。
                     * @param _product 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis。
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
                     * 获取指定更改巡检状态的实例ID。
                     * @return InstanceIds 指定更改巡检状态的实例ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置指定更改巡检状态的实例ID。
                     * @param _instanceIds 指定更改巡检状态的实例ID。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 实例配置，包括巡检、概览开关等。
                     */
                    InstanceConfs m_instanceConfs;
                    bool m_instanceConfsHasBeenSet;

                    /**
                     * 生效实例地域，取值为"All"，代表全地域。
                     */
                    std::string m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * 服务产品类型，支持值包括： "mysql" - 云数据库 MySQL， "cynosdb" - 云数据库 CynosDB  for MySQL，"redis" - 云数据库 Redis。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 指定更改巡检状态的实例ID。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MODIFYDIAGDBINSTANCECONFREQUEST_H_
