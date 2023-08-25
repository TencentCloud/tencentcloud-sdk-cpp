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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPADISCOVERYTASKREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPADISCOVERYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ModifyDSPADiscoveryTask请求参数结构体
                */
                class ModifyDSPADiscoveryTaskRequest : public AbstractModel
                {
                public:
                    ModifyDSPADiscoveryTaskRequest();
                    ~ModifyDSPADiscoveryTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取任务名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @return Name 任务名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     * @param _name 任务名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
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
                     * 获取任务描述，最大长度为1024个字符
                     * @return Description 任务描述，最大长度为1024个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述，最大长度为1024个字符
                     * @param _description 任务描述，最大长度为1024个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取任务开关，0 关闭，1 启用
                     * @return Enable 任务开关，0 关闭，1 启用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置任务开关，0 关闭，1 启用
                     * @param _enable 任务开关，0 关闭，1 启用
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取数据源ID
                     * @return DataSourceId 数据源ID
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源ID
                     * @param _dataSourceId 数据源ID
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取用于传入的数据源的条件，目前只支持数据库，所以目前表示数据库的名称，最多添加5个数据库，之间通过逗号分隔
                     * @return Condition 用于传入的数据源的条件，目前只支持数据库，所以目前表示数据库的名称，最多添加5个数据库，之间通过逗号分隔
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置用于传入的数据源的条件，目前只支持数据库，所以目前表示数据库的名称，最多添加5个数据库，之间通过逗号分隔
                     * @param _condition 用于传入的数据源的条件，目前只支持数据库，所以目前表示数据库的名称，最多添加5个数据库，之间通过逗号分隔
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取通用规则集开关；0 关闭，1 启用
                     * @return GeneralRuleSetEnable 通用规则集开关；0 关闭，1 启用
                     * 
                     */
                    int64_t GetGeneralRuleSetEnable() const;

                    /**
                     * 设置通用规则集开关；0 关闭，1 启用
                     * @param _generalRuleSetEnable 通用规则集开关；0 关闭，1 启用
                     * 
                     */
                    void SetGeneralRuleSetEnable(const int64_t& _generalRuleSetEnable);

                    /**
                     * 判断参数 GeneralRuleSetEnable 是否已赋值
                     * @return GeneralRuleSetEnable 是否已赋值
                     * 
                     */
                    bool GeneralRuleSetEnableHasBeenSet() const;

                    /**
                     * 获取合规组ID列表，最多支持添加5个
                     * @return ComplianceGroupIds 合规组ID列表，最多支持添加5个
                     * 
                     */
                    std::vector<int64_t> GetComplianceGroupIds() const;

                    /**
                     * 设置合规组ID列表，最多支持添加5个
                     * @param _complianceGroupIds 合规组ID列表，最多支持添加5个
                     * 
                     */
                    void SetComplianceGroupIds(const std::vector<int64_t>& _complianceGroupIds);

                    /**
                     * 判断参数 ComplianceGroupIds 是否已赋值
                     * @return ComplianceGroupIds 是否已赋值
                     * 
                     */
                    bool ComplianceGroupIdsHasBeenSet() const;

                    /**
                     * 获取执行计划； 0立即 1定时，选择“立即”时，扫描周期只能选择单次
                     * @return Plan 执行计划； 0立即 1定时，选择“立即”时，扫描周期只能选择单次
                     * 
                     */
                    int64_t GetPlan() const;

                    /**
                     * 设置执行计划； 0立即 1定时，选择“立即”时，扫描周期只能选择单次
                     * @param _plan 执行计划； 0立即 1定时，选择“立即”时，扫描周期只能选择单次
                     * 
                     */
                    void SetPlan(const int64_t& _plan);

                    /**
                     * 判断参数 Plan 是否已赋值
                     * @return Plan 是否已赋值
                     * 
                     */
                    bool PlanHasBeenSet() const;

                    /**
                     * 获取扫描周期；0单次 1每天 2每周 3每月
                     * @return Period 扫描周期；0单次 1每天 2每周 3每月
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置扫描周期；0单次 1每天 2每周 3每月
                     * @param _period 扫描周期；0单次 1每天 2每周 3每月
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取任务定时启动时间，格式：2006-01-02 15:04:05
当执行计划（Plan字段）为”立即“时，定时启动时间不会生效，此场景下给该字段传值不会被保存。
                     * @return TimingStartTime 任务定时启动时间，格式：2006-01-02 15:04:05
当执行计划（Plan字段）为”立即“时，定时启动时间不会生效，此场景下给该字段传值不会被保存。
                     * 
                     */
                    std::string GetTimingStartTime() const;

                    /**
                     * 设置任务定时启动时间，格式：2006-01-02 15:04:05
当执行计划（Plan字段）为”立即“时，定时启动时间不会生效，此场景下给该字段传值不会被保存。
                     * @param _timingStartTime 任务定时启动时间，格式：2006-01-02 15:04:05
当执行计划（Plan字段）为”立即“时，定时启动时间不会生效，此场景下给该字段传值不会被保存。
                     * 
                     */
                    void SetTimingStartTime(const std::string& _timingStartTime);

                    /**
                     * 判断参数 TimingStartTime 是否已赋值
                     * @return TimingStartTime 是否已赋值
                     * 
                     */
                    bool TimingStartTimeHasBeenSet() const;

                    /**
                     * 获取资源所在地域
                     * @return ResourceRegion 资源所在地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域
                     * @param _resourceRegion 资源所在地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取数据源类型，可取值如下：
cdb 表示云数据库 MySQL,
dcdb 表示TDSQL MySQL版,
mariadb 表示云数据库 MariaDB,
postgres 表示云数据库 PostgreSQL,
cynosdbpg 表示TDSQL-C PostgreSQL版,
cynosdbmysql 表示TDSQL-C MySQL版,
selfbuilt-db 表示自建数据库
                     * @return DataSourceType 数据源类型，可取值如下：
cdb 表示云数据库 MySQL,
dcdb 表示TDSQL MySQL版,
mariadb 表示云数据库 MariaDB,
postgres 表示云数据库 PostgreSQL,
cynosdbpg 表示TDSQL-C PostgreSQL版,
cynosdbmysql 表示TDSQL-C MySQL版,
selfbuilt-db 表示自建数据库
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型，可取值如下：
cdb 表示云数据库 MySQL,
dcdb 表示TDSQL MySQL版,
mariadb 表示云数据库 MariaDB,
postgres 表示云数据库 PostgreSQL,
cynosdbpg 表示TDSQL-C PostgreSQL版,
cynosdbmysql 表示TDSQL-C MySQL版,
selfbuilt-db 表示自建数据库
                     * @param _dataSourceType 数据源类型，可取值如下：
cdb 表示云数据库 MySQL,
dcdb 表示TDSQL MySQL版,
mariadb 表示云数据库 MariaDB,
postgres 表示云数据库 PostgreSQL,
cynosdbpg 表示TDSQL-C PostgreSQL版,
cynosdbmysql 表示TDSQL-C MySQL版,
selfbuilt-db 表示自建数据库
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务名称，1-60个字符，仅允许输入中文、英文字母、数字、'_'、'-'，并且开头和结尾需为中文、英文字母或者数字，Name不可重复
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务描述，最大长度为1024个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 任务开关，0 关闭，1 启用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 用于传入的数据源的条件，目前只支持数据库，所以目前表示数据库的名称，最多添加5个数据库，之间通过逗号分隔
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 通用规则集开关；0 关闭，1 启用
                     */
                    int64_t m_generalRuleSetEnable;
                    bool m_generalRuleSetEnableHasBeenSet;

                    /**
                     * 合规组ID列表，最多支持添加5个
                     */
                    std::vector<int64_t> m_complianceGroupIds;
                    bool m_complianceGroupIdsHasBeenSet;

                    /**
                     * 执行计划； 0立即 1定时，选择“立即”时，扫描周期只能选择单次
                     */
                    int64_t m_plan;
                    bool m_planHasBeenSet;

                    /**
                     * 扫描周期；0单次 1每天 2每周 3每月
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 任务定时启动时间，格式：2006-01-02 15:04:05
当执行计划（Plan字段）为”立即“时，定时启动时间不会生效，此场景下给该字段传值不会被保存。
                     */
                    std::string m_timingStartTime;
                    bool m_timingStartTimeHasBeenSet;

                    /**
                     * 资源所在地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 数据源类型，可取值如下：
cdb 表示云数据库 MySQL,
dcdb 表示TDSQL MySQL版,
mariadb 表示云数据库 MariaDB,
postgres 表示云数据库 PostgreSQL,
cynosdbpg 表示TDSQL-C PostgreSQL版,
cynosdbmysql 表示TDSQL-C MySQL版,
selfbuilt-db 表示自建数据库
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPADISCOVERYTASKREQUEST_H_
