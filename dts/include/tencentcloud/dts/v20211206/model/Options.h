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
#include <tencentcloud/dts/v20211206/model/KafkaOption.h>
#include <tencentcloud/dts/v20211206/model/RateLimitOption.h>


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
                     * 获取<p>同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)；mongodb链路只支持全量数据初始化或仅增量。</p>
                     * @return InitType <p>同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)；mongodb链路只支持全量数据初始化或仅增量。</p>
                     * 
                     */
                    std::string GetInitType() const;

                    /**
                     * 设置<p>同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)；mongodb链路只支持全量数据初始化或仅增量。</p>
                     * @param _initType <p>同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)；mongodb链路只支持全量数据初始化或仅增量。</p>
                     * 
                     */
                    void SetInitType(const std::string& _initType);

                    /**
                     * 判断参数 InitType 是否已赋值
                     * @return InitType 是否已赋值
                     * 
                     */
                    bool InitTypeHasBeenSet() const;

                    /**
                     * 获取<p>同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)</p>
                     * @return DealOfExistSameTable <p>同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)</p>
                     * 
                     */
                    std::string GetDealOfExistSameTable() const;

                    /**
                     * 设置<p>同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)</p>
                     * @param _dealOfExistSameTable <p>同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)</p>
                     * 
                     */
                    void SetDealOfExistSameTable(const std::string& _dealOfExistSameTable);

                    /**
                     * 判断参数 DealOfExistSameTable 是否已赋值
                     * @return DealOfExistSameTable 是否已赋值
                     * 
                     */
                    bool DealOfExistSameTableHasBeenSet() const;

                    /**
                     * 获取<p>冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)</p>
                     * @return ConflictHandleType <p>冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)</p>
                     * 
                     */
                    std::string GetConflictHandleType() const;

                    /**
                     * 设置<p>冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)</p>
                     * @param _conflictHandleType <p>冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)</p>
                     * 
                     */
                    void SetConflictHandleType(const std::string& _conflictHandleType);

                    /**
                     * 判断参数 ConflictHandleType 是否已赋值
                     * @return ConflictHandleType 是否已赋值
                     * 
                     */
                    bool ConflictHandleTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否添加附加列</p>
                     * @return AddAdditionalColumn <p>是否添加附加列</p>
                     * 
                     */
                    bool GetAddAdditionalColumn() const;

                    /**
                     * 设置<p>是否添加附加列</p>
                     * @param _addAdditionalColumn <p>是否添加附加列</p>
                     * 
                     */
                    void SetAddAdditionalColumn(const bool& _addAdditionalColumn);

                    /**
                     * 判断参数 AddAdditionalColumn 是否已赋值
                     * @return AddAdditionalColumn 是否已赋值
                     * 
                     */
                    bool AddAdditionalColumnHasBeenSet() const;

                    /**
                     * 获取<p>所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， PartialDDL(自定义,和DdlOptions一起配合使用)。注意，这里至少需要包含DML中的一种。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpTypes <p>所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， PartialDDL(自定义,和DdlOptions一起配合使用)。注意，这里至少需要包含DML中的一种。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOpTypes() const;

                    /**
                     * 设置<p>所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， PartialDDL(自定义,和DdlOptions一起配合使用)。注意，这里至少需要包含DML中的一种。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _opTypes <p>所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， PartialDDL(自定义,和DdlOptions一起配合使用)。注意，这里至少需要包含DML中的一种。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOpTypes(const std::vector<std::string>& _opTypes);

                    /**
                     * 判断参数 OpTypes 是否已赋值
                     * @return OpTypes 是否已赋值
                     * 
                     */
                    bool OpTypesHasBeenSet() const;

                    /**
                     * 获取<p>冲突处理的详细选项，如条件覆盖中的条件行和条件操作</p>
                     * @return ConflictHandleOption <p>冲突处理的详细选项，如条件覆盖中的条件行和条件操作</p>
                     * 
                     */
                    ConflictHandleOption GetConflictHandleOption() const;

                    /**
                     * 设置<p>冲突处理的详细选项，如条件覆盖中的条件行和条件操作</p>
                     * @param _conflictHandleOption <p>冲突处理的详细选项，如条件覆盖中的条件行和条件操作</p>
                     * 
                     */
                    void SetConflictHandleOption(const ConflictHandleOption& _conflictHandleOption);

                    /**
                     * 判断参数 ConflictHandleOption 是否已赋值
                     * @return ConflictHandleOption 是否已赋值
                     * 
                     */
                    bool ConflictHandleOptionHasBeenSet() const;

                    /**
                     * 获取<p>DDL同步选项，具体描述要同步哪些DDL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DdlOptions <p>DDL同步选项，具体描述要同步哪些DDL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DdlOption> GetDdlOptions() const;

                    /**
                     * 设置<p>DDL同步选项，具体描述要同步哪些DDL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ddlOptions <p>DDL同步选项，具体描述要同步哪些DDL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDdlOptions(const std::vector<DdlOption>& _ddlOptions);

                    /**
                     * 判断参数 DdlOptions 是否已赋值
                     * @return DdlOptions 是否已赋值
                     * 
                     */
                    bool DdlOptionsHasBeenSet() const;

                    /**
                     * 获取<p>kafka同步选项</p>
                     * @return KafkaOption <p>kafka同步选项</p>
                     * 
                     */
                    KafkaOption GetKafkaOption() const;

                    /**
                     * 设置<p>kafka同步选项</p>
                     * @param _kafkaOption <p>kafka同步选项</p>
                     * 
                     */
                    void SetKafkaOption(const KafkaOption& _kafkaOption);

                    /**
                     * 判断参数 KafkaOption 是否已赋值
                     * @return KafkaOption 是否已赋值
                     * 
                     */
                    bool KafkaOptionHasBeenSet() const;

                    /**
                     * 获取<p>任务限速信息</p>
                     * @return RateLimitOption <p>任务限速信息</p>
                     * 
                     */
                    RateLimitOption GetRateLimitOption() const;

                    /**
                     * 设置<p>任务限速信息</p>
                     * @param _rateLimitOption <p>任务限速信息</p>
                     * 
                     */
                    void SetRateLimitOption(const RateLimitOption& _rateLimitOption);

                    /**
                     * 判断参数 RateLimitOption 是否已赋值
                     * @return RateLimitOption 是否已赋值
                     * 
                     */
                    bool RateLimitOptionHasBeenSet() const;

                    /**
                     * 获取<p>自动重试的时间窗口设置</p>
                     * @return AutoRetryTimeRangeMinutes <p>自动重试的时间窗口设置</p>
                     * 
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置<p>自动重试的时间窗口设置</p>
                     * @param _autoRetryTimeRangeMinutes <p>自动重试的时间窗口设置</p>
                     * 
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     * 
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                    /**
                     * 获取<p>同步到kafka链路指定位点。目前只支持时间格式：2023-12-20T19:24:23+08:00。如果没有指定位点，为空。</p>
                     * @return StartPosition <p>同步到kafka链路指定位点。目前只支持时间格式：2023-12-20T19:24:23+08:00。如果没有指定位点，为空。</p>
                     * 
                     */
                    std::string GetStartPosition() const;

                    /**
                     * 设置<p>同步到kafka链路指定位点。目前只支持时间格式：2023-12-20T19:24:23+08:00。如果没有指定位点，为空。</p>
                     * @param _startPosition <p>同步到kafka链路指定位点。目前只支持时间格式：2023-12-20T19:24:23+08:00。如果没有指定位点，为空。</p>
                     * 
                     */
                    void SetStartPosition(const std::string& _startPosition);

                    /**
                     * 判断参数 StartPosition 是否已赋值
                     * @return StartPosition 是否已赋值
                     * 
                     */
                    bool StartPositionHasBeenSet() const;

                    /**
                     * 获取<p>同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持</p>
                     * @return FilterBeginCommit <p>同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持</p>
                     * 
                     */
                    bool GetFilterBeginCommit() const;

                    /**
                     * 设置<p>同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持</p>
                     * @param _filterBeginCommit <p>同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持</p>
                     * 
                     */
                    void SetFilterBeginCommit(const bool& _filterBeginCommit);

                    /**
                     * 判断参数 FilterBeginCommit 是否已赋值
                     * @return FilterBeginCommit 是否已赋值
                     * 
                     */
                    bool FilterBeginCommitHasBeenSet() const;

                    /**
                     * 获取<p>同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持</p>
                     * @return FilterCheckpoint <p>同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持</p>
                     * 
                     */
                    bool GetFilterCheckpoint() const;

                    /**
                     * 设置<p>同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持</p>
                     * @param _filterCheckpoint <p>同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持</p>
                     * 
                     */
                    void SetFilterCheckpoint(const bool& _filterCheckpoint);

                    /**
                     * 判断参数 FilterCheckpoint 是否已赋值
                     * @return FilterCheckpoint 是否已赋值
                     * 
                     */
                    bool FilterCheckpointHasBeenSet() const;

                private:

                    /**
                     * <p>同步初始化选项，Data(全量数据初始化)、Structure(结构初始化)、Full(全量数据且结构初始化，默认)、None(仅增量)；mongodb链路只支持全量数据初始化或仅增量。</p>
                     */
                    std::string m_initType;
                    bool m_initTypeHasBeenSet;

                    /**
                     * <p>同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)</p>
                     */
                    std::string m_dealOfExistSameTable;
                    bool m_dealOfExistSameTableHasBeenSet;

                    /**
                     * <p>冲突处理选项，ReportError(报错，默认为该值)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖)</p>
                     */
                    std::string m_conflictHandleType;
                    bool m_conflictHandleTypeHasBeenSet;

                    /**
                     * <p>是否添加附加列</p>
                     */
                    bool m_addAdditionalColumn;
                    bool m_addAdditionalColumnHasBeenSet;

                    /**
                     * <p>所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)， PartialDDL(自定义,和DdlOptions一起配合使用)。注意，这里至少需要包含DML中的一种。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_opTypes;
                    bool m_opTypesHasBeenSet;

                    /**
                     * <p>冲突处理的详细选项，如条件覆盖中的条件行和条件操作</p>
                     */
                    ConflictHandleOption m_conflictHandleOption;
                    bool m_conflictHandleOptionHasBeenSet;

                    /**
                     * <p>DDL同步选项，具体描述要同步哪些DDL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DdlOption> m_ddlOptions;
                    bool m_ddlOptionsHasBeenSet;

                    /**
                     * <p>kafka同步选项</p>
                     */
                    KafkaOption m_kafkaOption;
                    bool m_kafkaOptionHasBeenSet;

                    /**
                     * <p>任务限速信息</p>
                     */
                    RateLimitOption m_rateLimitOption;
                    bool m_rateLimitOptionHasBeenSet;

                    /**
                     * <p>自动重试的时间窗口设置</p>
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                    /**
                     * <p>同步到kafka链路指定位点。目前只支持时间格式：2023-12-20T19:24:23+08:00。如果没有指定位点，为空。</p>
                     */
                    std::string m_startPosition;
                    bool m_startPositionHasBeenSet;

                    /**
                     * <p>同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持</p>
                     */
                    bool m_filterBeginCommit;
                    bool m_filterBeginCommitHasBeenSet;

                    /**
                     * <p>同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持</p>
                     */
                    bool m_filterCheckpoint;
                    bool m_filterCheckpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OPTIONS_H_
