/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>名字</p>
                     * @return Name <p>名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名字</p>
                     * @param _name <p>名字</p>
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
                     * 获取<p>类型</p>
                     * @return Kind <p>类型</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _kind <p>类型</p>
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
                     * 获取<p>内容</p>
                     * @return Content <p>内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>内容</p>
                     * @param _content <p>内容</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>实例类型</p>
                     * @return Category <p>实例类型</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _category <p>实例类型</p>
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
                     * 获取<p>实例描述</p>
                     * @return InstanceDesc <p>实例描述</p>
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置<p>实例描述</p>
                     * @param _instanceDesc <p>实例描述</p>
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
                     * 获取<p>dashboard 的 URL</p>
                     * @return GrafanaDashboardURL <p>dashboard 的 URL</p>
                     * 
                     */
                    std::string GetGrafanaDashboardURL() const;

                    /**
                     * 设置<p>dashboard 的 URL</p>
                     * @param _grafanaDashboardURL <p>dashboard 的 URL</p>
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
                     * <p>名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>类型</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>实例描述</p>
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * <p>dashboard 的 URL</p>
                     */
                    std::string m_grafanaDashboardURL;
                    bool m_grafanaDashboardURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_INTEGRATIONCONFIGURATION_H_
