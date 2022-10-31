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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OPTIONS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/ConflictHandleOption.h>
#include <tencentcloud/dts/v20211206/model/DdlOption.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据同步中的选项
                */
                class Options : public AbstractModel
                {
                public:
                    Options();
                    ~Options() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InitType 同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInitType() const;

                    /**
                     * 设置同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InitType 同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInitType(const std::string& _initType);

                    /**
                     * 判断参数 InitType 是否已赋值
                     * @return InitType 是否已赋值
                     */
                    bool InitTypeHasBeenSet() const;

                    /**
                     * 获取同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、InitializeAfterDelete(删除并重新初始化)、ExecuteAfterIgnore(忽略并继续执行)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealOfExistSameTable 同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、InitializeAfterDelete(删除并重新初始化)、ExecuteAfterIgnore(忽略并继续执行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDealOfExistSameTable() const;

                    /**
                     * 设置同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、InitializeAfterDelete(删除并重新初始化)、ExecuteAfterIgnore(忽略并继续执行)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DealOfExistSameTable 同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、InitializeAfterDelete(删除并重新初始化)、ExecuteAfterIgnore(忽略并继续执行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDealOfExistSameTable(const std::string& _dealOfExistSameTable);

                    /**
                     * 判断参数 DealOfExistSameTable 是否已赋值
                     * @return DealOfExistSameTable 是否已赋值
                     */
                    bool DealOfExistSameTableHasBeenSet() const;

                    /**
                     * 获取冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConflictHandleType 冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConflictHandleType() const;

                    /**
                     * 设置冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConflictHandleType 冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConflictHandleType(const std::string& _conflictHandleType);

                    /**
                     * 判断参数 ConflictHandleType 是否已赋值
                     * @return ConflictHandleType 是否已赋值
                     */
                    bool ConflictHandleTypeHasBeenSet() const;

                    /**
                     * 获取是否添加附加列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddAdditionalColumn 是否添加附加列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAddAdditionalColumn() const;

                    /**
                     * 设置是否添加附加列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AddAdditionalColumn 是否添加附加列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddAdditionalColumn(const bool& _addAdditionalColumn);

                    /**
                     * 判断参数 AddAdditionalColumn 是否已赋值
                     * @return AddAdditionalColumn 是否已赋值
                     */
                    bool AddAdditionalColumnHasBeenSet() const;

                    /**
                     * 获取所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， 不填（不选），PartialDDL(自定义,和DdlOptions一起起作用 )
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpTypes 所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， 不填（不选），PartialDDL(自定义,和DdlOptions一起起作用 )
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetOpTypes() const;

                    /**
                     * 设置所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， 不填（不选），PartialDDL(自定义,和DdlOptions一起起作用 )
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OpTypes 所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， 不填（不选），PartialDDL(自定义,和DdlOptions一起起作用 )
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOpTypes(const std::vector<std::string>& _opTypes);

                    /**
                     * 判断参数 OpTypes 是否已赋值
                     * @return OpTypes 是否已赋值
                     */
                    bool OpTypesHasBeenSet() const;

                    /**
                     * 获取冲突处理的详细选项，如条件覆盖中的条件行和条件操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConflictHandleOption 冲突处理的详细选项，如条件覆盖中的条件行和条件操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConflictHandleOption GetConflictHandleOption() const;

                    /**
                     * 设置冲突处理的详细选项，如条件覆盖中的条件行和条件操作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConflictHandleOption 冲突处理的详细选项，如条件覆盖中的条件行和条件操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConflictHandleOption(const ConflictHandleOption& _conflictHandleOption);

                    /**
                     * 判断参数 ConflictHandleOption 是否已赋值
                     * @return ConflictHandleOption 是否已赋值
                     */
                    bool ConflictHandleOptionHasBeenSet() const;

                    /**
                     * 获取DDL同步选项，具体描述要同步那些DDL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdlOptions DDL同步选项，具体描述要同步那些DDL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DdlOption> GetDdlOptions() const;

                    /**
                     * 设置DDL同步选项，具体描述要同步那些DDL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DdlOptions DDL同步选项，具体描述要同步那些DDL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDdlOptions(const std::vector<DdlOption>& _ddlOptions);

                    /**
                     * 判断参数 DdlOptions 是否已赋值
                     * @return DdlOptions 是否已赋值
                     */
                    bool DdlOptionsHasBeenSet() const;

                private:

                    /**
                     * 同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_initType;
                    bool m_initTypeHasBeenSet;

                    /**
                     * 同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、InitializeAfterDelete(删除并重新初始化)、ExecuteAfterIgnore(忽略并继续执行)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealOfExistSameTable;
                    bool m_dealOfExistSameTableHasBeenSet;

                    /**
                     * 冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_conflictHandleType;
                    bool m_conflictHandleTypeHasBeenSet;

                    /**
                     * 是否添加附加列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_addAdditionalColumn;
                    bool m_addAdditionalColumnHasBeenSet;

                    /**
                     * 所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， 不填（不选），PartialDDL(自定义,和DdlOptions一起起作用 )
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_opTypes;
                    bool m_opTypesHasBeenSet;

                    /**
                     * 冲突处理的详细选项，如条件覆盖中的条件行和条件操作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConflictHandleOption m_conflictHandleOption;
                    bool m_conflictHandleOptionHasBeenSet;

                    /**
                     * DDL同步选项，具体描述要同步那些DDL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DdlOption> m_ddlOptions;
                    bool m_ddlOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OPTIONS_H_
