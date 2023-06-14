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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYPLUGINREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYPLUGINREQUEST_H_

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
                * ModifyPlugin请求参数结构体
                */
                class ModifyPluginRequest : public AbstractModel
                {
                public:
                    ModifyPluginRequest();
                    ~ModifyPluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改的插件ID。
                     * @return PluginId 要修改的插件ID。
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置要修改的插件ID。
                     * @param _pluginId 要修改的插件ID。
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
                     * 获取要修改的API网关插件名称。最长50个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
                     * @return PluginName 要修改的API网关插件名称。最长50个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置要修改的API网关插件名称。最长50个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
                     * @param _pluginName 要修改的API网关插件名称。最长50个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
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
                     * 获取要修改的插件描述，限定200字以内。
                     * @return Description 要修改的插件描述，限定200字以内。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置要修改的插件描述，限定200字以内。
                     * @param _description 要修改的插件描述，限定200字以内。
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
                     * 获取要修改的插件定义语句，支持json。
                     * @return PluginData 要修改的插件定义语句，支持json。
                     * 
                     */
                    std::string GetPluginData() const;

                    /**
                     * 设置要修改的插件定义语句，支持json。
                     * @param _pluginData 要修改的插件定义语句，支持json。
                     * 
                     */
                    void SetPluginData(const std::string& _pluginData);

                    /**
                     * 判断参数 PluginData 是否已赋值
                     * @return PluginData 是否已赋值
                     * 
                     */
                    bool PluginDataHasBeenSet() const;

                private:

                    /**
                     * 要修改的插件ID。
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 要修改的API网关插件名称。最长50个字符，支持 a-z,A-Z,0-9,_, 必须字母开头，字母或者数字结尾。
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 要修改的插件描述，限定200字以内。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 要修改的插件定义语句，支持json。
                     */
                    std::string m_pluginData;
                    bool m_pluginDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MODIFYPLUGINREQUEST_H_
