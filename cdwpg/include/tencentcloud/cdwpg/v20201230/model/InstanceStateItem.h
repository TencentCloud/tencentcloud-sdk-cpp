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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESTATEITEM_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESTATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 批量实例状态项
                */
                class InstanceStateItem : public AbstractModel
                {
                public:
                    InstanceStateItem();
                    ~InstanceStateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群实例名称</p>
                     * @return InstanceId <p>集群实例名称</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例名称</p>
                     * @param _instanceId <p>集群实例名称</p>
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
                     * 获取<p>集群状态，例如：Serving</p>
                     * @return InstanceState <p>集群状态，例如：Serving</p>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置<p>集群状态，例如：Serving</p>
                     * @param _instanceState <p>集群状态，例如：Serving</p>
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取<p>集群状态描述，例如：运行中</p>
                     * @return InstanceStateDesc <p>集群状态描述，例如：运行中</p>
                     * 
                     */
                    std::string GetInstanceStateDesc() const;

                    /**
                     * 设置<p>集群状态描述，例如：运行中</p>
                     * @param _instanceStateDesc <p>集群状态描述，例如：运行中</p>
                     * 
                     */
                    void SetInstanceStateDesc(const std::string& _instanceStateDesc);

                    /**
                     * 判断参数 InstanceStateDesc 是否已赋值
                     * @return InstanceStateDesc 是否已赋值
                     * 
                     */
                    bool InstanceStateDescHasBeenSet() const;

                    /**
                     * 获取<p>集群备份任务开启状态</p>
                     * @return BackupStatus <p>集群备份任务开启状态</p>
                     * 
                     */
                    int64_t GetBackupStatus() const;

                    /**
                     * 设置<p>集群备份任务开启状态</p>
                     * @param _backupStatus <p>集群备份任务开启状态</p>
                     * 
                     */
                    void SetBackupStatus(const int64_t& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群备份任务开启状态2</p>
                     * @return BackupOpenStatus <p>集群备份任务开启状态2</p>
                     * 
                     */
                    int64_t GetBackupOpenStatus() const;

                    /**
                     * 设置<p>集群备份任务开启状态2</p>
                     * @param _backupOpenStatus <p>集群备份任务开启状态2</p>
                     * 
                     */
                    void SetBackupOpenStatus(const int64_t& _backupOpenStatus);

                    /**
                     * 判断参数 BackupOpenStatus 是否已赋值
                     * @return BackupOpenStatus 是否已赋值
                     * 
                     */
                    bool BackupOpenStatusHasBeenSet() const;

                    /**
                     * 获取<p>集群操作创建时间</p>
                     * @return FlowCreateTime <p>集群操作创建时间</p>
                     * 
                     */
                    std::string GetFlowCreateTime() const;

                    /**
                     * 设置<p>集群操作创建时间</p>
                     * @param _flowCreateTime <p>集群操作创建时间</p>
                     * 
                     */
                    void SetFlowCreateTime(const std::string& _flowCreateTime);

                    /**
                     * 判断参数 FlowCreateTime 是否已赋值
                     * @return FlowCreateTime 是否已赋值
                     * 
                     */
                    bool FlowCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群操作名称</p>
                     * @return FlowName <p>集群操作名称</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>集群操作名称</p>
                     * @param _flowName <p>集群操作名称</p>
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取<p>集群操作进度</p>
                     * @return FlowProgress <p>集群操作进度</p>
                     * 
                     */
                    double GetFlowProgress() const;

                    /**
                     * 设置<p>集群操作进度</p>
                     * @param _flowProgress <p>集群操作进度</p>
                     * 
                     */
                    void SetFlowProgress(const double& _flowProgress);

                    /**
                     * 判断参数 FlowProgress 是否已赋值
                     * @return FlowProgress 是否已赋值
                     * 
                     */
                    bool FlowProgressHasBeenSet() const;

                    /**
                     * 获取<p>集群流程错误信息</p>
                     * @return FlowMsg <p>集群流程错误信息</p>
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 设置<p>集群流程错误信息</p>
                     * @param _flowMsg <p>集群流程错误信息</p>
                     * 
                     */
                    void SetFlowMsg(const std::string& _flowMsg);

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取<p>当前步骤的名称</p>
                     * @return ProcessName <p>当前步骤的名称</p>
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置<p>当前步骤的名称</p>
                     * @param _processName <p>当前步骤的名称</p>
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例名称</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>集群状态，例如：Serving</p>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * <p>集群状态描述，例如：运行中</p>
                     */
                    std::string m_instanceStateDesc;
                    bool m_instanceStateDescHasBeenSet;

                    /**
                     * <p>集群备份任务开启状态</p>
                     */
                    int64_t m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                    /**
                     * <p>集群备份任务开启状态2</p>
                     */
                    int64_t m_backupOpenStatus;
                    bool m_backupOpenStatusHasBeenSet;

                    /**
                     * <p>集群操作创建时间</p>
                     */
                    std::string m_flowCreateTime;
                    bool m_flowCreateTimeHasBeenSet;

                    /**
                     * <p>集群操作名称</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>集群操作进度</p>
                     */
                    double m_flowProgress;
                    bool m_flowProgressHasBeenSet;

                    /**
                     * <p>集群流程错误信息</p>
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                    /**
                     * <p>当前步骤的名称</p>
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCESTATEITEM_H_
