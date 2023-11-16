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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSSUMMARYDETAILRES_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSSUMMARYDETAILRES_H_

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
                * 跨地域备份实时统计列表项
                */
                class CrossSummaryDetailRes : public AbstractModel
                {
                public:
                    CrossSummaryDetailRes();
                    ~CrossSummaryDetailRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
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
                     * 获取实例所属地域
                     * @return Region 实例所属地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域
                     * @param _region 实例所属地域
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
                     * 获取跨地域备份状态 enable-开启，disable-关闭
                     * @return CrossBackupEnabled 跨地域备份状态 enable-开启，disable-关闭
                     * 
                     */
                    std::string GetCrossBackupEnabled() const;

                    /**
                     * 设置跨地域备份状态 enable-开启，disable-关闭
                     * @param _crossBackupEnabled 跨地域备份状态 enable-开启，disable-关闭
                     * 
                     */
                    void SetCrossBackupEnabled(const std::string& _crossBackupEnabled);

                    /**
                     * 判断参数 CrossBackupEnabled 是否已赋值
                     * @return CrossBackupEnabled 是否已赋值
                     * 
                     */
                    bool CrossBackupEnabledHasBeenSet() const;

                    /**
                     * 获取跨地域备份目标地域
                     * @return CrossRegions 跨地域备份目标地域
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置跨地域备份目标地域
                     * @param _crossRegions 跨地域备份目标地域
                     * 
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取最新备份开始时间
                     * @return LastBackupStartTime 最新备份开始时间
                     * 
                     */
                    std::string GetLastBackupStartTime() const;

                    /**
                     * 设置最新备份开始时间
                     * @param _lastBackupStartTime 最新备份开始时间
                     * 
                     */
                    void SetLastBackupStartTime(const std::string& _lastBackupStartTime);

                    /**
                     * 判断参数 LastBackupStartTime 是否已赋值
                     * @return LastBackupStartTime 是否已赋值
                     * 
                     */
                    bool LastBackupStartTimeHasBeenSet() const;

                    /**
                     * 获取跨地域备份保留天数
                     * @return CrossBackupSaveDays 跨地域备份保留天数
                     * 
                     */
                    int64_t GetCrossBackupSaveDays() const;

                    /**
                     * 设置跨地域备份保留天数
                     * @param _crossBackupSaveDays 跨地域备份保留天数
                     * 
                     */
                    void SetCrossBackupSaveDays(const int64_t& _crossBackupSaveDays);

                    /**
                     * 判断参数 CrossBackupSaveDays 是否已赋值
                     * @return CrossBackupSaveDays 是否已赋值
                     * 
                     */
                    bool CrossBackupSaveDaysHasBeenSet() const;

                    /**
                     * 获取跨地域数据备份总空间
                     * @return DataBackupSpace 跨地域数据备份总空间
                     * 
                     */
                    uint64_t GetDataBackupSpace() const;

                    /**
                     * 设置跨地域数据备份总空间
                     * @param _dataBackupSpace 跨地域数据备份总空间
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
                     * 获取跨地域数据备份文件总个数
                     * @return DataBackupCount 跨地域数据备份文件总个数
                     * 
                     */
                    uint64_t GetDataBackupCount() const;

                    /**
                     * 设置跨地域数据备份文件总个数
                     * @param _dataBackupCount 跨地域数据备份文件总个数
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
                     * 获取跨地域日志备份总空间
                     * @return LogBackupSpace 跨地域日志备份总空间
                     * 
                     */
                    uint64_t GetLogBackupSpace() const;

                    /**
                     * 设置跨地域日志备份总空间
                     * @param _logBackupSpace 跨地域日志备份总空间
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
                     * 获取跨地域日志备份文件总个数
                     * @return LogBackupCount 跨地域日志备份文件总个数
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 设置跨地域日志备份文件总个数
                     * @param _logBackupCount 跨地域日志备份文件总个数
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
                     * 获取跨地域备份总空间
                     * @return ActualUsedSpace 跨地域备份总空间
                     * 
                     */
                    uint64_t GetActualUsedSpace() const;

                    /**
                     * 设置跨地域备份总空间
                     * @param _actualUsedSpace 跨地域备份总空间
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
                     * 获取跨地域备份总个数
                     * @return ActualUsedCount 跨地域备份总个数
                     * 
                     */
                    uint64_t GetActualUsedCount() const;

                    /**
                     * 设置跨地域备份总个数
                     * @param _actualUsedCount 跨地域备份总个数
                     * 
                     */
                    void SetActualUsedCount(const uint64_t& _actualUsedCount);

                    /**
                     * 判断参数 ActualUsedCount 是否已赋值
                     * @return ActualUsedCount 是否已赋值
                     * 
                     */
                    bool ActualUsedCountHasBeenSet() const;

                private:

                    /**
                     * 实例状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例所属地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

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
                     * 跨地域备份状态 enable-开启，disable-关闭
                     */
                    std::string m_crossBackupEnabled;
                    bool m_crossBackupEnabledHasBeenSet;

                    /**
                     * 跨地域备份目标地域
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * 最新备份开始时间
                     */
                    std::string m_lastBackupStartTime;
                    bool m_lastBackupStartTimeHasBeenSet;

                    /**
                     * 跨地域备份保留天数
                     */
                    int64_t m_crossBackupSaveDays;
                    bool m_crossBackupSaveDaysHasBeenSet;

                    /**
                     * 跨地域数据备份总空间
                     */
                    uint64_t m_dataBackupSpace;
                    bool m_dataBackupSpaceHasBeenSet;

                    /**
                     * 跨地域数据备份文件总个数
                     */
                    uint64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * 跨地域日志备份总空间
                     */
                    uint64_t m_logBackupSpace;
                    bool m_logBackupSpaceHasBeenSet;

                    /**
                     * 跨地域日志备份文件总个数
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * 跨地域备份总空间
                     */
                    uint64_t m_actualUsedSpace;
                    bool m_actualUsedSpaceHasBeenSet;

                    /**
                     * 跨地域备份总个数
                     */
                    uint64_t m_actualUsedCount;
                    bool m_actualUsedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CROSSSUMMARYDETAILRES_H_
