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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CONNECTIONCONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CONNECTIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MysqlConnection.h>
#include <tencentcloud/dlc/v20210125/model/HiveConnection.h>
#include <tencentcloud/dlc/v20210125/model/DorisConnection.h>
#include <tencentcloud/dlc/v20210125/model/VolumeConnection.h>
#include <tencentcloud/dlc/v20210125/model/LakeHouseConnection.h>
#include <tencentcloud/dlc/v20210125/model/PostgreSQLConnection.h>
#include <tencentcloud/dlc/v20210125/model/DlcConnection.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc链接信息
                */
                class ConnectionConfig : public AbstractModel
                {
                public:
                    ConnectionConfig();
                    ~ConnectionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>mysql数据源连接信息</p>
                     * @return MysqlConnection <p>mysql数据源连接信息</p>
                     * 
                     */
                    MysqlConnection GetMysqlConnection() const;

                    /**
                     * 设置<p>mysql数据源连接信息</p>
                     * @param _mysqlConnection <p>mysql数据源连接信息</p>
                     * 
                     */
                    void SetMysqlConnection(const MysqlConnection& _mysqlConnection);

                    /**
                     * 判断参数 MysqlConnection 是否已赋值
                     * @return MysqlConnection 是否已赋值
                     * 
                     */
                    bool MysqlConnectionHasBeenSet() const;

                    /**
                     * 获取<p>hive数据源连接信息</p>
                     * @return EmrHiveConnection <p>hive数据源连接信息</p>
                     * 
                     */
                    HiveConnection GetEmrHiveConnection() const;

                    /**
                     * 设置<p>hive数据源连接信息</p>
                     * @param _emrHiveConnection <p>hive数据源连接信息</p>
                     * 
                     */
                    void SetEmrHiveConnection(const HiveConnection& _emrHiveConnection);

                    /**
                     * 判断参数 EmrHiveConnection 是否已赋值
                     * @return EmrHiveConnection 是否已赋值
                     * 
                     */
                    bool EmrHiveConnectionHasBeenSet() const;

                    /**
                     * 获取<p>doris数据源连接信息</p>
                     * @return TCHouseDConnection <p>doris数据源连接信息</p>
                     * 
                     */
                    DorisConnection GetTCHouseDConnection() const;

                    /**
                     * 设置<p>doris数据源连接信息</p>
                     * @param _tCHouseDConnection <p>doris数据源连接信息</p>
                     * 
                     */
                    void SetTCHouseDConnection(const DorisConnection& _tCHouseDConnection);

                    /**
                     * 判断参数 TCHouseDConnection 是否已赋值
                     * @return TCHouseDConnection 是否已赋值
                     * 
                     */
                    bool TCHouseDConnectionHasBeenSet() const;

                    /**
                     * 获取<p>数据卷连接信息</p>
                     * @return VolumeConnection <p>数据卷连接信息</p>
                     * 
                     */
                    VolumeConnection GetVolumeConnection() const;

                    /**
                     * 设置<p>数据卷连接信息</p>
                     * @param _volumeConnection <p>数据卷连接信息</p>
                     * 
                     */
                    void SetVolumeConnection(const VolumeConnection& _volumeConnection);

                    /**
                     * 判断参数 VolumeConnection 是否已赋值
                     * @return VolumeConnection 是否已赋值
                     * 
                     */
                    bool VolumeConnectionHasBeenSet() const;

                    /**
                     * 获取<p>lakehouse连接信息</p>
                     * @return LakeHouseConnection <p>lakehouse连接信息</p>
                     * 
                     */
                    LakeHouseConnection GetLakeHouseConnection() const;

                    /**
                     * 设置<p>lakehouse连接信息</p>
                     * @param _lakeHouseConnection <p>lakehouse连接信息</p>
                     * 
                     */
                    void SetLakeHouseConnection(const LakeHouseConnection& _lakeHouseConnection);

                    /**
                     * 判断参数 LakeHouseConnection 是否已赋值
                     * @return LakeHouseConnection 是否已赋值
                     * 
                     */
                    bool LakeHouseConnectionHasBeenSet() const;

                    /**
                     * 获取<p>PostgreSQL数据源连接信息</p>
                     * @return PostgreSQLConnection <p>PostgreSQL数据源连接信息</p>
                     * 
                     */
                    PostgreSQLConnection GetPostgreSQLConnection() const;

                    /**
                     * 设置<p>PostgreSQL数据源连接信息</p>
                     * @param _postgreSQLConnection <p>PostgreSQL数据源连接信息</p>
                     * 
                     */
                    void SetPostgreSQLConnection(const PostgreSQLConnection& _postgreSQLConnection);

                    /**
                     * 判断参数 PostgreSQLConnection 是否已赋值
                     * @return PostgreSQLConnection 是否已赋值
                     * 
                     */
                    bool PostgreSQLConnectionHasBeenSet() const;

                    /**
                     * 获取<p>dlc数据源连接信息</p>
                     * @return DlcConnection <p>dlc数据源连接信息</p>
                     * 
                     */
                    DlcConnection GetDlcConnection() const;

                    /**
                     * 设置<p>dlc数据源连接信息</p>
                     * @param _dlcConnection <p>dlc数据源连接信息</p>
                     * 
                     */
                    void SetDlcConnection(const DlcConnection& _dlcConnection);

                    /**
                     * 判断参数 DlcConnection 是否已赋值
                     * @return DlcConnection 是否已赋值
                     * 
                     */
                    bool DlcConnectionHasBeenSet() const;

                private:

                    /**
                     * <p>mysql数据源连接信息</p>
                     */
                    MysqlConnection m_mysqlConnection;
                    bool m_mysqlConnectionHasBeenSet;

                    /**
                     * <p>hive数据源连接信息</p>
                     */
                    HiveConnection m_emrHiveConnection;
                    bool m_emrHiveConnectionHasBeenSet;

                    /**
                     * <p>doris数据源连接信息</p>
                     */
                    DorisConnection m_tCHouseDConnection;
                    bool m_tCHouseDConnectionHasBeenSet;

                    /**
                     * <p>数据卷连接信息</p>
                     */
                    VolumeConnection m_volumeConnection;
                    bool m_volumeConnectionHasBeenSet;

                    /**
                     * <p>lakehouse连接信息</p>
                     */
                    LakeHouseConnection m_lakeHouseConnection;
                    bool m_lakeHouseConnectionHasBeenSet;

                    /**
                     * <p>PostgreSQL数据源连接信息</p>
                     */
                    PostgreSQLConnection m_postgreSQLConnection;
                    bool m_postgreSQLConnectionHasBeenSet;

                    /**
                     * <p>dlc数据源连接信息</p>
                     */
                    DlcConnection m_dlcConnection;
                    bool m_dlcConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CONNECTIONCONFIG_H_
