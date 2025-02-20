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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SCENEITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SCENEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 场景配置
                */
                class SceneItem : public AbstractModel
                {
                public:
                    SceneItem();
                    ~SceneItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景名称
                     * @return Scene 场景名称
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置场景名称
                     * @param _scene 场景名称
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取logo地址
                     * @return LogoUrl logo地址
                     * 
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置logo地址
                     * @param _logoUrl logo地址
                     * 
                     */
                    void SetLogoUrl(const std::string& _logoUrl);

                    /**
                     * 判断参数 LogoUrl 是否已赋值
                     * @return LogoUrl 是否已赋值
                     * 
                     */
                    bool LogoUrlHasBeenSet() const;

                    /**
                     * 获取主页地址
                     * @return HomeUrl 主页地址
                     * 
                     */
                    std::string GetHomeUrl() const;

                    /**
                     * 设置主页地址
                     * @param _homeUrl 主页地址
                     * 
                     */
                    void SetHomeUrl(const std::string& _homeUrl);

                    /**
                     * 判断参数 HomeUrl 是否已赋值
                     * @return HomeUrl 是否已赋值
                     * 
                     */
                    bool HomeUrlHasBeenSet() const;

                    /**
                     * 获取自定义的js
                     * @return JSUrl 自定义的js
                     * 
                     */
                    std::string GetJSUrl() const;

                    /**
                     * 设置自定义的js
                     * @param _jSUrl 自定义的js
                     * 
                     */
                    void SetJSUrl(const std::string& _jSUrl);

                    /**
                     * 判断参数 JSUrl 是否已赋值
                     * @return JSUrl 是否已赋值
                     * 
                     */
                    bool JSUrlHasBeenSet() const;

                    /**
                     * 获取自定义的css
                     * @return CSSUrl 自定义的css
                     * 
                     */
                    std::string GetCSSUrl() const;

                    /**
                     * 设置自定义的css
                     * @param _cSSUrl 自定义的css
                     * 
                     */
                    void SetCSSUrl(const std::string& _cSSUrl);

                    /**
                     * 判断参数 CSSUrl 是否已赋值
                     * @return CSSUrl 是否已赋值
                     * 
                     */
                    bool CSSUrlHasBeenSet() const;

                private:

                    /**
                     * 场景名称
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * logo地址
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * 主页地址
                     */
                    std::string m_homeUrl;
                    bool m_homeUrlHasBeenSet;

                    /**
                     * 自定义的js
                     */
                    std::string m_jSUrl;
                    bool m_jSUrlHasBeenSet;

                    /**
                     * 自定义的css
                     */
                    std::string m_cSSUrl;
                    bool m_cSSUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SCENEITEM_H_
