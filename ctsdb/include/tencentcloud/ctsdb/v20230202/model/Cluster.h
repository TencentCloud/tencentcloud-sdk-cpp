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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_CLUSTER_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_CLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctsdb/v20230202/model/Network.h>
#include <tencentcloud/ctsdb/v20230202/model/Spec.h>
#include <tencentcloud/ctsdb/v20230202/model/Period.h>
#include <tencentcloud/ctsdb/v20230202/model/Tenant.h>
#include <tencentcloud/ctsdb/v20230202/model/Tag.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * 实例相关信息
                */
                class Cluster : public AbstractModel
                {
                public:
                    Cluster();
                    ~Cluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppID 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appID 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterID 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterID 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountID 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountID() const;

                    /**
                     * 设置账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountID 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountID(const std::string& _accountID);

                    /**
                     * 判断参数 AccountID 是否已赋值
                     * @return AccountID 是否已赋值
                     * 
                     */
                    bool AccountIDHasBeenSet() const;

                    /**
                     * 获取自定义实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 自定义实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 自定义实例名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zones 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetZones() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zones 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetZones(const std::string& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Networks 网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<Network> GetNetworks() const;

                    /**
                     * 设置网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networks 网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetNetworks(const std::vector<Network>& _networks);

                    /**
                     * 判断参数 Networks 是否已赋值
                     * @return Networks 是否已赋值
                     * @deprecated
                     */
                    bool NetworksHasBeenSet() const;

                    /**
                     * 获取实例规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec 实例规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    Spec GetSpec() const;

                    /**
                     * 设置实例规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spec 实例规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetSpec(const Spec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * @deprecated
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取实例状态：0：运行中,1：创建中 ,16：变配中,17：隔离中,18：待销毁,19：恢复中,20：关机 , 21：销毁中 ,22：已销毁 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例状态：0：运行中,1：创建中 ,16：变配中,17：隔离中,18：待销毁,19：恢复中,20：关机 , 21：销毁中 ,22：已销毁 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置实例状态：0：运行中,1：创建中 ,16：变配中,17：隔离中,18：待销毁,19：恢复中,20：关机 , 21：销毁中 ,22：已销毁 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 实例状态：0：运行中,1：创建中 ,16：变配中,17：隔离中,18：待销毁,19：恢复中,20：关机 , 21：销毁中 ,22：已销毁 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Period 实例有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Period GetPeriod() const;

                    /**
                     * 设置实例有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _period 实例有效期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriod(const Period& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取产品内部特性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tenant 产品内部特性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Tenant GetTenant() const;

                    /**
                     * 设置产品内部特性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenant 产品内部特性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenant(const Tenant& _tenant);

                    /**
                     * 判断参数 Tenant 是否已赋值
                     * @return Tenant 是否已赋值
                     * 
                     */
                    bool TenantHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取安全组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Security 安全组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurity() const;

                    /**
                     * 设置安全组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _security 安全组信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecurity(const std::vector<std::string>& _security);

                    /**
                     * 判断参数 Security 是否已赋值
                     * @return Security 是否已赋值
                     * 
                     */
                    bool SecurityHasBeenSet() const;

                private:

                    /**
                     * 用户APPID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 账号id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountID;
                    bool m_accountIDHasBeenSet;

                    /**
                     * 自定义实例名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Network> m_networks;
                    bool m_networksHasBeenSet;

                    /**
                     * 实例规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Spec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 实例状态：0：运行中,1：创建中 ,16：变配中,17：隔离中,18：待销毁,19：恢复中,20：关机 , 21：销毁中 ,22：已销毁 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例有效期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Period m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 产品内部特性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Tenant m_tenant;
                    bool m_tenantHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 安全组信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_security;
                    bool m_securityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_CLUSTER_H_
