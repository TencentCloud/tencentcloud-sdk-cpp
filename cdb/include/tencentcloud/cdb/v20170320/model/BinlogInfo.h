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
                     * 获取<p>binlog 日志备份文件名</p>
                     * @return Name <p>binlog 日志备份文件名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>binlog 日志备份文件名</p>
                     * @param _name <p>binlog 日志备份文件名</p>
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
                     * 获取<p>备份文件大小，单位：Byte</p>
                     * @return Size <p>备份文件大小，单位：Byte</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>备份文件大小，单位：Byte</p>
                     * @param _size <p>备份文件大小，单位：Byte</p>
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
                     * 获取<p>文件存储时间，时间格式：2016-03-17 02:10:37</p>
                     * @return Date <p>文件存储时间，时间格式：2016-03-17 02:10:37</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>文件存储时间，时间格式：2016-03-17 02:10:37</p>
                     * @param _date <p>文件存储时间，时间格式：2016-03-17 02:10:37</p>
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
                     * 获取<p>下载地址<br>说明：此下载地址和参数 InternetUrl 的下载地址一样。</p>
                     * @return IntranetUrl <p>下载地址<br>说明：此下载地址和参数 InternetUrl 的下载地址一样。</p>
                     * 
                     */
                    std::string GetIntranetUrl() const;

                    /**
                     * 设置<p>下载地址<br>说明：此下载地址和参数 InternetUrl 的下载地址一样。</p>
                     * @param _intranetUrl <p>下载地址<br>说明：此下载地址和参数 InternetUrl 的下载地址一样。</p>
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
                     * 获取<p>下载地址<br>说明：此下载地址和参数 IntranetUrl 的下载地址一样。</p>
                     * @return InternetUrl <p>下载地址<br>说明：此下载地址和参数 IntranetUrl 的下载地址一样。</p>
                     * 
                     */
                    std::string GetInternetUrl() const;

                    /**
                     * 设置<p>下载地址<br>说明：此下载地址和参数 IntranetUrl 的下载地址一样。</p>
                     * @param _internetUrl <p>下载地址<br>说明：此下载地址和参数 IntranetUrl 的下载地址一样。</p>
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
                     * 获取<p>日志具体类型，可能的值有：binlog - 二进制日志</p>
                     * @return Type <p>日志具体类型，可能的值有：binlog - 二进制日志</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>日志具体类型，可能的值有：binlog - 二进制日志</p>
                     * @param _type <p>日志具体类型，可能的值有：binlog - 二进制日志</p>
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
                     * 获取<p>binlog 文件起始时间</p>
                     * @return BinlogStartTime <p>binlog 文件起始时间</p>
                     * 
                     */
                    std::string GetBinlogStartTime() const;

                    /**
                     * 设置<p>binlog 文件起始时间</p>
                     * @param _binlogStartTime <p>binlog 文件起始时间</p>
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
                     * 获取<p>binlog 文件截止时间</p>
                     * @return BinlogFinishTime <p>binlog 文件截止时间</p>
                     * 
                     */
                    std::string GetBinlogFinishTime() const;

                    /**
                     * 设置<p>binlog 文件截止时间</p>
                     * @param _binlogFinishTime <p>binlog 文件截止时间</p>
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
                     * 获取<p>本地binlog文件所在地域</p>
                     * @return Region <p>本地binlog文件所在地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>本地binlog文件所在地域</p>
                     * @param _region <p>本地binlog文件所在地域</p>
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
                     * 获取<p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
                     * @return Status <p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
                     * @param _status <p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
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
                     * 获取<p>binlog异地备份详细信息</p>
                     * @return RemoteInfo <p>binlog异地备份详细信息</p>
                     * 
                     */
                    std::vector<RemoteBackupInfo> GetRemoteInfo() const;

                    /**
                     * 设置<p>binlog异地备份详细信息</p>
                     * @param _remoteInfo <p>binlog异地备份详细信息</p>
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
                     * 获取<p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
                     * @return CosStorageType <p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
                     * 
                     */
                    int64_t GetCosStorageType() const;

                    /**
                     * 设置<p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
                     * @param _cosStorageType <p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
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
                     * 获取<p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @return InstanceId <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @deprecated
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @param _instanceId <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     * @deprecated
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>备份完成进度</p>
                     * @return Progress <p>备份完成进度</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>备份完成进度</p>
                     * @param _progress <p>备份完成进度</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * <p>binlog 日志备份文件名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>备份文件大小，单位：Byte</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>文件存储时间，时间格式：2016-03-17 02:10:37</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>下载地址<br>说明：此下载地址和参数 InternetUrl 的下载地址一样。</p>
                     */
                    std::string m_intranetUrl;
                    bool m_intranetUrlHasBeenSet;

                    /**
                     * <p>下载地址<br>说明：此下载地址和参数 IntranetUrl 的下载地址一样。</p>
                     */
                    std::string m_internetUrl;
                    bool m_internetUrlHasBeenSet;

                    /**
                     * <p>日志具体类型，可能的值有：binlog - 二进制日志</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>binlog 文件起始时间</p>
                     */
                    std::string m_binlogStartTime;
                    bool m_binlogStartTimeHasBeenSet;

                    /**
                     * <p>binlog 文件截止时间</p>
                     */
                    std::string m_binlogFinishTime;
                    bool m_binlogFinishTimeHasBeenSet;

                    /**
                     * <p>本地binlog文件所在地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>备份任务状态。可能的值有 &quot;SUCCESS&quot;: 备份成功， &quot;FAILED&quot;: 备份失败， &quot;RUNNING&quot;: 备份进行中。</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>binlog异地备份详细信息</p>
                     */
                    std::vector<RemoteBackupInfo> m_remoteInfo;
                    bool m_remoteInfoHasBeenSet;

                    /**
                     * <p>存储方式，0-常规存储，1-归档存储，2-标准存储，默认为0</p>
                     */
                    int64_t m_cosStorageType;
                    bool m_cosStorageTypeHasBeenSet;

                    /**
                     * <p>实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>备份完成进度</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_BINLOGINFO_H_
