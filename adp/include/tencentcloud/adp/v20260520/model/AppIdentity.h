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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPIDENTITY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用标识
                */
                class AppIdentity : public AbstractModel
                {
                public:
                    AppIdentity();
                    ~AppIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用名称</p>
                     * @return AppName <p>应用名称</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>应用名称</p>
                     * @param _appName <p>应用名称</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： agent模式</li><li>3： 单工作流模式</li><li>4： ClawAgent模式</li></ul>
                     * @return AppMode <p>应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： agent模式</li><li>3： 单工作流模式</li><li>4： ClawAgent模式</li></ul>
                     * 
                     */
                    int64_t GetAppMode() const;

                    /**
                     * 设置<p>应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： agent模式</li><li>3： 单工作流模式</li><li>4： ClawAgent模式</li></ul>
                     * @param _appMode <p>应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： agent模式</li><li>3： 单工作流模式</li><li>4： ClawAgent模式</li></ul>
                     * 
                     */
                    void SetAppMode(const int64_t& _appMode);

                    /**
                     * 判断参数 AppMode 是否已赋值
                     * @return AppMode 是否已赋值
                     * 
                     */
                    bool AppModeHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用名称</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>应用模式</p><p>枚举值：</p><ul><li>1： 标准模式</li><li>2： agent模式</li><li>3： 单工作流模式</li><li>4： ClawAgent模式</li></ul>
                     */
                    int64_t m_appMode;
                    bool m_appModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPIDENTITY_H_
