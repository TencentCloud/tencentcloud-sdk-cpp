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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKINPUT_H_

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
                * 音视频审核任务的输入。
                */
                class ReviewAudioVideoTaskInput : public AbstractModel
                {
                public:
                    ReviewAudioVideoTaskInput();
                    ~ReviewAudioVideoTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件 ID。
                     * @return FileId 媒体文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID。
                     * @param _fileId 媒体文件 ID。
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
                     * 获取音视频审核模板 ID。
                     * @return Definition 音视频审核模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置音视频审核模板 ID。
                     * @param _definition 音视频审核模板 ID。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
                     * @return ReviewContents 审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
                     * 
                     */
                    std::vector<std::string> GetReviewContents() const;

                    /**
                     * 设置审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
                     * @param _reviewContents 审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
                     * 
                     */
                    void SetReviewContents(const std::vector<std::string>& _reviewContents);

                    /**
                     * 判断参数 ReviewContents 是否已赋值
                     * @return ReviewContents 是否已赋值
                     * 
                     */
                    bool ReviewContentsHasBeenSet() const;

                private:

                    /**
                     * 媒体文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 音视频审核模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
                     */
                    std::vector<std::string> m_reviewContents;
                    bool m_reviewContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOTASKINPUT_H_
