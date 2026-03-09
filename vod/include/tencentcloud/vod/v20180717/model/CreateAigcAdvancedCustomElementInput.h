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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTINPUT_H_

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
                * 创建自定义主体输入。
                */
                class CreateAigcAdvancedCustomElementInput : public AbstractModel
                {
                public:
                    CreateAigcAdvancedCustomElementInput();
                    ~CreateAigcAdvancedCustomElementInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主体名称。</p>
                     * @return ElementName <p>主体名称。</p>
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置<p>主体名称。</p>
                     * @param _elementName <p>主体名称。</p>
                     * 
                     */
                    void SetElementName(const std::string& _elementName);

                    /**
                     * 判断参数 ElementName 是否已赋值
                     * @return ElementName 是否已赋值
                     * 
                     */
                    bool ElementNameHasBeenSet() const;

                    /**
                     * 获取<p>主体描述。</p>
                     * @return ElementDescription <p>主体描述。</p>
                     * 
                     */
                    std::string GetElementDescription() const;

                    /**
                     * 设置<p>主体描述。</p>
                     * @param _elementDescription <p>主体描述。</p>
                     * 
                     */
                    void SetElementDescription(const std::string& _elementDescription);

                    /**
                     * 判断参数 ElementDescription 是否已赋值
                     * @return ElementDescription 是否已赋值
                     * 
                     */
                    bool ElementDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>主体参考方式。</p>
                     * @return ReferenceType <p>主体参考方式。</p>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p>主体参考方式。</p>
                     * @param _referenceType <p>主体参考方式。</p>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>主体音色。</p>
                     * @return ElementVoiceId <p>主体音色。</p>
                     * 
                     */
                    std::string GetElementVoiceId() const;

                    /**
                     * 设置<p>主体音色。</p>
                     * @param _elementVoiceId <p>主体音色。</p>
                     * 
                     */
                    void SetElementVoiceId(const std::string& _elementVoiceId);

                    /**
                     * 判断参数 ElementVoiceId 是否已赋值
                     * @return ElementVoiceId 是否已赋值
                     * 
                     */
                    bool ElementVoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>主体参考视频。</p>
                     * @return ElementVideoList <p>主体参考视频。</p>
                     * 
                     */
                    std::string GetElementVideoList() const;

                    /**
                     * 设置<p>主体参考视频。</p>
                     * @param _elementVideoList <p>主体参考视频。</p>
                     * 
                     */
                    void SetElementVideoList(const std::string& _elementVideoList);

                    /**
                     * 判断参数 ElementVideoList 是否已赋值
                     * @return ElementVideoList 是否已赋值
                     * 
                     */
                    bool ElementVideoListHasBeenSet() const;

                    /**
                     * 获取<p>主体参考图。</p>
                     * @return ElementImageList <p>主体参考图。</p>
                     * 
                     */
                    std::string GetElementImageList() const;

                    /**
                     * 设置<p>主体参考图。</p>
                     * @param _elementImageList <p>主体参考图。</p>
                     * 
                     */
                    void SetElementImageList(const std::string& _elementImageList);

                    /**
                     * 判断参数 ElementImageList 是否已赋值
                     * @return ElementImageList 是否已赋值
                     * 
                     */
                    bool ElementImageListHasBeenSet() const;

                    /**
                     * 获取<p>主体配置标签。</p>
                     * @return TagList <p>主体配置标签。</p>
                     * 
                     */
                    std::string GetTagList() const;

                    /**
                     * 设置<p>主体配置标签。</p>
                     * @param _tagList <p>主体配置标签。</p>
                     * 
                     */
                    void SetTagList(const std::string& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * <p>主体名称。</p>
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * <p>主体描述。</p>
                     */
                    std::string m_elementDescription;
                    bool m_elementDescriptionHasBeenSet;

                    /**
                     * <p>主体参考方式。</p>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>主体音色。</p>
                     */
                    std::string m_elementVoiceId;
                    bool m_elementVoiceIdHasBeenSet;

                    /**
                     * <p>主体参考视频。</p>
                     */
                    std::string m_elementVideoList;
                    bool m_elementVideoListHasBeenSet;

                    /**
                     * <p>主体参考图。</p>
                     */
                    std::string m_elementImageList;
                    bool m_elementImageListHasBeenSet;

                    /**
                     * <p>主体配置标签。</p>
                     */
                    std::string m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTINPUT_H_
