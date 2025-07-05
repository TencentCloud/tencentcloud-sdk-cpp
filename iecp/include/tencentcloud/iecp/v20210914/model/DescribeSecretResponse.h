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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeSecret返回参数结构体
                */
                class DescribeSecretResponse : public AbstractModel
                {
                public:
                    DescribeSecretResponse();
                    ~DescribeSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Secret名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Secret名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取secret的yaml格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Yaml secret的yaml格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYaml() const;

                    /**
                     * 判断参数 Yaml 是否已赋值
                     * @return Yaml 是否已赋值
                     * 
                     */
                    bool YamlHasBeenSet() const;

                    /**
                     * 获取secret的json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Json secret的json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJson() const;

                    /**
                     * 判断参数 Json 是否已赋值
                     * @return Json 是否已赋值
                     * 
                     */
                    bool JsonHasBeenSet() const;

                private:

                    /**
                     * Secret名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * secret的yaml格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yaml;
                    bool m_yamlHasBeenSet;

                    /**
                     * secret的json格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_json;
                    bool m_jsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBESECRETRESPONSE_H_
