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
                * 简要的资产标签元素
                */
                class MiniTagItem : public AbstractModel
                {
                public:
                    MiniTagItem();
                    ~MiniTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签颜色</p>
                     * @return Color <p>标签颜色</p>
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>标签颜色</p>
                     * @param _color <p>标签颜色</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>标签ID</p>
                     * @return ID <p>标签ID</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>标签ID</p>
                     * @param _iD <p>标签ID</p>
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
                     * 获取<p>标签键</p>
                     * @return TagKey <p>标签键</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>标签键</p>
                     * @param _tagKey <p>标签键</p>
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
                     * 获取<p>标签值</p>
                     * @return TagValue <p>标签值</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>标签值</p>
                     * @param _tagValue <p>标签值</p>
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
                     * 获取<p>标签键英文</p>
                     * @return TagKeyEn <p>标签键英文</p>
                     * 
                     */
                    std::string GetTagKeyEn() const;

                    /**
                     * 设置<p>标签键英文</p>
                     * @param _tagKeyEn <p>标签键英文</p>
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
                     * 获取<p>标签值英文</p>
                     * @return TagValueEn <p>标签值英文</p>
                     * 
                     */
                    std::string GetTagValueEn() const;

                    /**
                     * 设置<p>标签值英文</p>
                     * @param _tagValueEn <p>标签值英文</p>
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
                     * <p>标签颜色</p>
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签ID</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>标签键</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>标签值</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * <p>标签键英文</p>
                     */
                    std::string m_tagKeyEn;
                    bool m_tagKeyEnHasBeenSet;

                    /**
                     * <p>标签值英文</p>
                     */
                    std::string m_tagValueEn;
                    bool m_tagValueEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MINITAGITEM_H_
