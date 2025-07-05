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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISCOVERITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISCOVERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能封面信息
                */
                class MediaAiAnalysisCoverItem : public AbstractModel
                {
                public:
                    MediaAiAnalysisCoverItem();
                    ~MediaAiAnalysisCoverItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能封面存储路径。
                     * @return CoverPath 智能封面存储路径。
                     * 
                     */
                    std::string GetCoverPath() const;

                    /**
                     * 设置智能封面存储路径。
                     * @param _coverPath 智能封面存储路径。
                     * 
                     */
                    void SetCoverPath(const std::string& _coverPath);

                    /**
                     * 判断参数 CoverPath 是否已赋值
                     * @return CoverPath 是否已赋值
                     * 
                     */
                    bool CoverPathHasBeenSet() const;

                    /**
                     * 获取智能封面的可信度，取值范围是 0 到 100。
                     * @return Confidence 智能封面的可信度，取值范围是 0 到 100。
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置智能封面的可信度，取值范围是 0 到 100。
                     * @param _confidence 智能封面的可信度，取值范围是 0 到 100。
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
                     * 智能封面存储路径。
                     */
                    std::string m_coverPath;
                    bool m_coverPathHasBeenSet;

                    /**
                     * 智能封面的可信度，取值范围是 0 到 100。
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAAIANALYSISCOVERITEM_H_
