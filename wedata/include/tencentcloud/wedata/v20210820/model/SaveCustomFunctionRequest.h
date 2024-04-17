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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SAVECUSTOMFUNCTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SAVECUSTOMFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FunctionResource.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SaveCustomFunction请求参数结构体
                */
                class SaveCustomFunctionRequest : public AbstractModel
                {
                public:
                    SaveCustomFunctionRequest();
                    ~SaveCustomFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数唯一标识
                     * @return FunctionId 函数唯一标识
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数唯一标识
                     * @param _functionId 函数唯一标识
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取分类：窗口函数、聚合函数、日期函数......
                     * @return Kind 分类：窗口函数、聚合函数、日期函数......
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置分类：窗口函数、聚合函数、日期函数......
                     * @param _kind 分类：窗口函数、聚合函数、日期函数......
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取集群引擎实例
                     * @return ClusterIdentifier 集群引擎实例
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置集群引擎实例
                     * @param _clusterIdentifier 集群引擎实例
                     * 
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     * 
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                    /**
                     * 获取类名
                     * @return ClassName 类名
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置类名
                     * @param _className 类名
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取资源列表
                     * @return ResourceList 资源列表
                     * 
                     */
                    std::vector<FunctionResource> GetResourceList() const;

                    /**
                     * 设置资源列表
                     * @param _resourceList 资源列表
                     * 
                     */
                    void SetResourceList(const std::vector<FunctionResource>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取函数说明
                     * @return Description 函数说明
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置函数说明
                     * @param _description 函数说明
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
                     * 获取用法
                     * @return Usage 用法
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置用法
                     * @param _usage 用法
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取参数说明
                     * @return ParamDesc 参数说明
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置参数说明
                     * @param _paramDesc 参数说明
                     * 
                     */
                    void SetParamDesc(const std::string& _paramDesc);

                    /**
                     * 判断参数 ParamDesc 是否已赋值
                     * @return ParamDesc 是否已赋值
                     * 
                     */
                    bool ParamDescHasBeenSet() const;

                    /**
                     * 获取返回值说明
                     * @return ReturnDesc 返回值说明
                     * 
                     */
                    std::string GetReturnDesc() const;

                    /**
                     * 设置返回值说明
                     * @param _returnDesc 返回值说明
                     * 
                     */
                    void SetReturnDesc(const std::string& _returnDesc);

                    /**
                     * 判断参数 ReturnDesc 是否已赋值
                     * @return ReturnDesc 是否已赋值
                     * 
                     */
                    bool ReturnDescHasBeenSet() const;

                    /**
                     * 获取示例
                     * @return Example 示例
                     * 
                     */
                    std::string GetExample() const;

                    /**
                     * 设置示例
                     * @param _example 示例
                     * 
                     */
                    void SetExample(const std::string& _example);

                    /**
                     * 判断参数 Example 是否已赋值
                     * @return Example 是否已赋值
                     * 
                     */
                    bool ExampleHasBeenSet() const;

                    /**
                     * 获取项目id，不支持修改，dlc侧创建函数保存时用
                     * @return ProjectId 项目id，不支持修改，dlc侧创建函数保存时用
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id，不支持修改，dlc侧创建函数保存时用
                     * @param _projectId 项目id，不支持修改，dlc侧创建函数保存时用
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
                     * 获取数据库名称，不支持修改，dlc侧创建函数保存时用
                     * @return DbName 数据库名称，不支持修改，dlc侧创建函数保存时用
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称，不支持修改，dlc侧创建函数保存时用
                     * @param _dbName 数据库名称，不支持修改，dlc侧创建函数保存时用
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取函数名称，不支持修改，dlc侧创建函数保存时用
                     * @return Name 函数名称，不支持修改，dlc侧创建函数保存时用
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置函数名称，不支持修改，dlc侧创建函数保存时用
                     * @param _name 函数名称，不支持修改，dlc侧创建函数保存时用
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 函数唯一标识
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 分类：窗口函数、聚合函数、日期函数......
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 集群引擎实例
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * 类名
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * 资源列表
                     */
                    std::vector<FunctionResource> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * 函数说明
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用法
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 参数说明
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * 返回值说明
                     */
                    std::string m_returnDesc;
                    bool m_returnDescHasBeenSet;

                    /**
                     * 示例
                     */
                    std::string m_example;
                    bool m_exampleHasBeenSet;

                    /**
                     * 项目id，不支持修改，dlc侧创建函数保存时用
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据库名称，不支持修改，dlc侧创建函数保存时用
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 函数名称，不支持修改，dlc侧创建函数保存时用
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SAVECUSTOMFUNCTIONREQUEST_H_
