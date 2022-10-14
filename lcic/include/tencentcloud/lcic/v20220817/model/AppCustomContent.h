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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_APPCUSTOMCONTENT_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_APPCUSTOMCONTENT_H_

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
                * 应用自定义内容
                */
                class AppCustomContent : public AbstractModel
                {
                public:
                    AppCustomContent();
                    ~AppCustomContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取场景参数，一个应用下可以设置多个不同场景。
                     * @return Scene 场景参数，一个应用下可以设置多个不同场景。
                     */
                    std::string GetScene() const;

                    /**
                     * 设置场景参数，一个应用下可以设置多个不同场景。
                     * @param Scene 场景参数，一个应用下可以设置多个不同场景。
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取logo地址。
                     * @return LogoUrl logo地址。
                     */
                    std::string GetLogoUrl() const;

                    /**
                     * 设置logo地址。
                     * @param LogoUrl logo地址。
                     */
                    void SetLogoUrl(const std::string& _logoUrl);

                    /**
                     * 判断参数 LogoUrl 是否已赋值
                     * @return LogoUrl 是否已赋值
                     */
                    bool LogoUrlHasBeenSet() const;

                    /**
                     * 获取主页地址，可设置用于跳转。
                     * @return HomeUrl 主页地址，可设置用于跳转。
                     */
                    std::string GetHomeUrl() const;

                    /**
                     * 设置主页地址，可设置用于跳转。
                     * @param HomeUrl 主页地址，可设置用于跳转。
                     */
                    void SetHomeUrl(const std::string& _homeUrl);

                    /**
                     * 判断参数 HomeUrl 是否已赋值
                     * @return HomeUrl 是否已赋值
                     */
                    bool HomeUrlHasBeenSet() const;

                    /**
                     * 获取自定义的js。
                     * @return JsUrl 自定义的js。
                     */
                    std::string GetJsUrl() const;

                    /**
                     * 设置自定义的js。
                     * @param JsUrl 自定义的js。
                     */
                    void SetJsUrl(const std::string& _jsUrl);

                    /**
                     * 判断参数 JsUrl 是否已赋值
                     * @return JsUrl 是否已赋值
                     */
                    bool JsUrlHasBeenSet() const;

                    /**
                     * 获取自定义的css。
                     * @return CssUrl 自定义的css。
                     */
                    std::string GetCssUrl() const;

                    /**
                     * 设置自定义的css。
                     * @param CssUrl 自定义的css。
                     */
                    void SetCssUrl(const std::string& _cssUrl);

                    /**
                     * 判断参数 CssUrl 是否已赋值
                     * @return CssUrl 是否已赋值
                     */
                    bool CssUrlHasBeenSet() const;

                private:

                    /**
                     * 场景参数，一个应用下可以设置多个不同场景。
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * logo地址。
                     */
                    std::string m_logoUrl;
                    bool m_logoUrlHasBeenSet;

                    /**
                     * 主页地址，可设置用于跳转。
                     */
                    std::string m_homeUrl;
                    bool m_homeUrlHasBeenSet;

                    /**
                     * 自定义的js。
                     */
                    std::string m_jsUrl;
                    bool m_jsUrlHasBeenSet;

                    /**
                     * 自定义的css。
                     */
                    std::string m_cssUrl;
                    bool m_cssUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_APPCUSTOMCONTENT_H_
