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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPMONITOR_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPMONITOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则组监控业务视图
                */
                class RuleGroupMonitor : public AbstractModel
                {
                public:
                    RuleGroupMonitor();
                    ~RuleGroupMonitor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleGroupId 规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     * 
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取表guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 表guid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableId 表guid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDatasourceId() const;

                    /**
                     * 设置数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceId 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceId(const uint64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _databaseId 数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     * 
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取监控状态 0.false 1.true
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorStatus 监控状态 0.false 1.true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorStatus() const;

                    /**
                     * 设置监控状态 0.false 1.true
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorStatus 监控状态 0.false 1.true
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorStatus(const uint64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取规则组创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserId 规则组创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateUserId() const;

                    /**
                     * 设置规则组创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserId 规则组创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserId(const uint64_t& _createUserId);

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     * 
                     */
                    bool CreateUserIdHasBeenSet() const;

                    /**
                     * 获取规则组创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserName 规则组创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateUserName() const;

                    /**
                     * 设置规则组创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserName 规则组创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserName(const std::string& _createUserName);

                    /**
                     * 判断参数 CreateUserName 是否已赋值
                     * @return CreateUserName 是否已赋值
                     * 
                     */
                    bool CreateUserNameHasBeenSet() const;

                    /**
                     * 获取规则创建时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 规则创建时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置规则创建时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 规则创建时间 yyyy-MM-dd HH:mm:ss
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

                private:

                    /**
                     * 规则组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 表guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 数据源id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据库guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 监控状态 0.false 1.true
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 规则组创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createUserId;
                    bool m_createUserIdHasBeenSet;

                    /**
                     * 规则组创建人昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createUserName;
                    bool m_createUserNameHasBeenSet;

                    /**
                     * 规则创建时间 yyyy-MM-dd HH:mm:ss
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUPMONITOR_H_
