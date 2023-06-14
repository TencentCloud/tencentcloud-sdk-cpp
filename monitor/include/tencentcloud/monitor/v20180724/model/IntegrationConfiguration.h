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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_INTEGRATIONCONFIGURATION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_INTEGRATIONCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * export 集成配置
                */
                class IntegrationConfiguration : public AbstractModel
                {
                public:
                    IntegrationConfiguration();
                    ~IntegrationConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名字
                     * @return Name 名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名字
                     * @param _name 名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Kind 类型
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置类型
                     * @param _kind 类型
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Content 内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容
                     * @param _content 内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取实例类型
                     * @return Category 实例类型
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置实例类型
                     * @param _category 实例类型
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取实例描述
                     * @return InstanceDesc 实例描述
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置实例描述
                     * @param _instanceDesc 实例描述
                     * 
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     * 
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取dashboard 的 URL
                     * @return GrafanaDashboardURL dashboard 的 URL
                     * 
                     */
                    std::string GetGrafanaDashboardURL() const;

                    /**
                     * 设置dashboard 的 URL
                     * @param _grafanaDashboardURL dashboard 的 URL
                     * 
                     */
                    void SetGrafanaDashboardURL(const std::string& _grafanaDashboardURL);

                    /**
                     * 判断参数 GrafanaDashboardURL 是否已赋值
                     * @return GrafanaDashboardURL 是否已赋值
                     * 
                     */
                    bool GrafanaDashboardURLHasBeenSet() const;

                private:

                    /**
                     * 名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 实例描述
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * dashboard 的 URL
                     */
                    std::string m_grafanaDashboardURL;
                    bool m_grafanaDashboardURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_INTEGRATIONCONFIGURATION_H_
