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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_EDITINGINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_EDITINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/TagEditingInfo.h>
#include <tencentcloud/ie/v20200304/model/ClassificationEditingInfo.h>
#include <tencentcloud/ie/v20200304/model/StripEditingInfo.h>
#include <tencentcloud/ie/v20200304/model/HighlightsEditingInfo.h>
#include <tencentcloud/ie/v20200304/model/CoverEditingInfo.h>
#include <tencentcloud/ie/v20200304/model/OpeningEndingEditingInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 智能编辑任务参数信息
                */
                class EditingInfo : public AbstractModel
                {
                public:
                    EditingInfo();
                    ~EditingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频标签识别任务参数，不填则不开启。
                     * @return TagEditingInfo 视频标签识别任务参数，不填则不开启。
                     * 
                     */
                    TagEditingInfo GetTagEditingInfo() const;

                    /**
                     * 设置视频标签识别任务参数，不填则不开启。
                     * @param _tagEditingInfo 视频标签识别任务参数，不填则不开启。
                     * 
                     */
                    void SetTagEditingInfo(const TagEditingInfo& _tagEditingInfo);

                    /**
                     * 判断参数 TagEditingInfo 是否已赋值
                     * @return TagEditingInfo 是否已赋值
                     * 
                     */
                    bool TagEditingInfoHasBeenSet() const;

                    /**
                     * 获取视频分类识别任务参数，不填则不开启。
                     * @return ClassificationEditingInfo 视频分类识别任务参数，不填则不开启。
                     * 
                     */
                    ClassificationEditingInfo GetClassificationEditingInfo() const;

                    /**
                     * 设置视频分类识别任务参数，不填则不开启。
                     * @param _classificationEditingInfo 视频分类识别任务参数，不填则不开启。
                     * 
                     */
                    void SetClassificationEditingInfo(const ClassificationEditingInfo& _classificationEditingInfo);

                    /**
                     * 判断参数 ClassificationEditingInfo 是否已赋值
                     * @return ClassificationEditingInfo 是否已赋值
                     * 
                     */
                    bool ClassificationEditingInfoHasBeenSet() const;

                    /**
                     * 获取智能拆条任务参数，不填则不开启。
                     * @return StripEditingInfo 智能拆条任务参数，不填则不开启。
                     * 
                     */
                    StripEditingInfo GetStripEditingInfo() const;

                    /**
                     * 设置智能拆条任务参数，不填则不开启。
                     * @param _stripEditingInfo 智能拆条任务参数，不填则不开启。
                     * 
                     */
                    void SetStripEditingInfo(const StripEditingInfo& _stripEditingInfo);

                    /**
                     * 判断参数 StripEditingInfo 是否已赋值
                     * @return StripEditingInfo 是否已赋值
                     * 
                     */
                    bool StripEditingInfoHasBeenSet() const;

                    /**
                     * 获取智能集锦任务参数，不填则不开启。
                     * @return HighlightsEditingInfo 智能集锦任务参数，不填则不开启。
                     * 
                     */
                    HighlightsEditingInfo GetHighlightsEditingInfo() const;

                    /**
                     * 设置智能集锦任务参数，不填则不开启。
                     * @param _highlightsEditingInfo 智能集锦任务参数，不填则不开启。
                     * 
                     */
                    void SetHighlightsEditingInfo(const HighlightsEditingInfo& _highlightsEditingInfo);

                    /**
                     * 判断参数 HighlightsEditingInfo 是否已赋值
                     * @return HighlightsEditingInfo 是否已赋值
                     * 
                     */
                    bool HighlightsEditingInfoHasBeenSet() const;

                    /**
                     * 获取智能封面任务参数，不填则不开启。
                     * @return CoverEditingInfo 智能封面任务参数，不填则不开启。
                     * 
                     */
                    CoverEditingInfo GetCoverEditingInfo() const;

                    /**
                     * 设置智能封面任务参数，不填则不开启。
                     * @param _coverEditingInfo 智能封面任务参数，不填则不开启。
                     * 
                     */
                    void SetCoverEditingInfo(const CoverEditingInfo& _coverEditingInfo);

                    /**
                     * 判断参数 CoverEditingInfo 是否已赋值
                     * @return CoverEditingInfo 是否已赋值
                     * 
                     */
                    bool CoverEditingInfoHasBeenSet() const;

                    /**
                     * 获取片头片尾识别任务参数，不填则不开启。
                     * @return OpeningEndingEditingInfo 片头片尾识别任务参数，不填则不开启。
                     * 
                     */
                    OpeningEndingEditingInfo GetOpeningEndingEditingInfo() const;

                    /**
                     * 设置片头片尾识别任务参数，不填则不开启。
                     * @param _openingEndingEditingInfo 片头片尾识别任务参数，不填则不开启。
                     * 
                     */
                    void SetOpeningEndingEditingInfo(const OpeningEndingEditingInfo& _openingEndingEditingInfo);

                    /**
                     * 判断参数 OpeningEndingEditingInfo 是否已赋值
                     * @return OpeningEndingEditingInfo 是否已赋值
                     * 
                     */
                    bool OpeningEndingEditingInfoHasBeenSet() const;

                private:

                    /**
                     * 视频标签识别任务参数，不填则不开启。
                     */
                    TagEditingInfo m_tagEditingInfo;
                    bool m_tagEditingInfoHasBeenSet;

                    /**
                     * 视频分类识别任务参数，不填则不开启。
                     */
                    ClassificationEditingInfo m_classificationEditingInfo;
                    bool m_classificationEditingInfoHasBeenSet;

                    /**
                     * 智能拆条任务参数，不填则不开启。
                     */
                    StripEditingInfo m_stripEditingInfo;
                    bool m_stripEditingInfoHasBeenSet;

                    /**
                     * 智能集锦任务参数，不填则不开启。
                     */
                    HighlightsEditingInfo m_highlightsEditingInfo;
                    bool m_highlightsEditingInfoHasBeenSet;

                    /**
                     * 智能封面任务参数，不填则不开启。
                     */
                    CoverEditingInfo m_coverEditingInfo;
                    bool m_coverEditingInfoHasBeenSet;

                    /**
                     * 片头片尾识别任务参数，不填则不开启。
                     */
                    OpeningEndingEditingInfo m_openingEndingEditingInfo;
                    bool m_openingEndingEditingInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_EDITINGINFO_H_
