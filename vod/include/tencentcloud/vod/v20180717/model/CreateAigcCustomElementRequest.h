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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ElementReferInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcCustomElement请求参数结构体
                */
                class CreateAigcCustomElementRequest : public AbstractModel
                {
                public:
                    CreateAigcCustomElementRequest();
                    ~CreateAigcCustomElementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主体名称。不能超过20个字符
                     * @return ElementName 主体名称。不能超过20个字符
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置主体名称。不能超过20个字符
                     * @param _elementName 主体名称。不能超过20个字符
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
                     * 获取主体描述。

不能超过100个字符。
                     * @return ElementDescription 主体描述。

不能超过100个字符。
                     * 
                     */
                    std::string GetElementDescription() const;

                    /**
                     * 设置主体描述。

不能超过100个字符。
                     * @param _elementDescription 主体描述。

不能超过100个字符。
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
                     * 获取主体正面参考图。
支持传入图片URL（确保可访问）
图片格式支持.jpg / .jpeg / .png
图片文件大小不能超过10MB，图片宽高尺寸不小于300px，图片宽高比要在1:2.5 ~ 2.5:1之间。
                     * @return ElementFrontalImage 主体正面参考图。
支持传入图片URL（确保可访问）
图片格式支持.jpg / .jpeg / .png
图片文件大小不能超过10MB，图片宽高尺寸不小于300px，图片宽高比要在1:2.5 ~ 2.5:1之间。
                     * 
                     */
                    std::string GetElementFrontalImage() const;

                    /**
                     * 设置主体正面参考图。
支持传入图片URL（确保可访问）
图片格式支持.jpg / .jpeg / .png
图片文件大小不能超过10MB，图片宽高尺寸不小于300px，图片宽高比要在1:2.5 ~ 2.5:1之间。
                     * @param _elementFrontalImage 主体正面参考图。
支持传入图片URL（确保可访问）
图片格式支持.jpg / .jpeg / .png
图片文件大小不能超过10MB，图片宽高尺寸不小于300px，图片宽高比要在1:2.5 ~ 2.5:1之间。
                     * 
                     */
                    void SetElementFrontalImage(const std::string& _elementFrontalImage);

                    /**
                     * 判断参数 ElementFrontalImage 是否已赋值
                     * @return ElementFrontalImage 是否已赋值
                     * 
                     */
                    bool ElementFrontalImageHasBeenSet() const;

                    /**
                     * 获取主体其他参考列表  可通过上传多张、不同角度的主体参考图来定义主体外观 至少上传1张参考图，至多上传3张参考图。
                     * @return ElementReferList 主体其他参考列表  可通过上传多张、不同角度的主体参考图来定义主体外观 至少上传1张参考图，至多上传3张参考图。
                     * 
                     */
                    std::vector<ElementReferInfo> GetElementReferList() const;

                    /**
                     * 设置主体其他参考列表  可通过上传多张、不同角度的主体参考图来定义主体外观 至少上传1张参考图，至多上传3张参考图。
                     * @param _elementReferList 主体其他参考列表  可通过上传多张、不同角度的主体参考图来定义主体外观 至少上传1张参考图，至多上传3张参考图。
                     * 
                     */
                    void SetElementReferList(const std::vector<ElementReferInfo>& _elementReferList);

                    /**
                     * 判断参数 ElementReferList 是否已赋值
                     * @return ElementReferList 是否已赋值
                     * 
                     */
                    bool ElementReferListHasBeenSet() const;

                private:

                    /**
                     * 主体名称。不能超过20个字符
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * 主体描述。

不能超过100个字符。
                     */
                    std::string m_elementDescription;
                    bool m_elementDescriptionHasBeenSet;

                    /**
                     * 主体正面参考图。
支持传入图片URL（确保可访问）
图片格式支持.jpg / .jpeg / .png
图片文件大小不能超过10MB，图片宽高尺寸不小于300px，图片宽高比要在1:2.5 ~ 2.5:1之间。
                     */
                    std::string m_elementFrontalImage;
                    bool m_elementFrontalImageHasBeenSet;

                    /**
                     * 主体其他参考列表  可通过上传多张、不同角度的主体参考图来定义主体外观 至少上传1张参考图，至多上传3张参考图。
                     */
                    std::vector<ElementReferInfo> m_elementReferList;
                    bool m_elementReferListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCCUSTOMELEMENTREQUEST_H_
