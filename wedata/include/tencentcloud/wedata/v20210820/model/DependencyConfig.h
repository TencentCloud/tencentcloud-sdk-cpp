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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskInnerInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 依赖配置
                */
                class DependencyConfig : public AbstractModel
                {
                public:
                    DependencyConfig();
                    ~DependencyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取周期运行依赖配置： HOUR,DAY,WEEK,MONTH,YEAR,CRONTAB,MINUTE,RANGE_DAY,RANGE_HOUR,RANGE_MINUTE,LIST_DAY,LIST_HOUR,LIST_MINUTE;
                     * @return DependConfType 周期运行依赖配置： HOUR,DAY,WEEK,MONTH,YEAR,CRONTAB,MINUTE,RANGE_DAY,RANGE_HOUR,RANGE_MINUTE,LIST_DAY,LIST_HOUR,LIST_MINUTE;
                     * 
                     */
                    std::string GetDependConfType() const;

                    /**
                     * 设置周期运行依赖配置： HOUR,DAY,WEEK,MONTH,YEAR,CRONTAB,MINUTE,RANGE_DAY,RANGE_HOUR,RANGE_MINUTE,LIST_DAY,LIST_HOUR,LIST_MINUTE;
                     * @param _dependConfType 周期运行依赖配置： HOUR,DAY,WEEK,MONTH,YEAR,CRONTAB,MINUTE,RANGE_DAY,RANGE_HOUR,RANGE_MINUTE,LIST_DAY,LIST_HOUR,LIST_MINUTE;
                     * 
                     */
                    void SetDependConfType(const std::string& _dependConfType);

                    /**
                     * 判断参数 DependConfType 是否已赋值
                     * @return DependConfType 是否已赋值
                     * 
                     */
                    bool DependConfTypeHasBeenSet() const;

                    /**
                     * 获取依赖配置从属周期类型，CURRENT_HOUR，PREVIOUS_HOUR，CURRENT_DAY，PREVIOUS_DAY，PREVIOUS_WEEK，PREVIOUS_FRIDAY，PREVIOUS_WEEKEND，CURRENT_MONTH，PREVIOUS_MONTH，PREVIOUS_END_OF_MONTH，PREVIOUS_BEGIN_OF_MONTH，ALL_MONTH_OF_YEAR，ALL_DAY_OF_YEAR，CURRENT_YEAR，CURRENT，CURRENT_MINUTE，PREVIOUS_MINUTE_CYCLE，PREVIOUS_HOUR_CYCLE
                     * @return SubordinateCyclicType 依赖配置从属周期类型，CURRENT_HOUR，PREVIOUS_HOUR，CURRENT_DAY，PREVIOUS_DAY，PREVIOUS_WEEK，PREVIOUS_FRIDAY，PREVIOUS_WEEKEND，CURRENT_MONTH，PREVIOUS_MONTH，PREVIOUS_END_OF_MONTH，PREVIOUS_BEGIN_OF_MONTH，ALL_MONTH_OF_YEAR，ALL_DAY_OF_YEAR，CURRENT_YEAR，CURRENT，CURRENT_MINUTE，PREVIOUS_MINUTE_CYCLE，PREVIOUS_HOUR_CYCLE
                     * 
                     */
                    std::string GetSubordinateCyclicType() const;

                    /**
                     * 设置依赖配置从属周期类型，CURRENT_HOUR，PREVIOUS_HOUR，CURRENT_DAY，PREVIOUS_DAY，PREVIOUS_WEEK，PREVIOUS_FRIDAY，PREVIOUS_WEEKEND，CURRENT_MONTH，PREVIOUS_MONTH，PREVIOUS_END_OF_MONTH，PREVIOUS_BEGIN_OF_MONTH，ALL_MONTH_OF_YEAR，ALL_DAY_OF_YEAR，CURRENT_YEAR，CURRENT，CURRENT_MINUTE，PREVIOUS_MINUTE_CYCLE，PREVIOUS_HOUR_CYCLE
                     * @param _subordinateCyclicType 依赖配置从属周期类型，CURRENT_HOUR，PREVIOUS_HOUR，CURRENT_DAY，PREVIOUS_DAY，PREVIOUS_WEEK，PREVIOUS_FRIDAY，PREVIOUS_WEEKEND，CURRENT_MONTH，PREVIOUS_MONTH，PREVIOUS_END_OF_MONTH，PREVIOUS_BEGIN_OF_MONTH，ALL_MONTH_OF_YEAR，ALL_DAY_OF_YEAR，CURRENT_YEAR，CURRENT，CURRENT_MINUTE，PREVIOUS_MINUTE_CYCLE，PREVIOUS_HOUR_CYCLE
                     * 
                     */
                    void SetSubordinateCyclicType(const std::string& _subordinateCyclicType);

                    /**
                     * 判断参数 SubordinateCyclicType 是否已赋值
                     * @return SubordinateCyclicType 是否已赋值
                     * 
                     */
                    bool SubordinateCyclicTypeHasBeenSet() const;

                    /**
                     * 获取WAITING，等待（默认策略）EXECUTING:执行
                     * @return DependencyStrategy WAITING，等待（默认策略）EXECUTING:执行
                     * 
                     */
                    std::string GetDependencyStrategy() const;

                    /**
                     * 设置WAITING，等待（默认策略）EXECUTING:执行
                     * @param _dependencyStrategy WAITING，等待（默认策略）EXECUTING:执行
                     * 
                     */
                    void SetDependencyStrategy(const std::string& _dependencyStrategy);

                    /**
                     * 判断参数 DependencyStrategy 是否已赋值
                     * @return DependencyStrategy 是否已赋值
                     * 
                     */
                    bool DependencyStrategyHasBeenSet() const;

                    /**
                     * 获取父任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentTask 父任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskInnerInfo GetParentTask() const;

                    /**
                     * 设置父任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentTask 父任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentTask(const TaskInnerInfo& _parentTask);

                    /**
                     * 判断参数 ParentTask 是否已赋值
                     * @return ParentTask 是否已赋值
                     * 
                     */
                    bool ParentTaskHasBeenSet() const;

                    /**
                     * 获取子任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SonTask 子任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskInnerInfo GetSonTask() const;

                    /**
                     * 设置子任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sonTask 子任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSonTask(const TaskInnerInfo& _sonTask);

                    /**
                     * 判断参数 SonTask 是否已赋值
                     * @return SonTask 是否已赋值
                     * 
                     */
                    bool SonTaskHasBeenSet() const;

                    /**
                     * 获取偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offset 偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offset 偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 周期运行依赖配置： HOUR,DAY,WEEK,MONTH,YEAR,CRONTAB,MINUTE,RANGE_DAY,RANGE_HOUR,RANGE_MINUTE,LIST_DAY,LIST_HOUR,LIST_MINUTE;
                     */
                    std::string m_dependConfType;
                    bool m_dependConfTypeHasBeenSet;

                    /**
                     * 依赖配置从属周期类型，CURRENT_HOUR，PREVIOUS_HOUR，CURRENT_DAY，PREVIOUS_DAY，PREVIOUS_WEEK，PREVIOUS_FRIDAY，PREVIOUS_WEEKEND，CURRENT_MONTH，PREVIOUS_MONTH，PREVIOUS_END_OF_MONTH，PREVIOUS_BEGIN_OF_MONTH，ALL_MONTH_OF_YEAR，ALL_DAY_OF_YEAR，CURRENT_YEAR，CURRENT，CURRENT_MINUTE，PREVIOUS_MINUTE_CYCLE，PREVIOUS_HOUR_CYCLE
                     */
                    std::string m_subordinateCyclicType;
                    bool m_subordinateCyclicTypeHasBeenSet;

                    /**
                     * WAITING，等待（默认策略）EXECUTING:执行
                     */
                    std::string m_dependencyStrategy;
                    bool m_dependencyStrategyHasBeenSet;

                    /**
                     * 父任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskInnerInfo m_parentTask;
                    bool m_parentTaskHasBeenSet;

                    /**
                     * 子任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskInnerInfo m_sonTask;
                    bool m_sonTaskHasBeenSet;

                    /**
                     * 偏移量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIG_H_
