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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

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
                * ModifyDBInstanceSecurityGroups请求参数结构体
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络组id(cynosdbmysql-grp-前缀开头)或集群id（例如 cynosdbmysql-xxxxxxxx前缀）,当通过实例IP地址三元组（UniqVpcId、Vip、Vport）配置安全组时，该字段必须设置为集群ID（例如 cynosdbmysql-xxxxxxxx前缀）。
                     * @return InstanceId 网络组id(cynosdbmysql-grp-前缀开头)或集群id（例如 cynosdbmysql-xxxxxxxx前缀）,当通过实例IP地址三元组（UniqVpcId、Vip、Vport）配置安全组时，该字段必须设置为集群ID（例如 cynosdbmysql-xxxxxxxx前缀）。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置网络组id(cynosdbmysql-grp-前缀开头)或集群id（例如 cynosdbmysql-xxxxxxxx前缀）,当通过实例IP地址三元组（UniqVpcId、Vip、Vport）配置安全组时，该字段必须设置为集群ID（例如 cynosdbmysql-xxxxxxxx前缀）。
                     * @param _instanceId 网络组id(cynosdbmysql-grp-前缀开头)或集群id（例如 cynosdbmysql-xxxxxxxx前缀）,当通过实例IP地址三元组（UniqVpcId、Vip、Vport）配置安全组时，该字段必须设置为集群ID（例如 cynosdbmysql-xxxxxxxx前缀）。
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
                     * 获取要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * @return SecurityGroupIds 要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * @param _securityGroupIds 要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例所属VPC网络ID,（UniqVpcId、Vip 和 Vport 三个参数需同时指定，用于唯一标识网络实例）
                     * @return UniqVpcId 实例所属VPC网络ID,（UniqVpcId、Vip 和 Vport 三个参数需同时指定，用于唯一标识网络实例）
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置实例所属VPC网络ID,（UniqVpcId、Vip 和 Vport 三个参数需同时指定，用于唯一标识网络实例）
                     * @param _uniqVpcId 实例所属VPC网络ID,（UniqVpcId、Vip 和 Vport 三个参数需同时指定，用于唯一标识网络实例）
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取实例IP地址,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     * @return Vip 实例IP地址,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例IP地址,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     * @param _vip 实例IP地址,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
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
                     * 获取实例端口,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     * @return Vport 实例端口,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例端口,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     * @param _vport 实例端口,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * 网络组id(cynosdbmysql-grp-前缀开头)或集群id（例如 cynosdbmysql-xxxxxxxx前缀）,当通过实例IP地址三元组（UniqVpcId、Vip、Vport）配置安全组时，该字段必须设置为集群ID（例如 cynosdbmysql-xxxxxxxx前缀）。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要修改的安全组ID列表，一个或者多个安全组ID组成的数组。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例所属VPC网络ID,（UniqVpcId、Vip 和 Vport 三个参数需同时指定，用于唯一标识网络实例）
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 实例IP地址,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 实例端口,实例IP地址三元组UniqVpcId、Vip 和 Vport) 三个参数需同时指定，用于唯一标识网络实实例
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
