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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTINPUT_H_

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
                * 创建主体输入信息。
                */
                class CreateAigcSubjectInput : public AbstractModel
                {
                public:
                    CreateAigcSubjectInput();
                    ~CreateAigcSubjectInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主体名称。</p>
                     * @return SubjectName <p>主体名称。</p>
                     * 
                     */
                    std::string GetSubjectName() const;

                    /**
                     * 设置<p>主体名称。</p>
                     * @param _subjectName <p>主体名称。</p>
                     * 
                     */
                    void SetSubjectName(const std::string& _subjectName);

                    /**
                     * 判断参数 SubjectName 是否已赋值
                     * @return SubjectName 是否已赋值
                     * 
                     */
                    bool SubjectNameHasBeenSet() const;

                    /**
                     * 获取<p>主体图片。</p>
                     * @return SubjectImages <p>主体图片。</p>
                     * 
                     */
                    std::vector<std::string> GetSubjectImages() const;

                    /**
                     * 设置<p>主体图片。</p>
                     * @param _subjectImages <p>主体图片。</p>
                     * 
                     */
                    void SetSubjectImages(const std::vector<std::string>& _subjectImages);

                    /**
                     * 判断参数 SubjectImages 是否已赋值
                     * @return SubjectImages 是否已赋值
                     * 
                     */
                    bool SubjectImagesHasBeenSet() const;

                    /**
                     * 获取<p>主体视频。</p>
                     * @return SubjectVideos <p>主体视频。</p>
                     * 
                     */
                    std::vector<std::string> GetSubjectVideos() const;

                    /**
                     * 设置<p>主体视频。</p>
                     * @param _subjectVideos <p>主体视频。</p>
                     * 
                     */
                    void SetSubjectVideos(const std::vector<std::string>& _subjectVideos);

                    /**
                     * 判断参数 SubjectVideos 是否已赋值
                     * @return SubjectVideos 是否已赋值
                     * 
                     */
                    bool SubjectVideosHasBeenSet() const;

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

                private:

                    /**
                     * <p>主体名称。</p>
                     */
                    std::string m_subjectName;
                    bool m_subjectNameHasBeenSet;

                    /**
                     * <p>主体图片。</p>
                     */
                    std::vector<std::string> m_subjectImages;
                    bool m_subjectImagesHasBeenSet;

                    /**
                     * <p>主体视频。</p>
                     */
                    std::vector<std::string> m_subjectVideos;
                    bool m_subjectVideosHasBeenSet;

                    /**
                     * <p>主体音色ID。</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTINPUT_H_
