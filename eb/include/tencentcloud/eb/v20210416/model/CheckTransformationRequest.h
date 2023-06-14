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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CHECKTRANSFORMATIONREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CHECKTRANSFORMATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/Transformation.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * CheckTransformation请求参数结构体
                */
                class CheckTransformationRequest : public AbstractModel
                {
                public:
                    CheckTransformationRequest();
                    ~CheckTransformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待处理的json字符串
                     * @return Input 待处理的json字符串
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置待处理的json字符串
                     * @param _input 待处理的json字符串
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取一个转换规则列表
                     * @return Transformations 一个转换规则列表
                     * 
                     */
                    std::vector<Transformation> GetTransformations() const;

                    /**
                     * 设置一个转换规则列表
                     * @param _transformations 一个转换规则列表
                     * 
                     */
                    void SetTransformations(const std::vector<Transformation>& _transformations);

                    /**
                     * 判断参数 Transformations 是否已赋值
                     * @return Transformations 是否已赋值
                     * 
                     */
                    bool TransformationsHasBeenSet() const;

                private:

                    /**
                     * 待处理的json字符串
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 一个转换规则列表
                     */
                    std::vector<Transformation> m_transformations;
                    bool m_transformationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CHECKTRANSFORMATIONREQUEST_H_
