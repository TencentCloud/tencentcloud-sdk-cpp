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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKDETAILITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKDETAILITEM_H_

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
                * 漏洞修复任务明细项
                */
                class VulFixTaskDetailItem : public AbstractModel
                {
                public:
                    VulFixTaskDetailItem();
                    ~VulFixTaskDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>明细记录ID</p>
                     * @return Id <p>明细记录ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>明细记录ID</p>
                     * @param _id <p>明细记录ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>关联的修复任务ID</p>
                     * @return TaskId <p>关联的修复任务ID</p>
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置<p>关联的修复任务ID</p>
                     * @param _taskId <p>关联的修复任务ID</p>
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>修复的漏洞ID</p>
                     * @return VulId <p>修复的漏洞ID</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>修复的漏洞ID</p>
                     * @param _vulId <p>修复的漏洞ID</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>修复的KB补丁ID</p>
                     * @return KBId <p>修复的KB补丁ID</p>
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置<p>修复的KB补丁ID</p>
                     * @param _kBId <p>修复的KB补丁ID</p>
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                    /**
                     * 获取<p>主机实例ID</p>
                     * @return InstanceId <p>主机实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>主机实例ID</p>
                     * @param _instanceId <p>主机实例ID</p>
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
                     * 获取<p>主机名称</p>
                     * @return MachineName <p>主机名称</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>主机名称</p>
                     * @param _machineName <p>主机名称</p>
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取<p>主机内网IP</p>
                     * @return MachineIp <p>主机内网IP</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>主机内网IP</p>
                     * @param _machineIp <p>主机内网IP</p>
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取<p>漏洞名称</p>
                     * @return VulName <p>漏洞名称</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置<p>漏洞名称</p>
                     * @param _vulName <p>漏洞名称</p>
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取<p>执行状态<br>枚举值：<br>0：初始状态<br>1：已下发任务<br>11：客户端已确认<br>2：修复完成<br>3：客户端离线<br>4：超时<br>5：失败<br>6：不支持<br>9：等待快照创建完成中<br>10：快照创建失败</p>
                     * @return Status <p>执行状态<br>枚举值：<br>0：初始状态<br>1：已下发任务<br>11：客户端已确认<br>2：修复完成<br>3：客户端离线<br>4：超时<br>5：失败<br>6：不支持<br>9：等待快照创建完成中<br>10：快照创建失败</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>执行状态<br>枚举值：<br>0：初始状态<br>1：已下发任务<br>11：客户端已确认<br>2：修复完成<br>3：客户端离线<br>4：超时<br>5：失败<br>6：不支持<br>9：等待快照创建完成中<br>10：快照创建失败</p>
                     * @param _status <p>执行状态<br>枚举值：<br>0：初始状态<br>1：已下发任务<br>11：客户端已确认<br>2：修复完成<br>3：客户端离线<br>4：超时<br>5：失败<br>6：不支持<br>9：等待快照创建完成中<br>10：快照创建失败</p>
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
                     * 获取<p>修复结果</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 修复成功</li><li>2： 修复失败</li><li>3： 修复中</li></ul>
                     * @return FixStatus <p>修复结果</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 修复成功</li><li>2： 修复失败</li><li>3： 修复中</li></ul>
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置<p>修复结果</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 修复成功</li><li>2： 修复失败</li><li>3： 修复中</li></ul>
                     * @param _fixStatus <p>修复结果</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 修复成功</li><li>2： 修复失败</li><li>3： 修复中</li></ul>
                     * 
                     */
                    void SetFixStatus(const int64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取<p>快照状态<br>枚举值：<br>-1：无需创建快照<br>0：未开始<br>1：进行中<br>2：已完成<br>3：创建失败</p>
                     * @return SnapshotStatus <p>快照状态<br>枚举值：<br>-1：无需创建快照<br>0：未开始<br>1：进行中<br>2：已完成<br>3：创建失败</p>
                     * 
                     */
                    int64_t GetSnapshotStatus() const;

                    /**
                     * 设置<p>快照状态<br>枚举值：<br>-1：无需创建快照<br>0：未开始<br>1：进行中<br>2：已完成<br>3：创建失败</p>
                     * @param _snapshotStatus <p>快照状态<br>枚举值：<br>-1：无需创建快照<br>0：未开始<br>1：进行中<br>2：已完成<br>3：创建失败</p>
                     * 
                     */
                    void SetSnapshotStatus(const int64_t& _snapshotStatus);

                    /**
                     * 判断参数 SnapshotStatus 是否已赋值
                     * @return SnapshotStatus 是否已赋值
                     * 
                     */
                    bool SnapshotStatusHasBeenSet() const;

                    /**
                     * 获取<p>异常提示信息</p>
                     * @return ExceptionMessage <p>异常提示信息</p>
                     * 
                     */
                    std::string GetExceptionMessage() const;

                    /**
                     * 设置<p>异常提示信息</p>
                     * @param _exceptionMessage <p>异常提示信息</p>
                     * 
                     */
                    void SetExceptionMessage(const std::string& _exceptionMessage);

                    /**
                     * 判断参数 ExceptionMessage 是否已赋值
                     * @return ExceptionMessage 是否已赋值
                     * 
                     */
                    bool ExceptionMessageHasBeenSet() const;

                    /**
                     * 获取<p>修复启动时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return StartTime <p>修复启动时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>修复启动时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _startTime <p>修复启动时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
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
                     * 获取<p>修复结束时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return EndTime <p>修复结束时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>修复结束时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _endTime <p>修复结束时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
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
                     * 获取<p>快照创建时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return SnapshotCreateTime <p>快照创建时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetSnapshotCreateTime() const;

                    /**
                     * 设置<p>快照创建时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _snapshotCreateTime <p>快照创建时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetSnapshotCreateTime(const std::string& _snapshotCreateTime);

                    /**
                     * 判断参数 SnapshotCreateTime 是否已赋值
                     * @return SnapshotCreateTime 是否已赋值
                     * 
                     */
                    bool SnapshotCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>快照到期时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @return SnapshotExpireTime <p>快照到期时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    std::string GetSnapshotExpireTime() const;

                    /**
                     * 设置<p>快照到期时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * @param _snapshotExpireTime <p>快照到期时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     * 
                     */
                    void SetSnapshotExpireTime(const std::string& _snapshotExpireTime);

                    /**
                     * 判断参数 SnapshotExpireTime 是否已赋值
                     * @return SnapshotExpireTime 是否已赋值
                     * 
                     */
                    bool SnapshotExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>快照创建失败原因（当 SnapshotStatus=3 时有值）</p>
                     * @return SnapshotFailReason <p>快照创建失败原因（当 SnapshotStatus=3 时有值）</p>
                     * 
                     */
                    std::string GetSnapshotFailReason() const;

                    /**
                     * 设置<p>快照创建失败原因（当 SnapshotStatus=3 时有值）</p>
                     * @param _snapshotFailReason <p>快照创建失败原因（当 SnapshotStatus=3 时有值）</p>
                     * 
                     */
                    void SetSnapshotFailReason(const std::string& _snapshotFailReason);

                    /**
                     * 判断参数 SnapshotFailReason 是否已赋值
                     * @return SnapshotFailReason 是否已赋值
                     * 
                     */
                    bool SnapshotFailReasonHasBeenSet() const;

                private:

                    /**
                     * <p>明细记录ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>关联的修复任务ID</p>
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>修复的漏洞ID</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>修复的KB补丁ID</p>
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                    /**
                     * <p>主机实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主机名称</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>主机内网IP</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>漏洞名称</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>执行状态<br>枚举值：<br>0：初始状态<br>1：已下发任务<br>11：客户端已确认<br>2：修复完成<br>3：客户端离线<br>4：超时<br>5：失败<br>6：不支持<br>9：等待快照创建完成中<br>10：快照创建失败</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>修复结果</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 修复成功</li><li>2： 修复失败</li><li>3： 修复中</li></ul>
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * <p>快照状态<br>枚举值：<br>-1：无需创建快照<br>0：未开始<br>1：进行中<br>2：已完成<br>3：创建失败</p>
                     */
                    int64_t m_snapshotStatus;
                    bool m_snapshotStatusHasBeenSet;

                    /**
                     * <p>异常提示信息</p>
                     */
                    std::string m_exceptionMessage;
                    bool m_exceptionMessageHasBeenSet;

                    /**
                     * <p>修复启动时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>修复结束时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>快照创建时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_snapshotCreateTime;
                    bool m_snapshotCreateTimeHasBeenSet;

                    /**
                     * <p>快照到期时间<br>参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）</p>
                     */
                    std::string m_snapshotExpireTime;
                    bool m_snapshotExpireTimeHasBeenSet;

                    /**
                     * <p>快照创建失败原因（当 SnapshotStatus=3 时有值）</p>
                     */
                    std::string m_snapshotFailReason;
                    bool m_snapshotFailReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKDETAILITEM_H_
