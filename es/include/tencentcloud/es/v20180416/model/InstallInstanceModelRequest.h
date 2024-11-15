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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INSTALLINSTANCEMODELREQUEST_H_
