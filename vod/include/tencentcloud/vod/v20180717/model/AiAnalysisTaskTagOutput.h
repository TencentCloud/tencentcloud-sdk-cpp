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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisTagItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能标签结果信息
                */
                class AiAnalysisTaskTagOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskTagOutput();
                    ~AiAnalysisTaskTagOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频智能标签列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 TagSetFileUrl 对应的文件中获取。
                     * @return TagSet 视频智能标签列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 TagSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<MediaAiAnalysisTagItem> GetTagSet() const;

                    /**
                     * 设置视频智能标签列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 TagSetFileUrl 对应的文件中获取。
                     * @param _tagSet 视频智能标签列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 TagSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetTagSet(const std::vector<MediaAiAnalysisTagItem>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取视频智能标签列表文件 URL。文件的内容为 JSON，数据结构与 TagSet 字段一致。 （文件不会永久存储，到达 TagSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return TagSetFileUrl 视频智能标签列表文件 URL。文件的内容为 JSON，数据结构与 TagSet 字段一致。 （文件不会永久存储，到达 TagSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetTagSetFileUrl() const;

                    /**
                     * 设置视频智能标签列表文件 URL。文件的内容为 JSON，数据结构与 TagSet 字段一致。 （文件不会永久存储，到达 TagSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _tagSetFileUrl 视频智能标签列表文件 URL。文件的内容为 JSON，数据结构与 TagSet 字段一致。 （文件不会永久存储，到达 TagSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    void SetTagSetFileUrl(const std::string& _tagSetFileUrl);

                    /**
                     * 判断参数 TagSetFileUrl 是否已赋值
                     * @return TagSetFileUrl 是否已赋值
                     * 
                     */
                    bool TagSetFileUrlHasBeenSet() const;

                    /**
                     * 获取视频智能标签列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return TagSetFileUrlExpireTime 视频智能标签列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetTagSetFileUrlExpireTime() const;

                    /**
                     * 设置视频智能标签列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _tagSetFileUrlExpireTime 视频智能标签列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetTagSetFileUrlExpireTime(const std::string& _tagSetFileUrlExpireTime);

                    /**
                     * 判断参数 TagSetFileUrlExpireTime 是否已赋值
                     * @return TagSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool TagSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 视频智能标签列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 TagSetFileUrl 对应的文件中获取。
                     */
                    std::vector<MediaAiAnalysisTagItem> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 视频智能标签列表文件 URL。文件的内容为 JSON，数据结构与 TagSet 字段一致。 （文件不会永久存储，到达 TagSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_tagSetFileUrl;
                    bool m_tagSetFileUrlHasBeenSet;

                    /**
                     * 视频智能标签列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_tagSetFileUrlExpireTime;
                    bool m_tagSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKTAGOUTPUT_H_
