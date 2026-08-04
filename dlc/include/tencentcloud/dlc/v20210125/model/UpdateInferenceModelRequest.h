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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEINFERENCEMODELREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEINFERENCEMODELREQUEST_H_

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
                * UpdateInferenceModel请求参数结构体
                */
                class UpdateInferenceModelRequest : public AbstractModel
                {
                public:
                    UpdateInferenceModelRequest();
                    ~UpdateInferenceModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>推理模型UID</p>
                     * @return ModelUid <p>推理模型UID</p>
                     * 
                     */
                    std::string GetModelUid() const;

                    /**
                     * 设置<p>推理模型UID</p>
                     * @param _modelUid <p>推理模型UID</p>
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
                     * 获取<p>模型名称（可选，不传则不修改）</p>
                     * @return Name <p>模型名称（可选，不传则不修改）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>模型名称（可选，不传则不修改）</p>
                     * @param _name <p>模型名称（可选，不传则不修改）</p>
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
                     * 获取<p>模型描述（可选）</p>
                     * @return Description <p>模型描述（可选）</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模型描述（可选）</p>
                     * @param _description <p>模型描述（可选）</p>
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
                     * 获取<p>模型参数量（可选，如 7B、1.5B）</p>
                     * @return ParameterSize <p>模型参数量（可选，如 7B、1.5B）</p>
                     * 
                     */
                    std::string GetParameterSize() const;

                    /**
                     * 设置<p>模型参数量（可选，如 7B、1.5B）</p>
                     * @param _parameterSize <p>模型参数量（可选，如 7B、1.5B）</p>
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
                     * 获取<p>模型标签列表（可选）</p>
                     * @return Tags <p>模型标签列表（可选）</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>模型标签列表（可选）</p>
                     * @param _tags <p>模型标签列表（可选）</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>推理模型UID</p>
                     */
                    std::string m_modelUid;
                    bool m_modelUidHasBeenSet;

                    /**
                     * <p>模型名称（可选，不传则不修改）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>模型描述（可选）</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>模型参数量（可选，如 7B、1.5B）</p>
                     */
                    std::string m_parameterSize;
                    bool m_parameterSizeHasBeenSet;

                    /**
                     * <p>模型标签列表（可选）</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEINFERENCEMODELREQUEST_H_
