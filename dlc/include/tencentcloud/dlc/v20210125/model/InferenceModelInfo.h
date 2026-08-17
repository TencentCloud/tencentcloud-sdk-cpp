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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_INFERENCEMODELINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_INFERENCEMODELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Tag.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 推理模型信息
                */
                class InferenceModelInfo : public AbstractModel
                {
                public:
                    InferenceModelInfo();
                    ~InferenceModelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Model ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId <p>Model ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置<p>Model ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId <p>Model ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>模型业务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelUid <p>模型业务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelUid() const;

                    /**
                     * 设置<p>模型业务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelUid <p>模型业务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelUid(const std::string& _modelUid);

                    /**
                     * 判断参数 ModelUid 是否已赋值
                     * @return ModelUid 是否已赋值
                     * 
                     */
                    bool ModelUidHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Provider <p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _provider <p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>模型描述</p>
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
                     * 获取<p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelType <p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelType <p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取<p>支持的引擎</p>
                     * @return SupportedEngines <p>支持的引擎</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedEngines() const;

                    /**
                     * 设置<p>支持的引擎</p>
                     * @param _supportedEngines <p>支持的引擎</p>
                     * 
                     */
                    void SetSupportedEngines(const std::vector<std::string>& _supportedEngines);

                    /**
                     * 判断参数 SupportedEngines 是否已赋值
                     * @return SupportedEngines 是否已赋值
                     * 
                     */
                    bool SupportedEnginesHasBeenSet() const;

                    /**
                     * 获取<p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParameterSize <p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParameterSize() const;

                    /**
                     * 设置<p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parameterSize <p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParameterSize(const std::string& _parameterSize);

                    /**
                     * 判断参数 ParameterSize 是否已赋值
                     * @return ParameterSize 是否已赋值
                     * 
                     */
                    bool ParameterSizeHasBeenSet() const;

                    /**
                     * 获取<p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>最新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestVersion <p>最新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置<p>最新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestVersion <p>最新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestVersion(const std::string& _latestVersion);

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                    /**
                     * 获取<p>版本总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionCount <p>版本总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVersionCount() const;

                    /**
                     * 设置<p>版本总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionCount <p>版本总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionCount(const int64_t& _versionCount);

                    /**
                     * 判断参数 VersionCount 是否已赋值
                     * @return VersionCount 是否已赋值
                     * 
                     */
                    bool VersionCountHasBeenSet() const;

                    /**
                     * 获取<p>关联的推理服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCount <p>关联的推理服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 设置<p>关联的推理服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceCount <p>关联的推理服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceCount(const int64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>是否有存储（内置模型和用户上传模型均为 true）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasStorage <p>是否有存储（内置模型和用户上传模型均为 true）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasStorage() const;

                    /**
                     * 设置<p>是否有存储（内置模型和用户上传模型均为 true）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasStorage <p>是否有存储（内置模型和用户上传模型均为 true）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasStorage(const bool& _hasStorage);

                    /**
                     * 判断参数 HasStorage 是否已赋值
                     * @return HasStorage 是否已赋值
                     * 
                     */
                    bool HasStorageHasBeenSet() const;

                    /**
                     * 获取<p>存储地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageRegion <p>存储地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>存储地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageRegion <p>存储地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>是否使用用户自带存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HasCustomStorage <p>是否使用用户自带存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHasCustomStorage() const;

                    /**
                     * 设置<p>是否使用用户自带存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hasCustomStorage <p>是否使用用户自带存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHasCustomStorage(const bool& _hasCustomStorage);

                    /**
                     * 判断参数 HasCustomStorage 是否已赋值
                     * @return HasCustomStorage 是否已赋值
                     * 
                     */
                    bool HasCustomStorageHasBeenSet() const;

                    /**
                     * 获取<p>存储后端类型（如 COS、GOOSEFS、CFSTURBO）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType <p>存储后端类型（如 COS、GOOSEFS、CFSTURBO）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储后端类型（如 COS、GOOSEFS、CFSTURBO）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType <p>存储后端类型（如 COS、GOOSEFS、CFSTURBO）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否是内置模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuiltIn <p>是否是内置模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBuiltIn() const;

                    /**
                     * 设置<p>是否是内置模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _builtIn <p>是否是内置模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuiltIn(const bool& _builtIn);

                    /**
                     * 判断参数 BuiltIn 是否已赋值
                     * @return BuiltIn 是否已赋值
                     * 
                     */
                    bool BuiltInHasBeenSet() const;

                    /**
                     * 获取<p>任务类型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks <p>任务类型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置<p>任务类型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks <p>任务类型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<std::string>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>云账户的 APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>云账户的 APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>云账户的 APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>云账户的 APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>云账户的 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin <p>云账户的 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>云账户的 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin <p>云账户的 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>云账户的 Sub UIN</p>
                     * @return SubAccountUin <p>云账户的 Sub UIN</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>云账户的 Sub UIN</p>
                     * @param _subAccountUin <p>云账户的 Sub UIN</p>
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>系统标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceTags <p>系统标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>系统标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceTags <p>系统标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * <p>Model ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>模型业务唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelUid;
                    bool m_modelUidHasBeenSet;

                    /**
                     * <p>模型名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模型提供方</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>模型描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模型类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>支持的引擎</p>
                     */
                    std::vector<std::string> m_supportedEngines;
                    bool m_supportedEnginesHasBeenSet;

                    /**
                     * <p>参数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parameterSize;
                    bool m_parameterSizeHasBeenSet;

                    /**
                     * <p>模型标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>最新版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * <p>版本总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_versionCount;
                    bool m_versionCountHasBeenSet;

                    /**
                     * <p>关联的推理服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>是否有存储（内置模型和用户上传模型均为 true）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasStorage;
                    bool m_hasStorageHasBeenSet;

                    /**
                     * <p>存储地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>是否使用用户自带存储桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hasCustomStorage;
                    bool m_hasCustomStorageHasBeenSet;

                    /**
                     * <p>存储后端类型（如 COS、GOOSEFS、CFSTURBO）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>是否是内置模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_builtIn;
                    bool m_builtInHasBeenSet;

                    /**
                     * <p>任务类型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>云账户的 APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>云账户的 UIN</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>创建时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（毫秒时间戳）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>云账户的 Sub UIN</p>
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>系统标签列表（TagKey-TagValue）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_INFERENCEMODELINFO_H_
