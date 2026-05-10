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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTSUBTITLESTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTSUBTITLESTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSRawSmartSubtitleParameter.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 智能字幕输入结构体
                */
                class MPSSmartSubtitlesTaskInput : public AbstractModel
                {
                public:
                    MPSSmartSubtitlesTaskInput();
                    ~MPSSmartSubtitlesTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>智能字幕模板 ID。</p>
                     * @return Definition <p>智能字幕模板 ID。</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>智能字幕模板 ID。</p>
                     * @param _definition <p>智能字幕模板 ID。</p>
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
                     * 获取<p>智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
                     * @return RawParameter <p>智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
                     * 
                     */
                    MPSRawSmartSubtitleParameter GetRawParameter() const;

                    /**
                     * 设置<p>智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
                     * @param _rawParameter <p>智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
                     * 
                     */
                    void SetRawParameter(const MPSRawSmartSubtitleParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                private:

                    /**
                     * <p>智能字幕模板 ID。</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
                     */
                    MPSRawSmartSubtitleParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSMARTSUBTITLESTASKINPUT_H_
