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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_

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
                * 存储地域信息
                */
                class StorageRegionInfo : public AbstractModel
                {
                public:
                    StorageRegionInfo();
                    ~StorageRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储地域。
                     * @return Region 存储地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置存储地域。
                     * @param _region 存储地域。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取存储地域描述信息。
                     * @return Description 存储地域描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置存储地域描述信息。
                     * @param _description 存储地域描述信息。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取状态，是否开通，取值有：
<li>opened：已经开通。</li>
<li>unopened：未开通。</li>
                     * @return Status 状态，是否开通，取值有：
<li>opened：已经开通。</li>
<li>unopened：未开通。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，是否开通，取值有：
<li>opened：已经开通。</li>
<li>unopened：未开通。</li>
                     * @param _status 状态，是否开通，取值有：
<li>opened：已经开通。</li>
<li>unopened：未开通。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否默认的存储地域，true：是；false：否。
                     * @return IsDefault 是否默认的存储地域，true：是；false：否。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否默认的存储地域，true：是；false：否。
                     * @param _isDefault 是否默认的存储地域，true：是；false：否。
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取存储区域，取值有：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
                     * @return Area 存储区域，取值有：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置存储区域，取值有：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
                     * @param _area 存储区域，取值有：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 存储地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 存储地域描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 状态，是否开通，取值有：
<li>opened：已经开通。</li>
<li>unopened：未开通。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否默认的存储地域，true：是；false：否。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 存储区域，取值有：
<li>Chinese Mainland：中国境内（不包含港澳台）。</li>
<li>Outside Chinese Mainland：中国境外。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_STORAGEREGIONINFO_H_
