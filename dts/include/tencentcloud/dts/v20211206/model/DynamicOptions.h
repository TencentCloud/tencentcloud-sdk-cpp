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
                     * 获取DDL同步选项，具体描述要同步那些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
                     * @return DdlOptions DDL同步选项，具体描述要同步那些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
                     * 
                     */
                    std::vector<DdlOption> GetDdlOptions() const;

                    /**
                     * 设置DDL同步选项，具体描述要同步那些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
                     * @param _ddlOptions DDL同步选项，具体描述要同步那些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
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

                private:

                    /**
                     * 所要同步的DML和DDL的选项，Insert(插入操作)、Update(更新操作)、Delete(删除操作)、DDL(结构同步)，PartialDDL(自定义,和DdlOptions一起起作用 )；必填、dts会用该值覆盖原有的值
                     */
                    std::vector<std::string> m_opTypes;
                    bool m_opTypesHasBeenSet;

                    /**
                     * DDL同步选项，具体描述要同步那些DDL; 当OpTypes取值PartialDDL时、字段不能为空；必填、dts会用该值覆盖原有的值
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DYNAMICOPTIONS_H_
