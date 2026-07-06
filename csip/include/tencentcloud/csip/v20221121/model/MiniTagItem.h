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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MINITAGITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MINITAGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 简要的资产标签元素，CSIP 内部使用。
                */
                class MiniTagItem : public AbstractModel
                {
                public:
                    MiniTagItem();
                    ~MiniTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签展示颜色。
                     * @return Color 标签展示颜色。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置标签展示颜色。
                     * @param _color 标签展示颜色。
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取标签描述。
                     * @return Description 标签描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置标签描述。
                     * @param _description 标签描述。
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
                     * 获取标签 ID。
                     * @return ID 标签 ID。
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置标签 ID。
                     * @param _iD 标签 ID。
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取标签键（中文）。
                     * @return TagKey 标签键（中文）。
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签键（中文）。
                     * @param _tagKey 标签键（中文）。
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取标签值（中文）。
                     * @return TagValue 标签值（中文）。
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值（中文）。
                     * @param _tagValue 标签值（中文）。
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取标签键（英文）。
                     * @return TagKeyEn 标签键（英文）。
                     * 
                     */
                    std::string GetTagKeyEn() const;

                    /**
                     * 设置标签键（英文）。
                     * @param _tagKeyEn 标签键（英文）。
                     * 
                     */
                    void SetTagKeyEn(const std::string& _tagKeyEn);

                    /**
                     * 判断参数 TagKeyEn 是否已赋值
                     * @return TagKeyEn 是否已赋值
                     * 
                     */
                    bool TagKeyEnHasBeenSet() const;

                    /**
                     * 获取标签值（英文）。
                     * @return TagValueEn 标签值（英文）。
                     * 
                     */
                    std::string GetTagValueEn() const;

                    /**
                     * 设置标签值（英文）。
                     * @param _tagValueEn 标签值（英文）。
                     * 
                     */
                    void SetTagValueEn(const std::string& _tagValueEn);

                    /**
                     * 判断参数 TagValueEn 是否已赋值
                     * @return TagValueEn 是否已赋值
                     * 
                     */
                    bool TagValueEnHasBeenSet() const;

                private:

                    /**
                     * 标签展示颜色。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 标签描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 标签 ID。
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 标签键（中文）。
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 标签值（中文）。
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 标签键（英文）。
                     */
                    std::string m_tagKeyEn;
                    bool m_tagKeyEnHasBeenSet;

                    /**
                     * 标签值（英文）。
                     */
                    std::string m_tagValueEn;
                    bool m_tagValueEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MINITAGITEM_H_
