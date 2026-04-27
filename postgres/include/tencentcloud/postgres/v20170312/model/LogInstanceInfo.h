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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGINSTANCEINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 日志实例信息
                */
                class LogInstanceInfo : public AbstractModel
                {
                public:
                    LogInstanceInfo();
                    ~LogInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置<p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Engine <p>引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engine <p>引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineVersion <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineVersion <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStatus <p>实例状态</p>
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
                     * 获取<p>是否支持审计。1代表支持，0代表不支持。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportAudit <p>是否支持审计。1代表支持，0代表不支持。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsSupportAudit() const;

                    /**
                     * 设置<p>是否支持审计。1代表支持，0代表不支持。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isSupportAudit <p>是否支持审计。1代表支持，0代表不支持。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsSupportAudit(const int64_t& _isSupportAudit);

                    /**
                     * 判断参数 IsSupportAudit 是否已赋值
                     * @return IsSupportAudit 是否已赋值
                     * 
                     */
                    bool IsSupportAuditHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>日志类型</p><p>枚举值：</p><ul><li>complex： 精细审计</li><li>simple： 极速审计</li></ul>
                     * @return AuditType <p>日志类型</p><p>枚举值：</p><ul><li>complex： 精细审计</li><li>simple： 极速审计</li></ul>
                     * 
                     */
                    std::string GetAuditType() const;

                    /**
                     * 设置<p>日志类型</p><p>枚举值：</p><ul><li>complex： 精细审计</li><li>simple： 极速审计</li></ul>
                     * @param _auditType <p>日志类型</p><p>枚举值：</p><ul><li>complex： 精细审计</li><li>simple： 极速审计</li></ul>
                     * 
                     */
                    void SetAuditType(const std::string& _auditType);

                    /**
                     * 判断参数 AuditType 是否已赋值
                     * @return AuditType 是否已赋值
                     * 
                     */
                    bool AuditTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>项目ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>实例标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>引擎</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>引擎版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>实例状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>是否支持审计。1代表支持，0代表不支持。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isSupportAudit;
                    bool m_isSupportAuditHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>日志类型</p><p>枚举值：</p><ul><li>complex： 精细审计</li><li>simple： 极速审计</li></ul>
                     */
                    std::string m_auditType;
                    bool m_auditTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGINSTANCEINFO_H_
