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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_URLINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_URLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 任务视频Url形式下载信息。
                */
                class UrlInfo : public AbstractModel
                {
                public:
                    UrlInfo();
                    ~UrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频 URL。
注意：编辑理解仅支持mp4、flv等格式的点播文件，不支持hls；
                     * @return Url 视频 URL。
注意：编辑理解仅支持mp4、flv等格式的点播文件，不支持hls；
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置视频 URL。
注意：编辑理解仅支持mp4、flv等格式的点播文件，不支持hls；
                     * @param _url 视频 URL。
注意：编辑理解仅支持mp4、flv等格式的点播文件，不支持hls；
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
                     * 获取视频地址格式，可选值： 
0：音视频 ;
1：直播流。 
默认为0。其他非0非1值默认为0。画质重生任务只支持0。
                     * @return Format 视频地址格式，可选值： 
0：音视频 ;
1：直播流。 
默认为0。其他非0非1值默认为0。画质重生任务只支持0。
                     * 
                     */
                    int64_t GetFormat() const;

                    /**
                     * 设置视频地址格式，可选值： 
0：音视频 ;
1：直播流。 
默认为0。其他非0非1值默认为0。画质重生任务只支持0。
                     * @param _format 视频地址格式，可选值： 
0：音视频 ;
1：直播流。 
默认为0。其他非0非1值默认为0。画质重生任务只支持0。
                     * 
                     */
                    void SetFormat(const int64_t& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取【不再支持】指定请求资源时，HTTP头部host的值。
                     * @return Host 【不再支持】指定请求资源时，HTTP头部host的值。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置【不再支持】指定请求资源时，HTTP头部host的值。
                     * @param _host 【不再支持】指定请求资源时，HTTP头部host的值。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * 视频 URL。
注意：编辑理解仅支持mp4、flv等格式的点播文件，不支持hls；
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 视频地址格式，可选值： 
0：音视频 ;
1：直播流。 
默认为0。其他非0非1值默认为0。画质重生任务只支持0。
                     */
                    int64_t m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 【不再支持】指定请求资源时，HTTP头部host的值。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_URLINFO_H_
