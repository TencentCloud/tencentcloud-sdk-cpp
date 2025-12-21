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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUTFILEINFO_H_

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
                * AIGC生图任务输入文件信息
                */
                class AigcImageTaskInputFileInfo : public AbstractModel
                {
                public:
                    AigcImageTaskInputFileInfo();
                    ~AigcImageTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
                     * @return Type 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
                     * @param _type 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
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
                     * 获取图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
                     * @return FileId 图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
                     * @param _fileId 图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
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
                     * 获取可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
                     * @return Url 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
                     * @param _url 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
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
                     * 获取输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。
                     * @return Text 输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。
                     * @param _text 输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于7M的图片；
2. 图片格式的取值为：jpeg，jpg, png, webp。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUTFILEINFO_H_
