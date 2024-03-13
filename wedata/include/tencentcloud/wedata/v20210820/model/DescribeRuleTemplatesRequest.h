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
                     * 获取模板类型 1.系统模板 2.自定义模板
                     * @return Type 模板类型 1.系统模板 2.自定义模板
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置模板类型 1.系统模板 2.自定义模板
                     * @param _type 模板类型 1.系统模板 2.自定义模板
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
                     * 获取1.常量 2.离线表级 2.离线字段级
                     * @return SourceObjectType 1.常量 2.离线表级 2.离线字段级
                     * 
                     */
                    uint64_t GetSourceObjectType() const;

                    /**
                     * 设置1.常量 2.离线表级 2.离线字段级
                     * @param _sourceObjectType 1.常量 2.离线表级 2.离线字段级
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
                     * 获取源端对应的引擎类型
                     * @return SourceEngineTypes 源端对应的引擎类型
                     * 
                     */
                    std::vector<uint64_t> GetSourceEngineTypes() const;

                    /**
                     * 设置源端对应的引擎类型
                     * @param _sourceEngineTypes 源端对应的引擎类型
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
                     * 模板类型 1.系统模板 2.自定义模板
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 1.常量 2.离线表级 2.离线字段级
                     */
                    uint64_t m_sourceObjectType;
                    bool m_sourceObjectTypeHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 源端对应的引擎类型
                     */
                    std::vector<uint64_t> m_sourceEngineTypes;
                    bool m_sourceEngineTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULETEMPLATESREQUEST_H_
