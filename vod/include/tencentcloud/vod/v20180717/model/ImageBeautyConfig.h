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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBEAUTYCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBEAUTYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/BeautyEffectItem.h>
#include <tencentcloud/vod/v20180717/model/BeautyFilterItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片美颜配置。
                */
                class ImageBeautyConfig : public AbstractModel
                {
                public:
                    ImageBeautyConfig();
                    ~ImageBeautyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>美颜效果项。</p>
                     * @return BeautyEffectItems <p>美颜效果项。</p>
                     * 
                     */
                    std::vector<BeautyEffectItem> GetBeautyEffectItems() const;

                    /**
                     * 设置<p>美颜效果项。</p>
                     * @param _beautyEffectItems <p>美颜效果项。</p>
                     * 
                     */
                    void SetBeautyEffectItems(const std::vector<BeautyEffectItem>& _beautyEffectItems);

                    /**
                     * 判断参数 BeautyEffectItems 是否已赋值
                     * @return BeautyEffectItems 是否已赋值
                     * 
                     */
                    bool BeautyEffectItemsHasBeenSet() const;

                    /**
                     * 获取<p>美颜滤镜项。</p>
                     * @return BeautyFilterItems <p>美颜滤镜项。</p>
                     * 
                     */
                    std::vector<BeautyFilterItem> GetBeautyFilterItems() const;

                    /**
                     * 设置<p>美颜滤镜项。</p>
                     * @param _beautyFilterItems <p>美颜滤镜项。</p>
                     * 
                     */
                    void SetBeautyFilterItems(const std::vector<BeautyFilterItem>& _beautyFilterItems);

                    /**
                     * 判断参数 BeautyFilterItems 是否已赋值
                     * @return BeautyFilterItems 是否已赋值
                     * 
                     */
                    bool BeautyFilterItemsHasBeenSet() const;

                private:

                    /**
                     * <p>美颜效果项。</p>
                     */
                    std::vector<BeautyEffectItem> m_beautyEffectItems;
                    bool m_beautyEffectItemsHasBeenSet;

                    /**
                     * <p>美颜滤镜项。</p>
                     */
                    std::vector<BeautyFilterItem> m_beautyFilterItems;
                    bool m_beautyFilterItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEBEAUTYCONFIG_H_
