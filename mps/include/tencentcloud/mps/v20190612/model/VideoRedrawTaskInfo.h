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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOREDRAWTASKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOREDRAWTASKINFO_H_

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
                * Aigc 转绘、替换等任务参数
                */
                class VideoRedrawTaskInfo : public AbstractModel
                {
                public:
                    VideoRedrawTaskInfo();
                    ~VideoRedrawTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>转绘视频风格，如动漫、赛博朋克、水墨等</p>
                     * @return Style <p>转绘视频风格，如动漫、赛博朋克、水墨等</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>转绘视频风格，如动漫、赛博朋克、水墨等</p>
                     * @param _style <p>转绘视频风格，如动漫、赛博朋克、水墨等</p>
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
                     * <p>转绘视频风格，如动漫、赛博朋克、水墨等</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEOREDRAWTASKINFO_H_
