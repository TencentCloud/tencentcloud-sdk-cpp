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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_PLANINFO_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_PLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/AspInfo.h>
#include <tencentcloud/bdrc/v20260330/model/FlowControlRule.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 备份计划详情
                */
                class PlanInfo : public AbstractModel
                {
                public:
                    PlanInfo();
                    ~PlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>备份计划ID</p>
                     * @return PlanId <p>备份计划ID</p>
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置<p>备份计划ID</p>
                     * @param _planId <p>备份计划ID</p>
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取<p>计划关联的实例ID</p>
                     * @return ResourceIds <p>计划关联的实例ID</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>计划关联的实例ID</p>
                     * @param _resourceIds <p>计划关联的实例ID</p>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>计划名称</p>
                     * @return PlanName <p>计划名称</p>
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置<p>计划名称</p>
                     * @param _planName <p>计划名称</p>
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取<p>备份路径列表，1~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupPaths <p>备份路径列表，1~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBackupPaths() const;

                    /**
                     * 设置<p>备份路径列表，1~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupPaths <p>备份路径列表，1~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupPaths(const std::vector<std::string>& _backupPaths);

                    /**
                     * 判断参数 BackupPaths 是否已赋值
                     * @return BackupPaths 是否已赋值
                     * 
                     */
                    bool BackupPathsHasBeenSet() const;

                    /**
                     * 获取<p>包含文件类型，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeFileTypes <p>包含文件类型，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIncludeFileTypes() const;

                    /**
                     * 设置<p>包含文件类型，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeFileTypes <p>包含文件类型，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncludeFileTypes(const std::vector<std::string>& _includeFileTypes);

                    /**
                     * 判断参数 IncludeFileTypes 是否已赋值
                     * @return IncludeFileTypes 是否已赋值
                     * 
                     */
                    bool IncludeFileTypesHasBeenSet() const;

                    /**
                     * 获取<p>排除文件路径列表，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludePatterns <p>排除文件路径列表，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExcludePatterns() const;

                    /**
                     * 设置<p>排除文件路径列表，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludePatterns <p>排除文件路径列表，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcludePatterns(const std::vector<std::string>& _excludePatterns);

                    /**
                     * 判断参数 ExcludePatterns 是否已赋值
                     * @return ExcludePatterns 是否已赋值
                     * 
                     */
                    bool ExcludePatternsHasBeenSet() const;

                    /**
                     * 获取<p>是否排除系统目录</p>
                     * @return ExcludeSystemDirectories <p>是否排除系统目录</p>
                     * 
                     */
                    bool GetExcludeSystemDirectories() const;

                    /**
                     * 设置<p>是否排除系统目录</p>
                     * @param _excludeSystemDirectories <p>是否排除系统目录</p>
                     * 
                     */
                    void SetExcludeSystemDirectories(const bool& _excludeSystemDirectories);

                    /**
                     * 判断参数 ExcludeSystemDirectories 是否已赋值
                     * @return ExcludeSystemDirectories 是否已赋值
                     * 
                     */
                    bool ExcludeSystemDirectoriesHasBeenSet() const;

                    /**
                     * 获取<p>备份库ID</p>
                     * @return VaultId <p>备份库ID</p>
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置<p>备份库ID</p>
                     * @param _vaultId <p>备份库ID</p>
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取<p>备份计划状态</p>
                     * @return Status <p>备份计划状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>备份计划状态</p>
                     * @param _status <p>备份计划状态</p>
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
                     * 获取<p>策略ID</p>
                     * @return AspId <p>策略ID</p>
                     * 
                     */
                    std::string GetAspId() const;

                    /**
                     * 设置<p>策略ID</p>
                     * @param _aspId <p>策略ID</p>
                     * 
                     */
                    void SetAspId(const std::string& _aspId);

                    /**
                     * 判断参数 AspId 是否已赋值
                     * @return AspId 是否已赋值
                     * 
                     */
                    bool AspIdHasBeenSet() const;

                    /**
                     * 获取<p>策略名称</p>
                     * @return AspName <p>策略名称</p>
                     * 
                     */
                    std::string GetAspName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _aspName <p>策略名称</p>
                     * 
                     */
                    void SetAspName(const std::string& _aspName);

                    /**
                     * 判断参数 AspName 是否已赋值
                     * @return AspName 是否已赋值
                     * 
                     */
                    bool AspNameHasBeenSet() const;

                    /**
                     * 获取<p>策略详情</p>
                     * @return AspPolicy <p>策略详情</p>
                     * 
                     */
                    AspInfo GetAspPolicy() const;

                    /**
                     * 设置<p>策略详情</p>
                     * @param _aspPolicy <p>策略详情</p>
                     * 
                     */
                    void SetAspPolicy(const AspInfo& _aspPolicy);

                    /**
                     * 判断参数 AspPolicy 是否已赋值
                     * @return AspPolicy 是否已赋值
                     * 
                     */
                    bool AspPolicyHasBeenSet() const;

                    /**
                     * 获取<p>最近一次执行时间</p>
                     * @return LastExecuteTime <p>最近一次执行时间</p>
                     * 
                     */
                    std::string GetLastExecuteTime() const;

                    /**
                     * 设置<p>最近一次执行时间</p>
                     * @param _lastExecuteTime <p>最近一次执行时间</p>
                     * 
                     */
                    void SetLastExecuteTime(const std::string& _lastExecuteTime);

                    /**
                     * 判断参数 LastExecuteTime 是否已赋值
                     * @return LastExecuteTime 是否已赋值
                     * 
                     */
                    bool LastExecuteTimeHasBeenSet() const;

                    /**
                     * 获取<p>下次触发时间</p>
                     * @return NextTriggerTime <p>下次触发时间</p>
                     * 
                     */
                    std::string GetNextTriggerTime() const;

                    /**
                     * 设置<p>下次触发时间</p>
                     * @param _nextTriggerTime <p>下次触发时间</p>
                     * 
                     */
                    void SetNextTriggerTime(const std::string& _nextTriggerTime);

                    /**
                     * 判断参数 NextTriggerTime 是否已赋值
                     * @return NextTriggerTime 是否已赋值
                     * 
                     */
                    bool NextTriggerTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近一次执行错误信息</p>
                     * @return LastTriggerError <p>最近一次执行错误信息</p>
                     * 
                     */
                    std::string GetLastTriggerError() const;

                    /**
                     * 设置<p>最近一次执行错误信息</p>
                     * @param _lastTriggerError <p>最近一次执行错误信息</p>
                     * 
                     */
                    void SetLastTriggerError(const std::string& _lastTriggerError);

                    /**
                     * 判断参数 LastTriggerError 是否已赋值
                     * @return LastTriggerError 是否已赋值
                     * 
                     */
                    bool LastTriggerErrorHasBeenSet() const;

                    /**
                     * 获取<p>备份数量</p>
                     * @return BackupCount <p>备份数量</p>
                     * 
                     */
                    int64_t GetBackupCount() const;

                    /**
                     * 设置<p>备份数量</p>
                     * @param _backupCount <p>备份数量</p>
                     * 
                     */
                    void SetBackupCount(const int64_t& _backupCount);

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     * 
                     */
                    bool BackupCountHasBeenSet() const;

                    /**
                     * 获取<p>流控信息</p>
                     * @return FlowControlSettings <p>流控信息</p>
                     * 
                     */
                    std::vector<FlowControlRule> GetFlowControlSettings() const;

                    /**
                     * 设置<p>流控信息</p>
                     * @param _flowControlSettings <p>流控信息</p>
                     * 
                     */
                    void SetFlowControlSettings(const std::vector<FlowControlRule>& _flowControlSettings);

                    /**
                     * 判断参数 FlowControlSettings 是否已赋值
                     * @return FlowControlSettings 是否已赋值
                     * 
                     */
                    bool FlowControlSettingsHasBeenSet() const;

                    /**
                     * 获取<p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableObjectAcl <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableObjectAcl() const;

                    /**
                     * 设置<p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableObjectAcl <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableObjectAcl(const bool& _enableObjectAcl);

                    /**
                     * 判断参数 EnableObjectAcl 是否已赋值
                     * @return EnableObjectAcl 是否已赋值
                     * 
                     */
                    bool EnableObjectAclHasBeenSet() const;

                    /**
                     * 获取<p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableObjectTags <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableObjectTags() const;

                    /**
                     * 设置<p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableObjectTags <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableObjectTags(const bool& _enableObjectTags);

                    /**
                     * 判断参数 EnableObjectTags 是否已赋值
                     * @return EnableObjectTags 是否已赋值
                     * 
                     */
                    bool EnableObjectTagsHasBeenSet() const;

                    /**
                     * 获取<p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductType <p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productType <p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * <p>备份计划ID</p>
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * <p>计划关联的实例ID</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>计划名称</p>
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * <p>备份路径列表，1~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_backupPaths;
                    bool m_backupPathsHasBeenSet;

                    /**
                     * <p>包含文件类型，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_includeFileTypes;
                    bool m_includeFileTypesHasBeenSet;

                    /**
                     * <p>排除文件路径列表，0~20 个</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_excludePatterns;
                    bool m_excludePatternsHasBeenSet;

                    /**
                     * <p>是否排除系统目录</p>
                     */
                    bool m_excludeSystemDirectories;
                    bool m_excludeSystemDirectoriesHasBeenSet;

                    /**
                     * <p>备份库ID</p>
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * <p>备份计划状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>策略ID</p>
                     */
                    std::string m_aspId;
                    bool m_aspIdHasBeenSet;

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_aspName;
                    bool m_aspNameHasBeenSet;

                    /**
                     * <p>策略详情</p>
                     */
                    AspInfo m_aspPolicy;
                    bool m_aspPolicyHasBeenSet;

                    /**
                     * <p>最近一次执行时间</p>
                     */
                    std::string m_lastExecuteTime;
                    bool m_lastExecuteTimeHasBeenSet;

                    /**
                     * <p>下次触发时间</p>
                     */
                    std::string m_nextTriggerTime;
                    bool m_nextTriggerTimeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>最近一次执行错误信息</p>
                     */
                    std::string m_lastTriggerError;
                    bool m_lastTriggerErrorHasBeenSet;

                    /**
                     * <p>备份数量</p>
                     */
                    int64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * <p>流控信息</p>
                     */
                    std::vector<FlowControlRule> m_flowControlSettings;
                    bool m_flowControlSettingsHasBeenSet;

                    /**
                     * <p>是否备份对象ACL（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableObjectAcl;
                    bool m_enableObjectAclHasBeenSet;

                    /**
                     * <p>是否备份对象标签（仅COS备份支持）</p><p>枚举值：</p><ul><li>true： 是</li><li>false： 否</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableObjectTags;
                    bool m_enableObjectTagsHasBeenSet;

                    /**
                     * <p>产品存储类型。CFS 资源返回文件系统存储类型；非 CFS 资源无存储类型，返回资源类型标识。</p><p>枚举值：</p><ul><li>SD： 文件系统通用标准型存储</li><li>HP： 文件系统通用性能性存储</li><li>TB： 文件系统Turbo标准型存储</li><li>TP： 文件系统Turbo性能型存储</li><li>THP： 文件系统Turbo吞吐型存储</li><li>CVM_AGENT： CVM 资源（非 CFS 资源时返回）</li><li>COS_AGENT： COS 资源（非 CFS 资源时返回）</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_PLANINFO_H_
