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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGININFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 插件信息
                */
                class DescribeInstancePluginInfo : public AbstractModel
                {
                public:
                    DescribeInstancePluginInfo();
                    ~DescribeInstancePluginInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件名
                     * @return PluginName 插件名
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置插件名
                     * @param _pluginName 插件名
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
                     * 获取插件版本
                     * @return PluginVersion 插件版本
                     * 
                     */
                    std::string GetPluginVersion() const;

                    /**
                     * 设置插件版本
                     * @param _pluginVersion 插件版本
                     * 
                     */
                    void SetPluginVersion(const std::string& _pluginVersion);

                    /**
                     * 判断参数 PluginVersion 是否已赋值
                     * @return PluginVersion 是否已赋值
                     * 
                     */
                    bool PluginVersionHasBeenSet() const;

                    /**
                     * 获取插件描述
                     * @return PluginDesc 插件描述
                     * 
                     */
                    std::string GetPluginDesc() const;

                    /**
                     * 设置插件描述
                     * @param _pluginDesc 插件描述
                     * 
                     */
                    void SetPluginDesc(const std::string& _pluginDesc);

                    /**
                     * 判断参数 PluginDesc 是否已赋值
                     * @return PluginDesc 是否已赋值
                     * 
                     */
                    bool PluginDescHasBeenSet() const;

                    /**
                     * 获取插件状态：-2 已卸载 -1 卸载中 0 安装中 1 已安装
                     * @return Status 插件状态：-2 已卸载 -1 卸载中 0 安装中 1 已安装
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置插件状态：-2 已卸载 -1 卸载中 0 安装中 1 已安装
                     * @param _status 插件状态：-2 已卸载 -1 卸载中 0 安装中 1 已安装
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取插件是否可卸载
                     * @return Removable 插件是否可卸载
                     * 
                     */
                    bool GetRemovable() const;

                    /**
                     * 设置插件是否可卸载
                     * @param _removable 插件是否可卸载
                     * 
                     */
                    void SetRemovable(const bool& _removable);

                    /**
                     * 判断参数 Removable 是否已赋值
                     * @return Removable 是否已赋值
                     * 
                     */
                    bool RemovableHasBeenSet() const;

                    /**
                     * 获取0：系统插件
                     * @return PluginType 0：系统插件
                     * 
                     */
                    int64_t GetPluginType() const;

                    /**
                     * 设置0：系统插件
                     * @param _pluginType 0：系统插件
                     * 
                     */
                    void SetPluginType(const int64_t& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                    /**
                     * 获取插件变更时间
                     * @return PluginUpdateTime 插件变更时间
                     * 
                     */
                    std::string GetPluginUpdateTime() const;

                    /**
                     * 设置插件变更时间
                     * @param _pluginUpdateTime 插件变更时间
                     * 
                     */
                    void SetPluginUpdateTime(const std::string& _pluginUpdateTime);

                    /**
                     * 判断参数 PluginUpdateTime 是否已赋值
                     * @return PluginUpdateTime 是否已赋值
                     * 
                     */
                    bool PluginUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 插件名
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 插件版本
                     */
                    std::string m_pluginVersion;
                    bool m_pluginVersionHasBeenSet;

                    /**
                     * 插件描述
                     */
                    std::string m_pluginDesc;
                    bool m_pluginDescHasBeenSet;

                    /**
                     * 插件状态：-2 已卸载 -1 卸载中 0 安装中 1 已安装
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 插件是否可卸载
                     */
                    bool m_removable;
                    bool m_removableHasBeenSet;

                    /**
                     * 0：系统插件
                     */
                    int64_t m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * 插件变更时间
                     */
                    std::string m_pluginUpdateTime;
                    bool m_pluginUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINSTANCEPLUGININFO_H_
