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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCESUBJECTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCESUBJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 参考主体信息。
对于Vidu模型：
Id -> server_id， 通过主体创建接口获取的主体ID。
name -> 主体ID， 后续通过@主体ID方式使用。

对于Kling模型:
id -> element_id， 主体ID, 通过主体创建接口获取的主体ID。
                */
                class AigcVideoReferenceSubjectInfo : public AbstractModel
                {
                public:
                    AigcVideoReferenceSubjectInfo();
                    ~AigcVideoReferenceSubjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参考主体的 ID。</p>
                     * @return Id <p>参考主体的 ID。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>参考主体的 ID。</p>
                     * @param _id <p>参考主体的 ID。</p>
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
                     * 获取<p>主体名称。</p>
                     * @return Name <p>主体名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>主体名称。</p>
                     * @param _name <p>主体名称。</p>
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
                     * 获取<p>主体音色ID。</p>
                     * @return VoiceId <p>主体音色ID。</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>主体音色ID。</p>
                     * @param _voiceId <p>主体音色ID。</p>
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
                     * 获取<p>主体图片列表。</p>
                     * @return ImageUrls <p>主体图片列表。</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrls() const;

                    /**
                     * 设置<p>主体图片列表。</p>
                     * @param _imageUrls <p>主体图片列表。</p>
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
                     * 获取<p>主体视频列表。</p>
                     * @return VideoUrls <p>主体视频列表。</p>
                     * 
                     */
                    std::vector<std::string> GetVideoUrls() const;

                    /**
                     * 设置<p>主体视频列表。</p>
                     * @param _videoUrls <p>主体视频列表。</p>
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
                     * <p>参考主体的 ID。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>主体名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>主体音色ID。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>主体图片列表。</p>
                     */
                    std::vector<std::string> m_imageUrls;
                    bool m_imageUrlsHasBeenSet;

                    /**
                     * <p>主体视频列表。</p>
                     */
                    std::vector<std::string> m_videoUrls;
                    bool m_videoUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCVIDEOREFERENCESUBJECTINFO_H_
