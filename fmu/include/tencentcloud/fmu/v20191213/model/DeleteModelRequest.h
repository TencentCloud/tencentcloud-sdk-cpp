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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_DELETEMODELREQUEST_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_DELETEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * DeleteModel请求参数结构体
                */
                class DeleteModelRequest : public AbstractModel
                {
                public:
                    DeleteModelRequest();
                    ~DeleteModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取素材ID。
                     * @return ModelId 素材ID。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置素材ID。
                     * @param _modelId 素材ID。
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
                     * 素材ID。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_DELETEMODELREQUEST_H_
