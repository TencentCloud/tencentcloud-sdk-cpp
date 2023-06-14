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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_PLUGINLISTITEM_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_PLUGINLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * APK检测服务：广告插件结果结构体
                */
                class PluginListItem : public AbstractModel
                {
                public:
                    PluginListItem();
                    ~PluginListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数字类型，分别为 1-通知栏广告，2-积分墙广告，3-banner广告，4- 悬浮窗图标广告，5-精品推荐列表广告, 6-插播广告
                     * @return PluginType 数字类型，分别为 1-通知栏广告，2-积分墙广告，3-banner广告，4- 悬浮窗图标广告，5-精品推荐列表广告, 6-插播广告
                     * 
                     */
                    std::string GetPluginType() const;

                    /**
                     * 设置数字类型，分别为 1-通知栏广告，2-积分墙广告，3-banner广告，4- 悬浮窗图标广告，5-精品推荐列表广告, 6-插播广告
                     * @param _pluginType 数字类型，分别为 1-通知栏广告，2-积分墙广告，3-banner广告，4- 悬浮窗图标广告，5-精品推荐列表广告, 6-插播广告
                     * 
                     */
                    void SetPluginType(const std::string& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                    /**
                     * 获取广告插件名称
                     * @return PluginName 广告插件名称
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置广告插件名称
                     * @param _pluginName 广告插件名称
                     * 
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     * 
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取广告插件描述
                     * @return PluginDesc 广告插件描述
                     * 
                     */
                    std::string GetPluginDesc() const;

                    /**
                     * 设置广告插件描述
                     * @param _pluginDesc 广告插件描述
                     * 
                     */
                    void SetPluginDesc(const std::string& _pluginDesc);

                    /**
                     * 判断参数 PluginDesc 是否已赋值
                     * @return PluginDesc 是否已赋值
                     * 
                     */
                    bool PluginDescHasBeenSet() const;

                private:

                    /**
                     * 数字类型，分别为 1-通知栏广告，2-积分墙广告，3-banner广告，4- 悬浮窗图标广告，5-精品推荐列表广告, 6-插播广告
                     */
                    std::string m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * 广告插件名称
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 广告插件描述
                     */
                    std::string m_pluginDesc;
                    bool m_pluginDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_PLUGINLISTITEM_H_
