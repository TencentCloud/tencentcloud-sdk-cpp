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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SECURITYMODECONFIG_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SECURITYMODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群安全模式相关参数
                */
                class SecurityModeConfig : public AbstractModel
                {
                public:
                    SecurityModeConfig();
                    ~SecurityModeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>安全模式开关（true 开启 / false 关闭）</p>
                     * @return Enabled <p>安全模式开关（true 开启 / false 关闭）</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>安全模式开关（true 开启 / false 关闭）</p>
                     * @param _enabled <p>安全模式开关（true 开启 / false 关闭）</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>灰度 namespace 列表</p>
                     * @return Namespaces <p>灰度 namespace 列表</p>
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置<p>灰度 namespace 列表</p>
                     * @param _namespaces <p>灰度 namespace 列表</p>
                     * 
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取<p>灰度 Pod label</p>
                     * @return Labels <p>灰度 Pod label</p>
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置<p>灰度 Pod label</p>
                     * @param _labels <p>灰度 Pod label</p>
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * <p>安全模式开关（true 开启 / false 关闭）</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>灰度 namespace 列表</p>
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * <p>灰度 Pod label</p>
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SECURITYMODECONFIG_H_
