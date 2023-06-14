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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEPLUGINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreatePlugin请求参数结构体
                */
                class CreatePluginRequest : public AbstractModel
                {
                public:
                    CreatePluginRequest();
                    ~CreatePluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户自定义的插件名称。最长50个字符，最短2个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
                     * @return PluginName 用户自定义的插件名称。最长50个字符，最短2个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置用户自定义的插件名称。最长50个字符，最短2个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
                     * @param _pluginName 用户自定义的插件名称。最长50个字符，最短2个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
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
                     * 获取插件类型。目前支持IPControl, TrafficControl, Cors, CustomReq, CustomAuth，Routing，TrafficControlByParameter, CircuitBreaker, ProxyCache。
                     * @return PluginType 插件类型。目前支持IPControl, TrafficControl, Cors, CustomReq, CustomAuth，Routing，TrafficControlByParameter, CircuitBreaker, ProxyCache。
                     * 
                     */
                    std::string GetPluginType() const;

                    /**
                     * 设置插件类型。目前支持IPControl, TrafficControl, Cors, CustomReq, CustomAuth，Routing，TrafficControlByParameter, CircuitBreaker, ProxyCache。
                     * @param _pluginType 插件类型。目前支持IPControl, TrafficControl, Cors, CustomReq, CustomAuth，Routing，TrafficControlByParameter, CircuitBreaker, ProxyCache。
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
                     * 获取插件定义语句，支持json。
                     * @return PluginData 插件定义语句，支持json。
                     * 
                     */
                    std::string GetPluginData() const;

                    /**
                     * 设置插件定义语句，支持json。
                     * @param _pluginData 插件定义语句，支持json。
                     * 
                     */
                    void SetPluginData(const std::string& _pluginData);

                    /**
                     * 判断参数 PluginData 是否已赋值
                     * @return PluginData 是否已赋值
                     * 
                     */
                    bool PluginDataHasBeenSet() const;

                    /**
                     * 获取插件描述，限定200字以内。
                     * @return Description 插件描述，限定200字以内。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置插件描述，限定200字以内。
                     * @param _description 插件描述，限定200字以内。
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
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 用户自定义的插件名称。最长50个字符，最短2个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 插件类型。目前支持IPControl, TrafficControl, Cors, CustomReq, CustomAuth，Routing，TrafficControlByParameter, CircuitBreaker, ProxyCache。
                     */
                    std::string m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * 插件定义语句，支持json。
                     */
                    std::string m_pluginData;
                    bool m_pluginDataHasBeenSet;

                    /**
                     * 插件描述，限定200字以内。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEPLUGINREQUEST_H_
