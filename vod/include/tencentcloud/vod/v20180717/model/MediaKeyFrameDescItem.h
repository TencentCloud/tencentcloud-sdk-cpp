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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCITEM_H_

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
                * 视频打点信息
                */
                class MediaKeyFrameDescItem : public AbstractModel
                {
                public:
                    MediaKeyFrameDescItem();
                    ~MediaKeyFrameDescItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取打点的视频偏移时间，单位：秒。
                     * @return TimeOffset 打点的视频偏移时间，单位：秒。
                     * 
                     */
                    double GetTimeOffset() const;

                    /**
                     * 设置打点的视频偏移时间，单位：秒。
                     * @param _timeOffset 打点的视频偏移时间，单位：秒。
                     * 
                     */
                    void SetTimeOffset(const double& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取打点的内容字符串，限制 1-128 个字符。
                     * @return Content 打点的内容字符串，限制 1-128 个字符。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置打点的内容字符串，限制 1-128 个字符。
                     * @param _content 打点的内容字符串，限制 1-128 个字符。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 打点的视频偏移时间，单位：秒。
                     */
                    double m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * 打点的内容字符串，限制 1-128 个字符。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCITEM_H_
