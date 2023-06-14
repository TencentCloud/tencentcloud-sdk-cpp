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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 图片信息
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片名称。
                     * @return EntityId 图片名称。
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置图片名称。
                     * @param _entityId 图片名称。
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取用户自定义的内容。
                     * @return CustomContent 用户自定义的内容。
                     * 
                     */
                    std::string GetCustomContent() const;

                    /**
                     * 设置用户自定义的内容。
                     * @param _customContent 用户自定义的内容。
                     * 
                     */
                    void SetCustomContent(const std::string& _customContent);

                    /**
                     * 判断参数 CustomContent 是否已赋值
                     * @return CustomContent 是否已赋值
                     * 
                     */
                    bool CustomContentHasBeenSet() const;

                    /**
                     * 获取图片自定义标签，JSON格式。
                     * @return Tags 图片自定义标签，JSON格式。
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置图片自定义标签，JSON格式。
                     * @param _tags 图片自定义标签，JSON格式。
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取图片名称。
                     * @return PicName 图片名称。
                     * 
                     */
                    std::string GetPicName() const;

                    /**
                     * 设置图片名称。
                     * @param _picName 图片名称。
                     * 
                     */
                    void SetPicName(const std::string& _picName);

                    /**
                     * 判断参数 PicName 是否已赋值
                     * @return PicName 是否已赋值
                     * 
                     */
                    bool PicNameHasBeenSet() const;

                    /**
                     * 获取相似度。
                     * @return Score 相似度。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置相似度。
                     * @param _score 相似度。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 图片名称。
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 用户自定义的内容。
                     */
                    std::string m_customContent;
                    bool m_customContentHasBeenSet;

                    /**
                     * 图片自定义标签，JSON格式。
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 图片名称。
                     */
                    std::string m_picName;
                    bool m_picNameHasBeenSet;

                    /**
                     * 相似度。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_IMAGEINFO_H_
