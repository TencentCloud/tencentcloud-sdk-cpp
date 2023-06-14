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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaKeyFrameDescItem.h>


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
                class MediaKeyFrameDescInfo : public AbstractModel
                {
                public:
                    MediaKeyFrameDescInfo();
                    ~MediaKeyFrameDescInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频打点信息数组。
                     * @return KeyFrameDescSet 视频打点信息数组。
                     * 
                     */
                    std::vector<MediaKeyFrameDescItem> GetKeyFrameDescSet() const;

                    /**
                     * 设置视频打点信息数组。
                     * @param _keyFrameDescSet 视频打点信息数组。
                     * 
                     */
                    void SetKeyFrameDescSet(const std::vector<MediaKeyFrameDescItem>& _keyFrameDescSet);

                    /**
                     * 判断参数 KeyFrameDescSet 是否已赋值
                     * @return KeyFrameDescSet 是否已赋值
                     * 
                     */
                    bool KeyFrameDescSetHasBeenSet() const;

                private:

                    /**
                     * 视频打点信息数组。
                     */
                    std::vector<MediaKeyFrameDescItem> m_keyFrameDescSet;
                    bool m_keyFrameDescSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCINFO_H_
