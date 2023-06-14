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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_WEIBOPUBLISHINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_WEIBOPUBLISHINFO_H_

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
                * 微博发布信息。
                */
                class WeiboPublishInfo : public AbstractModel
                {
                public:
                    WeiboPublishInfo();
                    ~WeiboPublishInfo() = default;
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
                     * 获取微博可见性，可取值为：
<li>Public：公开，所有人可见；</li>
<li>Private：私有，仅自己可见。</li>

默认为 Public，所有人可见。
                     * @return Visible 微博可见性，可取值为：
<li>Public：公开，所有人可见；</li>
<li>Private：私有，仅自己可见。</li>

默认为 Public，所有人可见。
                     * 
                     */
                    std::string GetVisible() const;

                    /**
                     * 设置微博可见性，可取值为：
<li>Public：公开，所有人可见；</li>
<li>Private：私有，仅自己可见。</li>

默认为 Public，所有人可见。
                     * @param _visible 微博可见性，可取值为：
<li>Public：公开，所有人可见；</li>
<li>Private：私有，仅自己可见。</li>

默认为 Public，所有人可见。
                     * 
                     */
                    void SetVisible(const std::string& _visible);

                    /**
                     * 判断参数 Visible 是否已赋值
                     * @return Visible 是否已赋值
                     * 
                     */
                    bool VisibleHasBeenSet() const;

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
                     * 微博可见性，可取值为：
<li>Public：公开，所有人可见；</li>
<li>Private：私有，仅自己可见。</li>

默认为 Public，所有人可见。
                     */
                    std::string m_visible;
                    bool m_visibleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_WEIBOPUBLISHINFO_H_
