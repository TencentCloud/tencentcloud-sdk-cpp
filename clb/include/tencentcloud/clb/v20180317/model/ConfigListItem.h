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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CONFIGLISTITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CONFIGLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 配置内容
                */
                class ConfigListItem : public AbstractModel
                {
                public:
                    ConfigListItem();
                    ~ConfigListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置ID
                     * @return UconfigId 配置ID
                     * 
                     */
                    std::string GetUconfigId() const;

                    /**
                     * 设置配置ID
                     * @param _uconfigId 配置ID
                     * 
                     */
                    void SetUconfigId(const std::string& _uconfigId);

                    /**
                     * 判断参数 UconfigId 是否已赋值
                     * @return UconfigId 是否已赋值
                     * 
                     */
                    bool UconfigIdHasBeenSet() const;

                    /**
                     * 获取配置类型， 可选值：CLB（实例维度配置）， SERVER（服务维度配置），LOCATION（规则维度配置）
                     * @return ConfigType 配置类型， 可选值：CLB（实例维度配置）， SERVER（服务维度配置），LOCATION（规则维度配置）
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置配置类型， 可选值：CLB（实例维度配置）， SERVER（服务维度配置），LOCATION（规则维度配置）
                     * @param _configType 配置类型， 可选值：CLB（实例维度配置）， SERVER（服务维度配置），LOCATION（规则维度配置）
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取配置名字
                     * @return ConfigName 配置名字
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名字
                     * @param _configName 配置名字
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置内容
                     * @return ConfigContent 配置内容
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置配置内容
                     * @param _configContent 配置内容
                     * 
                     */
                    void SetConfigContent(const std::string& _configContent);

                    /**
                     * 判断参数 ConfigContent 是否已赋值
                     * @return ConfigContent 是否已赋值
                     * 
                     */
                    bool ConfigContentHasBeenSet() const;

                    /**
                     * 获取配置的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     * @return CreateTimestamp 配置的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetCreateTimestamp() const;

                    /**
                     * 设置配置的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     * @param _createTimestamp 配置的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetCreateTimestamp(const std::string& _createTimestamp);

                    /**
                     * 判断参数 CreateTimestamp 是否已赋值
                     * @return CreateTimestamp 是否已赋值
                     * 
                     */
                    bool CreateTimestampHasBeenSet() const;

                    /**
                     * 获取配置的修改时间。
格式：YYYY-MM-DD HH:mm:ss
                     * @return UpdateTimestamp 配置的修改时间。
格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    std::string GetUpdateTimestamp() const;

                    /**
                     * 设置配置的修改时间。
格式：YYYY-MM-DD HH:mm:ss
                     * @param _updateTimestamp 配置的修改时间。
格式：YYYY-MM-DD HH:mm:ss
                     * 
                     */
                    void SetUpdateTimestamp(const std::string& _updateTimestamp);

                    /**
                     * 判断参数 UpdateTimestamp 是否已赋值
                     * @return UpdateTimestamp 是否已赋值
                     * 
                     */
                    bool UpdateTimestampHasBeenSet() const;

                private:

                    /**
                     * 配置ID
                     */
                    std::string m_uconfigId;
                    bool m_uconfigIdHasBeenSet;

                    /**
                     * 配置类型， 可选值：CLB（实例维度配置）， SERVER（服务维度配置），LOCATION（规则维度配置）
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * 配置名字
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置内容
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * 配置的创建时间。
格式：YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_createTimestamp;
                    bool m_createTimestampHasBeenSet;

                    /**
                     * 配置的修改时间。
格式：YYYY-MM-DD HH:mm:ss
                     */
                    std::string m_updateTimestamp;
                    bool m_updateTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CONFIGLISTITEM_H_
