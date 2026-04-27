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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTSUBJECTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTSUBJECTINFO_H_

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
                * AIGC 主体输入信息。
                */
                class AigcVideoTaskInputSubjectInfo : public AbstractModel
                {
                public:
                    AigcVideoTaskInputSubjectInfo();
                    ~AigcVideoTaskInputSubjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>固定主体Id。</p><ul><li>Kling主体<strong>必选</strong>；</li><li>Vidu主体可选。</li></ul>
                     * @return Id <p>固定主体Id。</p><ul><li>Kling主体<strong>必选</strong>；</li><li>Vidu主体可选。</li></ul>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>固定主体Id。</p><ul><li>Kling主体<strong>必选</strong>；</li><li>Vidu主体可选。</li></ul>
                     * @param _id <p>固定主体Id。</p><ul><li>Kling主体<strong>必选</strong>；</li><li>Vidu主体可选。</li></ul>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>固定名称。</p><ul><li>Vidu主体<strong>必选</strong>，可在 prompt 中加入 [@name] 使用。如 name 为小明时，prompt 中描述为 [@小明] 。</li><li>Kling主体可选。</li></ul>
                     * @return Name <p>固定名称。</p><ul><li>Vidu主体<strong>必选</strong>，可在 prompt 中加入 [@name] 使用。如 name 为小明时，prompt 中描述为 [@小明] 。</li><li>Kling主体可选。</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>固定名称。</p><ul><li>Vidu主体<strong>必选</strong>，可在 prompt 中加入 [@name] 使用。如 name 为小明时，prompt 中描述为 [@小明] 。</li><li>Kling主体可选。</li></ul>
                     * @param _name <p>固定名称。</p><ul><li>Vidu主体<strong>必选</strong>，可在 prompt 中加入 [@name] 使用。如 name 为小明时，prompt 中描述为 [@小明] 。</li><li>Kling主体可选。</li></ul>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p><strong>仅Vidu有效。</strong>音色ID用来决定视频中的声音音色，为空时系统会自动推荐。</p>
                     * @return VoiceId <p><strong>仅Vidu有效。</strong>音色ID用来决定视频中的声音音色，为空时系统会自动推荐。</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p><strong>仅Vidu有效。</strong>音色ID用来决定视频中的声音音色，为空时系统会自动推荐。</p>
                     * @param _voiceId <p><strong>仅Vidu有效。</strong>音色ID用来决定视频中的声音音色，为空时系统会自动推荐。</p>
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
                     * 获取<p><strong>仅Vidu有效。</strong>临时主体图片，最多3张图片<br>注1：支持传入图片URL（确保可访问）；<br>注2：图片支持 png、jpeg、jpg、webp格式；<br>注3：图片像素不能小于 128*128，且比例需要小于1:4或者4:1。</p>
                     * @return ImageUrls <p><strong>仅Vidu有效。</strong>临时主体图片，最多3张图片<br>注1：支持传入图片URL（确保可访问）；<br>注2：图片支持 png、jpeg、jpg、webp格式；<br>注3：图片像素不能小于 128*128，且比例需要小于1:4或者4:1。</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 设置<p><strong>仅Vidu有效。</strong>临时主体图片，最多3张图片<br>注1：支持传入图片URL（确保可访问）；<br>注2：图片支持 png、jpeg、jpg、webp格式；<br>注3：图片像素不能小于 128*128，且比例需要小于1:4或者4:1。</p>
                     * @param _imageUrls <p><strong>仅Vidu有效。</strong>临时主体图片，最多3张图片<br>注1：支持传入图片URL（确保可访问）；<br>注2：图片支持 png、jpeg、jpg、webp格式；<br>注3：图片像素不能小于 128*128，且比例需要小于1:4或者4:1。</p>
                     * 
                     */
                    void SetImageUrls(const std::vector<std::string>& _imageUrls);

                    /**
                     * 判断参数 ImageUrls 是否已赋值
                     * @return ImageUrls 是否已赋值
                     * 
                     */
                    bool ImageUrlsHasBeenSet() const;

                    /**
                     * 获取<p><strong>仅Vidu有效。</strong>临时主体视频，最多1个5秒视频注1：仅参考生viduq2-pro模型支持使用视频主体；注2：最多支持上传 1个5秒 的视频；注3：视频支持 mp4、avi、mov格式；注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1；</p>
                     * @return VideoUrls <p><strong>仅Vidu有效。</strong>临时主体视频，最多1个5秒视频注1：仅参考生viduq2-pro模型支持使用视频主体；注2：最多支持上传 1个5秒 的视频；注3：视频支持 mp4、avi、mov格式；注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1；</p>
                     * 
                     */
                    std::vector<std::string> GetVideoUrls() const;

                    /**
                     * 设置<p><strong>仅Vidu有效。</strong>临时主体视频，最多1个5秒视频注1：仅参考生viduq2-pro模型支持使用视频主体；注2：最多支持上传 1个5秒 的视频；注3：视频支持 mp4、avi、mov格式；注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1；</p>
                     * @param _videoUrls <p><strong>仅Vidu有效。</strong>临时主体视频，最多1个5秒视频注1：仅参考生viduq2-pro模型支持使用视频主体；注2：最多支持上传 1个5秒 的视频；注3：视频支持 mp4、avi、mov格式；注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1；</p>
                     * 
                     */
                    void SetVideoUrls(const std::vector<std::string>& _videoUrls);

                    /**
                     * 判断参数 VideoUrls 是否已赋值
                     * @return VideoUrls 是否已赋值
                     * 
                     */
                    bool VideoUrlsHasBeenSet() const;

                private:

                    /**
                     * <p>固定主体Id。</p><ul><li>Kling主体<strong>必选</strong>；</li><li>Vidu主体可选。</li></ul>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>固定名称。</p><ul><li>Vidu主体<strong>必选</strong>，可在 prompt 中加入 [@name] 使用。如 name 为小明时，prompt 中描述为 [@小明] 。</li><li>Kling主体可选。</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p><strong>仅Vidu有效。</strong>音色ID用来决定视频中的声音音色，为空时系统会自动推荐。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p><strong>仅Vidu有效。</strong>临时主体图片，最多3张图片<br>注1：支持传入图片URL（确保可访问）；<br>注2：图片支持 png、jpeg、jpg、webp格式；<br>注3：图片像素不能小于 128*128，且比例需要小于1:4或者4:1。</p>
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * <p><strong>仅Vidu有效。</strong>临时主体视频，最多1个5秒视频注1：仅参考生viduq2-pro模型支持使用视频主体；注2：最多支持上传 1个5秒 的视频；注3：视频支持 mp4、avi、mov格式；注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1；</p>
                     */
                    std::vector<std::string> m_videoUrls;
                    bool m_videoUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTSUBJECTINFO_H_
