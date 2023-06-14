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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDUREREVIEWAUDIOVIDEOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDUREREVIEWAUDIOVIDEOTASKINPUT_H_

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
                * 任务流模板音视频审核输入参数类型。
                */
                class ProcedureReviewAudioVideoTaskInput : public AbstractModel
                {
                public:
                    ProcedureReviewAudioVideoTaskInput();
                    ~ProcedureReviewAudioVideoTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取审核模板。
                     * @return Definition 审核模板。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置审核模板。
                     * @param _definition 审核模板。
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
不填或填空数组时，默认为审核 Media。
                     * @return ReviewContents 审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
                     * 
                     */
                    std::vector<std::string> GetReviewContents() const;

                    /**
                     * 设置审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
                     * @param _reviewContents 审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
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
                     * 审核模板。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 审核的内容，可选值：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
                     */
                    std::vector<std::string> m_reviewContents;
                    bool m_reviewContentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDUREREVIEWAUDIOVIDEOTASKINPUT_H_
