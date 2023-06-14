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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_TRAININGTEXTS_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_TRAININGTEXTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vrs/v20200824/model/TrainingText.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * 训练文本列表
                */
                class TrainingTexts : public AbstractModel
                {
                public:
                    TrainingTexts();
                    ~TrainingTexts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取训练文本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainingTextList 训练文本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TrainingText> GetTrainingTextList() const;

                    /**
                     * 设置训练文本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainingTextList 训练文本列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainingTextList(const std::vector<TrainingText>& _trainingTextList);

                    /**
                     * 判断参数 TrainingTextList 是否已赋值
                     * @return TrainingTextList 是否已赋值
                     * 
                     */
                    bool TrainingTextListHasBeenSet() const;

                private:

                    /**
                     * 训练文本列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrainingText> m_trainingTextList;
                    bool m_trainingTextListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_TRAININGTEXTS_H_
