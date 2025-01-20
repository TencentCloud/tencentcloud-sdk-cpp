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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCEDASHBOARD_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCEDASHBOARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPC资源看板（各资源个数）
                */
                class ResourceDashboard : public AbstractModel
                {
                public:
                    ResourceDashboard();
                    ~ResourceDashboard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Vpc实例ID，例如：vpc-bq4bzxpj。
                     * @return VpcId Vpc实例ID，例如：vpc-bq4bzxpj。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc实例ID，例如：vpc-bq4bzxpj。
                     * @param _vpcId Vpc实例ID，例如：vpc-bq4bzxpj。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网实例ID，例如：subnet-bthucmmy。
                     * @return SubnetId 子网实例ID，例如：subnet-bthucmmy。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网实例ID，例如：subnet-bthucmmy。
                     * @param _subnetId 子网实例ID，例如：subnet-bthucmmy。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取基础网络互通。
                     * @return Classiclink 基础网络互通。
                     * 
                     */
                    uint64_t GetClassiclink() const;

                    /**
                     * 设置基础网络互通。
                     * @param _classiclink 基础网络互通。
                     * 
                     */
                    void SetClassiclink(const uint64_t& _classiclink);

                    /**
                     * 判断参数 Classiclink 是否已赋值
                     * @return Classiclink 是否已赋值
                     * 
                     */
                    bool ClassiclinkHasBeenSet() const;

                    /**
                     * 获取专线网关。
                     * @return Dcg 专线网关。
                     * 
                     */
                    uint64_t GetDcg() const;

                    /**
                     * 设置专线网关。
                     * @param _dcg 专线网关。
                     * 
                     */
                    void SetDcg(const uint64_t& _dcg);

                    /**
                     * 判断参数 Dcg 是否已赋值
                     * @return Dcg 是否已赋值
                     * 
                     */
                    bool DcgHasBeenSet() const;

                    /**
                     * 获取对等连接。
                     * @return Pcx 对等连接。
                     * 
                     */
                    uint64_t GetPcx() const;

                    /**
                     * 设置对等连接。
                     * @param _pcx 对等连接。
                     * 
                     */
                    void SetPcx(const uint64_t& _pcx);

                    /**
                     * 判断参数 Pcx 是否已赋值
                     * @return Pcx 是否已赋值
                     * 
                     */
                    bool PcxHasBeenSet() const;

                    /**
                     * 获取统计当前除云服务器 IP、弹性网卡IP和网络探测IP以外的所有已使用的IP总数。云服务器 IP、弹性网卡IP和网络探测IP单独计数。
                     * @return Ip 统计当前除云服务器 IP、弹性网卡IP和网络探测IP以外的所有已使用的IP总数。云服务器 IP、弹性网卡IP和网络探测IP单独计数。
                     * 
                     */
                    uint64_t GetIp() const;

                    /**
                     * 设置统计当前除云服务器 IP、弹性网卡IP和网络探测IP以外的所有已使用的IP总数。云服务器 IP、弹性网卡IP和网络探测IP单独计数。
                     * @param _ip 统计当前除云服务器 IP、弹性网卡IP和网络探测IP以外的所有已使用的IP总数。云服务器 IP、弹性网卡IP和网络探测IP单独计数。
                     * 
                     */
                    void SetIp(const uint64_t& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取NAT网关。
                     * @return Nat NAT网关。
                     * 
                     */
                    uint64_t GetNat() const;

                    /**
                     * 设置NAT网关。
                     * @param _nat NAT网关。
                     * 
                     */
                    void SetNat(const uint64_t& _nat);

                    /**
                     * 判断参数 Nat 是否已赋值
                     * @return Nat 是否已赋值
                     * 
                     */
                    bool NatHasBeenSet() const;

                    /**
                     * 获取VPN网关。
                     * @return Vpngw VPN网关。
                     * 
                     */
                    uint64_t GetVpngw() const;

                    /**
                     * 设置VPN网关。
                     * @param _vpngw VPN网关。
                     * 
                     */
                    void SetVpngw(const uint64_t& _vpngw);

                    /**
                     * 判断参数 Vpngw 是否已赋值
                     * @return Vpngw 是否已赋值
                     * 
                     */
                    bool VpngwHasBeenSet() const;

                    /**
                     * 获取流日志。
                     * @return FlowLog 流日志。
                     * 
                     */
                    uint64_t GetFlowLog() const;

                    /**
                     * 设置流日志。
                     * @param _flowLog 流日志。
                     * 
                     */
                    void SetFlowLog(const uint64_t& _flowLog);

                    /**
                     * 判断参数 FlowLog 是否已赋值
                     * @return FlowLog 是否已赋值
                     * 
                     */
                    bool FlowLogHasBeenSet() const;

                    /**
                     * 获取网络探测。
                     * @return NetworkDetect 网络探测。
                     * 
                     */
                    uint64_t GetNetworkDetect() const;

                    /**
                     * 设置网络探测。
                     * @param _networkDetect 网络探测。
                     * 
                     */
                    void SetNetworkDetect(const uint64_t& _networkDetect);

                    /**
                     * 判断参数 NetworkDetect 是否已赋值
                     * @return NetworkDetect 是否已赋值
                     * 
                     */
                    bool NetworkDetectHasBeenSet() const;

                    /**
                     * 获取网络ACL。
                     * @return NetworkACL 网络ACL。
                     * 
                     */
                    uint64_t GetNetworkACL() const;

                    /**
                     * 设置网络ACL。
                     * @param _networkACL 网络ACL。
                     * 
                     */
                    void SetNetworkACL(const uint64_t& _networkACL);

                    /**
                     * 判断参数 NetworkACL 是否已赋值
                     * @return NetworkACL 是否已赋值
                     * 
                     */
                    bool NetworkACLHasBeenSet() const;

                    /**
                     * 获取云主机。
                     * @return CVM 云主机。
                     * 
                     */
                    uint64_t GetCVM() const;

                    /**
                     * 设置云主机。
                     * @param _cVM 云主机。
                     * 
                     */
                    void SetCVM(const uint64_t& _cVM);

                    /**
                     * 判断参数 CVM 是否已赋值
                     * @return CVM 是否已赋值
                     * 
                     */
                    bool CVMHasBeenSet() const;

                    /**
                     * 获取负载均衡。
                     * @return LB 负载均衡。
                     * 
                     */
                    uint64_t GetLB() const;

                    /**
                     * 设置负载均衡。
                     * @param _lB 负载均衡。
                     * 
                     */
                    void SetLB(const uint64_t& _lB);

                    /**
                     * 判断参数 LB 是否已赋值
                     * @return LB 是否已赋值
                     * 
                     */
                    bool LBHasBeenSet() const;

                    /**
                     * 获取关系型数据库。
                     * @return CDB 关系型数据库。
                     * 
                     */
                    uint64_t GetCDB() const;

                    /**
                     * 设置关系型数据库。
                     * @param _cDB 关系型数据库。
                     * 
                     */
                    void SetCDB(const uint64_t& _cDB);

                    /**
                     * 判断参数 CDB 是否已赋值
                     * @return CDB 是否已赋值
                     * 
                     */
                    bool CDBHasBeenSet() const;

                    /**
                     * 获取云数据库 TencentDB for Memcached。
                     * @return Cmem 云数据库 TencentDB for Memcached。
                     * 
                     */
                    uint64_t GetCmem() const;

                    /**
                     * 设置云数据库 TencentDB for Memcached。
                     * @param _cmem 云数据库 TencentDB for Memcached。
                     * 
                     */
                    void SetCmem(const uint64_t& _cmem);

                    /**
                     * 判断参数 Cmem 是否已赋值
                     * @return Cmem 是否已赋值
                     * 
                     */
                    bool CmemHasBeenSet() const;

                    /**
                     * 获取时序数据库。
                     * @return CTSDB 时序数据库。
                     * 
                     */
                    uint64_t GetCTSDB() const;

                    /**
                     * 设置时序数据库。
                     * @param _cTSDB 时序数据库。
                     * 
                     */
                    void SetCTSDB(const uint64_t& _cTSDB);

                    /**
                     * 判断参数 CTSDB 是否已赋值
                     * @return CTSDB 是否已赋值
                     * 
                     */
                    bool CTSDBHasBeenSet() const;

                    /**
                     * 获取数据库 TencentDB for MariaDB（TDSQL）。
                     * @return MariaDB 数据库 TencentDB for MariaDB（TDSQL）。
                     * 
                     */
                    uint64_t GetMariaDB() const;

                    /**
                     * 设置数据库 TencentDB for MariaDB（TDSQL）。
                     * @param _mariaDB 数据库 TencentDB for MariaDB（TDSQL）。
                     * 
                     */
                    void SetMariaDB(const uint64_t& _mariaDB);

                    /**
                     * 判断参数 MariaDB 是否已赋值
                     * @return MariaDB 是否已赋值
                     * 
                     */
                    bool MariaDBHasBeenSet() const;

                    /**
                     * 获取数据库 TencentDB for SQL Server。
                     * @return SQLServer 数据库 TencentDB for SQL Server。
                     * 
                     */
                    uint64_t GetSQLServer() const;

                    /**
                     * 设置数据库 TencentDB for SQL Server。
                     * @param _sQLServer 数据库 TencentDB for SQL Server。
                     * 
                     */
                    void SetSQLServer(const uint64_t& _sQLServer);

                    /**
                     * 判断参数 SQLServer 是否已赋值
                     * @return SQLServer 是否已赋值
                     * 
                     */
                    bool SQLServerHasBeenSet() const;

                    /**
                     * 获取云数据库 TencentDB for PostgreSQL。
                     * @return Postgres 云数据库 TencentDB for PostgreSQL。
                     * 
                     */
                    uint64_t GetPostgres() const;

                    /**
                     * 设置云数据库 TencentDB for PostgreSQL。
                     * @param _postgres 云数据库 TencentDB for PostgreSQL。
                     * 
                     */
                    void SetPostgres(const uint64_t& _postgres);

                    /**
                     * 判断参数 Postgres 是否已赋值
                     * @return Postgres 是否已赋值
                     * 
                     */
                    bool PostgresHasBeenSet() const;

                    /**
                     * 获取网络附加存储。
                     * @return NAS 网络附加存储。
                     * 
                     */
                    uint64_t GetNAS() const;

                    /**
                     * 设置网络附加存储。
                     * @param _nAS 网络附加存储。
                     * 
                     */
                    void SetNAS(const uint64_t& _nAS);

                    /**
                     * 判断参数 NAS 是否已赋值
                     * @return NAS 是否已赋值
                     * 
                     */
                    bool NASHasBeenSet() const;

                    /**
                     * 获取Snova云数据仓库。
                     * @return Greenplumn Snova云数据仓库。
                     * 
                     */
                    uint64_t GetGreenplumn() const;

                    /**
                     * 设置Snova云数据仓库。
                     * @param _greenplumn Snova云数据仓库。
                     * 
                     */
                    void SetGreenplumn(const uint64_t& _greenplumn);

                    /**
                     * 判断参数 Greenplumn 是否已赋值
                     * @return Greenplumn 是否已赋值
                     * 
                     */
                    bool GreenplumnHasBeenSet() const;

                    /**
                     * 获取消息队列 CKAFKA。
                     * @return Ckafka 消息队列 CKAFKA。
                     * 
                     */
                    uint64_t GetCkafka() const;

                    /**
                     * 设置消息队列 CKAFKA。
                     * @param _ckafka 消息队列 CKAFKA。
                     * 
                     */
                    void SetCkafka(const uint64_t& _ckafka);

                    /**
                     * 判断参数 Ckafka 是否已赋值
                     * @return Ckafka 是否已赋值
                     * 
                     */
                    bool CkafkaHasBeenSet() const;

                    /**
                     * 获取Grocery。
                     * @return Grocery Grocery。
                     * 
                     */
                    uint64_t GetGrocery() const;

                    /**
                     * 设置Grocery。
                     * @param _grocery Grocery。
                     * 
                     */
                    void SetGrocery(const uint64_t& _grocery);

                    /**
                     * 判断参数 Grocery 是否已赋值
                     * @return Grocery 是否已赋值
                     * 
                     */
                    bool GroceryHasBeenSet() const;

                    /**
                     * 获取数据加密服务。
                     * @return HSM 数据加密服务。
                     * 
                     */
                    uint64_t GetHSM() const;

                    /**
                     * 设置数据加密服务。
                     * @param _hSM 数据加密服务。
                     * 
                     */
                    void SetHSM(const uint64_t& _hSM);

                    /**
                     * 判断参数 HSM 是否已赋值
                     * @return HSM 是否已赋值
                     * 
                     */
                    bool HSMHasBeenSet() const;

                    /**
                     * 获取游戏存储 Tcaplus。
                     * @return Tcaplus 游戏存储 Tcaplus。
                     * 
                     */
                    uint64_t GetTcaplus() const;

                    /**
                     * 设置游戏存储 Tcaplus。
                     * @param _tcaplus 游戏存储 Tcaplus。
                     * 
                     */
                    void SetTcaplus(const uint64_t& _tcaplus);

                    /**
                     * 判断参数 Tcaplus 是否已赋值
                     * @return Tcaplus 是否已赋值
                     * 
                     */
                    bool TcaplusHasBeenSet() const;

                    /**
                     * 获取Cnas。
                     * @return Cnas Cnas。
                     * 
                     */
                    uint64_t GetCnas() const;

                    /**
                     * 设置Cnas。
                     * @param _cnas Cnas。
                     * 
                     */
                    void SetCnas(const uint64_t& _cnas);

                    /**
                     * 判断参数 Cnas 是否已赋值
                     * @return Cnas 是否已赋值
                     * 
                     */
                    bool CnasHasBeenSet() const;

                    /**
                     * 获取HTAP 数据库 TiDB。
                     * @return TiDB HTAP 数据库 TiDB。
                     * 
                     */
                    uint64_t GetTiDB() const;

                    /**
                     * 设置HTAP 数据库 TiDB。
                     * @param _tiDB HTAP 数据库 TiDB。
                     * 
                     */
                    void SetTiDB(const uint64_t& _tiDB);

                    /**
                     * 判断参数 TiDB 是否已赋值
                     * @return TiDB 是否已赋值
                     * 
                     */
                    bool TiDBHasBeenSet() const;

                    /**
                     * 获取EMR 集群。
                     * @return Emr EMR 集群。
                     * 
                     */
                    uint64_t GetEmr() const;

                    /**
                     * 设置EMR 集群。
                     * @param _emr EMR 集群。
                     * 
                     */
                    void SetEmr(const uint64_t& _emr);

                    /**
                     * 判断参数 Emr 是否已赋值
                     * @return Emr 是否已赋值
                     * 
                     */
                    bool EmrHasBeenSet() const;

                    /**
                     * 获取SEAL。
                     * @return SEAL SEAL。
                     * 
                     */
                    uint64_t GetSEAL() const;

                    /**
                     * 设置SEAL。
                     * @param _sEAL SEAL。
                     * 
                     */
                    void SetSEAL(const uint64_t& _sEAL);

                    /**
                     * 判断参数 SEAL 是否已赋值
                     * @return SEAL 是否已赋值
                     * 
                     */
                    bool SEALHasBeenSet() const;

                    /**
                     * 获取文件存储 CFS。
                     * @return CFS 文件存储 CFS。
                     * 
                     */
                    uint64_t GetCFS() const;

                    /**
                     * 设置文件存储 CFS。
                     * @param _cFS 文件存储 CFS。
                     * 
                     */
                    void SetCFS(const uint64_t& _cFS);

                    /**
                     * 判断参数 CFS 是否已赋值
                     * @return CFS 是否已赋值
                     * 
                     */
                    bool CFSHasBeenSet() const;

                    /**
                     * 获取Oracle。
                     * @return Oracle Oracle。
                     * 
                     */
                    uint64_t GetOracle() const;

                    /**
                     * 设置Oracle。
                     * @param _oracle Oracle。
                     * 
                     */
                    void SetOracle(const uint64_t& _oracle);

                    /**
                     * 判断参数 Oracle 是否已赋值
                     * @return Oracle 是否已赋值
                     * 
                     */
                    bool OracleHasBeenSet() const;

                    /**
                     * 获取ElasticSearch服务。
                     * @return ElasticSearch ElasticSearch服务。
                     * 
                     */
                    uint64_t GetElasticSearch() const;

                    /**
                     * 设置ElasticSearch服务。
                     * @param _elasticSearch ElasticSearch服务。
                     * 
                     */
                    void SetElasticSearch(const uint64_t& _elasticSearch);

                    /**
                     * 判断参数 ElasticSearch 是否已赋值
                     * @return ElasticSearch 是否已赋值
                     * 
                     */
                    bool ElasticSearchHasBeenSet() const;

                    /**
                     * 获取区块链服务。
                     * @return TBaaS 区块链服务。
                     * 
                     */
                    uint64_t GetTBaaS() const;

                    /**
                     * 设置区块链服务。
                     * @param _tBaaS 区块链服务。
                     * 
                     */
                    void SetTBaaS(const uint64_t& _tBaaS);

                    /**
                     * 判断参数 TBaaS 是否已赋值
                     * @return TBaaS 是否已赋值
                     * 
                     */
                    bool TBaaSHasBeenSet() const;

                    /**
                     * 获取Itop。
                     * @return Itop Itop。
                     * 
                     */
                    uint64_t GetItop() const;

                    /**
                     * 设置Itop。
                     * @param _itop Itop。
                     * 
                     */
                    void SetItop(const uint64_t& _itop);

                    /**
                     * 判断参数 Itop 是否已赋值
                     * @return Itop 是否已赋值
                     * 
                     */
                    bool ItopHasBeenSet() const;

                    /**
                     * 获取云数据库审计。
                     * @return DBAudit 云数据库审计。
                     * 
                     */
                    uint64_t GetDBAudit() const;

                    /**
                     * 设置云数据库审计。
                     * @param _dBAudit 云数据库审计。
                     * 
                     */
                    void SetDBAudit(const uint64_t& _dBAudit);

                    /**
                     * 判断参数 DBAudit 是否已赋值
                     * @return DBAudit 是否已赋值
                     * 
                     */
                    bool DBAuditHasBeenSet() const;

                    /**
                     * 获取企业级云数据库 CynosDB for Postgres。
                     * @return CynosDBPostgres 企业级云数据库 CynosDB for Postgres。
                     * 
                     */
                    uint64_t GetCynosDBPostgres() const;

                    /**
                     * 设置企业级云数据库 CynosDB for Postgres。
                     * @param _cynosDBPostgres 企业级云数据库 CynosDB for Postgres。
                     * 
                     */
                    void SetCynosDBPostgres(const uint64_t& _cynosDBPostgres);

                    /**
                     * 判断参数 CynosDBPostgres 是否已赋值
                     * @return CynosDBPostgres 是否已赋值
                     * 
                     */
                    bool CynosDBPostgresHasBeenSet() const;

                    /**
                     * 获取数据库 TencentDB for Redis。
                     * @return Redis 数据库 TencentDB for Redis。
                     * 
                     */
                    uint64_t GetRedis() const;

                    /**
                     * 设置数据库 TencentDB for Redis。
                     * @param _redis 数据库 TencentDB for Redis。
                     * 
                     */
                    void SetRedis(const uint64_t& _redis);

                    /**
                     * 判断参数 Redis 是否已赋值
                     * @return Redis 是否已赋值
                     * 
                     */
                    bool RedisHasBeenSet() const;

                    /**
                     * 获取数据库 TencentDB for MongoDB。
                     * @return MongoDB 数据库 TencentDB for MongoDB。
                     * 
                     */
                    uint64_t GetMongoDB() const;

                    /**
                     * 设置数据库 TencentDB for MongoDB。
                     * @param _mongoDB 数据库 TencentDB for MongoDB。
                     * 
                     */
                    void SetMongoDB(const uint64_t& _mongoDB);

                    /**
                     * 判断参数 MongoDB 是否已赋值
                     * @return MongoDB 是否已赋值
                     * 
                     */
                    bool MongoDBHasBeenSet() const;

                    /**
                     * 获取分布式数据库 TencentDB for TDSQL。
                     * @return DCDB 分布式数据库 TencentDB for TDSQL。
                     * 
                     */
                    uint64_t GetDCDB() const;

                    /**
                     * 设置分布式数据库 TencentDB for TDSQL。
                     * @param _dCDB 分布式数据库 TencentDB for TDSQL。
                     * 
                     */
                    void SetDCDB(const uint64_t& _dCDB);

                    /**
                     * 判断参数 DCDB 是否已赋值
                     * @return DCDB 是否已赋值
                     * 
                     */
                    bool DCDBHasBeenSet() const;

                    /**
                     * 获取企业级云数据库 CynosDB for MySQL。
                     * @return CynosDBMySQL 企业级云数据库 CynosDB for MySQL。
                     * 
                     */
                    uint64_t GetCynosDBMySQL() const;

                    /**
                     * 设置企业级云数据库 CynosDB for MySQL。
                     * @param _cynosDBMySQL 企业级云数据库 CynosDB for MySQL。
                     * 
                     */
                    void SetCynosDBMySQL(const uint64_t& _cynosDBMySQL);

                    /**
                     * 判断参数 CynosDBMySQL 是否已赋值
                     * @return CynosDBMySQL 是否已赋值
                     * 
                     */
                    bool CynosDBMySQLHasBeenSet() const;

                    /**
                     * 获取子网。
                     * @return Subnet 子网。
                     * 
                     */
                    uint64_t GetSubnet() const;

                    /**
                     * 设置子网。
                     * @param _subnet 子网。
                     * 
                     */
                    void SetSubnet(const uint64_t& _subnet);

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     * 
                     */
                    bool SubnetHasBeenSet() const;

                    /**
                     * 获取路由表。
                     * @return RouteTable 路由表。
                     * 
                     */
                    uint64_t GetRouteTable() const;

                    /**
                     * 设置路由表。
                     * @param _routeTable 路由表。
                     * 
                     */
                    void SetRouteTable(const uint64_t& _routeTable);

                    /**
                     * 判断参数 RouteTable 是否已赋值
                     * @return RouteTable 是否已赋值
                     * 
                     */
                    bool RouteTableHasBeenSet() const;

                private:

                    /**
                     * Vpc实例ID，例如：vpc-bq4bzxpj。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网实例ID，例如：subnet-bthucmmy。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 基础网络互通。
                     */
                    uint64_t m_classiclink;
                    bool m_classiclinkHasBeenSet;

                    /**
                     * 专线网关。
                     */
                    uint64_t m_dcg;
                    bool m_dcgHasBeenSet;

                    /**
                     * 对等连接。
                     */
                    uint64_t m_pcx;
                    bool m_pcxHasBeenSet;

                    /**
                     * 统计当前除云服务器 IP、弹性网卡IP和网络探测IP以外的所有已使用的IP总数。云服务器 IP、弹性网卡IP和网络探测IP单独计数。
                     */
                    uint64_t m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * NAT网关。
                     */
                    uint64_t m_nat;
                    bool m_natHasBeenSet;

                    /**
                     * VPN网关。
                     */
                    uint64_t m_vpngw;
                    bool m_vpngwHasBeenSet;

                    /**
                     * 流日志。
                     */
                    uint64_t m_flowLog;
                    bool m_flowLogHasBeenSet;

                    /**
                     * 网络探测。
                     */
                    uint64_t m_networkDetect;
                    bool m_networkDetectHasBeenSet;

                    /**
                     * 网络ACL。
                     */
                    uint64_t m_networkACL;
                    bool m_networkACLHasBeenSet;

                    /**
                     * 云主机。
                     */
                    uint64_t m_cVM;
                    bool m_cVMHasBeenSet;

                    /**
                     * 负载均衡。
                     */
                    uint64_t m_lB;
                    bool m_lBHasBeenSet;

                    /**
                     * 关系型数据库。
                     */
                    uint64_t m_cDB;
                    bool m_cDBHasBeenSet;

                    /**
                     * 云数据库 TencentDB for Memcached。
                     */
                    uint64_t m_cmem;
                    bool m_cmemHasBeenSet;

                    /**
                     * 时序数据库。
                     */
                    uint64_t m_cTSDB;
                    bool m_cTSDBHasBeenSet;

                    /**
                     * 数据库 TencentDB for MariaDB（TDSQL）。
                     */
                    uint64_t m_mariaDB;
                    bool m_mariaDBHasBeenSet;

                    /**
                     * 数据库 TencentDB for SQL Server。
                     */
                    uint64_t m_sQLServer;
                    bool m_sQLServerHasBeenSet;

                    /**
                     * 云数据库 TencentDB for PostgreSQL。
                     */
                    uint64_t m_postgres;
                    bool m_postgresHasBeenSet;

                    /**
                     * 网络附加存储。
                     */
                    uint64_t m_nAS;
                    bool m_nASHasBeenSet;

                    /**
                     * Snova云数据仓库。
                     */
                    uint64_t m_greenplumn;
                    bool m_greenplumnHasBeenSet;

                    /**
                     * 消息队列 CKAFKA。
                     */
                    uint64_t m_ckafka;
                    bool m_ckafkaHasBeenSet;

                    /**
                     * Grocery。
                     */
                    uint64_t m_grocery;
                    bool m_groceryHasBeenSet;

                    /**
                     * 数据加密服务。
                     */
                    uint64_t m_hSM;
                    bool m_hSMHasBeenSet;

                    /**
                     * 游戏存储 Tcaplus。
                     */
                    uint64_t m_tcaplus;
                    bool m_tcaplusHasBeenSet;

                    /**
                     * Cnas。
                     */
                    uint64_t m_cnas;
                    bool m_cnasHasBeenSet;

                    /**
                     * HTAP 数据库 TiDB。
                     */
                    uint64_t m_tiDB;
                    bool m_tiDBHasBeenSet;

                    /**
                     * EMR 集群。
                     */
                    uint64_t m_emr;
                    bool m_emrHasBeenSet;

                    /**
                     * SEAL。
                     */
                    uint64_t m_sEAL;
                    bool m_sEALHasBeenSet;

                    /**
                     * 文件存储 CFS。
                     */
                    uint64_t m_cFS;
                    bool m_cFSHasBeenSet;

                    /**
                     * Oracle。
                     */
                    uint64_t m_oracle;
                    bool m_oracleHasBeenSet;

                    /**
                     * ElasticSearch服务。
                     */
                    uint64_t m_elasticSearch;
                    bool m_elasticSearchHasBeenSet;

                    /**
                     * 区块链服务。
                     */
                    uint64_t m_tBaaS;
                    bool m_tBaaSHasBeenSet;

                    /**
                     * Itop。
                     */
                    uint64_t m_itop;
                    bool m_itopHasBeenSet;

                    /**
                     * 云数据库审计。
                     */
                    uint64_t m_dBAudit;
                    bool m_dBAuditHasBeenSet;

                    /**
                     * 企业级云数据库 CynosDB for Postgres。
                     */
                    uint64_t m_cynosDBPostgres;
                    bool m_cynosDBPostgresHasBeenSet;

                    /**
                     * 数据库 TencentDB for Redis。
                     */
                    uint64_t m_redis;
                    bool m_redisHasBeenSet;

                    /**
                     * 数据库 TencentDB for MongoDB。
                     */
                    uint64_t m_mongoDB;
                    bool m_mongoDBHasBeenSet;

                    /**
                     * 分布式数据库 TencentDB for TDSQL。
                     */
                    uint64_t m_dCDB;
                    bool m_dCDBHasBeenSet;

                    /**
                     * 企业级云数据库 CynosDB for MySQL。
                     */
                    uint64_t m_cynosDBMySQL;
                    bool m_cynosDBMySQLHasBeenSet;

                    /**
                     * 子网。
                     */
                    uint64_t m_subnet;
                    bool m_subnetHasBeenSet;

                    /**
                     * 路由表。
                     */
                    uint64_t m_routeTable;
                    bool m_routeTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCEDASHBOARD_H_
