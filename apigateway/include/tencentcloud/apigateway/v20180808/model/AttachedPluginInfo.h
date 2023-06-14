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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGININFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 已绑定的插件信息。
                */
                class AttachedPluginInfo : public AbstractModel
                {
                public:
                    AttachedPluginInfo();
                    ~AttachedPluginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件ID。
                     * @return PluginId 插件ID。
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件ID。
                     * @param _pluginId 插件ID。
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
                     * @return Environment 环境信息。
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境信息。
                     * @param _environment 环境信息。
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                    /**
                     * 获取绑定时间。
                     * @return AttachedTime 绑定时间。
                     * 
                     */
                    std::string GetAttachedTime() const;

                    /**
                     * 设置绑定时间。
                     * @param _attachedTime 绑定时间。
                     * 
                     */
                    void SetAttachedTime(const std::string& _attachedTime);

                    /**
                     * 判断参数 AttachedTime 是否已赋值
                     * @return AttachedTime 是否已赋值
                     * 
                     */
                    bool AttachedTimeHasBeenSet() const;

                    /**
                     * 获取插件名称。
                     * @return PluginName 插件名称。
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置插件名称。
                     * @param _pluginName 插件名称。
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
                     * 获取插件类型。
                     * @return PluginType 插件类型。
                     * 
                     */
                    std::string GetPluginType() const;

                    /**
                     * 设置插件类型。
                     * @param _pluginType 插件类型。
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
                     * 获取插件描述。
                     * @return Description 插件描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置插件描述。
                     * @param _description 插件描述。
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
                     * 获取插件定义语句。
                     * @return PluginData 插件定义语句。
                     * 
                     */
                    std::string GetPluginData() const;

                    /**
                     * 设置插件定义语句。
                     * @param _pluginData 插件定义语句。
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
                     * 插件ID。
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 环境信息。
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                    /**
                     * 绑定时间。
                     */
                    std::string m_attachedTime;
                    bool m_attachedTimeHasBeenSet;

                    /**
                     * 插件名称。
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 插件类型。
                     */
                    std::string m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * 插件描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 插件定义语句。
                     */
                    std::string m_pluginData;
                    bool m_pluginDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ATTACHEDPLUGININFO_H_
