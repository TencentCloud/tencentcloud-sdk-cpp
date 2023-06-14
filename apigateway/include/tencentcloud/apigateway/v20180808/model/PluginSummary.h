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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGINSUMMARY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGINSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Plugin.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 插件列表详情。
                */
                class PluginSummary : public AbstractModel
                {
                public:
                    PluginSummary();
                    ~PluginSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件个数。
                     * @return TotalCount 插件个数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置插件个数。
                     * @param _totalCount 插件个数。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取插件详情。
                     * @return PluginSet 插件详情。
                     * 
                     */
                    std::vector<Plugin> GetPluginSet() const;

                    /**
                     * 设置插件详情。
                     * @param _pluginSet 插件详情。
                     * 
                     */
                    void SetPluginSet(const std::vector<Plugin>& _pluginSet);

                    /**
                     * 判断参数 PluginSet 是否已赋值
                     * @return PluginSet 是否已赋值
                     * 
                     */
                    bool PluginSetHasBeenSet() const;

                private:

                    /**
                     * 插件个数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 插件详情。
                     */
                    std::vector<Plugin> m_pluginSet;
                    bool m_pluginSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_PLUGINSUMMARY_H_
