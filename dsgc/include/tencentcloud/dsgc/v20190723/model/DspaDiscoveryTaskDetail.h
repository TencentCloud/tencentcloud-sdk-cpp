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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKDETAIL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryTaskDataSource.h>
#include <tencentcloud/dsgc/v20190723/model/ScanTaskComplianceInfo.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 敏感数据扫描任务相关信息
                */
                class DspaDiscoveryTaskDetail : public AbstractModel
                {
                public:
                    DspaDiscoveryTaskDetail();
                    ~DspaDiscoveryTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名称
                     * @return Name 任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名称
                     * @param _name 任务名称
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
                     * 获取任务描述
                     * @return Description 任务描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置任务描述
                     * @param _description 任务描述
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
                     * 获取执行周期，0单次 1每天 2每周 3每月
                     * @return Period 执行周期，0单次 1每天 2每周 3每月
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置执行周期，0单次 1每天 2每周 3每月
                     * @param _period 执行周期，0单次 1每天 2每周 3每月
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
                     * 获取执行计划，0立即 1定时
                     * @return Plan 执行计划，0立即 1定时
                     * 
                     */
                    int64_t GetPlan() const;

                    /**
                     * 设置执行计划，0立即 1定时
                     * @param _plan 执行计划，0立即 1定时
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
                     * 获取任务开关；1 打开，0 关闭
                     * @return Enable 任务开关；1 打开，0 关闭
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置任务开关；1 打开，0 关闭
                     * @param _enable 任务开关；1 打开，0 关闭
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
                     * 获取元数据对象信息
                     * @return DataSourceInfo 元数据对象信息
                     * 
                     */
                    DspaDiscoveryTaskDataSource GetDataSourceInfo() const;

                    /**
                     * 设置元数据对象信息
                     * @param _dataSourceInfo 元数据对象信息
                     * 
                     */
                    void SetDataSourceInfo(const DspaDiscoveryTaskDataSource& _dataSourceInfo);

                    /**
                     * 判断参数 DataSourceInfo 是否已赋值
                     * @return DataSourceInfo 是否已赋值
                     * 
                     */
                    bool DataSourceInfoHasBeenSet() const;

                    /**
                     * 获取通用规则集开关，0 关闭，1 启用
                     * @return GeneralRuleSetEnable 通用规则集开关，0 关闭，1 启用
                     * 
                     */
                    int64_t GetGeneralRuleSetEnable() const;

                    /**
                     * 设置通用规则集开关，0 关闭，1 启用
                     * @param _generalRuleSetEnable 通用规则集开关，0 关闭，1 启用
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
                     * 获取当创建任务时，用户打开了通用规则集开关，则该字段就会保存默认合规组信息
                     * @return DefaultComplianceInfo 当创建任务时，用户打开了通用规则集开关，则该字段就会保存默认合规组信息
                     * 
                     */
                    std::vector<ScanTaskComplianceInfo> GetDefaultComplianceInfo() const;

                    /**
                     * 设置当创建任务时，用户打开了通用规则集开关，则该字段就会保存默认合规组信息
                     * @param _defaultComplianceInfo 当创建任务时，用户打开了通用规则集开关，则该字段就会保存默认合规组信息
                     * 
                     */
                    void SetDefaultComplianceInfo(const std::vector<ScanTaskComplianceInfo>& _defaultComplianceInfo);

                    /**
                     * 判断参数 DefaultComplianceInfo 是否已赋值
                     * @return DefaultComplianceInfo 是否已赋值
                     * 
                     */
                    bool DefaultComplianceInfoHasBeenSet() const;

                    /**
                     * 获取该任务中用户选择的合规组信息列表
                     * @return CustomComplianceInfo 该任务中用户选择的合规组信息列表
                     * 
                     */
                    std::vector<ScanTaskComplianceInfo> GetCustomComplianceInfo() const;

                    /**
                     * 设置该任务中用户选择的合规组信息列表
                     * @param _customComplianceInfo 该任务中用户选择的合规组信息列表
                     * 
                     */
                    void SetCustomComplianceInfo(const std::vector<ScanTaskComplianceInfo>& _customComplianceInfo);

                    /**
                     * 判断参数 CustomComplianceInfo 是否已赋值
                     * @return CustomComplianceInfo 是否已赋值
                     * 
                     */
                    bool CustomComplianceInfoHasBeenSet() const;

                    /**
                     * 获取定时开始时间
                     * @return TimingStartTime 定时开始时间
                     * 
                     */
                    std::string GetTimingStartTime() const;

                    /**
                     * 设置定时开始时间
                     * @param _timingStartTime 定时开始时间
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
                     * 获取full:全量扫描 incre:变更扫描
                     * @return ScanRange full:全量扫描 incre:变更扫描
                     * 
                     */
                    std::string GetScanRange() const;

                    /**
                     * 设置full:全量扫描 incre:变更扫描
                     * @param _scanRange full:全量扫描 incre:变更扫描
                     * 
                     */
                    void SetScanRange(const std::string& _scanRange);

                    /**
                     * 判断参数 ScanRange 是否已赋值
                     * @return ScanRange 是否已赋值
                     * 
                     */
                    bool ScanRangeHasBeenSet() const;

                private:

                    /**
                     * 任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 执行周期，0单次 1每天 2每周 3每月
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 执行计划，0立即 1定时
                     */
                    int64_t m_plan;
                    bool m_planHasBeenSet;

                    /**
                     * 任务开关；1 打开，0 关闭
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 元数据对象信息
                     */
                    DspaDiscoveryTaskDataSource m_dataSourceInfo;
                    bool m_dataSourceInfoHasBeenSet;

                    /**
                     * 通用规则集开关，0 关闭，1 启用
                     */
                    int64_t m_generalRuleSetEnable;
                    bool m_generalRuleSetEnableHasBeenSet;

                    /**
                     * 当创建任务时，用户打开了通用规则集开关，则该字段就会保存默认合规组信息
                     */
                    std::vector<ScanTaskComplianceInfo> m_defaultComplianceInfo;
                    bool m_defaultComplianceInfoHasBeenSet;

                    /**
                     * 该任务中用户选择的合规组信息列表
                     */
                    std::vector<ScanTaskComplianceInfo> m_customComplianceInfo;
                    bool m_customComplianceInfoHasBeenSet;

                    /**
                     * 定时开始时间
                     */
                    std::string m_timingStartTime;
                    bool m_timingStartTimeHasBeenSet;

                    /**
                     * full:全量扫描 incre:变更扫描
                     */
                    std::string m_scanRange;
                    bool m_scanRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYTASKDETAIL_H_
