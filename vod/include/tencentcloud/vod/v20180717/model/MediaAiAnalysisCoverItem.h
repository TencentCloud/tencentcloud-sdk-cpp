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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCOVERITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCOVERITEM_H_

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
                     * 获取智能封面地址。
                     * @return CoverUrl 智能封面地址。
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置智能封面地址。
                     * @param _coverUrl 智能封面地址。
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

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
                     * 智能封面地址。
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAIANALYSISCOVERITEM_H_
