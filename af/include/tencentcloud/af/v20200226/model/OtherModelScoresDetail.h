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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_OTHERMODELSCORESDETAIL_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_OTHERMODELSCORESDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 扩展字段，对多模型返回结果的说明，被如下接口引用：GetAntiFraud。
                */
                class OtherModelScoresDetail : public AbstractModel
                {
                public:
                    OtherModelScoresDetail();
                    ~OtherModelScoresDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型版本号；默认顺序为 0、1、2、3、…其中：0=主模型，跟 RiskScore 保持一致；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelId 模型版本号；默认顺序为 0、1、2、3、…其中：0=主模型，跟 RiskScore 保持一致；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模型版本号；默认顺序为 0、1、2、3、…其中：0=主模型，跟 RiskScore 保持一致；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelId 模型版本号；默认顺序为 0、1、2、3、…其中：0=主模型，跟 RiskScore 保持一致；
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取模型版本对应的评分结果；Found=1 时：模型版本对应的评分结果，0~100 分
区间；Found=-1（未查到）时：全部模型结果返回-1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelScore 模型版本对应的评分结果；Found=1 时：模型版本对应的评分结果，0~100 分
区间；Found=-1（未查到）时：全部模型结果返回-1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelScore() const;

                    /**
                     * 设置模型版本对应的评分结果；Found=1 时：模型版本对应的评分结果，0~100 分
区间；Found=-1（未查到）时：全部模型结果返回-1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelScore 模型版本对应的评分结果；Found=1 时：模型版本对应的评分结果，0~100 分
区间；Found=-1（未查到）时：全部模型结果返回-1
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 模型版本号；默认顺序为 0、1、2、3、…其中：0=主模型，跟 RiskScore 保持一致；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 模型版本对应的评分结果；Found=1 时：模型版本对应的评分结果，0~100 分
区间；Found=-1（未查到）时：全部模型结果返回-1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelScore;
                    bool m_modelScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_OTHERMODELSCORESDETAIL_H_
