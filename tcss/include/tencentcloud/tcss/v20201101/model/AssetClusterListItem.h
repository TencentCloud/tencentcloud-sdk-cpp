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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 集群列表Item
                */
                class AssetClusterListItem : public AbstractModel
                {
                public:
                    AssetClusterListItem();
                    ~AssetClusterListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterID <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterID <p>集群ID</p>
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>集群状态<br>CSR_RUNNING: 运行中<br>CSR_EXCEPTION:异常<br>CSR_DEL:已经删除</p>
                     * @return Status <p>集群状态<br>CSR_RUNNING: 运行中<br>CSR_EXCEPTION:异常<br>CSR_DEL:已经删除</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>集群状态<br>CSR_RUNNING: 运行中<br>CSR_EXCEPTION:异常<br>CSR_DEL:已经删除</p>
                     * @param _status <p>集群状态<br>CSR_RUNNING: 运行中<br>CSR_EXCEPTION:异常<br>CSR_DEL:已经删除</p>
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
                     * 获取<p>绑定的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindRuleID <p>绑定的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindRuleID() const;

                    /**
                     * 设置<p>绑定的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindRuleID <p>绑定的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindRuleID(const std::string& _bindRuleID);

                    /**
                     * 判断参数 BindRuleID 是否已赋值
                     * @return BindRuleID 是否已赋值
                     * 
                     */
                    bool BindRuleIDHasBeenSet() const;

                    /**
                     * 获取<p>绑定规则名称</p>
                     * @return BindRuleName <p>绑定规则名称</p>
                     * 
                     */
                    std::string GetBindRuleName() const;

                    /**
                     * 设置<p>绑定规则名称</p>
                     * @param _bindRuleName <p>绑定规则名称</p>
                     * 
                     */
                    void SetBindRuleName(const std::string& _bindRuleName);

                    /**
                     * 判断参数 BindRuleName 是否已赋值
                     * @return BindRuleName 是否已赋值
                     * 
                     */
                    bool BindRuleNameHasBeenSet() const;

                    /**
                     * 获取<p>集群类型:<br>CT_TKE:TKE集群;<br>CT_USER_CREATE:用户自建集群;<br>CT_TKE_SERVERLESS:TKE Serverless集群;</p>
                     * @return ClusterType <p>集群类型:<br>CT_TKE:TKE集群;<br>CT_USER_CREATE:用户自建集群;<br>CT_TKE_SERVERLESS:TKE Serverless集群;</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型:<br>CT_TKE:TKE集群;<br>CT_USER_CREATE:用户自建集群;<br>CT_TKE_SERVERLESS:TKE Serverless集群;</p>
                     * @param _clusterType <p>集群类型:<br>CT_TKE:TKE集群;<br>CT_USER_CREATE:用户自建集群;<br>CT_TKE_SERVERLESS:TKE Serverless集群;</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群版本</p>
                     * @return ClusterVersion <p>集群版本</p>
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置<p>集群版本</p>
                     * @param _clusterVersion <p>集群版本</p>
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>内存量</p>
                     * @return MemLimit <p>内存量</p>
                     * 
                     */
                    int64_t GetMemLimit() const;

                    /**
                     * 设置<p>内存量</p>
                     * @param _memLimit <p>内存量</p>
                     * 
                     */
                    void SetMemLimit(const int64_t& _memLimit);

                    /**
                     * 判断参数 MemLimit 是否已赋值
                     * @return MemLimit 是否已赋值
                     * 
                     */
                    bool MemLimitHasBeenSet() const;

                    /**
                     * 获取<p>cpu</p>
                     * @return CpuLimit <p>cpu</p>
                     * 
                     */
                    int64_t GetCpuLimit() const;

                    /**
                     * 设置<p>cpu</p>
                     * @param _cpuLimit <p>cpu</p>
                     * 
                     */
                    void SetCpuLimit(const int64_t& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取<p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     * @return ClusterAuditStatus <p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     * 
                     */
                    std::string GetClusterAuditStatus() const;

                    /**
                     * 设置<p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     * @param _clusterAuditStatus <p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     * 
                     */
                    void SetClusterAuditStatus(const std::string& _clusterAuditStatus);

                    /**
                     * 判断参数 ClusterAuditStatus 是否已赋值
                     * @return ClusterAuditStatus 是否已赋值
                     * 
                     */
                    bool ClusterAuditStatusHasBeenSet() const;

                    /**
                     * 获取<p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     * @return AccessedStatus <p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     * 
                     */
                    std::string GetAccessedStatus() const;

                    /**
                     * 设置<p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     * @param _accessedStatus <p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     * 
                     */
                    void SetAccessedStatus(const std::string& _accessedStatus);

                    /**
                     * 判断参数 AccessedStatus 是否已赋值
                     * @return AccessedStatus 是否已赋值
                     * 
                     */
                    bool AccessedStatusHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群状态<br>CSR_RUNNING: 运行中<br>CSR_EXCEPTION:异常<br>CSR_DEL:已经删除</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>绑定的集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindRuleID;
                    bool m_bindRuleIDHasBeenSet;

                    /**
                     * <p>绑定规则名称</p>
                     */
                    std::string m_bindRuleName;
                    bool m_bindRuleNameHasBeenSet;

                    /**
                     * <p>集群类型:<br>CT_TKE:TKE集群;<br>CT_USER_CREATE:用户自建集群;<br>CT_TKE_SERVERLESS:TKE Serverless集群;</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>集群版本</p>
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>内存量</p>
                     */
                    int64_t m_memLimit;
                    bool m_memLimitHasBeenSet;

                    /**
                     * <p>cpu</p>
                     */
                    int64_t m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * <p>集群审计开关状态：<br>已关闭Closed/关闭中Closing/关闭失败CloseFailed/已开启Opened/开启中Opening/开启失败OpenFailed</p>
                     */
                    std::string m_clusterAuditStatus;
                    bool m_clusterAuditStatusHasBeenSet;

                    /**
                     * <p>接入状态:<br>未接入: AccessedNone<br>已防护: AccessedDefended<br>未防护: AccessedInstalled<br>部分防护: AccessedPartialDefence<br>接入异常: AccessedException<br>卸载异常: AccessedUninstallException<br>接入中: AccessedInstalling<br>卸载中: AccessedUninstalling</p>
                     */
                    std::string m_accessedStatus;
                    bool m_accessedStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ASSETCLUSTERLISTITEM_H_
