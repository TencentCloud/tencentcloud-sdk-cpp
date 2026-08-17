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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETINFERENCEMODELRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETINFERENCEMODELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * GetInferenceModel返回参数结构体
                */
                class GetInferenceModelResponse : public AbstractModel
                {
                public:
                    GetInferenceModelResponse();
                    ~GetInferenceModelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型ID</p>
                     * @return ModelId <p>模型ID</p>
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取<p>模型UID</p>
                     * @return ModelUid <p>模型UID</p>
                     * 
                     */
                    std::string GetModelUid() const;

                    /**
                     * 判断参数 ModelUid 是否已赋值
                     * @return ModelUid 是否已赋值
                     * 
                     */
                    bool ModelUidHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
                     * @return Name <p>模型名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>模型提供方</p>
                     * @return Provider <p>模型提供方</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>模型描述</p>
                     * @return Description <p>模型描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>模型类型</p>
                     * @return ModelType <p>模型类型</p>
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型参数量</p>
                     * @return ParameterSize <p>模型参数量</p>
                     * 
                     */
                    std::string GetParameterSize() const;

                    /**
                     * 判断参数 ParameterSize 是否已赋值
                     * @return ParameterSize 是否已赋值
                     * 
                     */
                    bool ParameterSizeHasBeenSet() const;

                    /**
                     * 获取<p>模型标签列表</p>
                     * @return Tags <p>模型标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>最新版本号</p>
                     * @return LatestVersion <p>最新版本号</p>
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                    /**
                     * 获取<p>版本总数</p>
                     * @return VersionCount <p>版本总数</p>
                     * 
                     */
                    int64_t GetVersionCount() const;

                    /**
                     * 判断参数 VersionCount 是否已赋值
                     * @return VersionCount 是否已赋值
                     * 
                     */
                    bool VersionCountHasBeenSet() const;

                    /**
                     * 获取<p>关联的推理服务数量</p>
                     * @return ServiceCount <p>关联的推理服务数量</p>
                     * 
                     */
                    int64_t GetServiceCount() const;

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>是否有存储</p>
                     * @return HasStorage <p>是否有存储</p>
                     * 
                     */
                    bool GetHasStorage() const;

                    /**
                     * 判断参数 HasStorage 是否已赋值
                     * @return HasStorage 是否已赋值
                     * 
                     */
                    bool HasStorageHasBeenSet() const;

                    /**
                     * 获取<p>存储地域</p>
                     * @return StorageRegion <p>存储地域</p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>是否使用用户自带存储桶</p>
                     * @return HasCustomStorage <p>是否使用用户自带存储桶</p>
                     * 
                     */
                    bool GetHasCustomStorage() const;

                    /**
                     * 判断参数 HasCustomStorage 是否已赋值
                     * @return HasCustomStorage 是否已赋值
                     * 
                     */
                    bool HasCustomStorageHasBeenSet() const;

                    /**
                     * 获取<p>存储后端类型</p>
                     * @return StorageType <p>存储后端类型</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否内置模型</p>
                     * @return BuiltIn <p>是否内置模型</p>
                     * 
                     */
                    bool GetBuiltIn() const;

                    /**
                     * 判断参数 BuiltIn 是否已赋值
                     * @return BuiltIn 是否已赋值
                     * 
                     */
                    bool BuiltInHasBeenSet() const;

                    /**
                     * 获取<p>任务类型列表</p>
                     * @return Tasks <p>任务类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>模型支持的推理引擎列表</p>
                     * @return SupportedEngines <p>模型支持的推理引擎列表</p>
                     * 
                     */
                    std::vector<std::string> GetSupportedEngines() const;

                    /**
                     * 判断参数 SupportedEngines 是否已赋值
                     * @return SupportedEngines 是否已赋值
                     * 
                     */
                    bool SupportedEnginesHasBeenSet() const;

                    /**
                     * 获取<p>UIN</p>
                     * @return Uin <p>UIN</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>APPID</p>
                     * @return AppId <p>APPID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Sub UIN</p>
                     * @return SubAccountUin <p>Sub UIN</p>
                     * 
                     */
                    std::string GetSubAccountUin() const;

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
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * <p>模型ID</p>
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * <p>模型UID</p>
                     */
                    std::string m_modelUid;
                    bool m_modelUidHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模型提供方</p>
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>模型描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模型类型</p>
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>模型参数量</p>
                     */
                    std::string m_parameterSize;
                    bool m_parameterSizeHasBeenSet;

                    /**
                     * <p>模型标签列表</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>最新版本号</p>
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * <p>版本总数</p>
                     */
                    int64_t m_versionCount;
                    bool m_versionCountHasBeenSet;

                    /**
                     * <p>关联的推理服务数量</p>
                     */
                    int64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>是否有存储</p>
                     */
                    bool m_hasStorage;
                    bool m_hasStorageHasBeenSet;

                    /**
                     * <p>存储地域</p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>是否使用用户自带存储桶</p>
                     */
                    bool m_hasCustomStorage;
                    bool m_hasCustomStorageHasBeenSet;

                    /**
                     * <p>存储后端类型</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>是否内置模型</p>
                     */
                    bool m_builtIn;
                    bool m_builtInHasBeenSet;

                    /**
                     * <p>任务类型列表</p>
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>模型支持的推理引擎列表</p>
                     */
                    std::vector<std::string> m_supportedEngines;
                    bool m_supportedEnginesHasBeenSet;

                    /**
                     * <p>UIN</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>APPID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Sub UIN</p>
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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETINFERENCEMODELRESPONSE_H_
