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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCEMODELREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateInferenceModel请求参数结构体
                */
                class CreateInferenceModelRequest : public AbstractModel
                {
                public:
                    CreateInferenceModelRequest();
                    ~CreateInferenceModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型名称（最长 256）</p>
                     * @return Name <p>模型名称（最长 256）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型名称（最长 256）</p>
                     * @param _name <p>模型名称（最长 256）</p>
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
                     * 获取<p>模型类型（如 LLM、Embedding、Reranker、ASR、TTS 等）</p>
                     * @return ModelType <p>模型类型（如 LLM、Embedding、Reranker、ASR、TTS 等）</p>
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>模型类型（如 LLM、Embedding、Reranker、ASR、TTS 等）</p>
                     * @param _modelType <p>模型类型（如 LLM、Embedding、Reranker、ASR、TTS 等）</p>
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
                     * 获取<p>初始版本号（必填，如 v1、v1.5）</p>
                     * @return InitialVersion <p>初始版本号（必填，如 v1、v1.5）</p>
                     * 
                     */
                    std::string GetInitialVersion() const;

                    /**
                     * 设置<p>初始版本号（必填，如 v1、v1.5）</p>
                     * @param _initialVersion <p>初始版本号（必填，如 v1、v1.5）</p>
                     * 
                     */
                    void SetInitialVersion(const std::string& _initialVersion);

                    /**
                     * 判断参数 InitialVersion 是否已赋值
                     * @return InitialVersion 是否已赋值
                     * 
                     */
                    bool InitialVersionHasBeenSet() const;

                    /**
                     * 获取<p>模型提供方</p>
                     * @return Provider <p>模型提供方</p>
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置<p>模型提供方</p>
                     * @param _provider <p>模型提供方</p>
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
                     * @return Description <p>模型描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模型描述</p>
                     * @param _description <p>模型描述</p>
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
                     * 获取<p>模型参数量（如 7B、1.5B）</p>
                     * @return ParameterSize <p>模型参数量（如 7B、1.5B）</p>
                     * 
                     */
                    std::string GetParameterSize() const;

                    /**
                     * 设置<p>模型参数量（如 7B、1.5B）</p>
                     * @param _parameterSize <p>模型参数量（如 7B、1.5B）</p>
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
                     * 获取<p>模型标签列表</p>
                     * @return Tags <p>模型标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>模型标签列表</p>
                     * @param _tags <p>模型标签列表</p>
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
                     * 获取<p>模型存储 URI（可选，如 cos://bucket-name/models/name/）</p>
                     * @return StorageUri <p>模型存储 URI（可选，如 cos://bucket-name/models/name/）</p>
                     * 
                     */
                    std::string GetStorageUri() const;

                    /**
                     * 设置<p>模型存储 URI（可选，如 cos://bucket-name/models/name/）</p>
                     * @param _storageUri <p>模型存储 URI（可选，如 cos://bucket-name/models/name/）</p>
                     * 
                     */
                    void SetStorageUri(const std::string& _storageUri);

                    /**
                     * 判断参数 StorageUri 是否已赋值
                     * @return StorageUri 是否已赋值
                     * 
                     */
                    bool StorageUriHasBeenSet() const;

                    /**
                     * 获取<p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     * @return UseCustomStorage <p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     * 
                     */
                    bool GetUseCustomStorage() const;

                    /**
                     * 设置<p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     * @param _useCustomStorage <p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     * 
                     */
                    void SetUseCustomStorage(const bool& _useCustomStorage);

                    /**
                     * 判断参数 UseCustomStorage 是否已赋值
                     * @return UseCustomStorage 是否已赋值
                     * 
                     */
                    bool UseCustomStorageHasBeenSet() const;

                    /**
                     * 获取<p>任务类型列表（如 [&quot;Text Generation&quot;, &quot;Embedding&quot;]）</p>
                     * @return Tasks <p>任务类型列表（如 [&quot;Text Generation&quot;, &quot;Embedding&quot;]）</p>
                     * 
                     */
                    std::vector<std::string> GetTasks() const;

                    /**
                     * 设置<p>任务类型列表（如 [&quot;Text Generation&quot;, &quot;Embedding&quot;]）</p>
                     * @param _tasks <p>任务类型列表（如 [&quot;Text Generation&quot;, &quot;Embedding&quot;]）</p>
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
                     * 获取<p>模型 UID（可选，前端预先生成的 UID，不传则后端自动生成）</p>
                     * @return ModelUid <p>模型 UID（可选，前端预先生成的 UID，不传则后端自动生成）</p>
                     * 
                     */
                    std::string GetModelUid() const;

                    /**
                     * 设置<p>模型 UID（可选，前端预先生成的 UID，不传则后端自动生成）</p>
                     * @param _modelUid <p>模型 UID（可选，前端预先生成的 UID，不传则后端自动生成）</p>
                     * 
                     */
                    void SetModelUid(const std::string& _modelUid);

                    /**
                     * 判断参数 ModelUid 是否已赋值
                     * @return ModelUid 是否已赋值
                     * 
                     */
                    bool ModelUidHasBeenSet() const;

                private:

                    /**
                     * <p>模型名称（最长 256）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模型类型（如 LLM、Embedding、Reranker、ASR、TTS 等）</p>
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                    /**
                     * <p>初始版本号（必填，如 v1、v1.5）</p>
                     */
                    std::string m_initialVersion;
                    bool m_initialVersionHasBeenSet;

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
                     * <p>模型参数量（如 7B、1.5B）</p>
                     */
                    std::string m_parameterSize;
                    bool m_parameterSizeHasBeenSet;

                    /**
                     * <p>模型标签列表</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>模型存储 URI（可选，如 cos://bucket-name/models/name/）</p>
                     */
                    std::string m_storageUri;
                    bool m_storageUriHasBeenSet;

                    /**
                     * <p>是否使用用户自带存储桶（默认 false 表示平台托管）</p>
                     */
                    bool m_useCustomStorage;
                    bool m_useCustomStorageHasBeenSet;

                    /**
                     * <p>任务类型列表（如 [&quot;Text Generation&quot;, &quot;Embedding&quot;]）</p>
                     */
                    std::vector<std::string> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>模型 UID（可选，前端预先生成的 UID，不传则后端自动生成）</p>
                     */
                    std::string m_modelUid;
                    bool m_modelUidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEINFERENCEMODELREQUEST_H_
