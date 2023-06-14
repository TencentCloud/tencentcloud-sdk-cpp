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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEALLPLUGINAPISREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEALLPLUGINAPISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeAllPluginApis请求参数结构体
                */
                class DescribeAllPluginApisRequest : public AbstractModel
                {
                public:
                    DescribeAllPluginApisRequest();
                    ~DescribeAllPluginApisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的服务ID。
                     * @return ServiceId 要查询的服务ID。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置要查询的服务ID。
                     * @param _serviceId 要查询的服务ID。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取要查询的插件ID。
                     * @return PluginId 要查询的插件ID。
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置要查询的插件ID。
                     * @param _pluginId 要查询的插件ID。
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取环境信息。
                     * @return EnvironmentName 环境信息。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境信息。
                     * @param _environmentName 环境信息。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

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

                private:

                    /**
                     * 要查询的服务ID。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 要查询的插件ID。
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 环境信息。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DESCRIBEALLPLUGINAPISREQUEST_H_
