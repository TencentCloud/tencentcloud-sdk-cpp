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
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主实例数据保护方式，可能的返回值：0 - 异步复制方式，1 - 半同步复制方式，2 - 强同步复制方式。</p>
                     * @return ProtectMode <p>主实例数据保护方式，可能的返回值：0 - 异步复制方式，1 - 半同步复制方式，2 - 强同步复制方式。</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取<p>主实例部署方式，可能的返回值：0 - 单可用部署，1 - 多可用区部署。</p>
                     * @return DeployMode <p>主实例部署方式，可能的返回值：0 - 单可用部署，1 - 多可用区部署。</p>
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取<p>实例可用区信息，格式如 &quot;ap-shanghai-2&quot;。</p>
                     * @return Zone <p>实例可用区信息，格式如 &quot;ap-shanghai-2&quot;。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>备库的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaveConfig <p>备库的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SlaveConfig GetSlaveConfig() const;

                    /**
                     * 判断参数 SlaveConfig 是否已赋值
                     * @return SlaveConfig 是否已赋值
                     * 
                     */
                    bool SlaveConfigHasBeenSet() const;

                    /**
                     * 获取<p>强同步实例第二备库的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupConfig <p>强同步实例第二备库的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BackupConfig GetBackupConfig() const;

                    /**
                     * 判断参数 BackupConfig 是否已赋值
                     * @return BackupConfig 是否已赋值
                     * 
                     */
                    bool BackupConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否切换备库。</p>
                     * @return Switched <p>是否切换备库。</p>
                     * 
                     */
                    bool GetSwitched() const;

                    /**
                     * 判断参数 Switched 是否已赋值
                     * @return Switched 是否已赋值
                     * 
                     */
                    bool SwitchedHasBeenSet() const;

                private:

                    /**
                     * <p>主实例数据保护方式，可能的返回值：0 - 异步复制方式，1 - 半同步复制方式，2 - 强同步复制方式。</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>主实例部署方式，可能的返回值：0 - 单可用部署，1 - 多可用区部署。</p>
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>实例可用区信息，格式如 &quot;ap-shanghai-2&quot;。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>备库的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SlaveConfig m_slaveConfig;
                    bool m_slaveConfigHasBeenSet;

                    /**
                     * <p>强同步实例第二备库的配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BackupConfig m_backupConfig;
                    bool m_backupConfigHasBeenSet;

                    /**
                     * <p>是否切换备库。</p>
                     */
                    bool m_switched;
                    bool m_switchedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCECONFIGRESPONSE_H_
