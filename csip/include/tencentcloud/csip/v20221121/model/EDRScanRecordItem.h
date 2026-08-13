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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANRECORDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANRECORDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 扫描任务记录项
                */
                class EDRScanRecordItem : public AbstractModel
                {
                public:
                    EDRScanRecordItem();
                    ~EDRScanRecordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务主键 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId <p>任务主键 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>任务主键 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId <p>任务主键 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>任务名称，如 Malware_20260702_030000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName <p>任务名称，如 Malware_20260702_030000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>任务名称，如 Malware_20260702_030000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName <p>任务名称，如 Malware_20260702_030000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>扫描类型</p><p>枚举值：</p><ul><li>MANNAL： 手动扫描</li><li>CYCLE： 定时扫描</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType <p>扫描类型</p><p>枚举值：</p><ul><li>MANNAL： 手动扫描</li><li>CYCLE： 定时扫描</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>扫描类型</p><p>枚举值：</p><ul><li>MANNAL： 手动扫描</li><li>CYCLE： 定时扫描</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _triggerType <p>扫描类型</p><p>枚举值：</p><ul><li>MANNAL： 手动扫描</li><li>CYCLE： 定时扫描</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>定时调度描述（ScanType=1 时有值），如“每天 03:00:00”</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduleDesc <p>定时调度描述（ScanType=1 时有值），如“每天 03:00:00”</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置<p>定时调度描述（ScanType=1 时有值），如“每天 03:00:00”</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduleDesc <p>定时调度描述（ScanType=1 时有值），如“每天 03:00:00”</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduleDesc(const std::string& _scheduleDesc);

                    /**
                     * 判断参数 ScheduleDesc 是否已赋值
                     * @return ScheduleDesc 是否已赋值
                     * 
                     */
                    bool ScheduleDescHasBeenSet() const;

                    /**
                     * 获取<p>任务资产类型：0=主机扫描，1=容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskType <p>任务资产类型：0=主机扫描，1=容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务资产类型：0=主机扫描，1=容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskType <p>任务资产类型：0=主机扫描，1=容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>扫描目标涉及的账号AppId列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetAppIDs <p>扫描目标涉及的账号AppId列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>扫描目标涉及的账号AppId列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetAppIDs <p>扫描目标涉及的账号AppId列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

                    /**
                     * 获取<p>任务创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName <p>任务创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>任务创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName <p>任务创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>云类型：0=腾讯云，1=AWS，2=Azure，4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudType <p>云类型：0=腾讯云，1=AWS，2=Azure，4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>云类型：0=腾讯云，1=AWS，2=Azure，4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloudType <p>云类型：0=腾讯云，1=AWS，2=Azure，4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产选择方式：all=全部资产，tag=按标签选择，direct=直接选择</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetSelectionType <p>资产选择方式：all=全部资产，tag=按标签选择，direct=直接选择</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetSelectionType() const;

                    /**
                     * 设置<p>资产选择方式：all=全部资产，tag=按标签选择，direct=直接选择</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetSelectionType <p>资产选择方式：all=全部资产，tag=按标签选择，direct=直接选择</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetSelectionType(const std::string& _assetSelectionType);

                    /**
                     * 判断参数 AssetSelectionType 是否已赋值
                     * @return AssetSelectionType 是否已赋值
                     * 
                     */
                    bool AssetSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>扫描资产总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalAssetCount <p>扫描资产总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalAssetCount() const;

                    /**
                     * 设置<p>扫描资产总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalAssetCount <p>扫描资产总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalAssetCount(const int64_t& _totalAssetCount);

                    /**
                     * 判断参数 TotalAssetCount 是否已赋值
                     * @return TotalAssetCount 是否已赋值
                     * 
                     */
                    bool TotalAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>创建者账号AppId（前端据此判断操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateAppID <p>创建者账号AppId（前端据此判断操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateAppID() const;

                    /**
                     * 设置<p>创建者账号AppId（前端据此判断操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createAppID <p>创建者账号AppId（前端据此判断操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateAppID(const uint64_t& _createAppID);

                    /**
                     * 判断参数 CreateAppID 是否已赋值
                     * @return CreateAppID 是否已赋值
                     * 
                     */
                    bool CreateAppIDHasBeenSet() const;

                    /**
                     * 获取<p>创建者账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator <p>创建者账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建者账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creator <p>创建者账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorName <p>创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置<p>创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorName <p>创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取<p>创建者云类型：0=腾讯云, 1=AWS, 2=Azure, 4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorCloudType <p>创建者云类型：0=腾讯云, 1=AWS, 2=Azure, 4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreatorCloudType() const;

                    /**
                     * 设置<p>创建者云类型：0=腾讯云, 1=AWS, 2=Azure, 4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorCloudType <p>创建者云类型：0=腾讯云, 1=AWS, 2=Azure, 4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorCloudType(const int64_t& _creatorCloudType);

                    /**
                     * 判断参数 CreatorCloudType 是否已赋值
                     * @return CreatorCloudType 是否已赋值
                     * 
                     */
                    bool CreatorCloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务开始时间，格式 2006-01-02 15:04:05</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime <p>任务开始时间，格式 2006-01-02 15:04:05</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>任务开始时间，格式 2006-01-02 15:04:05</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime <p>任务开始时间，格式 2006-01-02 15:04:05</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务结束时间，未结束为空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>任务结束时间，未结束为空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>任务结束时间，未结束为空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime <p>任务结束时间，未结束为空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>WAIT：待扫描，SCANNING：扫描中，FINISHED：已完成，FAILED：失败，CANCELED：已停止</p><p>枚举值：</p><ul><li>WAIT： 待扫描</li><li>SCANNING： 扫描中</li><li>FINISHED： 已完成</li><li>FAILED： 失败</li><li>CANCELED： 已停止</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>WAIT：待扫描，SCANNING：扫描中，FINISHED：已完成，FAILED：失败，CANCELED：已停止</p><p>枚举值：</p><ul><li>WAIT： 待扫描</li><li>SCANNING： 扫描中</li><li>FINISHED： 已完成</li><li>FAILED： 失败</li><li>CANCELED： 已停止</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>WAIT：待扫描，SCANNING：扫描中，FINISHED：已完成，FAILED：失败，CANCELED：已停止</p><p>枚举值：</p><ul><li>WAIT： 待扫描</li><li>SCANNING： 扫描中</li><li>FINISHED： 已完成</li><li>FAILED： 失败</li><li>CANCELED： 已停止</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>WAIT：待扫描，SCANNING：扫描中，FINISHED：已完成，FAILED：失败，CANCELED：已停止</p><p>枚举值：</p><ul><li>WAIT： 待扫描</li><li>SCANNING： 扫描中</li><li>FINISHED： 已完成</li><li>FAILED： 失败</li><li>CANCELED： 已停止</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>任务主键 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务名称，如 Malware_20260702_030000</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>扫描类型</p><p>枚举值：</p><ul><li>MANNAL： 手动扫描</li><li>CYCLE： 定时扫描</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>定时调度描述（ScanType=1 时有值），如“每天 03:00:00”</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * <p>任务资产类型：0=主机扫描，1=容器扫描</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>扫描目标涉及的账号AppId列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

                    /**
                     * <p>任务创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>云类型：0=腾讯云，1=AWS，2=Azure，4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>资产选择方式：all=全部资产，tag=按标签选择，direct=直接选择</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetSelectionType;
                    bool m_assetSelectionTypeHasBeenSet;

                    /**
                     * <p>扫描资产总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalAssetCount;
                    bool m_totalAssetCountHasBeenSet;

                    /**
                     * <p>创建者账号AppId（前端据此判断操作权限）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createAppID;
                    bool m_createAppIDHasBeenSet;

                    /**
                     * <p>创建者账号uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>创建者账号名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * <p>创建者云类型：0=腾讯云, 1=AWS, 2=Azure, 4=阿里云</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_creatorCloudType;
                    bool m_creatorCloudTypeHasBeenSet;

                    /**
                     * <p>任务开始时间，格式 2006-01-02 15:04:05</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务结束时间，未结束为空字符串</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>WAIT：待扫描，SCANNING：扫描中，FINISHED：已完成，FAILED：失败，CANCELED：已停止</p><p>枚举值：</p><ul><li>WAIT： 待扫描</li><li>SCANNING： 扫描中</li><li>FINISHED： 已完成</li><li>FAILED： 失败</li><li>CANCELED： 已停止</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANRECORDITEM_H_
