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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMODELTASKOPTIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMODELTASKOPTIONSREQUEST_H_

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
                * DescribeModelTaskOptions请求参数结构体
                */
                class DescribeModelTaskOptionsRequest : public AbstractModel
                {
                public:
                    DescribeModelTaskOptionsRequest();
                    ~DescribeModelTaskOptionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型类型（如 LLM、Embedding、ML），不传返回全部类型的 Tasks</p>
                     * @return ModelType <p>模型类型（如 LLM、Embedding、ML），不传返回全部类型的 Tasks</p>
                     * 
                     */
                    std::string GetModelType() const;

                    /**
                     * 设置<p>模型类型（如 LLM、Embedding、ML），不传返回全部类型的 Tasks</p>
                     * @param _modelType <p>模型类型（如 LLM、Embedding、ML），不传返回全部类型的 Tasks</p>
                     * 
                     */
                    void SetModelType(const std::string& _modelType);

                    /**
                     * 判断参数 ModelType 是否已赋值
                     * @return ModelType 是否已赋值
                     * 
                     */
                    bool ModelTypeHasBeenSet() const;

                private:

                    /**
                     * <p>模型类型（如 LLM、Embedding、ML），不传返回全部类型的 Tasks</p>
                     */
                    std::string m_modelType;
                    bool m_modelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEMODELTASKOPTIONSREQUEST_H_
