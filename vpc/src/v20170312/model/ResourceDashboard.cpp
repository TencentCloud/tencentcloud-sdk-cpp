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

#include <tencentcloud/vpc/v20170312/model/ResourceDashboard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ResourceDashboard::ResourceDashboard() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_classiclinkHasBeenSet(false),
    m_dcgHasBeenSet(false),
    m_pcxHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_natHasBeenSet(false),
    m_vpngwHasBeenSet(false),
    m_flowLogHasBeenSet(false),
    m_networkDetectHasBeenSet(false),
    m_networkACLHasBeenSet(false),
    m_cVMHasBeenSet(false),
    m_lBHasBeenSet(false),
    m_cDBHasBeenSet(false),
    m_cmemHasBeenSet(false),
    m_cTSDBHasBeenSet(false),
    m_mariaDBHasBeenSet(false),
    m_sQLServerHasBeenSet(false),
    m_postgresHasBeenSet(false),
    m_nASHasBeenSet(false),
    m_greenplumnHasBeenSet(false),
    m_ckafkaHasBeenSet(false),
    m_groceryHasBeenSet(false),
    m_hSMHasBeenSet(false),
    m_tcaplusHasBeenSet(false),
    m_cnasHasBeenSet(false),
    m_tiDBHasBeenSet(false),
    m_emrHasBeenSet(false),
    m_sEALHasBeenSet(false),
    m_cFSHasBeenSet(false),
    m_oracleHasBeenSet(false),
    m_elasticSearchHasBeenSet(false),
    m_tBaaSHasBeenSet(false),
    m_itopHasBeenSet(false),
    m_dBAuditHasBeenSet(false),
    m_cynosDBPostgresHasBeenSet(false),
    m_redisHasBeenSet(false),
    m_mongoDBHasBeenSet(false),
    m_dCDBHasBeenSet(false),
    m_cynosDBMySQLHasBeenSet(false),
    m_subnetHasBeenSet(false),
    m_routeTableHasBeenSet(false)
{
}

CoreInternalOutcome ResourceDashboard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Classiclink") && !value["Classiclink"].IsNull())
    {
        if (!value["Classiclink"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Classiclink` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_classiclink = value["Classiclink"].GetUint64();
        m_classiclinkHasBeenSet = true;
    }

    if (value.HasMember("Dcg") && !value["Dcg"].IsNull())
    {
        if (!value["Dcg"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Dcg` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dcg = value["Dcg"].GetUint64();
        m_dcgHasBeenSet = true;
    }

    if (value.HasMember("Pcx") && !value["Pcx"].IsNull())
    {
        if (!value["Pcx"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Pcx` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pcx = value["Pcx"].GetUint64();
        m_pcxHasBeenSet = true;
    }

    if (value.HasMember("Ip") && !value["Ip"].IsNull())
    {
        if (!value["Ip"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Ip` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ip = value["Ip"].GetUint64();
        m_ipHasBeenSet = true;
    }

    if (value.HasMember("Nat") && !value["Nat"].IsNull())
    {
        if (!value["Nat"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Nat` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nat = value["Nat"].GetUint64();
        m_natHasBeenSet = true;
    }

    if (value.HasMember("Vpngw") && !value["Vpngw"].IsNull())
    {
        if (!value["Vpngw"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Vpngw` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpngw = value["Vpngw"].GetUint64();
        m_vpngwHasBeenSet = true;
    }

    if (value.HasMember("FlowLog") && !value["FlowLog"].IsNull())
    {
        if (!value["FlowLog"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.FlowLog` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flowLog = value["FlowLog"].GetUint64();
        m_flowLogHasBeenSet = true;
    }

    if (value.HasMember("NetworkDetect") && !value["NetworkDetect"].IsNull())
    {
        if (!value["NetworkDetect"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.NetworkDetect` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_networkDetect = value["NetworkDetect"].GetUint64();
        m_networkDetectHasBeenSet = true;
    }

    if (value.HasMember("NetworkACL") && !value["NetworkACL"].IsNull())
    {
        if (!value["NetworkACL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.NetworkACL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_networkACL = value["NetworkACL"].GetUint64();
        m_networkACLHasBeenSet = true;
    }

    if (value.HasMember("CVM") && !value["CVM"].IsNull())
    {
        if (!value["CVM"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.CVM` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cVM = value["CVM"].GetUint64();
        m_cVMHasBeenSet = true;
    }

    if (value.HasMember("LB") && !value["LB"].IsNull())
    {
        if (!value["LB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.LB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lB = value["LB"].GetUint64();
        m_lBHasBeenSet = true;
    }

    if (value.HasMember("CDB") && !value["CDB"].IsNull())
    {
        if (!value["CDB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.CDB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cDB = value["CDB"].GetUint64();
        m_cDBHasBeenSet = true;
    }

    if (value.HasMember("Cmem") && !value["Cmem"].IsNull())
    {
        if (!value["Cmem"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Cmem` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cmem = value["Cmem"].GetUint64();
        m_cmemHasBeenSet = true;
    }

    if (value.HasMember("CTSDB") && !value["CTSDB"].IsNull())
    {
        if (!value["CTSDB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.CTSDB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cTSDB = value["CTSDB"].GetUint64();
        m_cTSDBHasBeenSet = true;
    }

    if (value.HasMember("MariaDB") && !value["MariaDB"].IsNull())
    {
        if (!value["MariaDB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.MariaDB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mariaDB = value["MariaDB"].GetUint64();
        m_mariaDBHasBeenSet = true;
    }

    if (value.HasMember("SQLServer") && !value["SQLServer"].IsNull())
    {
        if (!value["SQLServer"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.SQLServer` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sQLServer = value["SQLServer"].GetUint64();
        m_sQLServerHasBeenSet = true;
    }

    if (value.HasMember("Postgres") && !value["Postgres"].IsNull())
    {
        if (!value["Postgres"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Postgres` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_postgres = value["Postgres"].GetUint64();
        m_postgresHasBeenSet = true;
    }

    if (value.HasMember("NAS") && !value["NAS"].IsNull())
    {
        if (!value["NAS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.NAS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nAS = value["NAS"].GetUint64();
        m_nASHasBeenSet = true;
    }

    if (value.HasMember("Greenplumn") && !value["Greenplumn"].IsNull())
    {
        if (!value["Greenplumn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Greenplumn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_greenplumn = value["Greenplumn"].GetUint64();
        m_greenplumnHasBeenSet = true;
    }

    if (value.HasMember("Ckafka") && !value["Ckafka"].IsNull())
    {
        if (!value["Ckafka"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Ckafka` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ckafka = value["Ckafka"].GetUint64();
        m_ckafkaHasBeenSet = true;
    }

    if (value.HasMember("Grocery") && !value["Grocery"].IsNull())
    {
        if (!value["Grocery"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Grocery` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_grocery = value["Grocery"].GetUint64();
        m_groceryHasBeenSet = true;
    }

    if (value.HasMember("HSM") && !value["HSM"].IsNull())
    {
        if (!value["HSM"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.HSM` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hSM = value["HSM"].GetUint64();
        m_hSMHasBeenSet = true;
    }

    if (value.HasMember("Tcaplus") && !value["Tcaplus"].IsNull())
    {
        if (!value["Tcaplus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Tcaplus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tcaplus = value["Tcaplus"].GetUint64();
        m_tcaplusHasBeenSet = true;
    }

    if (value.HasMember("Cnas") && !value["Cnas"].IsNull())
    {
        if (!value["Cnas"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Cnas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cnas = value["Cnas"].GetUint64();
        m_cnasHasBeenSet = true;
    }

    if (value.HasMember("TiDB") && !value["TiDB"].IsNull())
    {
        if (!value["TiDB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.TiDB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tiDB = value["TiDB"].GetUint64();
        m_tiDBHasBeenSet = true;
    }

    if (value.HasMember("Emr") && !value["Emr"].IsNull())
    {
        if (!value["Emr"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Emr` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_emr = value["Emr"].GetUint64();
        m_emrHasBeenSet = true;
    }

    if (value.HasMember("SEAL") && !value["SEAL"].IsNull())
    {
        if (!value["SEAL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.SEAL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sEAL = value["SEAL"].GetUint64();
        m_sEALHasBeenSet = true;
    }

    if (value.HasMember("CFS") && !value["CFS"].IsNull())
    {
        if (!value["CFS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.CFS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cFS = value["CFS"].GetUint64();
        m_cFSHasBeenSet = true;
    }

    if (value.HasMember("Oracle") && !value["Oracle"].IsNull())
    {
        if (!value["Oracle"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Oracle` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_oracle = value["Oracle"].GetUint64();
        m_oracleHasBeenSet = true;
    }

    if (value.HasMember("ElasticSearch") && !value["ElasticSearch"].IsNull())
    {
        if (!value["ElasticSearch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.ElasticSearch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticSearch = value["ElasticSearch"].GetUint64();
        m_elasticSearchHasBeenSet = true;
    }

    if (value.HasMember("TBaaS") && !value["TBaaS"].IsNull())
    {
        if (!value["TBaaS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.TBaaS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tBaaS = value["TBaaS"].GetUint64();
        m_tBaaSHasBeenSet = true;
    }

    if (value.HasMember("Itop") && !value["Itop"].IsNull())
    {
        if (!value["Itop"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Itop` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_itop = value["Itop"].GetUint64();
        m_itopHasBeenSet = true;
    }

    if (value.HasMember("DBAudit") && !value["DBAudit"].IsNull())
    {
        if (!value["DBAudit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.DBAudit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dBAudit = value["DBAudit"].GetUint64();
        m_dBAuditHasBeenSet = true;
    }

    if (value.HasMember("CynosDBPostgres") && !value["CynosDBPostgres"].IsNull())
    {
        if (!value["CynosDBPostgres"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.CynosDBPostgres` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cynosDBPostgres = value["CynosDBPostgres"].GetUint64();
        m_cynosDBPostgresHasBeenSet = true;
    }

    if (value.HasMember("Redis") && !value["Redis"].IsNull())
    {
        if (!value["Redis"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Redis` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_redis = value["Redis"].GetUint64();
        m_redisHasBeenSet = true;
    }

    if (value.HasMember("MongoDB") && !value["MongoDB"].IsNull())
    {
        if (!value["MongoDB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.MongoDB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mongoDB = value["MongoDB"].GetUint64();
        m_mongoDBHasBeenSet = true;
    }

    if (value.HasMember("DCDB") && !value["DCDB"].IsNull())
    {
        if (!value["DCDB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.DCDB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dCDB = value["DCDB"].GetUint64();
        m_dCDBHasBeenSet = true;
    }

    if (value.HasMember("CynosDBMySQL") && !value["CynosDBMySQL"].IsNull())
    {
        if (!value["CynosDBMySQL"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.CynosDBMySQL` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cynosDBMySQL = value["CynosDBMySQL"].GetUint64();
        m_cynosDBMySQLHasBeenSet = true;
    }

    if (value.HasMember("Subnet") && !value["Subnet"].IsNull())
    {
        if (!value["Subnet"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.Subnet` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subnet = value["Subnet"].GetUint64();
        m_subnetHasBeenSet = true;
    }

    if (value.HasMember("RouteTable") && !value["RouteTable"].IsNull())
    {
        if (!value["RouteTable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceDashboard.RouteTable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_routeTable = value["RouteTable"].GetUint64();
        m_routeTableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceDashboard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_classiclinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classiclink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_classiclink, allocator);
    }

    if (m_dcgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dcg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dcg, allocator);
    }

    if (m_pcxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pcx";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pcx, allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ip, allocator);
    }

    if (m_natHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nat, allocator);
    }

    if (m_vpngwHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpngw";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpngw, allocator);
    }

    if (m_flowLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowLog, allocator);
    }

    if (m_networkDetectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkDetect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkDetect, allocator);
    }

    if (m_networkACLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkACL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_networkACL, allocator);
    }

    if (m_cVMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVM, allocator);
    }

    if (m_lBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lB, allocator);
    }

    if (m_cDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cDB, allocator);
    }

    if (m_cmemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cmem, allocator);
    }

    if (m_cTSDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CTSDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cTSDB, allocator);
    }

    if (m_mariaDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MariaDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mariaDB, allocator);
    }

    if (m_sQLServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sQLServer, allocator);
    }

    if (m_postgresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Postgres";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_postgres, allocator);
    }

    if (m_nASHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NAS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nAS, allocator);
    }

    if (m_greenplumnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Greenplumn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_greenplumn, allocator);
    }

    if (m_ckafkaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ckafka";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ckafka, allocator);
    }

    if (m_groceryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Grocery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_grocery, allocator);
    }

    if (m_hSMHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HSM";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hSM, allocator);
    }

    if (m_tcaplusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tcaplus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tcaplus, allocator);
    }

    if (m_cnasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cnas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cnas, allocator);
    }

    if (m_tiDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TiDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tiDB, allocator);
    }

    if (m_emrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Emr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_emr, allocator);
    }

    if (m_sEALHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SEAL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sEAL, allocator);
    }

    if (m_cFSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CFS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cFS, allocator);
    }

    if (m_oracleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Oracle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_oracle, allocator);
    }

    if (m_elasticSearchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticSearch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticSearch, allocator);
    }

    if (m_tBaaSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TBaaS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tBaaS, allocator);
    }

    if (m_itopHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Itop";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itop, allocator);
    }

    if (m_dBAuditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBAudit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dBAudit, allocator);
    }

    if (m_cynosDBPostgresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosDBPostgres";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cynosDBPostgres, allocator);
    }

    if (m_redisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Redis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redis, allocator);
    }

    if (m_mongoDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MongoDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mongoDB, allocator);
    }

    if (m_dCDBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DCDB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dCDB, allocator);
    }

    if (m_cynosDBMySQLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CynosDBMySQL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cynosDBMySQL, allocator);
    }

    if (m_subnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subnet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subnet, allocator);
    }

    if (m_routeTableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteTable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_routeTable, allocator);
    }

}


string ResourceDashboard::GetVpcId() const
{
    return m_vpcId;
}

void ResourceDashboard::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ResourceDashboard::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ResourceDashboard::GetSubnetId() const
{
    return m_subnetId;
}

void ResourceDashboard::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ResourceDashboard::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t ResourceDashboard::GetClassiclink() const
{
    return m_classiclink;
}

void ResourceDashboard::SetClassiclink(const uint64_t& _classiclink)
{
    m_classiclink = _classiclink;
    m_classiclinkHasBeenSet = true;
}

bool ResourceDashboard::ClassiclinkHasBeenSet() const
{
    return m_classiclinkHasBeenSet;
}

uint64_t ResourceDashboard::GetDcg() const
{
    return m_dcg;
}

void ResourceDashboard::SetDcg(const uint64_t& _dcg)
{
    m_dcg = _dcg;
    m_dcgHasBeenSet = true;
}

bool ResourceDashboard::DcgHasBeenSet() const
{
    return m_dcgHasBeenSet;
}

uint64_t ResourceDashboard::GetPcx() const
{
    return m_pcx;
}

void ResourceDashboard::SetPcx(const uint64_t& _pcx)
{
    m_pcx = _pcx;
    m_pcxHasBeenSet = true;
}

bool ResourceDashboard::PcxHasBeenSet() const
{
    return m_pcxHasBeenSet;
}

uint64_t ResourceDashboard::GetIp() const
{
    return m_ip;
}

void ResourceDashboard::SetIp(const uint64_t& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool ResourceDashboard::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

uint64_t ResourceDashboard::GetNat() const
{
    return m_nat;
}

void ResourceDashboard::SetNat(const uint64_t& _nat)
{
    m_nat = _nat;
    m_natHasBeenSet = true;
}

bool ResourceDashboard::NatHasBeenSet() const
{
    return m_natHasBeenSet;
}

uint64_t ResourceDashboard::GetVpngw() const
{
    return m_vpngw;
}

void ResourceDashboard::SetVpngw(const uint64_t& _vpngw)
{
    m_vpngw = _vpngw;
    m_vpngwHasBeenSet = true;
}

bool ResourceDashboard::VpngwHasBeenSet() const
{
    return m_vpngwHasBeenSet;
}

uint64_t ResourceDashboard::GetFlowLog() const
{
    return m_flowLog;
}

void ResourceDashboard::SetFlowLog(const uint64_t& _flowLog)
{
    m_flowLog = _flowLog;
    m_flowLogHasBeenSet = true;
}

bool ResourceDashboard::FlowLogHasBeenSet() const
{
    return m_flowLogHasBeenSet;
}

uint64_t ResourceDashboard::GetNetworkDetect() const
{
    return m_networkDetect;
}

void ResourceDashboard::SetNetworkDetect(const uint64_t& _networkDetect)
{
    m_networkDetect = _networkDetect;
    m_networkDetectHasBeenSet = true;
}

bool ResourceDashboard::NetworkDetectHasBeenSet() const
{
    return m_networkDetectHasBeenSet;
}

uint64_t ResourceDashboard::GetNetworkACL() const
{
    return m_networkACL;
}

void ResourceDashboard::SetNetworkACL(const uint64_t& _networkACL)
{
    m_networkACL = _networkACL;
    m_networkACLHasBeenSet = true;
}

bool ResourceDashboard::NetworkACLHasBeenSet() const
{
    return m_networkACLHasBeenSet;
}

uint64_t ResourceDashboard::GetCVM() const
{
    return m_cVM;
}

void ResourceDashboard::SetCVM(const uint64_t& _cVM)
{
    m_cVM = _cVM;
    m_cVMHasBeenSet = true;
}

bool ResourceDashboard::CVMHasBeenSet() const
{
    return m_cVMHasBeenSet;
}

uint64_t ResourceDashboard::GetLB() const
{
    return m_lB;
}

void ResourceDashboard::SetLB(const uint64_t& _lB)
{
    m_lB = _lB;
    m_lBHasBeenSet = true;
}

bool ResourceDashboard::LBHasBeenSet() const
{
    return m_lBHasBeenSet;
}

uint64_t ResourceDashboard::GetCDB() const
{
    return m_cDB;
}

void ResourceDashboard::SetCDB(const uint64_t& _cDB)
{
    m_cDB = _cDB;
    m_cDBHasBeenSet = true;
}

bool ResourceDashboard::CDBHasBeenSet() const
{
    return m_cDBHasBeenSet;
}

uint64_t ResourceDashboard::GetCmem() const
{
    return m_cmem;
}

void ResourceDashboard::SetCmem(const uint64_t& _cmem)
{
    m_cmem = _cmem;
    m_cmemHasBeenSet = true;
}

bool ResourceDashboard::CmemHasBeenSet() const
{
    return m_cmemHasBeenSet;
}

uint64_t ResourceDashboard::GetCTSDB() const
{
    return m_cTSDB;
}

void ResourceDashboard::SetCTSDB(const uint64_t& _cTSDB)
{
    m_cTSDB = _cTSDB;
    m_cTSDBHasBeenSet = true;
}

bool ResourceDashboard::CTSDBHasBeenSet() const
{
    return m_cTSDBHasBeenSet;
}

uint64_t ResourceDashboard::GetMariaDB() const
{
    return m_mariaDB;
}

void ResourceDashboard::SetMariaDB(const uint64_t& _mariaDB)
{
    m_mariaDB = _mariaDB;
    m_mariaDBHasBeenSet = true;
}

bool ResourceDashboard::MariaDBHasBeenSet() const
{
    return m_mariaDBHasBeenSet;
}

uint64_t ResourceDashboard::GetSQLServer() const
{
    return m_sQLServer;
}

void ResourceDashboard::SetSQLServer(const uint64_t& _sQLServer)
{
    m_sQLServer = _sQLServer;
    m_sQLServerHasBeenSet = true;
}

bool ResourceDashboard::SQLServerHasBeenSet() const
{
    return m_sQLServerHasBeenSet;
}

uint64_t ResourceDashboard::GetPostgres() const
{
    return m_postgres;
}

void ResourceDashboard::SetPostgres(const uint64_t& _postgres)
{
    m_postgres = _postgres;
    m_postgresHasBeenSet = true;
}

bool ResourceDashboard::PostgresHasBeenSet() const
{
    return m_postgresHasBeenSet;
}

uint64_t ResourceDashboard::GetNAS() const
{
    return m_nAS;
}

void ResourceDashboard::SetNAS(const uint64_t& _nAS)
{
    m_nAS = _nAS;
    m_nASHasBeenSet = true;
}

bool ResourceDashboard::NASHasBeenSet() const
{
    return m_nASHasBeenSet;
}

uint64_t ResourceDashboard::GetGreenplumn() const
{
    return m_greenplumn;
}

void ResourceDashboard::SetGreenplumn(const uint64_t& _greenplumn)
{
    m_greenplumn = _greenplumn;
    m_greenplumnHasBeenSet = true;
}

bool ResourceDashboard::GreenplumnHasBeenSet() const
{
    return m_greenplumnHasBeenSet;
}

uint64_t ResourceDashboard::GetCkafka() const
{
    return m_ckafka;
}

void ResourceDashboard::SetCkafka(const uint64_t& _ckafka)
{
    m_ckafka = _ckafka;
    m_ckafkaHasBeenSet = true;
}

bool ResourceDashboard::CkafkaHasBeenSet() const
{
    return m_ckafkaHasBeenSet;
}

uint64_t ResourceDashboard::GetGrocery() const
{
    return m_grocery;
}

void ResourceDashboard::SetGrocery(const uint64_t& _grocery)
{
    m_grocery = _grocery;
    m_groceryHasBeenSet = true;
}

bool ResourceDashboard::GroceryHasBeenSet() const
{
    return m_groceryHasBeenSet;
}

uint64_t ResourceDashboard::GetHSM() const
{
    return m_hSM;
}

void ResourceDashboard::SetHSM(const uint64_t& _hSM)
{
    m_hSM = _hSM;
    m_hSMHasBeenSet = true;
}

bool ResourceDashboard::HSMHasBeenSet() const
{
    return m_hSMHasBeenSet;
}

uint64_t ResourceDashboard::GetTcaplus() const
{
    return m_tcaplus;
}

void ResourceDashboard::SetTcaplus(const uint64_t& _tcaplus)
{
    m_tcaplus = _tcaplus;
    m_tcaplusHasBeenSet = true;
}

bool ResourceDashboard::TcaplusHasBeenSet() const
{
    return m_tcaplusHasBeenSet;
}

uint64_t ResourceDashboard::GetCnas() const
{
    return m_cnas;
}

void ResourceDashboard::SetCnas(const uint64_t& _cnas)
{
    m_cnas = _cnas;
    m_cnasHasBeenSet = true;
}

bool ResourceDashboard::CnasHasBeenSet() const
{
    return m_cnasHasBeenSet;
}

uint64_t ResourceDashboard::GetTiDB() const
{
    return m_tiDB;
}

void ResourceDashboard::SetTiDB(const uint64_t& _tiDB)
{
    m_tiDB = _tiDB;
    m_tiDBHasBeenSet = true;
}

bool ResourceDashboard::TiDBHasBeenSet() const
{
    return m_tiDBHasBeenSet;
}

uint64_t ResourceDashboard::GetEmr() const
{
    return m_emr;
}

void ResourceDashboard::SetEmr(const uint64_t& _emr)
{
    m_emr = _emr;
    m_emrHasBeenSet = true;
}

bool ResourceDashboard::EmrHasBeenSet() const
{
    return m_emrHasBeenSet;
}

uint64_t ResourceDashboard::GetSEAL() const
{
    return m_sEAL;
}

void ResourceDashboard::SetSEAL(const uint64_t& _sEAL)
{
    m_sEAL = _sEAL;
    m_sEALHasBeenSet = true;
}

bool ResourceDashboard::SEALHasBeenSet() const
{
    return m_sEALHasBeenSet;
}

uint64_t ResourceDashboard::GetCFS() const
{
    return m_cFS;
}

void ResourceDashboard::SetCFS(const uint64_t& _cFS)
{
    m_cFS = _cFS;
    m_cFSHasBeenSet = true;
}

bool ResourceDashboard::CFSHasBeenSet() const
{
    return m_cFSHasBeenSet;
}

uint64_t ResourceDashboard::GetOracle() const
{
    return m_oracle;
}

void ResourceDashboard::SetOracle(const uint64_t& _oracle)
{
    m_oracle = _oracle;
    m_oracleHasBeenSet = true;
}

bool ResourceDashboard::OracleHasBeenSet() const
{
    return m_oracleHasBeenSet;
}

uint64_t ResourceDashboard::GetElasticSearch() const
{
    return m_elasticSearch;
}

void ResourceDashboard::SetElasticSearch(const uint64_t& _elasticSearch)
{
    m_elasticSearch = _elasticSearch;
    m_elasticSearchHasBeenSet = true;
}

bool ResourceDashboard::ElasticSearchHasBeenSet() const
{
    return m_elasticSearchHasBeenSet;
}

uint64_t ResourceDashboard::GetTBaaS() const
{
    return m_tBaaS;
}

void ResourceDashboard::SetTBaaS(const uint64_t& _tBaaS)
{
    m_tBaaS = _tBaaS;
    m_tBaaSHasBeenSet = true;
}

bool ResourceDashboard::TBaaSHasBeenSet() const
{
    return m_tBaaSHasBeenSet;
}

uint64_t ResourceDashboard::GetItop() const
{
    return m_itop;
}

void ResourceDashboard::SetItop(const uint64_t& _itop)
{
    m_itop = _itop;
    m_itopHasBeenSet = true;
}

bool ResourceDashboard::ItopHasBeenSet() const
{
    return m_itopHasBeenSet;
}

uint64_t ResourceDashboard::GetDBAudit() const
{
    return m_dBAudit;
}

void ResourceDashboard::SetDBAudit(const uint64_t& _dBAudit)
{
    m_dBAudit = _dBAudit;
    m_dBAuditHasBeenSet = true;
}

bool ResourceDashboard::DBAuditHasBeenSet() const
{
    return m_dBAuditHasBeenSet;
}

uint64_t ResourceDashboard::GetCynosDBPostgres() const
{
    return m_cynosDBPostgres;
}

void ResourceDashboard::SetCynosDBPostgres(const uint64_t& _cynosDBPostgres)
{
    m_cynosDBPostgres = _cynosDBPostgres;
    m_cynosDBPostgresHasBeenSet = true;
}

bool ResourceDashboard::CynosDBPostgresHasBeenSet() const
{
    return m_cynosDBPostgresHasBeenSet;
}

uint64_t ResourceDashboard::GetRedis() const
{
    return m_redis;
}

void ResourceDashboard::SetRedis(const uint64_t& _redis)
{
    m_redis = _redis;
    m_redisHasBeenSet = true;
}

bool ResourceDashboard::RedisHasBeenSet() const
{
    return m_redisHasBeenSet;
}

uint64_t ResourceDashboard::GetMongoDB() const
{
    return m_mongoDB;
}

void ResourceDashboard::SetMongoDB(const uint64_t& _mongoDB)
{
    m_mongoDB = _mongoDB;
    m_mongoDBHasBeenSet = true;
}

bool ResourceDashboard::MongoDBHasBeenSet() const
{
    return m_mongoDBHasBeenSet;
}

uint64_t ResourceDashboard::GetDCDB() const
{
    return m_dCDB;
}

void ResourceDashboard::SetDCDB(const uint64_t& _dCDB)
{
    m_dCDB = _dCDB;
    m_dCDBHasBeenSet = true;
}

bool ResourceDashboard::DCDBHasBeenSet() const
{
    return m_dCDBHasBeenSet;
}

uint64_t ResourceDashboard::GetCynosDBMySQL() const
{
    return m_cynosDBMySQL;
}

void ResourceDashboard::SetCynosDBMySQL(const uint64_t& _cynosDBMySQL)
{
    m_cynosDBMySQL = _cynosDBMySQL;
    m_cynosDBMySQLHasBeenSet = true;
}

bool ResourceDashboard::CynosDBMySQLHasBeenSet() const
{
    return m_cynosDBMySQLHasBeenSet;
}

uint64_t ResourceDashboard::GetSubnet() const
{
    return m_subnet;
}

void ResourceDashboard::SetSubnet(const uint64_t& _subnet)
{
    m_subnet = _subnet;
    m_subnetHasBeenSet = true;
}

bool ResourceDashboard::SubnetHasBeenSet() const
{
    return m_subnetHasBeenSet;
}

uint64_t ResourceDashboard::GetRouteTable() const
{
    return m_routeTable;
}

void ResourceDashboard::SetRouteTable(const uint64_t& _routeTable)
{
    m_routeTable = _routeTable;
    m_routeTableHasBeenSet = true;
}

bool ResourceDashboard::RouteTableHasBeenSet() const
{
    return m_routeTableHasBeenSet;
}

