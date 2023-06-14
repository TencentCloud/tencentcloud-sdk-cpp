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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_BINDPLUGINREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_BINDPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GatewayPluginBoundParam.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * BindPlugin请求参数结构体
                */
                class BindPluginRequest : public AbstractModel
                {
                public:
                    BindPluginRequest();
                    ~BindPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组/API绑定插件列表
                     * @return PluginInstanceList 分组/API绑定插件列表
                     * 
                     */
                    std::vector<GatewayPluginBoundParam> GetPluginInstanceList() const;

                    /**
                     * 设置分组/API绑定插件列表
                     * @param _pluginInstanceList 分组/API绑定插件列表
                     * 
                     */
                    void SetPluginInstanceList(const std::vector<GatewayPluginBoundParam>& _pluginInstanceList);

                    /**
                     * 判断参数 PluginInstanceList 是否已赋值
                     * @return PluginInstanceList 是否已赋值
                     * 
                     */
                    bool PluginInstanceListHasBeenSet() const;

                private:

                    /**
                     * 分组/API绑定插件列表
                     */
                    std::vector<GatewayPluginBoundParam> m_pluginInstanceList;
                    bool m_pluginInstanceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_BINDPLUGINREQUEST_H_
