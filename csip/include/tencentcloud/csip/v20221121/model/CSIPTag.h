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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPTAG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPTAG_H_

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
                * 安全中心标签
                */
                class CSIPTag : public AbstractModel
                {
                public:
                    CSIPTag();
                    ~CSIPTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签颜色</p>
                     * @return TagColor <p>标签颜色</p>
                     * 
                     */
                    std::string GetTagColor() const;

                    /**
                     * 设置<p>标签颜色</p>
                     * @param _tagColor <p>标签颜色</p>
                     * 
                     */
                    void SetTagColor(const std::string& _tagColor);

                    /**
                     * 判断参数 TagColor 是否已赋值
                     * @return TagColor 是否已赋值
                     * 
                     */
                    bool TagColorHasBeenSet() const;

                    /**
                     * 获取<p>标签ID</p>
                     * @return TagID <p>标签ID</p>
                     * 
                     */
                    uint64_t GetTagID() const;

                    /**
                     * 设置<p>标签ID</p>
                     * @param _tagID <p>标签ID</p>
                     * 
                     */
                    void SetTagID(const uint64_t& _tagID);

                    /**
                     * 判断参数 TagID 是否已赋值
                     * @return TagID 是否已赋值
                     * 
                     */
                    bool TagIDHasBeenSet() const;

                    /**
                     * 获取<p>标签键（根据语言环境返回中文或英文）</p>
                     * @return TagKey <p>标签键（根据语言环境返回中文或英文）</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>标签键（根据语言环境返回中文或英文）</p>
                     * @param _tagKey <p>标签键（根据语言环境返回中文或英文）</p>
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
                     * 获取<p>标签值（根据语言环境返回中文或英文）</p>
                     * @return TagValue <p>标签值（根据语言环境返回中文或英文）</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>标签值（根据语言环境返回中文或英文）</p>
                     * @param _tagValue <p>标签值（根据语言环境返回中文或英文）</p>
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * <p>标签颜色</p>
                     */
                    std::string m_tagColor;
                    bool m_tagColorHasBeenSet;

                    /**
                     * <p>标签ID</p>
                     */
                    uint64_t m_tagID;
                    bool m_tagIDHasBeenSet;

                    /**
                     * <p>标签键（根据语言环境返回中文或英文）</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>标签值（根据语言环境返回中文或英文）</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CSIPTAG_H_
