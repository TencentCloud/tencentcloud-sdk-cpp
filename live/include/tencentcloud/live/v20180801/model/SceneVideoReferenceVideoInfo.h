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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOREFERENCEVIDEOINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOREFERENCEVIDEOINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 用于场景化视频生成的参考视频素材。
                */
                class SceneVideoReferenceVideoInfo : public AbstractModel
                {
                public:
                    SceneVideoReferenceVideoInfo();
                    ~SceneVideoReferenceVideoInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参考视频Url，需外网可访问。</p>
                     * @return VideoUrl <p>参考视频Url，需外网可访问。</p>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>参考视频Url，需外网可访问。</p>
                     * @param _videoUrl <p>参考视频Url，需外网可访问。</p>
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                private:

                    /**
                     * <p>参考视频Url，需外网可访问。</p>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SCENEVIDEOREFERENCEVIDEOINFO_H_
