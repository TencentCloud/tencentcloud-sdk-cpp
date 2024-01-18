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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVIPVPORTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVIPVPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyVipVport请求参数结构体
                */
                class ModifyVipVportRequest : public AbstractModel
                {
                public:
                    ModifyVipVportRequest();
                    ~ModifyVipVportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取实例组id
                     * @return InstanceGrpId 实例组id
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置实例组id
                     * @param _instanceGrpId 实例组id
                     * @deprecated
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取实例组id
                     * @return InstanceGroupId 实例组id
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置实例组id
                     * @param _instanceGroupId 实例组id
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取需要修改的目的ip
                     * @return Vip 需要修改的目的ip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置需要修改的目的ip
                     * @param _vip 需要修改的目的ip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取需要修改的目的端口
                     * @return Vport 需要修改的目的端口
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置需要修改的目的端口
                     * @param _vport 需要修改的目的端口
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
                     * @param _dbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取旧ip回收前的保留时间，单位小时，0表示立即回收
                     * @return OldIpReserveHours 旧ip回收前的保留时间，单位小时，0表示立即回收
                     * 
                     */
                    int64_t GetOldIpReserveHours() const;

                    /**
                     * 设置旧ip回收前的保留时间，单位小时，0表示立即回收
                     * @param _oldIpReserveHours 旧ip回收前的保留时间，单位小时，0表示立即回收
                     * 
                     */
                    void SetOldIpReserveHours(const int64_t& _oldIpReserveHours);

                    /**
                     * 判断参数 OldIpReserveHours 是否已赋值
                     * @return OldIpReserveHours 是否已赋值
                     * 
                     */
                    bool OldIpReserveHoursHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例组id
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * 实例组id
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 需要修改的目的ip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 需要修改的目的端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 旧ip回收前的保留时间，单位小时，0表示立即回收
                     */
                    int64_t m_oldIpReserveHours;
                    bool m_oldIpReserveHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYVIPVPORTREQUEST_H_
