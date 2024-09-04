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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RemoteBackupInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 二进制日志信息
                */
                class BinlogInfo : public AbstractModel
                {
                public:
                    BinlogInfo();
                    ~BinlogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取binlog 日志备份文件名
                     * @return Name binlog 日志备份文件名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置binlog 日志备份文件名
                     * @param _name binlog 日志备份文件名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取备份文件大小，单位：Byte
                     * @return Size 备份文件大小，单位：Byte
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置备份文件大小，单位：Byte
                     * @param _size 备份文件大小，单位：Byte
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取文件存储时间，时间格式：2016-03-17 02:10:37
                     * @return Date 文件存储时间，时间格式：2016-03-17 02:10:37
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置文件存储时间，时间格式：2016-03-17 02:10:37
                     * @param _date 文件存储时间，时间格式：2016-03-17 02:10:37
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return IntranetUrl 下载地址
                     * 
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置下载地址
                     * @param _intranetUrl 下载地址
                     * 
                     */
                    void SetIntranetUrl(const std::string& _intranetUrl);

                    /**
                     * 判断参数 IntranetUrl 是否已赋值
                     * @return IntranetUrl 是否已赋值
                     * 
                     */
                    bool IntranetUrlHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return InternetUrl 下载地址
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置下载地址
                     * @param _internetUrl 下载地址
                     * 
                     */
                    void SetInternetUrl(const std::string& _internetUrl);

                    /**
                     * 判断参数 InternetUrl 是否已赋值
                     * @return InternetUrl 是否已赋值
                     * 
                     */
                    bool InternetUrlHasBeenSet() const;

                    /**
                     * 获取日志具体类型，可能的值有：binlog - 二进制日志
                     * @return Type 日志具体类型，可能的值有：binlog - 二进制日志
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置日志具体类型，可能的值有：binlog - 二进制日志
                     * @param _type 日志具体类型，可能的值有：binlog - 二进制日志
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取binlog 文件起始时间
                     * @return BinlogStartTime binlog 文件起始时间
                     * 
                     */
                    std::string GetBinlogStartTime() const;

                    /**
                     * 设置binlog 文件起始时间
                     * @param _binlogStartTime binlog 文件起始时间
                     * 
                     */
                    void SetBinlogStartTime(const std::string& _binlogStartTime);

                    /**
                     * 判断参数 BinlogStartTime 是否已赋值
                     * @return BinlogStartTime 是否已赋值
                     * 
                     */
                    bool BinlogStartTimeHasBeenSet() const;

                    /**
                     * 获取binlog 文件截止时间
                     * @return BinlogFinishTime binlog 文件截止时间
                     * 
                     */
                    std::string GetBinlogFinishTime() const;

                    /**
                     * 设置binlog 文件截止时间
                     * @param _binlogFinishTime binlog 文件截止时间
                     * 
                     */
                    void SetBinlogFinishTime(const std::string& _binlogFinishTime);

                    /**
                     * 判断参数 BinlogFinishTime 是否已赋值
                     * @return BinlogFinishTime 是否已赋值
                     * 
                     */
                    bool BinlogFinishTimeHasBeenSet() const;

                    /**
                     * 获取本地binlog文件所在地域
                     * @return Region 本地binlog文件所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置本地binlog文件所在地域
                     * @param _region 本地binlog文件所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * @return Status 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * @param _status 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取binlog异地备份详细信息
                     * @return RemoteInfo binlog异地备份详细信息
                     * 
                     */
                    std::vector<RemoteBackupInfo> GetRemoteInfo() const;

                    /**
                     * 设置binlog异地备份详细信息
                     * @param _remoteInfo binlog异地备份详细信息
                     * 
                     */
                    void SetRemoteInfo(const std::vector<RemoteBackupInfo>& _remoteInfo);

                    /**
                     * 判断参数 RemoteInfo 是否已赋值
                     * @return RemoteInfo 是否已赋值
                     * 
                     */
                    bool RemoteInfoHasBeenSet() const;

                    /**
                     * 获取存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     * @return CosStorageType 存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     * 
                     */
                    int64_t GetCosStorageType() const;

                    /**
                     * 设置存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     * @param _cosStorageType 存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     * 
                     */
                    void SetCosStorageType(const int64_t& _cosStorageType);

                    /**
                     * 判断参数 CosStorageType 是否已赋值
                     * @return CosStorageType 是否已赋值
                     * 
                     */
                    bool CosStorageTypeHasBeenSet() const;

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

                private:

                    /**
                     * binlog 日志备份文件名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备份文件大小，单位：Byte
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 文件存储时间，时间格式：2016-03-17 02:10:37
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
                     * 日志具体类型，可能的值有：binlog - 二进制日志
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * binlog 文件起始时间
                     */
                    std::string m_binlogStartTime;
                    bool m_binlogStartTimeHasBeenSet;

                    /**
                     * binlog 文件截止时间
                     */
                    std::string m_binlogFinishTime;
                    bool m_binlogFinishTimeHasBeenSet;

                    /**
                     * 本地binlog文件所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * binlog异地备份详细信息
                     */
                    std::vector<RemoteBackupInfo> m_remoteInfo;
                    bool m_remoteInfoHasBeenSet;

                    /**
                     * 存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0
                     */
                    int64_t m_cosStorageType;
                    bool m_cosStorageTypeHasBeenSet;

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_
