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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTALLPLUGINSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTALLPLUGINSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * InstallPlugins返回参数结构体
                */
                class InstallPluginsResponse : public AbstractModel
                {
                public:
                    InstallPluginsResponse();
                    ~InstallPluginsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已安装插件 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginIds 已安装插件 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPluginIds() const;

                    /**
                     * 判断参数 PluginIds 是否已赋值
                     * @return PluginIds 是否已赋值
                     * 
                     */
                    bool PluginIdsHasBeenSet() const;

                private:

                    /**
                     * 已安装插件 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_pluginIds;
                    bool m_pluginIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_INSTALLPLUGINSRESPONSE_H_
