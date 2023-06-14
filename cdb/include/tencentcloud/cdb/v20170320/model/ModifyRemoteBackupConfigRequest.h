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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYREMOTEBACKUPCONFIGREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYREMOTEBACKUPCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyRemoteBackupConfig请求参数结构体
                */
                class ModifyRemoteBackupConfigRequest : public AbstractModel
                {
                public:
                    ModifyRemoteBackupConfigRequest();
                    ~ModifyRemoteBackupConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取异地数据备份开关，off - 关闭异地备份，on-开启异地备份
                     * @return RemoteBackupSave 异地数据备份开关，off - 关闭异地备份，on-开启异地备份
                     * 
                     */
                    std::string GetRemoteBackupSave() const;

                    /**
                     * 设置异地数据备份开关，off - 关闭异地备份，on-开启异地备份
                     * @param _remoteBackupSave 异地数据备份开关，off - 关闭异地备份，on-开启异地备份
                     * 
                     */
                    void SetRemoteBackupSave(const std::string& _remoteBackupSave);

                    /**
                     * 判断参数 RemoteBackupSave 是否已赋值
                     * @return RemoteBackupSave 是否已赋值
                     * 
                     */
                    bool RemoteBackupSaveHasBeenSet() const;

                    /**
                     * 获取异地日志备份开关，off - 关闭异地备份，on-开启异地备份，只有在参数RemoteBackupSave为on时，RemoteBinlogSave参数才可设置为on
                     * @return RemoteBinlogSave 异地日志备份开关，off - 关闭异地备份，on-开启异地备份，只有在参数RemoteBackupSave为on时，RemoteBinlogSave参数才可设置为on
                     * 
                     */
                    std::string GetRemoteBinlogSave() const;

                    /**
                     * 设置异地日志备份开关，off - 关闭异地备份，on-开启异地备份，只有在参数RemoteBackupSave为on时，RemoteBinlogSave参数才可设置为on
                     * @param _remoteBinlogSave 异地日志备份开关，off - 关闭异地备份，on-开启异地备份，只有在参数RemoteBackupSave为on时，RemoteBinlogSave参数才可设置为on
                     * 
                     */
                    void SetRemoteBinlogSave(const std::string& _remoteBinlogSave);

                    /**
                     * 判断参数 RemoteBinlogSave 是否已赋值
                     * @return RemoteBinlogSave 是否已赋值
                     * 
                     */
                    bool RemoteBinlogSaveHasBeenSet() const;

                    /**
                     * 获取用户设置异地备份地域列表
                     * @return RemoteRegion 用户设置异地备份地域列表
                     * 
                     */
                    std::vector<std::string> GetRemoteRegion() const;

                    /**
                     * 设置用户设置异地备份地域列表
                     * @param _remoteRegion 用户设置异地备份地域列表
                     * 
                     */
                    void SetRemoteRegion(const std::vector<std::string>& _remoteRegion);

                    /**
                     * 判断参数 RemoteRegion 是否已赋值
                     * @return RemoteRegion 是否已赋值
                     * 
                     */
                    bool RemoteRegionHasBeenSet() const;

                    /**
                     * 获取异地备份保留时间，单位为天
                     * @return ExpireDays 异地备份保留时间，单位为天
                     * 
                     */
                    int64_t GetExpireDays() const;

                    /**
                     * 设置异地备份保留时间，单位为天
                     * @param _expireDays 异地备份保留时间，单位为天
                     * 
                     */
                    void SetExpireDays(const int64_t& _expireDays);

                    /**
                     * 判断参数 ExpireDays 是否已赋值
                     * @return ExpireDays 是否已赋值
                     * 
                     */
                    bool ExpireDaysHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 异地数据备份开关，off - 关闭异地备份，on-开启异地备份
                     */
                    std::string m_remoteBackupSave;
                    bool m_remoteBackupSaveHasBeenSet;

                    /**
                     * 异地日志备份开关，off - 关闭异地备份，on-开启异地备份，只有在参数RemoteBackupSave为on时，RemoteBinlogSave参数才可设置为on
                     */
                    std::string m_remoteBinlogSave;
                    bool m_remoteBinlogSaveHasBeenSet;

                    /**
                     * 用户设置异地备份地域列表
                     */
                    std::vector<std::string> m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                    /**
                     * 异地备份保留时间，单位为天
                     */
                    int64_t m_expireDays;
                    bool m_expireDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYREMOTEBACKUPCONFIGREQUEST_H_
