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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_BAG_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_BAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 人体是否挎包。 
AttributesType 不含 Bag 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
                */
                class Bag : public AbstractModel
                {
                public:
                    Bag();
                    ~Bag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挎包信息，返回值为以下集合中的一个{双肩包, 斜挎包, 手拎包, 无包}。
                     * @return Type 挎包信息，返回值为以下集合中的一个{双肩包, 斜挎包, 手拎包, 无包}。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置挎包信息，返回值为以下集合中的一个{双肩包, 斜挎包, 手拎包, 无包}。
                     * @param _type 挎包信息，返回值为以下集合中的一个{双肩包, 斜挎包, 手拎包, 无包}。
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
                     * 获取Type识别概率值，[0.0,1.0],代表判断正确的概率。如0.8则代表有Type值有80%概率正确。
                     * @return Probability Type识别概率值，[0.0,1.0],代表判断正确的概率。如0.8则代表有Type值有80%概率正确。
                     * 
                     */
                    double GetProbability() const;

                    /**
                     * 设置Type识别概率值，[0.0,1.0],代表判断正确的概率。如0.8则代表有Type值有80%概率正确。
                     * @param _probability Type识别概率值，[0.0,1.0],代表判断正确的概率。如0.8则代表有Type值有80%概率正确。
                     * 
                     */
                    void SetProbability(const double& _probability);

                    /**
                     * 判断参数 Probability 是否已赋值
                     * @return Probability 是否已赋值
                     * 
                     */
                    bool ProbabilityHasBeenSet() const;

                private:

                    /**
                     * 挎包信息，返回值为以下集合中的一个{双肩包, 斜挎包, 手拎包, 无包}。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Type识别概率值，[0.0,1.0],代表判断正确的概率。如0.8则代表有Type值有80%概率正确。
                     */
                    double m_probability;
                    bool m_probabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_BAG_H_
