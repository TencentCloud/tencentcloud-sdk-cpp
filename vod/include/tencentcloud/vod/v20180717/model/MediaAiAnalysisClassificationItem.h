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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCLASSIFICATIONITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCLASSIFICATIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能分类结果
                */
                class MediaAiAnalysisClassificationItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisClassificationItem();
                    ~MediaAiAnalysisClassificationItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能分类的类别名称。
                     * @return Classification 智能分类的类别名称。
                     * 
                     */
                    std::string GetClassification() const;

                    /**
                     * 设置智能分类的类别名称。
                     * @param _classification 智能分类的类别名称。
                     * 
                     */
                    void SetClassification(const std::string& _classification);

                    /**
                     * 判断参数 Classification 是否已赋值
                     * @return Classification 是否已赋值
                     * 
                     */
                    bool ClassificationHasBeenSet() const;

                    /**
                     * 获取智能分类的可信度，取值范围是 0 到 100。
                     * @return Confidence 智能分类的可信度，取值范围是 0 到 100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置智能分类的可信度，取值范围是 0 到 100。
                     * @param _confidence 智能分类的可信度，取值范围是 0 到 100。
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 智能分类的类别名称。
                     */
                    std::string m_classification;
                    bool m_classificationHasBeenSet;

                    /**
                     * 智能分类的可信度，取值范围是 0 到 100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCLASSIFICATIONITEM_H_
