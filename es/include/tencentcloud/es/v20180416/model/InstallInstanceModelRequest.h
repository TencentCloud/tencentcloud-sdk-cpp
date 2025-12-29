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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INSTALLINSTANCEMODELREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INSTALLINSTANCEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * InstallInstanceModel请求参数结构体
                */
                class InstallInstanceModelRequest : public AbstractModel
                {
                public:
                    InstallInstanceModelRequest();
                    ~InstallInstanceModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取客户上传到cos的模型地址，单次请求限制一个。cos文件为压缩文件，格式包括：zip、tgz和tar.gz
                     * @return UsrCosModelUrlList 客户上传到cos的模型地址，单次请求限制一个。cos文件为压缩文件，格式包括：zip、tgz和tar.gz
                     * 
                     */
                    std::vector<std::string> GetUsrCosModelUrlList() const;

                    /**
                     * 设置客户上传到cos的模型地址，单次请求限制一个。cos文件为压缩文件，格式包括：zip、tgz和tar.gz
                     * @param _usrCosModelUrlList 客户上传到cos的模型地址，单次请求限制一个。cos文件为压缩文件，格式包括：zip、tgz和tar.gz
                     * 
                     */
                    void SetUsrCosModelUrlList(const std::vector<std::string>& _usrCosModelUrlList);

                    /**
                     * 判断参数 UsrCosModelUrlList 是否已赋值
                     * @return UsrCosModelUrlList 是否已赋值
                     * 
                     */
                    bool UsrCosModelUrlListHasBeenSet() const;

                    /**
                     * 获取客户指定安装的模型名称，可为空，默认为模型文件名
                     * @return ModelNames 客户指定安装的模型名称，可为空，默认为模型文件名
                     * 
                     */
                    std::vector<std::string> GetModelNames() const;

                    /**
                     * 设置客户指定安装的模型名称，可为空，默认为模型文件名
                     * @param _modelNames 客户指定安装的模型名称，可为空，默认为模型文件名
                     * 
                     */
                    void SetModelNames(const std::vector<std::string>& _modelNames);

                    /**
                     * 判断参数 ModelNames 是否已赋值
                     * @return ModelNames 是否已赋值
                     * 
                     */
                    bool ModelNamesHasBeenSet() const;

                    /**
                     * 获取模型使用的任务类型，包括：fill_mask, ner, question_answering, text_classification, text_embedding, text_expansion, text_similarity和zero_shot_classification，默认为text_embedding
                     * @return TaskTypes 模型使用的任务类型，包括：fill_mask, ner, question_answering, text_classification, text_embedding, text_expansion, text_similarity和zero_shot_classification，默认为text_embedding
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置模型使用的任务类型，包括：fill_mask, ner, question_answering, text_classification, text_embedding, text_expansion, text_similarity和zero_shot_classification，默认为text_embedding
                     * @param _taskTypes 模型使用的任务类型，包括：fill_mask, ner, question_answering, text_classification, text_embedding, text_expansion, text_similarity和zero_shot_classification，默认为text_embedding
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                    /**
                     * 获取HuggingFace模型名称
                     * @return HuggingFaceModelNames HuggingFace模型名称
                     * 
                     */
                    std::vector<std::string> GetHuggingFaceModelNames() const;

                    /**
                     * 设置HuggingFace模型名称
                     * @param _huggingFaceModelNames HuggingFace模型名称
                     * 
                     */
                    void SetHuggingFaceModelNames(const std::vector<std::string>& _huggingFaceModelNames);

                    /**
                     * 判断参数 HuggingFaceModelNames 是否已赋值
                     * @return HuggingFaceModelNames 是否已赋值
                     * 
                     */
                    bool HuggingFaceModelNamesHasBeenSet() const;

                    /**
                     * 获取模型描述
                     * @return ModelDescription 模型描述
                     * 
                     */
                    std::string GetModelDescription() const;

                    /**
                     * 设置模型描述
                     * @param _modelDescription 模型描述
                     * 
                     */
                    void SetModelDescription(const std::string& _modelDescription);

                    /**
                     * 判断参数 ModelDescription 是否已赋值
                     * @return ModelDescription 是否已赋值
                     * 
                     */
                    bool ModelDescriptionHasBeenSet() const;

                    /**
                     * 获取模型来源：UserModel、HuggingFace和PlatformModel
                     * @return ModelSourceType 模型来源：UserModel、HuggingFace和PlatformModel
                     * 
                     */
                    std::string GetModelSourceType() const;

                    /**
                     * 设置模型来源：UserModel、HuggingFace和PlatformModel
                     * @param _modelSourceType 模型来源：UserModel、HuggingFace和PlatformModel
                     * 
                     */
                    void SetModelSourceType(const std::string& _modelSourceType);

                    /**
                     * 判断参数 ModelSourceType 是否已赋值
                     * @return ModelSourceType 是否已赋值
                     * 
                     */
                    bool ModelSourceTypeHasBeenSet() const;

                    /**
                     * 获取已上传的模型路径
                     * @return UploadedCosPaths 已上传的模型路径
                     * 
                     */
                    std::vector<std::string> GetUploadedCosPaths() const;

                    /**
                     * 设置已上传的模型路径
                     * @param _uploadedCosPaths 已上传的模型路径
                     * 
                     */
                    void SetUploadedCosPaths(const std::vector<std::string>& _uploadedCosPaths);

                    /**
                     * 判断参数 UploadedCosPaths 是否已赋值
                     * @return UploadedCosPaths 是否已赋值
                     * 
                     */
                    bool UploadedCosPathsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 客户上传到cos的模型地址，单次请求限制一个。cos文件为压缩文件，格式包括：zip、tgz和tar.gz
                     */
                    std::vector<std::string> m_usrCosModelUrlList;
                    bool m_usrCosModelUrlListHasBeenSet;

                    /**
                     * 客户指定安装的模型名称，可为空，默认为模型文件名
                     */
                    std::vector<std::string> m_modelNames;
                    bool m_modelNamesHasBeenSet;

                    /**
                     * 模型使用的任务类型，包括：fill_mask, ner, question_answering, text_classification, text_embedding, text_expansion, text_similarity和zero_shot_classification，默认为text_embedding
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                    /**
                     * HuggingFace模型名称
                     */
                    std::vector<std::string> m_huggingFaceModelNames;
                    bool m_huggingFaceModelNamesHasBeenSet;

                    /**
                     * 模型描述
                     */
                    std::string m_modelDescription;
                    bool m_modelDescriptionHasBeenSet;

                    /**
                     * 模型来源：UserModel、HuggingFace和PlatformModel
                     */
                    std::string m_modelSourceType;
                    bool m_modelSourceTypeHasBeenSet;

                    /**
                     * 已上传的模型路径
                     */
                    std::vector<std::string> m_uploadedCosPaths;
                    bool m_uploadedCosPathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTALLINSTANCEMODELREQUEST_H_
