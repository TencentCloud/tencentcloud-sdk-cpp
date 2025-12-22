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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMMETRICSPEC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMMETRICSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Label.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 自定义指标采集对象
                */
                class CustomMetricSpec : public AbstractModel
                {
                public:
                    CustomMetricSpec();
                    ~CustomMetricSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口。取值范围 [1,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 端口。取值范围 [1,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口。取值范围 [1,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port 端口。取值范围 [1,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Metric地址。校验格式：`^/[a-zA-Z0-9-_./]*$`
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path Metric地址。校验格式：`^/[a-zA-Z0-9-_./]*$`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Metric地址。校验格式：`^/[a-zA-Z0-9-_./]*$`
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path Metric地址。校验格式：`^/[a-zA-Z0-9-_./]*$`
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取命名空间列表。
- 最大支持100个
- namespace 校验格式 `[a-z0-9]([-a-z0-9]*[a-z0-9])?` ， 长度不能超过63
- namespace 不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespaces 命名空间列表。
- 最大支持100个
- namespace 校验格式 `[a-z0-9]([-a-z0-9]*[a-z0-9])?` ， 长度不能超过63
- namespace 不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置命名空间列表。
- 最大支持100个
- namespace 校验格式 `[a-z0-9]([-a-z0-9]*[a-z0-9])?` ， 长度不能超过63
- namespace 不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaces 命名空间列表。
- 最大支持100个
- namespace 校验格式 `[a-z0-9]([-a-z0-9]*[a-z0-9])?` ， 长度不能超过63
- namespace 不能重复
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Pod标签。
- 最大支持100个

注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodLabel Pod标签。
- 最大支持100个

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Label> GetPodLabel() const;

                    /**
                     * 设置Pod标签。
- 最大支持100个

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podLabel Pod标签。
- 最大支持100个

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodLabel(const std::vector<Label>& _podLabel);

                    /**
                     * 判断参数 PodLabel 是否已赋值
                     * @return PodLabel 是否已赋值
                     * 
                     */
                    bool PodLabelHasBeenSet() const;

                private:

                    /**
                     * 端口。取值范围 [1,65535]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Metric地址。校验格式：`^/[a-zA-Z0-9-_./]*$`
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 命名空间列表。
- 最大支持100个
- namespace 校验格式 `[a-z0-9]([-a-z0-9]*[a-z0-9])?` ， 长度不能超过63
- namespace 不能重复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * Pod标签。
- 最大支持100个

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Label> m_podLabel;
                    bool m_podLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CUSTOMMETRICSPEC_H_
