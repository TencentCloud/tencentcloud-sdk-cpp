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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFOITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/MediaMiniProgramReviewElem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 小程序音视频审核信息单元
                */
                class MediaMiniProgramReviewInfoItem : public AbstractModel
                {
                public:
                    MediaMiniProgramReviewInfoItem();
                    ~MediaMiniProgramReviewInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板id。小程序视频发布的视频所对应的转码模板ID，为0代表原始视频。
                     * @return Definition 模板id。小程序视频发布的视频所对应的转码模板ID，为0代表原始视频。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置模板id。小程序视频发布的视频所对应的转码模板ID，为0代表原始视频。
                     * @param _definition 模板id。小程序视频发布的视频所对应的转码模板ID，为0代表原始视频。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取视频元信息。
                     * @return MetaData 视频元信息。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置视频元信息。
                     * @param _metaData 视频元信息。
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取小程序音视频审核视频播放地址。
                     * @return Url 小程序音视频审核视频播放地址。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置小程序音视频审核视频播放地址。
                     * @param _url 小程序音视频审核视频播放地址。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取小程序视频发布状态：
<li>Pass：成功。</li>
<li>Rejected：未通过。</li>
                     * @return ReviewResult 小程序视频发布状态：
<li>Pass：成功。</li>
<li>Rejected：未通过。</li>
                     * 
                     */
                    std::string GetReviewResult() const;

                    /**
                     * 设置小程序视频发布状态：
<li>Pass：成功。</li>
<li>Rejected：未通过。</li>
                     * @param _reviewResult 小程序视频发布状态：
<li>Pass：成功。</li>
<li>Rejected：未通过。</li>
                     * 
                     */
                    void SetReviewResult(const std::string& _reviewResult);

                    /**
                     * 判断参数 ReviewResult 是否已赋值
                     * @return ReviewResult 是否已赋值
                     * 
                     */
                    bool ReviewResultHasBeenSet() const;

                    /**
                     * 获取小程序音视频审核元素。
                     * @return ReviewSummary 小程序音视频审核元素。
                     * 
                     */
                    std::vector<MediaMiniProgramReviewElem> GetReviewSummary() const;

                    /**
                     * 设置小程序音视频审核元素。
                     * @param _reviewSummary 小程序音视频审核元素。
                     * 
                     */
                    void SetReviewSummary(const std::vector<MediaMiniProgramReviewElem>& _reviewSummary);

                    /**
                     * 判断参数 ReviewSummary 是否已赋值
                     * @return ReviewSummary 是否已赋值
                     * 
                     */
                    bool ReviewSummaryHasBeenSet() const;

                private:

                    /**
                     * 模板id。小程序视频发布的视频所对应的转码模板ID，为0代表原始视频。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 视频元信息。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 小程序音视频审核视频播放地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 小程序视频发布状态：
<li>Pass：成功。</li>
<li>Rejected：未通过。</li>
                     */
                    std::string m_reviewResult;
                    bool m_reviewResultHasBeenSet;

                    /**
                     * 小程序音视频审核元素。
                     */
                    std::vector<MediaMiniProgramReviewElem> m_reviewSummary;
                    bool m_reviewSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAMINIPROGRAMREVIEWINFOITEM_H_
