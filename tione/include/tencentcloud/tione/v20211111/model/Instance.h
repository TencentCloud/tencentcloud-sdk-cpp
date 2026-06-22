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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INSTANCE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceInfo.h>
#include <tencentcloud/tione/v20211111/model/RepairTaskInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 资源组节点信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源组节点id</p>
                     * @return InstanceId <p>资源组节点id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>资源组节点id</p>
                     * @param _instanceId <p>资源组节点id</p>
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
                     * 获取<p>节点已用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedResource <p>节点已用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetUsedResource() const;

                    /**
                     * 设置<p>节点已用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedResource <p>节点已用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedResource(const ResourceInfo& _usedResource);

                    /**
                     * 判断参数 UsedResource 是否已赋值
                     * @return UsedResource 是否已赋值
                     * 
                     */
                    bool UsedResourceHasBeenSet() const;

                    /**
                     * 获取<p>节点总资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalResource <p>节点总资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetTotalResource() const;

                    /**
                     * 设置<p>节点总资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalResource <p>节点总资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalResource(const ResourceInfo& _totalResource);

                    /**
                     * 判断参数 TotalResource 是否已赋值
                     * @return TotalResource 是否已赋值
                     * 
                     */
                    bool TotalResourceHasBeenSet() const;

                    /**
                     * 获取<p>节点状态<br>注意：此字段为枚举值<br>说明:<br>DEPLOYING: 部署中<br>RUNNING: 运行中<br>DEPLOY_FAILED: 部署失败<br>RELEASING 释放中<br>RELEASED：已释放<br>EXCEPTION：异常<br>DEBT_OR_EXPIRED: 欠费过期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus <p>节点状态<br>注意：此字段为枚举值<br>说明:<br>DEPLOYING: 部署中<br>RUNNING: 运行中<br>DEPLOY_FAILED: 部署失败<br>RELEASING 释放中<br>RELEASED：已释放<br>EXCEPTION：异常<br>DEBT_OR_EXPIRED: 欠费过期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>节点状态<br>注意：此字段为枚举值<br>说明:<br>DEPLOYING: 部署中<br>RUNNING: 运行中<br>DEPLOY_FAILED: 部署失败<br>RELEASING 释放中<br>RELEASED：已释放<br>EXCEPTION：异常<br>DEBT_OR_EXPIRED: 欠费过期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStatus <p>节点状态<br>注意：此字段为枚举值<br>说明:<br>DEPLOYING: 部署中<br>RUNNING: 运行中<br>DEPLOY_FAILED: 部署失败<br>RELEASING 释放中<br>RELEASED：已释放<br>EXCEPTION：异常<br>DEBT_OR_EXPIRED: 欠费过期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建人</p>
                     * @return SubUin <p>创建人</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>创建人</p>
                     * @param _subUin <p>创建人</p>
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间:<br>注意：北京时间，比如: 2021-12-01 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间:<br>注意：北京时间，比如: 2021-12-01 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间:<br>注意：北京时间，比如: 2021-12-01 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间:<br>注意：北京时间，比如: 2021-12-01 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>到期时间<br>注意：北京时间，比如：2021-12-11 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime <p>到期时间<br>注意：北京时间，比如：2021-12-11 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>到期时间<br>注意：北京时间，比如：2021-12-11 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime <p>到期时间<br>注意：北京时间，比如：2021-12-11 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识<br>注意：此字段为枚举值<br>说明：<br>NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知<br>NOTIFY_AND_AUTO_RENEW：自动续费且到期通知<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenewFlag <p>自动续费标识<br>注意：此字段为枚举值<br>说明：<br>NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知<br>NOTIFY_AND_AUTO_RENEW：自动续费且到期通知<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAutoRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识<br>注意：此字段为枚举值<br>说明：<br>NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知<br>NOTIFY_AND_AUTO_RENEW：自动续费且到期通知<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenewFlag <p>自动续费标识<br>注意：此字段为枚举值<br>说明：<br>NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知<br>NOTIFY_AND_AUTO_RENEW：自动续费且到期通知<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenewFlag(const std::string& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>计费项ID</p>
                     * @return SpecId <p>计费项ID</p>
                     * 
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置<p>计费项ID</p>
                     * @param _specId <p>计费项ID</p>
                     * 
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取<p>计费项别名</p>
                     * @return SpecAlias <p>计费项别名</p>
                     * 
                     */
                    std::string GetSpecAlias() const;

                    /**
                     * 设置<p>计费项别名</p>
                     * @param _specAlias <p>计费项别名</p>
                     * 
                     */
                    void SetSpecAlias(const std::string& _specAlias);

                    /**
                     * 判断参数 SpecAlias 是否已赋值
                     * @return SpecAlias 是否已赋值
                     * 
                     */
                    bool SpecAliasHasBeenSet() const;

                    /**
                     * 获取<p>计费项特性列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecFeatures <p>计费项特性列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSpecFeatures() const;

                    /**
                     * 设置<p>计费项特性列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specFeatures <p>计费项特性列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecFeatures(const std::vector<std::string>& _specFeatures);

                    /**
                     * 判断参数 SpecFeatures 是否已赋值
                     * @return SpecFeatures 是否已赋值
                     * 
                     */
                    bool SpecFeaturesHasBeenSet() const;

                    /**
                     * 获取<p>纳管cvmid</p>
                     * @return CvmInstanceId <p>纳管cvmid</p>
                     * 
                     */
                    std::string GetCvmInstanceId() const;

                    /**
                     * 设置<p>纳管cvmid</p>
                     * @param _cvmInstanceId <p>纳管cvmid</p>
                     * 
                     */
                    void SetCvmInstanceId(const std::string& _cvmInstanceId);

                    /**
                     * 判断参数 CvmInstanceId 是否已赋值
                     * @return CvmInstanceId 是否已赋值
                     * 
                     */
                    bool CvmInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>部署失败错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode <p>部署失败错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置<p>部署失败错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errCode <p>部署失败错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>部署失败错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg <p>部署失败错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>部署失败错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg <p>部署失败错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取<p>节点可用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableResource <p>节点可用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResourceInfo GetAvailableResource() const;

                    /**
                     * 设置<p>节点可用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableResource <p>节点可用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableResource(const ResourceInfo& _availableResource);

                    /**
                     * 判断参数 AvailableResource 是否已赋值
                     * @return AvailableResource 是否已赋值
                     * 
                     */
                    bool AvailableResourceHasBeenSet() const;

                    /**
                     * 获取<p>资源组节点的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceIP <p>资源组节点的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceIP() const;

                    /**
                     * 设置<p>资源组节点的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceIP <p>资源组节点的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceIP(const std::string& _instanceIP);

                    /**
                     * 判断参数 InstanceIP 是否已赋值
                     * @return InstanceIP 是否已赋值
                     * 
                     */
                    bool InstanceIPHasBeenSet() const;

                    /**
                     * 获取<p>资源组节点的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName <p>资源组节点的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>资源组节点的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName <p>资源组节点的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>cvm机型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvmInstanceType <p>cvm机型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCvmInstanceType() const;

                    /**
                     * 设置<p>cvm机型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cvmInstanceType <p>cvm机型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCvmInstanceType(const std::string& _cvmInstanceType);

                    /**
                     * 判断参数 CvmInstanceType 是否已赋值
                     * @return CvmInstanceType 是否已赋值
                     * 
                     */
                    bool CvmInstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否自动续买</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoRenew <p>是否自动续买</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAutoRenew() const;

                    /**
                     * 设置<p>是否自动续买</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _autoRenew <p>是否自动续买</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAutoRenew(const bool& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>是否被隔离</p>
                     * @return Isolated <p>是否被隔离</p>
                     * 
                     */
                    bool GetIsolated() const;

                    /**
                     * 设置<p>是否被隔离</p>
                     * @param _isolated <p>是否被隔离</p>
                     * 
                     */
                    void SetIsolated(const bool& _isolated);

                    /**
                     * 判断参数 Isolated 是否已赋值
                     * @return Isolated 是否已赋值
                     * 
                     */
                    bool IsolatedHasBeenSet() const;

                    /**
                     * 获取<p>维修任务信息</p>
                     * @return RepairTaskInfo <p>维修任务信息</p>
                     * 
                     */
                    RepairTaskInfo GetRepairTaskInfo() const;

                    /**
                     * 设置<p>维修任务信息</p>
                     * @param _repairTaskInfo <p>维修任务信息</p>
                     * 
                     */
                    void SetRepairTaskInfo(const RepairTaskInfo& _repairTaskInfo);

                    /**
                     * 判断参数 RepairTaskInfo 是否已赋值
                     * @return RepairTaskInfo 是否已赋值
                     * 
                     */
                    bool RepairTaskInfoHasBeenSet() const;

                    /**
                     * 获取<p>节点可用区名称</p>
                     * @return ZoneName <p>节点可用区名称</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>节点可用区名称</p>
                     * @param _zoneName <p>节点可用区名称</p>
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                private:

                    /**
                     * <p>资源组节点id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>节点已用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_usedResource;
                    bool m_usedResourceHasBeenSet;

                    /**
                     * <p>节点总资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_totalResource;
                    bool m_totalResourceHasBeenSet;

                    /**
                     * <p>节点状态<br>注意：此字段为枚举值<br>说明:<br>DEPLOYING: 部署中<br>RUNNING: 运行中<br>DEPLOY_FAILED: 部署失败<br>RELEASING 释放中<br>RELEASED：已释放<br>EXCEPTION：异常<br>DEBT_OR_EXPIRED: 欠费过期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>创建人</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>创建时间:<br>注意：北京时间，比如: 2021-12-01 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>到期时间<br>注意：北京时间，比如：2021-12-11 12:00:00</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>自动续费标识<br>注意：此字段为枚举值<br>说明：<br>NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期通知<br>NOTIFY_AND_AUTO_RENEW：自动续费且到期通知<br>DISABLE_NOTIFY_AND_MANUAL_RENEW：手动续费(取消自动续费)且到期不通知</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>计费项ID</p>
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * <p>计费项别名</p>
                     */
                    std::string m_specAlias;
                    bool m_specAliasHasBeenSet;

                    /**
                     * <p>计费项特性列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_specFeatures;
                    bool m_specFeaturesHasBeenSet;

                    /**
                     * <p>纳管cvmid</p>
                     */
                    std::string m_cvmInstanceId;
                    bool m_cvmInstanceIdHasBeenSet;

                    /**
                     * <p>部署失败错误码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>部署失败错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>节点可用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResourceInfo m_availableResource;
                    bool m_availableResourceHasBeenSet;

                    /**
                     * <p>资源组节点的IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceIP;
                    bool m_instanceIPHasBeenSet;

                    /**
                     * <p>资源组节点的名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>cvm机型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvmInstanceType;
                    bool m_cvmInstanceTypeHasBeenSet;

                    /**
                     * <p>是否自动续买</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>是否被隔离</p>
                     */
                    bool m_isolated;
                    bool m_isolatedHasBeenSet;

                    /**
                     * <p>维修任务信息</p>
                     */
                    RepairTaskInfo m_repairTaskInfo;
                    bool m_repairTaskInfoHasBeenSet;

                    /**
                     * <p>节点可用区名称</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INSTANCE_H_
