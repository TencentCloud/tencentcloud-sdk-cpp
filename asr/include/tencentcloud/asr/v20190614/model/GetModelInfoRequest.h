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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_GETMODELINFOREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_GETMODELINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * GetModelInfo请求参数结构体
                */
                class GetModelInfoRequest : public AbstractModel
                {
                public:
                    GetModelInfoRequest();
                    ~GetModelInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型id
                     * @return ModelId 模型id
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型id
                     * @param _modelId 模型id
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                private:

                    /**
                     * 模型id
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_GETMODELINFOREQUEST_H_
