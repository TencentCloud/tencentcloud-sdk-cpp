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
                     * 获取<p>输入的文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li>  <li>Base64：图片或视频转换的Base64字符串；</li></p>
                     * @return Type <p>输入的文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li>  <li>Base64：图片或视频转换的Base64字符串；</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>输入的文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li>  <li>Base64：图片或视频转换的Base64字符串；</li></p>
                     * @param _type <p>输入的文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li>  <li>Base64：图片或视频转换的Base64字符串；</li></p>
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
                     * 获取<p>图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * @return FileId <p>图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * @param _fileId <p>图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
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
                     * 获取<p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * @return Url <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     * @param _url <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
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
                     * 获取<p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过 7 MB，避免转为 Base64 后超出云 API 的 10 MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp；</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     * @return Base64 <p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过 7 MB，避免转为 Base64 后超出云 API 的 10 MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp；</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     * 
                     */
                    std::string GetBase64() const;

                    /**
                     * 设置<p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过 7 MB，避免转为 Base64 后超出云 API 的 10 MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp；</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     * @param _base64 <p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过 7 MB，避免转为 Base64 后超出云 API 的 10 MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp；</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     * 
                     */
                    void SetBase64(const std::string& _base64);

                    /**
                     * 判断参数 Base64 是否已赋值
                     * @return Base64 是否已赋值
                     * 
                     */
                    bool Base64HasBeenSet() const;

                    /**
                     * 获取<p>输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。</p>
                     * @return Text <p>输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。</p>
                     * @param _text <p>输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p><strong>仅当 ModelName 为 OG 时有效</strong>。图片类型。</p><p>枚举值：</p><ul><li>mask： 图片蒙版。</li></ul>
                     * @return ReferenceType <p><strong>仅当 ModelName 为 OG 时有效</strong>。图片类型。</p><p>枚举值：</p><ul><li>mask： 图片蒙版。</li></ul>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p><strong>仅当 ModelName 为 OG 时有效</strong>。图片类型。</p><p>枚举值：</p><ul><li>mask： 图片蒙版。</li></ul>
                     * @param _referenceType <p><strong>仅当 ModelName 为 OG 时有效</strong>。图片类型。</p><p>枚举值：</p><ul><li>mask： 图片蒙版。</li></ul>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                private:

                    /**
                     * <p>输入的文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li>  <li>Base64：图片或视频转换的Base64字符串；</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>图片文件的媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于7M的图片；</li><li>图片格式的取值为：jpeg，jpg, png, webp。</li></ol>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过 7 MB，避免转为 Base64 后超出云 API 的 10 MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp；</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     */
                    std::string m_base64;
                    bool m_base64HasBeenSet;

                    /**
                     * <p>输入图片的描述信息，用于帮助模型理解图片。仅GEM 2.5、GEM 3.0 有效。</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p><strong>仅当 ModelName 为 OG 时有效</strong>。图片类型。</p><p>枚举值：</p><ul><li>mask： 图片蒙版。</li></ul>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCIMAGETASKINPUTFILEINFO_H_
