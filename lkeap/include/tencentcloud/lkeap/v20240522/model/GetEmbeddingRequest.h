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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * GetEmbedding请求参数结构体
                */
                class GetEmbeddingRequest : public AbstractModel
                {
                public:
                    GetEmbeddingRequest();
                    ~GetEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取说明：选择生成向量的模型
备注：仅一个模型可选
                     * @return Model 说明：选择生成向量的模型
备注：仅一个模型可选
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置说明：选择生成向量的模型
备注：仅一个模型可选
                     * @param _model 说明：选择生成向量的模型
备注：仅一个模型可选
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取说明：需要 embedding 的文本
备注：单条query最多2000个字符，总条数最多7条
                     * @return Inputs 说明：需要 embedding 的文本
备注：单条query最多2000个字符，总条数最多7条
                     * 
                     */
                    std::vector<std::string> GetInputs() const;

                    /**
                     * 设置说明：需要 embedding 的文本
备注：单条query最多2000个字符，总条数最多7条
                     * @param _inputs 说明：需要 embedding 的文本
备注：单条query最多2000个字符，总条数最多7条
                     * 
                     */
                    void SetInputs(const std::vector<std::string>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                private:

                    /**
                     * 说明：选择生成向量的模型
备注：仅一个模型可选
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 说明：需要 embedding 的文本
备注：单条query最多2000个字符，总条数最多7条
                     */
                    std::vector<std::string> m_inputs;
                    bool m_inputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGREQUEST_H_
