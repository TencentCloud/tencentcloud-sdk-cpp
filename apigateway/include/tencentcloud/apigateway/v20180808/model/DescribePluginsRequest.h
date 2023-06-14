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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEPLUGINSREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEPLUGINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Filter.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribePlugins请求参数结构体
                */
                class DescribePluginsRequest : public AbstractModel
                {
                public:
                    DescribePluginsRequest();
                    ~DescribePluginsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的插件列表。
                     * @return PluginIds 要查询的插件列表。
                     * 
                     */
                    std::vector<std::string> GetPluginIds() const;

                    /**
                     * 设置要查询的插件列表。
                     * @param _pluginIds 要查询的插件列表。
                     * 
                     */
                    void SetPluginIds(const std::vector<std::string>& _pluginIds);

                    /**
                     * 判断参数 PluginIds 是否已赋值
                     * @return PluginIds 是否已赋值
                     * 
                     */
                    bool PluginIdsHasBeenSet() const;

                    /**
                     * 获取要查询的插件名称。
                     * @return PluginName 要查询的插件名称。
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置要查询的插件名称。
                     * @param _pluginName 要查询的插件名称。
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
                     * 获取要查询的插件类型。
                     * @return PluginType 要查询的插件类型。
                     * 
                     */
                    std::string GetPluginType() const;

                    /**
                     * 设置要查询的插件类型。
                     * @param _pluginType 要查询的插件类型。
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
                     * 获取返回数量，默认为 20，最大值为 100。
                     * @return Limit 返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大值为 100。
                     * @param _limit 返回数量，默认为 20，最大值为 100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0。
                     * @return Offset 偏移量，默认为 0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0。
                     * @param _offset 偏移量，默认为 0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取过滤条件。预留字段，目前不支持过滤。
                     * @return Filters 过滤条件。预留字段，目前不支持过滤。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。预留字段，目前不支持过滤。
                     * @param _filters 过滤条件。预留字段，目前不支持过滤。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 要查询的插件列表。
                     */
                    std::vector<std::string> m_pluginIds;
                    bool m_pluginIdsHasBeenSet;

                    /**
                     * 要查询的插件名称。
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 要查询的插件类型。
                     */
                    std::string m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大值为 100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为 0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。预留字段，目前不支持过滤。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEPLUGINSREQUEST_H_
