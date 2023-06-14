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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_LISTMODELSRESPONSE_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_LISTMODELSRESPONSE_H_

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
                * ListModels返回参数结构体
                */
                class ListModelsResponse : public AbstractModel
                {
                public:
                    ListModelsResponse();
                    ~ListModelsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Model 数组，用以显示所有模型的信息
                     * @return Models Model 数组，用以显示所有模型的信息
                     * 
                     */
                    std::vector<Model> GetModels() const;

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                private:

                    /**
                     * Model 数组，用以显示所有模型的信息
                     */
                    std::vector<Model> m_models;
                    bool m_modelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_LISTMODELSRESPONSE_H_
