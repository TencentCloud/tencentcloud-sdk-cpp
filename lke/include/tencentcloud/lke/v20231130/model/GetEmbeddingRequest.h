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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
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
                     * 获取模型名称
                     * @return Model 模型名称
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名称
                     * @param _model 模型名称
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
                     * 获取需要 embedding 的文本, 单条文本最大长度500个字符, 总条数最大7条
                     * @return Inputs 需要 embedding 的文本, 单条文本最大长度500个字符, 总条数最大7条
                     * 
                     */
                    std::vector<std::string> GetInputs() const;

                    /**
                     * 设置需要 embedding 的文本, 单条文本最大长度500个字符, 总条数最大7条
                     * @param _inputs 需要 embedding 的文本, 单条文本最大长度500个字符, 总条数最大7条
                     * 
                     */
                    void SetInputs(const std::vector<std::string>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     * @return Online 是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     * 
                     */
                    bool GetOnline() const;

                    /**
                     * 设置是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     * @param _online 是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     * 
                     */
                    void SetOnline(const bool& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 需要 embedding 的文本, 单条文本最大长度500个字符, 总条数最大7条
                     */
                    std::vector<std::string> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * 是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     */
                    bool m_online;
                    bool m_onlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETEMBEDDINGREQUEST_H_
