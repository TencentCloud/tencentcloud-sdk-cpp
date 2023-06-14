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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PARSESTREAMINGMANIFESTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PARSESTREAMINGMANIFESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ParseStreamingManifest请求参数结构体
                */
                class ParseStreamingManifestRequest : public AbstractModel
                {
                public:
                    ParseStreamingManifestRequest();
                    ~ParseStreamingManifestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待解析的索引文件内容。
                     * @return MediaManifestContent 待解析的索引文件内容。
                     * 
                     */
                    std::string GetMediaManifestContent() const;

                    /**
                     * 设置待解析的索引文件内容。
                     * @param _mediaManifestContent 待解析的索引文件内容。
                     * 
                     */
                    void SetMediaManifestContent(const std::string& _mediaManifestContent);

                    /**
                     * 判断参数 MediaManifestContent 是否已赋值
                     * @return MediaManifestContent 是否已赋值
                     * 
                     */
                    bool MediaManifestContentHasBeenSet() const;

                    /**
                     * 获取视频索引文件格式。默认 m3u8 格式。
<li>m3u8</li>
<li>mpd</li>
                     * @return ManifestType 视频索引文件格式。默认 m3u8 格式。
<li>m3u8</li>
<li>mpd</li>
                     * 
                     */
                    std::string GetManifestType() const;

                    /**
                     * 设置视频索引文件格式。默认 m3u8 格式。
<li>m3u8</li>
<li>mpd</li>
                     * @param _manifestType 视频索引文件格式。默认 m3u8 格式。
<li>m3u8</li>
<li>mpd</li>
                     * 
                     */
                    void SetManifestType(const std::string& _manifestType);

                    /**
                     * 判断参数 ManifestType 是否已赋值
                     * @return ManifestType 是否已赋值
                     * 
                     */
                    bool ManifestTypeHasBeenSet() const;

                private:

                    /**
                     * 待解析的索引文件内容。
                     */
                    std::string m_mediaManifestContent;
                    bool m_mediaManifestContentHasBeenSet;

                    /**
                     * 视频索引文件格式。默认 m3u8 格式。
<li>m3u8</li>
<li>mpd</li>
                     */
                    std::string m_manifestType;
                    bool m_manifestTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PARSESTREAMINGMANIFESTREQUEST_H_
