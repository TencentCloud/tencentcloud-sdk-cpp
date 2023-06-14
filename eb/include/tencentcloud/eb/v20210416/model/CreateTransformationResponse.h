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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONRESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CreateTransformation返回参数结构体
                */
                class CreateTransformationResponse : public AbstractModel
                {
                public:
                    CreateTransformationResponse();
                    ~CreateTransformationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生成的转换器id
                     * @return TransformationId 生成的转换器id
                     * 
                     */
                    std::string GetTransformationId() const;

                    /**
                     * 判断参数 TransformationId 是否已赋值
                     * @return TransformationId 是否已赋值
                     * 
                     */
                    bool TransformationIdHasBeenSet() const;

                private:

                    /**
                     * 生成的转换器id
                     */
                    std::string m_transformationId;
                    bool m_transformationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CREATETRANSFORMATIONRESPONSE_H_
