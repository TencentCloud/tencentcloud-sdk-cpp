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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PENGUINMEDIAPLATFORMPUBLISHINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PENGUINMEDIAPLATFORMPUBLISHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 企鹅号发布信息。
                */
                class PenguinMediaPlatformPublishInfo : public AbstractModel
                {
                public:
                    PenguinMediaPlatformPublishInfo();
                    ~PenguinMediaPlatformPublishInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频发布标题。
                     * @return Title 视频发布标题。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置视频发布标题。
                     * @param _title 视频发布标题。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取视频发布描述信息。
                     * @return Description 视频发布描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置视频发布描述信息。
                     * @param _description 视频发布描述信息。
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
                     * 获取视频标签。
                     * @return Tags 视频标签。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置视频标签。
                     * @param _tags 视频标签。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取视频分类，详见[企鹅号官网](https://open.om.qq.com/resources/resourcesCenter)视频分类。
                     * @return Category 视频分类，详见[企鹅号官网](https://open.om.qq.com/resources/resourcesCenter)视频分类。
                     * 
                     */
                    int64_t GetCategory() const;

                    /**
                     * 设置视频分类，详见[企鹅号官网](https://open.om.qq.com/resources/resourcesCenter)视频分类。
                     * @param _category 视频分类，详见[企鹅号官网](https://open.om.qq.com/resources/resourcesCenter)视频分类。
                     * 
                     */
                    void SetCategory(const int64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 视频发布标题。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 视频发布描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 视频标签。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 视频分类，详见[企鹅号官网](https://open.om.qq.com/resources/resourcesCenter)视频分类。
                     */
                    int64_t m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PENGUINMEDIAPLATFORMPUBLISHINFO_H_
