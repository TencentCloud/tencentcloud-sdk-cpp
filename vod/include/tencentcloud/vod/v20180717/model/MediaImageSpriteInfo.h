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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaImageSpriteItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 点播文件雪碧图信息
                */
                class MediaImageSpriteInfo : public AbstractModel
                {
                public:
                    MediaImageSpriteInfo();
                    ~MediaImageSpriteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取特定规格的雪碧图信息集合，每个元素代表一套相同规格的雪碧图。
                     * @return ImageSpriteSet 特定规格的雪碧图信息集合，每个元素代表一套相同规格的雪碧图。
                     * 
                     */
                    std::vector<MediaImageSpriteItem> GetImageSpriteSet() const;

                    /**
                     * 设置特定规格的雪碧图信息集合，每个元素代表一套相同规格的雪碧图。
                     * @param _imageSpriteSet 特定规格的雪碧图信息集合，每个元素代表一套相同规格的雪碧图。
                     * 
                     */
                    void SetImageSpriteSet(const std::vector<MediaImageSpriteItem>& _imageSpriteSet);

                    /**
                     * 判断参数 ImageSpriteSet 是否已赋值
                     * @return ImageSpriteSet 是否已赋值
                     * 
                     */
                    bool ImageSpriteSetHasBeenSet() const;

                private:

                    /**
                     * 特定规格的雪碧图信息集合，每个元素代表一套相同规格的雪碧图。
                     */
                    std::vector<MediaImageSpriteItem> m_imageSpriteSet;
                    bool m_imageSpriteSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAIMAGESPRITEINFO_H_
