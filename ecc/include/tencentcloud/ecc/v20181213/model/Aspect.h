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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_ASPECT_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_ASPECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * 作文批改每个维度名字与得分
                */
                class Aspect : public AbstractModel
                {
                public:
                    Aspect();
                    ~Aspect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维度名字
                     * @return Name 维度名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置维度名字
                     * @param _name 维度名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取维度得分
                     * @return Score 维度得分
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置维度得分
                     * @param _score 维度得分
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取维度分数占比
                     * @return Percentage 维度分数占比
                     * 
                     */
                    double GetPercentage() const;

                    /**
                     * 设置维度分数占比
                     * @param _percentage 维度分数占比
                     * 
                     */
                    void SetPercentage(const double& _percentage);

                    /**
                     * 判断参数 Percentage 是否已赋值
                     * @return Percentage 是否已赋值
                     * 
                     */
                    bool PercentageHasBeenSet() const;

                private:

                    /**
                     * 维度名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 维度得分
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 维度分数占比
                     */
                    double m_percentage;
                    bool m_percentageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_ASPECT_H_
