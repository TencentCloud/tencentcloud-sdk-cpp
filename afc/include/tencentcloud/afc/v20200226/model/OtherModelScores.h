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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_OTHERMODELSCORES_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_OTHERMODELSCORES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 扩展字段，包含多个模型的结果
                */
                class OtherModelScores : public AbstractModel
                {
                public:
                    OtherModelScores();
                    ~OtherModelScores() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型类型
                     * @return ModelId 模型类型
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型类型
                     * @param _modelId 模型类型
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取该模型评分
                     * @return ModelScore 该模型评分
                     * 
                     */
                    std::string GetModelScore() const;

                    /**
                     * 设置该模型评分
                     * @param _modelScore 该模型评分
                     * 
                     */
                    void SetModelScore(const std::string& _modelScore);

                    /**
                     * 判断参数 ModelScore 是否已赋值
                     * @return ModelScore 是否已赋值
                     * 
                     */
                    bool ModelScoreHasBeenSet() const;

                private:

                    /**
                     * 模型类型
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 该模型评分
                     */
                    std::string m_modelScore;
                    bool m_modelScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_OTHERMODELSCORES_H_
