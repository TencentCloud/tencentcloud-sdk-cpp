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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ORGANIZATIONALFUNCTION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ORGANIZATIONALFUNCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/FunctionVersion.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 包含层级信息的函数
                */
                class OrganizationalFunction : public AbstractModel
                {
                public:
                    OrganizationalFunction();
                    ~OrganizationalFunction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取展示名称
                     * @return DisplayName 展示名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置展示名称
                     * @param _displayName 展示名称
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取层级路径
                     * @return LayerPath 层级路径
                     * 
                     */
                    std::string GetLayerPath() const;

                    /**
                     * 设置层级路径
                     * @param _layerPath 层级路径
                     * 
                     */
                    void SetLayerPath(const std::string& _layerPath);

                    /**
                     * 判断参数 LayerPath 是否已赋值
                     * @return LayerPath 是否已赋值
                     * 
                     */
                    bool LayerPathHasBeenSet() const;

                    /**
                     * 获取上级层级路径
                     * @return ParentLayerPath 上级层级路径
                     * 
                     */
                    std::string GetParentLayerPath() const;

                    /**
                     * 设置上级层级路径
                     * @param _parentLayerPath 上级层级路径
                     * 
                     */
                    void SetParentLayerPath(const std::string& _parentLayerPath);

                    /**
                     * 判断参数 ParentLayerPath 是否已赋值
                     * @return ParentLayerPath 是否已赋值
                     * 
                     */
                    bool ParentLayerPathHasBeenSet() const;

                    /**
                     * 获取函数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 函数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置函数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 函数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取函数分类：窗口函数、聚合函数、日期函数......
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Kind 函数分类：窗口函数、聚合函数、日期函数......
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置函数分类：窗口函数、聚合函数、日期函数......
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kind 函数分类：窗口函数、聚合函数、日期函数......
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取函数种类：系统函数、自定义函数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Category 函数种类：系统函数、自定义函数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置函数种类：系统函数、自定义函数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _category 函数种类：系统函数、自定义函数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取函数状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 函数状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置函数状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 函数状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取函数说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 函数说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置函数说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 函数说明
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取函数用法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Usage 函数用法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置函数用法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usage 函数用法
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取函数参数说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDesc 函数参数说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置函数参数说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramDesc 函数参数说明
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取函数返回值说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnDesc 函数返回值说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReturnDesc() const;

                    /**
                     * 设置函数返回值说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnDesc 函数返回值说明
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取函数示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Example 函数示例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExample() const;

                    /**
                     * 设置函数示例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _example 函数示例
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取集群实例引擎 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterIdentifier 集群实例引擎 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置集群实例引擎 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterIdentifier 集群实例引擎 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取函数 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FuncId 函数 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFuncId() const;

                    /**
                     * 设置函数 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _funcId 函数 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFuncId(const std::string& _funcId);

                    /**
                     * 判断参数 FuncId 是否已赋值
                     * @return FuncId 是否已赋值
                     * 
                     */
                    bool FuncIdHasBeenSet() const;

                    /**
                     * 获取函数类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassName 函数类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置函数类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _className 函数类名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取函数资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceList 函数资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FunctionVersion> GetResourceList() const;

                    /**
                     * 设置函数资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceList 函数资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceList(const std::vector<FunctionVersion>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                    /**
                     * 获取操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUserIds 操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetOperatorUserIds() const;

                    /**
                     * 设置操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorUserIds 操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorUserIds(const std::vector<int64_t>& _operatorUserIds);

                    /**
                     * 判断参数 OperatorUserIds 是否已赋值
                     * @return OperatorUserIds 是否已赋值
                     * 
                     */
                    bool OperatorUserIdsHasBeenSet() const;

                    /**
                     * 获取公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserIds 公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetOwnerUserIds() const;

                    /**
                     * 设置公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserIds 公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserIds(const std::vector<int64_t>& _ownerUserIds);

                    /**
                     * 判断参数 OwnerUserIds 是否已赋值
                     * @return OwnerUserIds 是否已赋值
                     * 
                     */
                    bool OwnerUserIdsHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取提交失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitErrorMsg 提交失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitErrorMsg() const;

                    /**
                     * 设置提交失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitErrorMsg 提交失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitErrorMsg(const std::string& _submitErrorMsg);

                    /**
                     * 判断参数 SubmitErrorMsg 是否已赋值
                     * @return SubmitErrorMsg 是否已赋值
                     * 
                     */
                    bool SubmitErrorMsgHasBeenSet() const;

                    /**
                     * 获取模式名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName 模式名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置模式名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schemaName 模式名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取函数命令格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommandFormat 函数命令格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommandFormat() const;

                    /**
                     * 设置函数命令格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commandFormat 函数命令格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommandFormat(const std::string& _commandFormat);

                    /**
                     * 判断参数 CommandFormat 是否已赋值
                     * @return CommandFormat 是否已赋值
                     * 
                     */
                    bool CommandFormatHasBeenSet() const;

                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitTimestamp 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitTimestamp() const;

                    /**
                     * 设置时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitTimestamp 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitTimestamp(const std::string& _submitTimestamp);

                    /**
                     * 判断参数 SubmitTimestamp 是否已赋值
                     * @return SubmitTimestamp 是否已赋值
                     * 
                     */
                    bool SubmitTimestampHasBeenSet() const;

                    /**
                     * 获取函数tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tag 函数tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置函数tag
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tag 函数tag
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUserIdsStr 操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOperatorUserIdsStr() const;

                    /**
                     * 设置操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorUserIdsStr 操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorUserIdsStr(const std::vector<std::string>& _operatorUserIdsStr);

                    /**
                     * 判断参数 OperatorUserIdsStr 是否已赋值
                     * @return OperatorUserIdsStr 是否已赋值
                     * 
                     */
                    bool OperatorUserIdsStrHasBeenSet() const;

                    /**
                     * 获取公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserIdsStr 公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOwnerUserIdsStr() const;

                    /**
                     * 设置公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserIdsStr 公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserIdsStr(const std::vector<std::string>& _ownerUserIdsStr);

                    /**
                     * 判断参数 OwnerUserIdsStr 是否已赋值
                     * @return OwnerUserIdsStr 是否已赋值
                     * 
                     */
                    bool OwnerUserIdsStrHasBeenSet() const;

                    /**
                     * 获取数据库环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvType 数据库环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置数据库环境
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envType 数据库环境
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取函数资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FunctionResourceFileType 函数资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFunctionResourceFileType() const;

                    /**
                     * 设置函数资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _functionResourceFileType 函数资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunctionResourceFileType(const std::string& _functionResourceFileType);

                    /**
                     * 判断参数 FunctionResourceFileType 是否已赋值
                     * @return FunctionResourceFileType 是否已赋值
                     * 
                     */
                    bool FunctionResourceFileTypeHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 展示名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 层级路径
                     */
                    std::string m_layerPath;
                    bool m_layerPathHasBeenSet;

                    /**
                     * 上级层级路径
                     */
                    std::string m_parentLayerPath;
                    bool m_parentLayerPathHasBeenSet;

                    /**
                     * 函数类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 函数分类：窗口函数、聚合函数、日期函数......
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 函数种类：系统函数、自定义函数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 函数状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 函数说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 函数用法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 函数参数说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * 函数返回值说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_returnDesc;
                    bool m_returnDescHasBeenSet;

                    /**
                     * 函数示例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_example;
                    bool m_exampleHasBeenSet;

                    /**
                     * 集群实例引擎 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * 函数 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_funcId;
                    bool m_funcIdHasBeenSet;

                    /**
                     * 函数类名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * 函数资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FunctionVersion> m_resourceList;
                    bool m_resourceListHasBeenSet;

                    /**
                     * 操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_operatorUserIds;
                    bool m_operatorUserIdsHasBeenSet;

                    /**
                     * 公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_ownerUserIds;
                    bool m_ownerUserIdsHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 提交失败错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitErrorMsg;
                    bool m_submitErrorMsgHasBeenSet;

                    /**
                     * 模式名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 函数命令格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_commandFormat;
                    bool m_commandFormatHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitTimestamp;
                    bool m_submitTimestampHasBeenSet;

                    /**
                     * 函数tag
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 操作人 ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_operatorUserIdsStr;
                    bool m_operatorUserIdsStrHasBeenSet;

                    /**
                     * 公有云 Owner ID 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ownerUserIdsStr;
                    bool m_ownerUserIdsStrHasBeenSet;

                    /**
                     * 数据库环境
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 函数资源文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_functionResourceFileType;
                    bool m_functionResourceFileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ORGANIZATIONALFUNCTION_H_
