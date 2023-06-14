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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBackupByFlowId返回参数结构体
                */
                class DescribeBackupByFlowIdResponse : public AbstractModel
                {
                public:
                    DescribeBackupByFlowIdResponse();
                    ~DescribeBackupByFlowIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份文件唯一标识，RestoreInstance接口会用到该字段，对于单库备份文件只返回第一条记录的备份文件唯一标识；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的可回档的ID
                     * @return Id 备份文件唯一标识，RestoreInstance接口会用到该字段，对于单库备份文件只返回第一条记录的备份文件唯一标识；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的可回档的ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取文件名，对于单库备份文件只返回第一条记录的文件名；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的文件名
                     * @return FileName 文件名，对于单库备份文件只返回第一条记录的文件名；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取备份任务名称，可自定义
                     * @return BackupName 备份任务名称，可自定义
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取备份开始时间
                     * @return StartTime 备份开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份结束时间
                     * @return EndTime 备份结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取文件大小，单位 KB，对于单库备份文件只返回第一条记录的文件大小；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的文件大小
                     * @return Size 文件大小，单位 KB，对于单库备份文件只返回第一条记录的文件大小；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的文件大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取备份策略，0-实例备份；1-多库备份；实例状态是0-创建中时，该字段为默认值0，无实际意义
                     * @return Strategy 备份策略，0-实例备份；1-多库备份；实例状态是0-创建中时，该字段为默认值0，无实际意义
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取备份文件状态，0-创建中；1-成功；2-失败
                     * @return Status 备份文件状态，0-创建中；1-成功；2-失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备份方式，0-定时备份；1-手动临时备份；实例状态是0-创建中时，该字段为默认值0，无实际意义
                     * @return BackupWay 备份方式，0-定时备份；1-手动临时备份；实例状态是0-创建中时，该字段为默认值0，无实际意义
                     * 
                     */
                    int64_t GetBackupWay() const;

                    /**
                     * 判断参数 BackupWay 是否已赋值
                     * @return BackupWay 是否已赋值
                     * 
                     */
                    bool BackupWayHasBeenSet() const;

                    /**
                     * 获取DB列表，对于单库备份文件只返回第一条记录包含的库名；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的库名。
                     * @return DBs DB列表，对于单库备份文件只返回第一条记录包含的库名；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的库名。
                     * 
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     * 
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取内网下载地址，对于单库备份文件只返回第一条记录的内网下载地址；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的下载地址
                     * @return InternalAddr 内网下载地址，对于单库备份文件只返回第一条记录的内网下载地址；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的下载地址
                     * 
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     * 
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取外网下载地址，对于单库备份文件只返回第一条记录的外网下载地址；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的下载地址
                     * @return ExternalAddr 外网下载地址，对于单库备份文件只返回第一条记录的外网下载地址；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的下载地址
                     * 
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     * 
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取聚合Id，对于打包备份文件不返回此值。通过此值调用DescribeBackupFiles接口，获取单库备份文件的详细信息
                     * @return GroupId 聚合Id，对于打包备份文件不返回此值。通过此值调用DescribeBackupFiles接口，获取单库备份文件的详细信息
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 备份文件唯一标识，RestoreInstance接口会用到该字段，对于单库备份文件只返回第一条记录的备份文件唯一标识；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的可回档的ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 文件名，对于单库备份文件只返回第一条记录的文件名；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 备份任务名称，可自定义
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 备份开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 文件大小，单位 KB，对于单库备份文件只返回第一条记录的文件大小；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的文件大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 备份策略，0-实例备份；1-多库备份；实例状态是0-创建中时，该字段为默认值0，无实际意义
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 备份文件状态，0-创建中；1-成功；2-失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份方式，0-定时备份；1-手动临时备份；实例状态是0-创建中时，该字段为默认值0，无实际意义
                     */
                    int64_t m_backupWay;
                    bool m_backupWayHasBeenSet;

                    /**
                     * DB列表，对于单库备份文件只返回第一条记录包含的库名；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的库名。
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * 内网下载地址，对于单库备份文件只返回第一条记录的内网下载地址；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的下载地址
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * 外网下载地址，对于单库备份文件只返回第一条记录的外网下载地址；单库备份文件需要通过DescribeBackupFiles接口获取全部记录的下载地址
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * 聚合Id，对于打包备份文件不返回此值。通过此值调用DescribeBackupFiles接口，获取单库备份文件的详细信息
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDRESPONSE_H_
