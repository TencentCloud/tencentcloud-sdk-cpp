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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeRuleTemplates请求参数结构体
                */
                class DescribeRuleTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeRuleTemplatesRequest();
                    ~DescribeRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模版类型：1-系统模版，2-用户自定义模版
                     * @return Type 模版类型：1-系统模版，2-用户自定义模版
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置模版类型：1-系统模版，2-用户自定义模版
                     * @param _type 模版类型：1-系统模版，2-用户自定义模版
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取源数据对象类型：1-常量，2-离线表级，3-离线字段级别
                     * @return SourceObjectType 源数据对象类型：1-常量，2-离线表级，3-离线字段级别
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置源数据对象类型：1-常量，2-离线表级，3-离线字段级别
                     * @param _sourceObjectType 源数据对象类型：1-常量，2-离线表级，3-离线字段级别
                     * 
                     */
                    void SetSourceObjectType(const uint64_t& _sourceObjectType);

                    /**
                     * 判断参数 SourceObjectType 是否已赋值
                     * @return SourceObjectType 是否已赋值
                     * 
                     */
                    bool SourceObjectTypeHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取执行引擎多选（位运算数组）：2-HIVE，4-SPARK，8-LIVY，16-DLC，64-TCHouse-P，128-DORIS，256-TCHouse-D，512-EMR-StarRocks，1024-TCHouse-X
                     * @return SourceEngineTypes 执行引擎多选（位运算数组）：2-HIVE，4-SPARK，8-LIVY，16-DLC，64-TCHouse-P，128-DORIS，256-TCHouse-D，512-EMR-StarRocks，1024-TCHouse-X
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置执行引擎多选（位运算数组）：2-HIVE，4-SPARK，8-LIVY，16-DLC，64-TCHouse-P，128-DORIS，256-TCHouse-D，512-EMR-StarRocks，1024-TCHouse-X
                     * @param _sourceEngineTypes 执行引擎多选（位运算数组）：2-HIVE，4-SPARK，8-LIVY，16-DLC，64-TCHouse-P，128-DORIS，256-TCHouse-D，512-EMR-StarRocks，1024-TCHouse-X
                     * 
                     */
                    void SetSourceEngineTypes(const std::vector<uint64_t>& _sourceEngineTypes);

                    /**
                     * 判断参数 SourceEngineTypes 是否已赋值
                     * @return SourceEngineTypes 是否已赋值
                     * 
                     */
                    bool SourceEngineTypesHasBeenSet() const;

                private:

                    /**
                     * 模版类型：1-系统模版，2-用户自定义模版
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 源数据对象类型：1-常量，2-离线表级，3-离线字段级别
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 执行引擎多选（位运算数组）：2-HIVE，4-SPARK，8-LIVY，16-DLC，64-TCHouse-P，128-DORIS，256-TCHouse-D，512-EMR-StarRocks，1024-TCHouse-X
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESREQUEST_H_
