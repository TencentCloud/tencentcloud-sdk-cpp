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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_

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
                * AIGC 生视频任务输入的图片文件信息。
                */
                class AigcVideoTaskInputFileInfo : public AbstractModel
                {
                public:
                    AigcVideoTaskInputFileInfo();
                    ~AigcVideoTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> <li>Base64：图片或视频转换的Base64字符串；</li></p>
                     * @return Type <p>输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> <li>Base64：图片或视频转换的Base64字符串；</li></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> <li>Base64：图片或视频转换的Base64字符串；</li></p>
                     * @param _type <p>输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> <li>Base64：图片或视频转换的Base64字符串；</li></p>
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
                     * 获取<p>文件分类。取值为：</p><ul><li>Image: 图片；<strong>注意，要使用Usage字段定义图片类型</strong>。</li><li>Video: 视频。</li></ul>
                     * @return Category <p>文件分类。取值为：</p><ul><li>Image: 图片；<strong>注意，要使用Usage字段定义图片类型</strong>。</li><li>Video: 视频。</li></ul>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>文件分类。取值为：</p><ul><li>Image: 图片；<strong>注意，要使用Usage字段定义图片类型</strong>。</li><li>Video: 视频。</li></ul>
                     * @param _category <p>文件分类。取值为：</p><ul><li>Image: 图片；<strong>注意，要使用Usage字段定义图片类型</strong>。</li><li>Video: 视频。</li></ul>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
                     * @return FileId <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
                     * @param _fileId <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
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
                     * 获取<p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
                     * @return Url <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
                     * @param _url <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
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
                     * 获取<p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过7MB，避免转为 Base64 后超出云API的10MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp。</li><li>视频格式应为：mp4, mov, avi。</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     * @return Base64 <p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过7MB，避免转为 Base64 后超出云API的10MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp。</li><li>视频格式应为：mp4, mov, avi。</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     * 
                     */
                    std::string GetBase64() const;

                    /**
                     * 设置<p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过7MB，避免转为 Base64 后超出云API的10MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp。</li><li>视频格式应为：mp4, mov, avi。</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     * @param _base64 <p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过7MB，避免转为 Base64 后超出云API的10MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp。</li><li>视频格式应为：mp4, mov, avi。</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
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
                     * 获取<p>参考类型，GV、Kling、PixVerse模型适用。<br>注意：<br>当使用 GV 模型时，可作为参考方式，可选值：asset 表示素材、style 表示风格；<br>当使用 Kling 模型以及 Category 为 Video 时，可区分参考视频类型，feature 表示特征参考视频，base 表示待编辑视频；<br>当使用 PixVerse 模型时，可用于多图（主体）参考生模式，可选值：subject 表示主体、background 表示背景；</p>
                     * @return ReferenceType <p>参考类型，GV、Kling、PixVerse模型适用。<br>注意：<br>当使用 GV 模型时，可作为参考方式，可选值：asset 表示素材、style 表示风格；<br>当使用 Kling 模型以及 Category 为 Video 时，可区分参考视频类型，feature 表示特征参考视频，base 表示待编辑视频；<br>当使用 PixVerse 模型时，可用于多图（主体）参考生模式，可选值：subject 表示主体、background 表示背景；</p>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p>参考类型，GV、Kling、PixVerse模型适用。<br>注意：<br>当使用 GV 模型时，可作为参考方式，可选值：asset 表示素材、style 表示风格；<br>当使用 Kling 模型以及 Category 为 Video 时，可区分参考视频类型，feature 表示特征参考视频，base 表示待编辑视频；<br>当使用 PixVerse 模型时，可用于多图（主体）参考生模式，可选值：subject 表示主体、background 表示背景；</p>
                     * @param _referenceType <p>参考类型，GV、Kling、PixVerse模型适用。<br>注意：<br>当使用 GV 模型时，可作为参考方式，可选值：asset 表示素材、style 表示风格；<br>当使用 Kling 模型以及 Category 为 Video 时，可区分参考视频类型，feature 表示特征参考视频，base 表示待编辑视频；<br>当使用 PixVerse 模型时，可用于多图（主体）参考生模式，可选值：subject 表示主体、background 表示背景；</p>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>用法：Vidu主体Id。<br>Vidu主体Id：prompt可以通过 @主体Id 的方式使用。当 Category 为 Image 时有效。</p>
                     * @return ObjectId <p>用法：Vidu主体Id。<br>Vidu主体Id：prompt可以通过 @主体Id 的方式使用。当 Category 为 Image 时有效。</p>
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置<p>用法：Vidu主体Id。<br>Vidu主体Id：prompt可以通过 @主体Id 的方式使用。当 Category 为 Image 时有效。</p>
                     * @param _objectId <p>用法：Vidu主体Id。<br>Vidu主体Id：prompt可以通过 @主体Id 的方式使用。当 Category 为 Image 时有效。</p>
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取<p>适用于 Vidu-q2 模型。<br>当全部图片携带主体 Id 时，可针对主体设置音色 Id。 当 Category 为 Image 时有效。音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     * @return VoiceId <p>适用于 Vidu-q2 模型。<br>当全部图片携带主体 Id 时，可针对主体设置音色 Id。 当 Category 为 Image 时有效。音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>适用于 Vidu-q2 模型。<br>当全部图片携带主体 Id 时，可针对主体设置音色 Id。 当 Category 为 Image 时有效。音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     * @param _voiceId <p>适用于 Vidu-q2 模型。<br>当全部图片携带主体 Id 时，可针对主体设置音色 Id。 当 Category 为 Image 时有效。音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>是否保留视频原声。当 Category 为 Video 时有效。取值如下：</p><li>Enabled：保留</li><li>Disabled：不保留</li>
                     * @return KeepOriginalSound <p>是否保留视频原声。当 Category 为 Video 时有效。取值如下：</p><li>Enabled：保留</li><li>Disabled：不保留</li>
                     * 
                     */
                    std::string GetKeepOriginalSound() const;

                    /**
                     * 设置<p>是否保留视频原声。当 Category 为 Video 时有效。取值如下：</p><li>Enabled：保留</li><li>Disabled：不保留</li>
                     * @param _keepOriginalSound <p>是否保留视频原声。当 Category 为 Video 时有效。取值如下：</p><li>Enabled：保留</li><li>Disabled：不保留</li>
                     * 
                     */
                    void SetKeepOriginalSound(const std::string& _keepOriginalSound);

                    /**
                     * 判断参数 KeepOriginalSound 是否已赋值
                     * @return KeepOriginalSound 是否已赋值
                     * 
                     */
                    bool KeepOriginalSoundHasBeenSet() const;

                    /**
                     * 获取<p>用于区分输入图像用于<strong>首（尾）帧生视频</strong>、<strong>图生视频</strong>或<strong>参考生视频</strong>。可选值：</p><ul><li>FirstFrame：用于首（尾）帧生视频的首帧 或 图生视频；</li><li>Reference：用于参考生视频；</li><li>LastFrame：用于首（尾）帧生视频的尾帧；</li></ul><p><strong>注意，默认是FirstFrame</strong></p>
                     * @return Usage <p>用于区分输入图像用于<strong>首（尾）帧生视频</strong>、<strong>图生视频</strong>或<strong>参考生视频</strong>。可选值：</p><ul><li>FirstFrame：用于首（尾）帧生视频的首帧 或 图生视频；</li><li>Reference：用于参考生视频；</li><li>LastFrame：用于首（尾）帧生视频的尾帧；</li></ul><p><strong>注意，默认是FirstFrame</strong></p>
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置<p>用于区分输入图像用于<strong>首（尾）帧生视频</strong>、<strong>图生视频</strong>或<strong>参考生视频</strong>。可选值：</p><ul><li>FirstFrame：用于首（尾）帧生视频的首帧 或 图生视频；</li><li>Reference：用于参考生视频；</li><li>LastFrame：用于首（尾）帧生视频的尾帧；</li></ul><p><strong>注意，默认是FirstFrame</strong></p>
                     * @param _usage <p>用于区分输入图像用于<strong>首（尾）帧生视频</strong>、<strong>图生视频</strong>或<strong>参考生视频</strong>。可选值：</p><ul><li>FirstFrame：用于首（尾）帧生视频的首帧 或 图生视频；</li><li>Reference：用于参考生视频；</li><li>LastFrame：用于首（尾）帧生视频的尾帧；</li></ul><p><strong>注意，默认是FirstFrame</strong></p>
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p><strong>仅 PixVerse 模型的多图（主体）参考生模式生效</strong>，针对图片指定名字, 用来更精准效果。用法：当本字段值为“小猫”，在 Prompt 中使用 @小猫 精确描述场景。@Text 后必须有空格，如 @小猫 跑步。Prompt 中引用的名称必须与本字段完全一致。</p>
                     * @return Text <p><strong>仅 PixVerse 模型的多图（主体）参考生模式生效</strong>，针对图片指定名字, 用来更精准效果。用法：当本字段值为“小猫”，在 Prompt 中使用 @小猫 精确描述场景。@Text 后必须有空格，如 @小猫 跑步。Prompt 中引用的名称必须与本字段完全一致。</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p><strong>仅 PixVerse 模型的多图（主体）参考生模式生效</strong>，针对图片指定名字, 用来更精准效果。用法：当本字段值为“小猫”，在 Prompt 中使用 @小猫 精确描述场景。@Text 后必须有空格，如 @小猫 跑步。Prompt 中引用的名称必须与本字段完全一致。</p>
                     * @param _text <p><strong>仅 PixVerse 模型的多图（主体）参考生模式生效</strong>，针对图片指定名字, 用来更精准效果。用法：当本字段值为“小猫”，在 Prompt 中使用 @小猫 精确描述场景。@Text 后必须有空格，如 @小猫 跑步。Prompt 中引用的名称必须与本字段完全一致。</p>
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
                     * <p>输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 Url；</li> <li>Base64：图片或视频转换的Base64字符串；</li></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>文件分类。取值为：</p><ul><li>Image: 图片；<strong>注意，要使用Usage字段定义图片类型</strong>。</li><li>Video: 视频。</li></ul>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。当 Type 取值为 File 时，本参数有效。说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。<br>说明：</p><ol><li>推荐使用小于10M的图片；</li><li>图片格式的取值为：jpeg，jpg, png。</li></ol>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>可访问的文件 Base64。当 Type 取值为 Base64 时，本参数有效。说明：</p><ol><li>所有文件的文件大小总和不能超过7MB，避免转为 Base64 后超出云API的10MB包大小上限；</li><li>图片格式应为：jpeg，jpg, png, webp。</li><li>视频格式应为：mp4, mov, avi。</li><li>不要有data:image/jpeg;base64,之类的前缀。</li></ol>
                     */
                    std::string m_base64;
                    bool m_base64HasBeenSet;

                    /**
                     * <p>参考类型，GV、Kling、PixVerse模型适用。<br>注意：<br>当使用 GV 模型时，可作为参考方式，可选值：asset 表示素材、style 表示风格；<br>当使用 Kling 模型以及 Category 为 Video 时，可区分参考视频类型，feature 表示特征参考视频，base 表示待编辑视频；<br>当使用 PixVerse 模型时，可用于多图（主体）参考生模式，可选值：subject 表示主体、background 表示背景；</p>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>用法：Vidu主体Id。<br>Vidu主体Id：prompt可以通过 @主体Id 的方式使用。当 Category 为 Image 时有效。</p>
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * <p>适用于 Vidu-q2 模型。<br>当全部图片携带主体 Id 时，可针对主体设置音色 Id。 当 Category 为 Image 时有效。音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>是否保留视频原声。当 Category 为 Video 时有效。取值如下：</p><li>Enabled：保留</li><li>Disabled：不保留</li>
                     */
                    std::string m_keepOriginalSound;
                    bool m_keepOriginalSoundHasBeenSet;

                    /**
                     * <p>用于区分输入图像用于<strong>首（尾）帧生视频</strong>、<strong>图生视频</strong>或<strong>参考生视频</strong>。可选值：</p><ul><li>FirstFrame：用于首（尾）帧生视频的首帧 或 图生视频；</li><li>Reference：用于参考生视频；</li><li>LastFrame：用于首（尾）帧生视频的尾帧；</li></ul><p><strong>注意，默认是FirstFrame</strong></p>
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p><strong>仅 PixVerse 模型的多图（主体）参考生模式生效</strong>，针对图片指定名字, 用来更精准效果。用法：当本字段值为“小猫”，在 Prompt 中使用 @小猫 精确描述场景。@Text 后必须有空格，如 @小猫 跑步。Prompt 中引用的名称必须与本字段完全一致。</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
