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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 备份详细信息
                */
                class BackupInfo : public AbstractModel
                {
                public:
                    BackupInfo();
                    ~BackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份文件名
                     * @return Name 备份文件名
                     */
                    std::string GetName() const;

                    /**
                     * 设置备份文件名
                     * @param Name 备份文件名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取备份文件大小，单位：Byte
                     * @return Size 备份文件大小，单位：Byte
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置备份文件大小，单位：Byte
                     * @param Size 备份文件大小，单位：Byte
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取备份快照时间，时间格式：2016-03-17 02:10:37
                     * @return Date 备份快照时间，时间格式：2016-03-17 02:10:37
                     */
                    std::string GetDate() const;

                    /**
                     * 设置备份快照时间，时间格式：2016-03-17 02:10:37
                     * @param Date 备份快照时间，时间格式：2016-03-17 02:10:37
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return IntranetUrl 下载地址
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置下载地址
                     * @param IntranetUrl 下载地址
                     */
                    void SetIntranetUrl(const std::string& _intranetUrl);

                    /**
                     * 判断参数 IntranetUrl 是否已赋值
                     * @return IntranetUrl 是否已赋值
                     */
                    bool IntranetUrlHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return InternetUrl 下载地址
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置下载地址
                     * @param InternetUrl 下载地址
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     * @return Type 日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     */
                    std::string GetType() const;

                    /**
                     * 设置日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     * @param Type 日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取备份子任务的ID，删除备份文件时使用
                     * @return BackupId 备份子任务的ID，删除备份文件时使用
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置备份子任务的ID，删除备份文件时使用
                     * @param BackupId 备份子任务的ID，删除备份文件时使用
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * @return Status 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * @param Status 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备份任务的完成时间
                     * @return FinishTime 备份任务的完成时间
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置备份任务的完成时间
                     * @param FinishTime 备份任务的完成时间
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     * @return Creator （该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置（该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     * @param Creator （该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取备份任务的开始时间
                     * @return StartTime 备份任务的开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份任务的开始时间
                     * @param StartTime 备份任务的开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     * @return Method 备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     * @param Method 备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     * @return Way 备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     */
                    std::string GetWay() const;

                    /**
                     * 设置备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     * @param Way 备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     */
                    void SetWay(const std::string& _way);

                    /**
                     * 判断参数 Way 是否已赋值
                     * @return Way 是否已赋值
                     */
                    bool WayHasBeenSet() const;

                    /**
                     * 获取手动备份别名
                     * @return ManualBackupName 手动备份别名
                     */
                    std::string GetManualBackupName() const;

                    /**
                     * 设置手动备份别名
                     * @param ManualBackupName 手动备份别名
                     */
                    void SetManualBackupName(const std::string& _manualBackupName);

                    /**
                     * 判断参数 ManualBackupName 是否已赋值
                     * @return ManualBackupName 是否已赋值
                     */
                    bool ManualBackupNameHasBeenSet() const;

                private:

                    /**
                     * 备份文件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备份文件大小，单位：Byte
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 备份快照时间，时间格式：2016-03-17 02:10:37
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * 日志具体类型。可能的值有 "logical": 逻辑冷备， "physical": 物理冷备。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 备份子任务的ID，删除备份文件时使用
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备份任务的完成时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * （该值将废弃，不建议使用）备份的创建者，可能的值：SYSTEM - 系统创建，Uin - 发起者Uin值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 备份任务的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份方法。可能的值有 "full": 全量备份， "partial": 部分备份。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 备份方式。可能的值有 "manual": 手动备份， "automatic": 自动备份。
                     */
                    std::string m_way;
                    bool m_wayHasBeenSet;

                    /**
                     * 手动备份别名
                     */
                    std::string m_manualBackupName;
                    bool m_manualBackupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BACKUPINFO_H_
