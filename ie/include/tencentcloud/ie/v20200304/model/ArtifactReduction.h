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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_ARTIFACTREDUCTION_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_ARTIFACTREDUCTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 去编码毛刺、伪影参数
                */
                class ArtifactReduction : public AbstractModel
                {
                public:
                    ArtifactReduction();
                    ~ArtifactReduction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取去毛刺方式：weak,,strong
                     * @return Type 去毛刺方式：weak,,strong
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置去毛刺方式：weak,,strong
                     * @param _type 去毛刺方式：weak,,strong
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取去毛刺算法，可选项：
edaf,
wdaf，
默认edaf。
注意：此参数已经弃用
                     * @return Algorithm 去毛刺算法，可选项：
edaf,
wdaf，
默认edaf。
注意：此参数已经弃用
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置去毛刺算法，可选项：
edaf,
wdaf，
默认edaf。
注意：此参数已经弃用
                     * @param _algorithm 去毛刺算法，可选项：
edaf,
wdaf，
默认edaf。
注意：此参数已经弃用
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                private:

                    /**
                     * 去毛刺方式：weak,,strong
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 去毛刺算法，可选项：
edaf,
wdaf，
默认edaf。
注意：此参数已经弃用
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_ARTIFACTREDUCTION_H_
