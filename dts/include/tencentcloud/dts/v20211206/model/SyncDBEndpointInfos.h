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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDBENDPOINTINFOS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDBENDPOINTINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据同步配置多节点数据库的节点信息。多节点数据库，如tdsqlmysql使用该结构；单节点数据库，如mysql使用Endpoint。
                */
                class SyncDBEndpointInfos : public AbstractModel
                {
                public:
                    SyncDBEndpointInfos();
                    ~SyncDBEndpointInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 数据库所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置数据库所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 数据库所在地域
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
                     * 获取实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessType 实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessType 实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseType 实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseType 实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Info 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Endpoint> GetInfo() const;

                    /**
                     * 设置数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _info 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInfo(const std::vector<Endpoint>& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 数据库所在地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例网络接入类型，如：extranet(外网)、ipv6(公网ipv6)、cvm(云主机自建)、dcg(专线接入)、vpncloud(vpn接入的实例)、cdb(云数据库)、ccn(云联网)、intranet(自研上云)、vpc(私有网络)等，注意具体可选值依赖当前链路
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 实例数据库类型，如：mysql,redis,mongodb,postgresql,mariadb,percona 等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * 数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Endpoint> m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDBENDPOINTINFOS_H_
