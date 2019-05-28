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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCECONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/SlaveConfig.h>
#include <tencentcloud/cdb/v20170320/model/BackupConfig.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceConfig返回参数结构体
                */
                class DescribeDBInstanceConfigResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceConfigResponse();
                    ~DescribeDBInstanceConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取主库数据保护方式，主实例属性，可能的返回值：0-异步复制方式，1-半同步复制方式，2-强同步复制方式。
                     * @return ProtectMode 主库数据保护方式，主实例属性，可能的返回值：0-异步复制方式，1-半同步复制方式，2-强同步复制方式。
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取主库部署方式，主实例属性，可能的返回值：0-单可用部署，1-多可用区部署。
                     * @return DeployMode 主库部署方式，主实例属性，可能的返回值：0-单可用部署，1-多可用区部署。
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取主库可用区的正式名称，如ap-shanghai-1。
                     * @return Zone 主库可用区的正式名称，如ap-shanghai-1。
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取从库的配置信息。
                     * @return SlaveConfig 从库的配置信息。
                     */
                    SlaveConfig GetSlaveConfig() const;

                    /**
                     * 判断参数 SlaveConfig 是否已赋值
                     * @return SlaveConfig 是否已赋值
                     */
                    bool SlaveConfigHasBeenSet() const;

                    /**
                     * 获取ECDB第二个从库的配置信息，只有ECDB实例才有这个字段。
                     * @return BackupConfig ECDB第二个从库的配置信息，只有ECDB实例才有这个字段。
                     */
                    BackupConfig GetBackupConfig() const;

                    /**
                     * 判断参数 BackupConfig 是否已赋值
                     * @return BackupConfig 是否已赋值
                     */
                    bool BackupConfigHasBeenSet() const;

                private:

                    /**
                     * 主库数据保护方式，主实例属性，可能的返回值：0-异步复制方式，1-半同步复制方式，2-强同步复制方式。
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * 主库部署方式，主实例属性，可能的返回值：0-单可用部署，1-多可用区部署。
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 主库可用区的正式名称，如ap-shanghai-1。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 从库的配置信息。
                     */
                    SlaveConfig m_slaveConfig;
                    bool m_slaveConfigHasBeenSet;

                    /**
                     * ECDB第二个从库的配置信息，只有ECDB实例才有这个字段。
                     */
                    BackupConfig m_backupConfig;
                    bool m_backupConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCECONFIGRESPONSE_H_
