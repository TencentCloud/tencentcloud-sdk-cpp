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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_DESCRIBEMODELRESPONSE_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_DESCRIBEMODELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tia/v20180226/model/Model.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * DescribeModel返回参数结构体
                */
                class DescribeModelResponse : public AbstractModel
                {
                public:
                    DescribeModelResponse();
                    ~DescribeModelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模型信息
                     * @return Model 模型信息
                     * 
                     */
                    Model GetModel() const;

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                private:

                    /**
                     * 模型信息
                     */
                    Model m_model;
                    bool m_modelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_DESCRIBEMODELRESPONSE_H_
