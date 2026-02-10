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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEUNDERSTANDINGINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEUNDERSTANDINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageUnderstandingItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片理解信息。
                */
                class ImageUnderstandingInfo : public AbstractModel
                {
                public:
                    ImageUnderstandingInfo();
                    ~ImageUnderstandingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片理解项集合。
                     * @return ImageUnderstandingSet 图片理解项集合。
                     * 
                     */
                    std::vector<ImageUnderstandingItem> GetImageUnderstandingSet() const;

                    /**
                     * 设置图片理解项集合。
                     * @param _imageUnderstandingSet 图片理解项集合。
                     * 
                     */
                    void SetImageUnderstandingSet(const std::vector<ImageUnderstandingItem>& _imageUnderstandingSet);

                    /**
                     * 判断参数 ImageUnderstandingSet 是否已赋值
                     * @return ImageUnderstandingSet 是否已赋值
                     * 
                     */
                    bool ImageUnderstandingSetHasBeenSet() const;

                private:

                    /**
                     * 图片理解项集合。
                     */
                    std::vector<ImageUnderstandingItem> m_imageUnderstandingSet;
                    bool m_imageUnderstandingSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEUNDERSTANDINGINFO_H_
