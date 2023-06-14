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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEREMOTEBACKUPCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEREMOTEBACKUPCONFIGRESPONSE_H_

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
                * DescribeRemoteBackupConfig返回参数结构体
                */
                class DescribeRemoteBackupConfigResponse : public AbstractModel
                {
                public:
                    DescribeRemoteBackupConfigResponse();
                    ~DescribeRemoteBackupConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异地备份保留时间，单位为天
                     * @return ExpireDays 异地备份保留时间，单位为天
                     * 
                     */
                    int64_t GetExpireDays() const;

                    /**
                     * 判断参数 ExpireDays 是否已赋值
                     * @return ExpireDays 是否已赋值
                     * 
                     */
                    bool ExpireDaysHasBeenSet() const;

                    /**
                     * 获取异地数据备份开关，off - 关闭异地备份，on-开启异地备份
                     * @return RemoteBackupSave 异地数据备份开关，off - 关闭异地备份，on-开启异地备份
                     * 
                     */
                    std::string GetRemoteBackupSave() const;

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
                     * 判断参数 RemoteBinlogSave 是否已赋值
                     * @return RemoteBinlogSave 是否已赋值
                     * 
                     */
                    bool RemoteBinlogSaveHasBeenSet() const;

                    /**
                     * 获取用户已设置异地备份地域列表
                     * @return RemoteRegion 用户已设置异地备份地域列表
                     * 
                     */
                    std::vector<std::string> GetRemoteRegion() const;

                    /**
                     * 判断参数 RemoteRegion 是否已赋值
                     * @return RemoteRegion 是否已赋值
                     * 
                     */
                    bool RemoteRegionHasBeenSet() const;

                    /**
                     * 获取用户可设置异地备份地域列表
                     * @return RegionList 用户可设置异地备份地域列表
                     * 
                     */
                    std::vector<std::string> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * 异地备份保留时间，单位为天
                     */
                    int64_t m_expireDays;
                    bool m_expireDaysHasBeenSet;

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
                     * 用户已设置异地备份地域列表
                     */
                    std::vector<std::string> m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                    /**
                     * 用户可设置异地备份地域列表
                     */
                    std::vector<std::string> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEREMOTEBACKUPCONFIGRESPONSE_H_
