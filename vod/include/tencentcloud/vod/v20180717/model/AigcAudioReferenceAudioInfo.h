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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOREFERENCEAUDIOINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOREFERENCEAUDIOINFO_H_

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
                * 参考音频信息。
                */
                class AigcAudioReferenceAudioInfo : public AbstractModel
                {
                public:
                    AigcAudioReferenceAudioInfo();
                    ~AigcAudioReferenceAudioInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。说明：1. 推荐使用小于7M的图片；2. 图片格式的取值为：jpeg，jpg, png, webp。</p>
                     * @return Type <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。说明：1. 推荐使用小于7M的图片；2. 图片格式的取值为：jpeg，jpg, png, webp。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。说明：1. 推荐使用小于7M的图片；2. 图片格式的取值为：jpeg，jpg, png, webp。</p>
                     * @param _type <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。说明：1. 推荐使用小于7M的图片；2. 图片格式的取值为：jpeg，jpg, png, webp。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>音频文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。</p>
                     * @return FileId <p>音频文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>音频文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。</p>
                     * @param _fileId <p>音频文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>音频文件 URL，需要外网可访问。当 Type 取值为 Url 时，本参数有效。</p>
                     * @return Url <p>音频文件 URL，需要外网可访问。当 Type 取值为 Url 时，本参数有效。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>音频文件 URL，需要外网可访问。当 Type 取值为 Url 时，本参数有效。</p>
                     * @param _url <p>音频文件 URL，需要外网可访问。当 Type 取值为 Url 时，本参数有效。</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。说明：1. 推荐使用小于7M的图片；2. 图片格式的取值为：jpeg，jpg, png, webp。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>音频文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>音频文件 URL，需要外网可访问。当 Type 取值为 Url 时，本参数有效。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCAUDIOREFERENCEAUDIOINFO_H_
