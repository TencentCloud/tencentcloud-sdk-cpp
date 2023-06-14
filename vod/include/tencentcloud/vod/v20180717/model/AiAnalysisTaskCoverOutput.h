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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisCoverItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能封面结果信息
                */
                class AiAnalysisTaskCoverOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskCoverOutput();
                    ~AiAnalysisTaskCoverOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能封面列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 CoverSetFileUrl 对应的文件中获取。
                     * @return CoverSet 智能封面列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 CoverSetFileUrl 对应的文件中获取。
                     * 
                     */
                    std::vector<MediaAiAnalysisCoverItem> GetCoverSet() const;

                    /**
                     * 设置智能封面列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 CoverSetFileUrl 对应的文件中获取。
                     * @param _coverSet 智能封面列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 CoverSetFileUrl 对应的文件中获取。
                     * 
                     */
                    void SetCoverSet(const std::vector<MediaAiAnalysisCoverItem>& _coverSet);

                    /**
                     * 判断参数 CoverSet 是否已赋值
                     * @return CoverSet 是否已赋值
                     * 
                     */
                    bool CoverSetHasBeenSet() const;

                    /**
                     * 获取智能封面列表文件 URL。文件的内容为 JSON，数据结构与 CoverSet 字段一致。 （文件不会永久存储，到达 CoverSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @return CoverSetFileUrl 智能封面列表文件 URL。文件的内容为 JSON，数据结构与 CoverSet 字段一致。 （文件不会永久存储，到达 CoverSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    std::string GetCoverSetFileUrl() const;

                    /**
                     * 设置智能封面列表文件 URL。文件的内容为 JSON，数据结构与 CoverSet 字段一致。 （文件不会永久存储，到达 CoverSetFileUrlExpireTime 时间点后文件将被删除）。
                     * @param _coverSetFileUrl 智能封面列表文件 URL。文件的内容为 JSON，数据结构与 CoverSet 字段一致。 （文件不会永久存储，到达 CoverSetFileUrlExpireTime 时间点后文件将被删除）。
                     * 
                     */
                    void SetCoverSetFileUrl(const std::string& _coverSetFileUrl);

                    /**
                     * 判断参数 CoverSetFileUrl 是否已赋值
                     * @return CoverSetFileUrl 是否已赋值
                     * 
                     */
                    bool CoverSetFileUrlHasBeenSet() const;

                    /**
                     * 获取智能封面列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CoverSetFileUrlExpireTime 智能封面列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCoverSetFileUrlExpireTime() const;

                    /**
                     * 设置智能封面列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _coverSetFileUrlExpireTime 智能封面列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetCoverSetFileUrlExpireTime(const std::string& _coverSetFileUrlExpireTime);

                    /**
                     * 判断参数 CoverSetFileUrlExpireTime 是否已赋值
                     * @return CoverSetFileUrlExpireTime 是否已赋值
                     * 
                     */
                    bool CoverSetFileUrlExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 智能封面列表。
<font color=red>注意</font> ：该列表最多仅展示前 100 个元素。如希望获得完整结果，请从 CoverSetFileUrl 对应的文件中获取。
                     */
                    std::vector<MediaAiAnalysisCoverItem> m_coverSet;
                    bool m_coverSetHasBeenSet;

                    /**
                     * 智能封面列表文件 URL。文件的内容为 JSON，数据结构与 CoverSet 字段一致。 （文件不会永久存储，到达 CoverSetFileUrlExpireTime 时间点后文件将被删除）。
                     */
                    std::string m_coverSetFileUrl;
                    bool m_coverSetFileUrlHasBeenSet;

                    /**
                     * 智能封面列表文件 URL 失效时间，使用  [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_coverSetFileUrlExpireTime;
                    bool m_coverSetFileUrlExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIANALYSISTASKCOVEROUTPUT_H_
