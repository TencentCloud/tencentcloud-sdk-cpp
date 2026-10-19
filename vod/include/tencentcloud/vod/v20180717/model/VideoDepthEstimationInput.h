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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONINPUT_H_

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
                * 视频深度估计任务的输入信息。
                */
                class VideoDepthEstimationInput : public AbstractModel
                {
                public:
                    VideoDepthEstimationInput();
                    ~VideoDepthEstimationInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入视频的 URL，支持以下三种形式：</p><li>以 <code>http://</code> 或 <code>https://</code> 开头的网络地址；</li><li><code>vod://</code> 开头的点播媒体文件 ID，例如 <code>vod://5285890815916760123</code>；</li><li><code>data:video/&lt;ext&gt;;base64,</code> 开头的 base64 编码视频数据。</li>
                     * @return Url <p>输入视频的 URL，支持以下三种形式：</p><li>以 <code>http://</code> 或 <code>https://</code> 开头的网络地址；</li><li><code>vod://</code> 开头的点播媒体文件 ID，例如 <code>vod://5285890815916760123</code>；</li><li><code>data:video/&lt;ext&gt;;base64,</code> 开头的 base64 编码视频数据。</li>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>输入视频的 URL，支持以下三种形式：</p><li>以 <code>http://</code> 或 <code>https://</code> 开头的网络地址；</li><li><code>vod://</code> 开头的点播媒体文件 ID，例如 <code>vod://5285890815916760123</code>；</li><li><code>data:video/&lt;ext&gt;;base64,</code> 开头的 base64 编码视频数据。</li>
                     * @param _url <p>输入视频的 URL，支持以下三种形式：</p><li>以 <code>http://</code> 或 <code>https://</code> 开头的网络地址；</li><li><code>vod://</code> 开头的点播媒体文件 ID，例如 <code>vod://5285890815916760123</code>；</li><li><code>data:video/&lt;ext&gt;;base64,</code> 开头的 base64 编码视频数据。</li>
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
                     * 获取<p>输入视频的媒体文件 ID，仅当 Url 以 <code>vod://</code> 开头时有值。</p>
                     * @return FileId <p>输入视频的媒体文件 ID，仅当 Url 以 <code>vod://</code> 开头时有值。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>输入视频的媒体文件 ID，仅当 Url 以 <code>vod://</code> 开头时有值。</p>
                     * @param _fileId <p>输入视频的媒体文件 ID，仅当 Url 以 <code>vod://</code> 开头时有值。</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p>输入视频的 URL，支持以下三种形式：</p><li>以 <code>http://</code> 或 <code>https://</code> 开头的网络地址；</li><li><code>vod://</code> 开头的点播媒体文件 ID，例如 <code>vod://5285890815916760123</code>；</li><li><code>data:video/&lt;ext&gt;;base64,</code> 开头的 base64 编码视频数据。</li>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>输入视频的媒体文件 ID，仅当 Url 以 <code>vod://</code> 开头时有值。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_VIDEODEPTHESTIMATIONINPUT_H_
