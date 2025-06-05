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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DYNAMICOPTIONS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DYNAMICOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DdlOption.h>
#include <tencentcloud/dts/v20211206/model/ConflictHandleOption.h>
#include <tencentcloud/dts/v20211206/model/KafkaOption.h>


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
                class DynamicOptions : public AbstractModel
                {
                public:
                    DynamicOptions();
                    ~DynamicOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)，PartialDDL(自定义,和DdlOptions一起起作用 )；必填、dts会用该值覆盖原有的值
                     * @return OpTypes 所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)，PartialDDL(自定义,和DdlOptions一起起作用 )；必填、dts会用该值覆盖原有的值
                     * 
                     */
                    std::vector<std::string> GetOpTypes() const;

                    /**
                     * 设置所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)，PartialDDL(自定义,和DdlOptions一起起作用 )；必填、dts会用该值覆盖原有的值
                     * @param _opTypes 所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)，PartialDDL(自定义,和DdlOptions一起起作用 )；必填、dts会用该值覆盖原有的值
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
                     * 获取DDL同步选项，具体描述要同步哪些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
                     * @return DdlOptions DDL同步选项，具体描述要同步哪些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
                     * 
                     */
                    std::vector<DdlOption> GetDdlOptions() const;

                    /**
                     * 设置DDL同步选项，具体描述要同步哪些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
                     * @param _ddlOptions DDL同步选项，具体描述要同步哪些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
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
                     * 获取冲突处理选项，ReportError(报错)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖); 目前目标端为kafka的链路不支持修改该配置
                     * @return ConflictHandleType 冲突处理选项，ReportError(报错)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖); 目前目标端为kafka的链路不支持修改该配置
                     * 
                     */
                    std::string GetConflictHandleType() const;

                    /**
                     * 设置冲突处理选项，ReportError(报错)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖); 目前目标端为kafka的链路不支持修改该配置
                     * @param _conflictHandleType 冲突处理选项，ReportError(报错)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖); 目前目标端为kafka的链路不支持修改该配置
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
                     * 获取冲突处理的详细选项，如条件覆盖中的条件行和条件操作；不能部分更新该选项的内部字段；有更新时、需要全量更新该字段
                     * @return ConflictHandleOption 冲突处理的详细选项，如条件覆盖中的条件行和条件操作；不能部分更新该选项的内部字段；有更新时、需要全量更新该字段
                     * 
                     */
                    ConflictHandleOption GetConflictHandleOption() const;

                    /**
                     * 设置冲突处理的详细选项，如条件覆盖中的条件行和条件操作；不能部分更新该选项的内部字段；有更新时、需要全量更新该字段
                     * @param _conflictHandleOption 冲突处理的详细选项，如条件覆盖中的条件行和条件操作；不能部分更新该选项的内部字段；有更新时、需要全量更新该字段
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
                     * 获取同步到kafka链路的kafka配置
                     * @return KafkaOption 同步到kafka链路的kafka配置
                     * 
                     */
                    KafkaOption GetKafkaOption() const;

                    /**
                     * 设置同步到kafka链路的kafka配置
                     * @param _kafkaOption 同步到kafka链路的kafka配置
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
                     * 获取同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持
                     * @return FilterBeginCommit 同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持
                     * 
                     */
                    bool GetFilterBeginCommit() const;

                    /**
                     * 设置同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持
                     * @param _filterBeginCommit 同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持
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
                     * 获取同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持
                     * @return FilterCheckpoint 同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持
                     * 
                     */
                    bool GetFilterCheckpoint() const;

                    /**
                     * 设置同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持
                     * @param _filterCheckpoint 同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持
                     * 
                     */
                    void SetFilterCheckpoint(const bool& _filterCheckpoint);

                    /**
                     * 判断参数 FilterCheckpoint 是否已赋值
                     * @return FilterCheckpoint 是否已赋值
                     * 
                     */
                    bool FilterCheckpointHasBeenSet() const;

                    /**
                     * 获取同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)
                     * @return DealOfExistSameTable 同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)
                     * 
                     */
                    std::string GetDealOfExistSameTable() const;

                    /**
                     * 设置同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)
                     * @param _dealOfExistSameTable 同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)
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
                     * 获取仅增量任务重新设置指定位点
                     * @return StartPosition 仅增量任务重新设置指定位点
                     * 
                     */
                    std::string GetStartPosition() const;

                    /**
                     * 设置仅增量任务重新设置指定位点
                     * @param _startPosition 仅增量任务重新设置指定位点
                     * 
                     */
                    void SetStartPosition(const std::string& _startPosition);

                    /**
                     * 判断参数 StartPosition 是否已赋值
                     * @return StartPosition 是否已赋值
                     * 
                     */
                    bool StartPositionHasBeenSet() const;

                private:

                    /**
                     * 所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)，PartialDDL(自定义,和DdlOptions一起起作用 )；必填、dts会用该值覆盖原有的值
                     */
                    std::vector<std::string> m_opTypes;
                    bool m_opTypesHasBeenSet;

                    /**
                     * DDL同步选项，具体描述要同步哪些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
                     */
                    std::vector<DdlOption> m_ddlOptions;
                    bool m_ddlOptionsHasBeenSet;

                    /**
                     * 冲突处理选项，ReportError(报错)、Ignore(忽略)、Cover(覆盖)、ConditionCover(条件覆盖); 目前目标端为kafka的链路不支持修改该配置
                     */
                    std::string m_conflictHandleType;
                    bool m_conflictHandleTypeHasBeenSet;

                    /**
                     * 冲突处理的详细选项，如条件覆盖中的条件行和条件操作；不能部分更新该选项的内部字段；有更新时、需要全量更新该字段
                     */
                    ConflictHandleOption m_conflictHandleOption;
                    bool m_conflictHandleOptionHasBeenSet;

                    /**
                     * 同步到kafka链路的kafka配置
                     */
                    KafkaOption m_kafkaOption;
                    bool m_kafkaOptionHasBeenSet;

                    /**
                     * 同步到kafka链路是否过滤掉begin和commit消息。目前仅mysql2kafka链路支持
                     */
                    bool m_filterBeginCommit;
                    bool m_filterBeginCommitHasBeenSet;

                    /**
                     * 同步到kafka链路是否过滤掉checkpoint消息。目前仅mysql2kafka链路支持
                     */
                    bool m_filterCheckpoint;
                    bool m_filterCheckpointHasBeenSet;

                    /**
                     * 同名表的处理，ReportErrorAfterCheck(前置校验并报错，默认)、ExecuteAfterIgnore(忽略并继续执行)
                     */
                    std::string m_dealOfExistSameTable;
                    bool m_dealOfExistSameTableHasBeenSet;

                    /**
                     * 仅增量任务重新设置指定位点
                     */
                    std::string m_startPosition;
                    bool m_startPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DYNAMICOPTIONS_H_
