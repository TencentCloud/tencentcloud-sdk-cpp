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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisClassificationItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能分类结果信息
                */
                class AiAnalysisTaskClassificationOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskClassificationOutput();
                    ~AiAnalysisTaskClassificationOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频智能分类列表。
                     * @return ClassificationSet 视频智能分类列表。
                     * 
                     */
                    std::vector<MediaAiAnalysisClassificationItem> GetClassificationSet() const;

                    /**
                     * 设置视频智能分类列表。
                     * @param _classificationSet 视频智能分类列表。
                     * 
                     */
                    void SetClassificationSet(const std::vector<MediaAiAnalysisClassificationItem>& _classificationSet);

                    /**
                     * 判断参数 ClassificationSet 是否已赋值
                     * @return ClassificationSet 是否已赋值
                     * 
                     */
                    bool ClassificationSetHasBeenSet() const;

                private:

                    /**
                     * 视频智能分类列表。
                     */
                    std::vector<MediaAiAnalysisClassificationItem> m_classificationSet;
                    bool m_classificationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_
