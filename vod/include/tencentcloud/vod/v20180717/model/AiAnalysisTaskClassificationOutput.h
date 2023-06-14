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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisClassificationItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ClassificationSetFileUrl 对应的文件中获取。
                     * @return ClassificationSet 视频智能分类列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ClassificationSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<MediaAiAnalysisClassificationItem> GetClassificationSet() const;

                    /**
                     * 设置视频智能分类列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ClassificationSetFileUrl 对应的文件中获取。
                     * @param _classificationSet 视频智能分类列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ClassificationSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetClassificationSet(const std::vector<MediaAiAnalysisClassificationItem>& _classificationSet);

                    /**
                     * 判断参数 ClassificationSet 是否已赋值
                     * @return ClassificationSet 是否已赋值
                     * 
                     */
                    bool ClassificationSetHasBeenSet() const;

                    /**
                     * 获取视频智能分类列表文件 URL。文件的内容为 JSON，数据结构与 ClassificationSet 字段一致。 （文件不会永久存储，到达 ClassificationSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return ClassificationSetFileUrl 视频智能分类列表文件 URL。文件的内容为 JSON，数据结构与 ClassificationSet 字段一致。 （文件不会永久存储，到达 ClassificationSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetClassificationSetFileUrl() const;

                    /**
                     * 设置视频智能分类列表文件 URL。文件的内容为 JSON，数据结构与 ClassificationSet 字段一致。 （文件不会永久存储，到达 ClassificationSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _classificationSetFileUrl 视频智能分类列表文件 URL。文件的内容为 JSON，数据结构与 ClassificationSet 字段一致。 （文件不会永久存储，到达 ClassificationSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    void SetClassificationSetFileUrl(const std::string& _classificationSetFileUrl);

                    /**
                     * 判断参数 ClassificationSetFileUrl 是否已赋值
                     * @return ClassificationSetFileUrl 是否已赋值
                     * 
                     */
                    bool ClassificationSetFileUrlHasBeenSet() const;

                    /**
                     * 获取视频智能分类列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return ClassificationSetFileUrlExpireTime 视频智能分类列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetClassificationSetFileUrlExpireTime() const;

                    /**
                     * 设置视频智能分类列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _classificationSetFileUrlExpireTime 视频智能分类列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetClassificationSetFileUrlExpireTime(const std::string& _classificationSetFileUrlExpireTime);

                    /**
                     * 判断参数 ClassificationSetFileUrlExpireTime 是否已赋值
                     * @return ClassificationSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool ClassificationSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 视频智能分类列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 ClassificationSetFileUrl 对应的文件中获取。
                     */
                    std::vector<MediaAiAnalysisClassificationItem> m_classificationSet;
                    bool m_classificationSetHasBeenSet;

                    /**
                     * 视频智能分类列表文件 URL。文件的内容为 JSON，数据结构与 ClassificationSet 字段一致。 （文件不会永久存储，到达 ClassificationSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_classificationSetFileUrl;
                    bool m_classificationSetFileUrlHasBeenSet;

                    /**
                     * 视频智能分类列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_classificationSetFileUrlExpireTime;
                    bool m_classificationSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCLASSIFICATIONOUTPUT_H_
