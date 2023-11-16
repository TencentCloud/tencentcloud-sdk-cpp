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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SUMMARYDETAILRES_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SUMMARYDETAILRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 备份概览实时统计项
                */
                class SummaryDetailRes : public AbstractModel
                {
                public:
                    SummaryDetailRes();
                    ~SummaryDetailRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域标识
                     * @return RegionId 地域标识
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域标识
                     * @param _regionId 地域标识
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取实例状态。1：申请中2：运行中3：受限运行中 (主备切换中)4：已隔离5：回收中6：已回收7：任务执行中 (实例做备份、回档等操作)8：已下线9：实例扩容中10：实例迁移中
                     * @return Status 实例状态。1：申请中2：运行中3：受限运行中 (主备切换中)4：已隔离5：回收中6：已回收7：任务执行中 (实例做备份、回档等操作)8：已下线9：实例扩容中10：实例迁移中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态。1：申请中2：运行中3：受限运行中 (主备切换中)4：已隔离5：回收中6：已回收7：任务执行中 (实例做备份、回档等操作)8：已下线9：实例扩容中10：实例迁移中
                     * @param _status 实例状态。1：申请中2：运行中3：受限运行中 (主备切换中)4：已隔离5：回收中6：已回收7：任务执行中 (实例做备份、回档等操作)8：已下线9：实例扩容中10：实例迁移中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例名称
                     * @return Name 实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param _name 实例名称
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
                     * 获取备份空间
                     * @return ActualUsedSpace 备份空间
                     * 
                     */
                    uint64_t GetActualUsedSpace() const;

                    /**
                     * 设置备份空间
                     * @param _actualUsedSpace 备份空间
                     * 
                     */
                    void SetActualUsedSpace(const uint64_t& _actualUsedSpace);

                    /**
                     * 判断参数 ActualUsedSpace 是否已赋值
                     * @return ActualUsedSpace 是否已赋值
                     * 
                     */
                    bool ActualUsedSpaceHasBeenSet() const;

                    /**
                     * 获取数据备份空间
                     * @return DataBackupSpace 数据备份空间
                     * 
                     */
                    uint64_t GetDataBackupSpace() const;

                    /**
                     * 设置数据备份空间
                     * @param _dataBackupSpace 数据备份空间
                     * 
                     */
                    void SetDataBackupSpace(const uint64_t& _dataBackupSpace);

                    /**
                     * 判断参数 DataBackupSpace 是否已赋值
                     * @return DataBackupSpace 是否已赋值
                     * 
                     */
                    bool DataBackupSpaceHasBeenSet() const;

                    /**
                     * 获取数据备份文件总个数
                     * @return DataBackupCount 数据备份文件总个数
                     * 
                     */
                    uint64_t GetDataBackupCount() const;

                    /**
                     * 设置数据备份文件总个数
                     * @param _dataBackupCount 数据备份文件总个数
                     * 
                     */
                    void SetDataBackupCount(const uint64_t& _dataBackupCount);

                    /**
                     * 判断参数 DataBackupCount 是否已赋值
                     * @return DataBackupCount 是否已赋值
                     * 
                     */
                    bool DataBackupCountHasBeenSet() const;

                    /**
                     * 获取日志备份空间
                     * @return LogBackupSpace 日志备份空间
                     * 
                     */
                    uint64_t GetLogBackupSpace() const;

                    /**
                     * 设置日志备份空间
                     * @param _logBackupSpace 日志备份空间
                     * 
                     */
                    void SetLogBackupSpace(const uint64_t& _logBackupSpace);

                    /**
                     * 判断参数 LogBackupSpace 是否已赋值
                     * @return LogBackupSpace 是否已赋值
                     * 
                     */
                    bool LogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取日志备份文件总个数
                     * @return LogBackupCount 日志备份文件总个数
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 设置日志备份文件总个数
                     * @param _logBackupCount 日志备份文件总个数
                     * 
                     */
                    void SetLogBackupCount(const uint64_t& _logBackupCount);

                    /**
                     * 判断参数 LogBackupCount 是否已赋值
                     * @return LogBackupCount 是否已赋值
                     * 
                     */
                    bool LogBackupCountHasBeenSet() const;

                    /**
                     * 获取自动备份空间
                     * @return AutoBackupSpace 自动备份空间
                     * 
                     */
                    uint64_t GetAutoBackupSpace() const;

                    /**
                     * 设置自动备份空间
                     * @param _autoBackupSpace 自动备份空间
                     * 
                     */
                    void SetAutoBackupSpace(const uint64_t& _autoBackupSpace);

                    /**
                     * 判断参数 AutoBackupSpace 是否已赋值
                     * @return AutoBackupSpace 是否已赋值
                     * 
                     */
                    bool AutoBackupSpaceHasBeenSet() const;

                    /**
                     * 获取自动备份文件总个数
                     * @return AutoBackupCount 自动备份文件总个数
                     * 
                     */
                    uint64_t GetAutoBackupCount() const;

                    /**
                     * 设置自动备份文件总个数
                     * @param _autoBackupCount 自动备份文件总个数
                     * 
                     */
                    void SetAutoBackupCount(const uint64_t& _autoBackupCount);

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取手动备份空间
                     * @return ManualBackupSpace 手动备份空间
                     * 
                     */
                    uint64_t GetManualBackupSpace() const;

                    /**
                     * 设置手动备份空间
                     * @param _manualBackupSpace 手动备份空间
                     * 
                     */
                    void SetManualBackupSpace(const uint64_t& _manualBackupSpace);

                    /**
                     * 判断参数 ManualBackupSpace 是否已赋值
                     * @return ManualBackupSpace 是否已赋值
                     * 
                     */
                    bool ManualBackupSpaceHasBeenSet() const;

                    /**
                     * 获取手动备份文件总个数
                     * @return ManualBackupCount 手动备份文件总个数
                     * 
                     */
                    uint64_t GetManualBackupCount() const;

                    /**
                     * 设置手动备份文件总个数
                     * @param _manualBackupCount 手动备份文件总个数
                     * 
                     */
                    void SetManualBackupCount(const uint64_t& _manualBackupCount);

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取实例所属地域码
                     * @return Region 实例所属地域码
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域码
                     * @param _region 实例所属地域码
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 地域标识
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 实例状态。1：申请中2：运行中3：受限运行中 (主备切换中)4：已隔离5：回收中6：已回收7：任务执行中 (实例做备份、回档等操作)8：已下线9：实例扩容中10：实例迁移中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备份空间
                     */
                    uint64_t m_actualUsedSpace;
                    bool m_actualUsedSpaceHasBeenSet;

                    /**
                     * 数据备份空间
                     */
                    uint64_t m_dataBackupSpace;
                    bool m_dataBackupSpaceHasBeenSet;

                    /**
                     * 数据备份文件总个数
                     */
                    uint64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * 日志备份空间
                     */
                    uint64_t m_logBackupSpace;
                    bool m_logBackupSpaceHasBeenSet;

                    /**
                     * 日志备份文件总个数
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * 自动备份空间
                     */
                    uint64_t m_autoBackupSpace;
                    bool m_autoBackupSpaceHasBeenSet;

                    /**
                     * 自动备份文件总个数
                     */
                    uint64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * 手动备份空间
                     */
                    uint64_t m_manualBackupSpace;
                    bool m_manualBackupSpaceHasBeenSet;

                    /**
                     * 手动备份文件总个数
                     */
                    uint64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * 实例所属地域码
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SUMMARYDETAILRES_H_
