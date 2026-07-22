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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINFO_H_

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
                * AIGC 视频转绘人物参数信息。
                */
                class AigcVideoRedrawTaskInfo : public AbstractModel
                {
                public:
                    AigcVideoRedrawTaskInfo();
                    ~AigcVideoRedrawTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用于描述转绘风格。限制50字符。</p>
                     * @return Style <p>用于描述转绘风格。限制50字符。</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>用于描述转绘风格。限制50字符。</p>
                     * @param _style <p>用于描述转绘风格。限制50字符。</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                private:

                    /**
                     * <p>用于描述转绘风格。限制50字符。</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOREDRAWTASKINFO_H_
