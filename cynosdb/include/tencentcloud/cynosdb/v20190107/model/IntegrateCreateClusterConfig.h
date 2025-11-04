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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATECREATECLUSTERCONFIG_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATECREATECLUSTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyEndPointConfigInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 集成集群配置
                */
                class IntegrateCreateClusterConfig : public AbstractModel
                {
                public:
                    IntegrateCreateClusterConfig();
                    ~IntegrateCreateClusterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取binlog保留天数[7,1830]
                     * @return BinlogSaveDays binlog保留天数[7,1830]
                     * 
                     */
                    int64_t GetBinlogSaveDays() const;

                    /**
                     * 设置binlog保留天数[7,1830]
                     * @param _binlogSaveDays binlog保留天数[7,1830]
                     * 
                     */
                    void SetBinlogSaveDays(const int64_t& _binlogSaveDays);

                    /**
                     * 判断参数 BinlogSaveDays 是否已赋值
                     * @return BinlogSaveDays 是否已赋值
                     * 
                     */
                    bool BinlogSaveDaysHasBeenSet() const;

                    /**
                     * 获取备份保留天数[7,1830]
                     * @return BackupSaveDays 备份保留天数[7,1830]
                     * 
                     */
                    int64_t GetBackupSaveDays() const;

                    /**
                     * 设置备份保留天数[7,1830]
                     * @param _backupSaveDays 备份保留天数[7,1830]
                     * 
                     */
                    void SetBackupSaveDays(const int64_t& _backupSaveDays);

                    /**
                     * 判断参数 BackupSaveDays 是否已赋值
                     * @return BackupSaveDays 是否已赋值
                     * 
                     */
                    bool BackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取半同步超时时间[1000,4294967295]
                     * @return SemiSyncTimeout 半同步超时时间[1000,4294967295]
                     * 
                     */
                    int64_t GetSemiSyncTimeout() const;

                    /**
                     * 设置半同步超时时间[1000,4294967295]
                     * @param _semiSyncTimeout 半同步超时时间[1000,4294967295]
                     * 
                     */
                    void SetSemiSyncTimeout(const int64_t& _semiSyncTimeout);

                    /**
                     * 判断参数 SemiSyncTimeout 是否已赋值
                     * @return SemiSyncTimeout 是否已赋值
                     * 
                     */
                    bool SemiSyncTimeoutHasBeenSet() const;

                    /**
                     * 获取proxy连接地址配置信息
                     * @return ProxyEndPointConfigs proxy连接地址配置信息
                     * 
                     */
                    std::vector<ProxyEndPointConfigInfo> GetProxyEndPointConfigs() const;

                    /**
                     * 设置proxy连接地址配置信息
                     * @param _proxyEndPointConfigs proxy连接地址配置信息
                     * 
                     */
                    void SetProxyEndPointConfigs(const std::vector<ProxyEndPointConfigInfo>& _proxyEndPointConfigs);

                    /**
                     * 判断参数 ProxyEndPointConfigs 是否已赋值
                     * @return ProxyEndPointConfigs 是否已赋值
                     * 
                     */
                    bool ProxyEndPointConfigsHasBeenSet() const;

                private:

                    /**
                     * binlog保留天数[7,1830]
                     */
                    int64_t m_binlogSaveDays;
                    bool m_binlogSaveDaysHasBeenSet;

                    /**
                     * 备份保留天数[7,1830]
                     */
                    int64_t m_backupSaveDays;
                    bool m_backupSaveDaysHasBeenSet;

                    /**
                     * 半同步超时时间[1000,4294967295]
                     */
                    int64_t m_semiSyncTimeout;
                    bool m_semiSyncTimeoutHasBeenSet;

                    /**
                     * proxy连接地址配置信息
                     */
                    std::vector<ProxyEndPointConfigInfo> m_proxyEndPointConfigs;
                    bool m_proxyEndPointConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INTEGRATECREATECLUSTERCONFIG_H_
