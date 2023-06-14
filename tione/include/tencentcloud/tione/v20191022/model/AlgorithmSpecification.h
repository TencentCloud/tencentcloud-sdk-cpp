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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_ALGORITHMSPECIFICATION_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_ALGORITHMSPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 算法配置
                */
                class AlgorithmSpecification : public AbstractModel
                {
                public:
                    AlgorithmSpecification();
                    ~AlgorithmSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingImageName 镜像名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingImageName() const;

                    /**
                     * 设置镜像名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingImageName 镜像名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingImageName(const std::string& _trainingImageName);

                    /**
                     * 判断参数 TrainingImageName 是否已赋值
                     * @return TrainingImageName 是否已赋值
                     * 
                     */
                    bool TrainingImageNameHasBeenSet() const;

                    /**
                     * 获取输入模式File|Pipe
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingInputMode 输入模式File|Pipe
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrainingInputMode() const;

                    /**
                     * 设置输入模式File|Pipe
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingInputMode 输入模式File|Pipe
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingInputMode(const std::string& _trainingInputMode);

                    /**
                     * 判断参数 TrainingInputMode 是否已赋值
                     * @return TrainingInputMode 是否已赋值
                     * 
                     */
                    bool TrainingInputModeHasBeenSet() const;

                    /**
                     * 获取算法名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgorithmName 算法名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlgorithmName() const;

                    /**
                     * 设置算法名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algorithmName 算法名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlgorithmName(const std::string& _algorithmName);

                    /**
                     * 判断参数 AlgorithmName 是否已赋值
                     * @return AlgorithmName 是否已赋值
                     * 
                     */
                    bool AlgorithmNameHasBeenSet() const;

                private:

                    /**
                     * 镜像名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingImageName;
                    bool m_trainingImageNameHasBeenSet;

                    /**
                     * 输入模式File|Pipe
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trainingInputMode;
                    bool m_trainingInputModeHasBeenSet;

                    /**
                     * 算法名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_algorithmName;
                    bool m_algorithmNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_ALGORITHMSPECIFICATION_H_
