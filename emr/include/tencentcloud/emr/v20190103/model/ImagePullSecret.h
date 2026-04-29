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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEPULLSECRET_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEPULLSECRET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 镜像获取密钥
                */
                class ImagePullSecret : public AbstractModel
                {
                public:
                    ImagePullSecret();
                    ~ImagePullSecret() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源密钥所在命名空间
                     * @return SourceNamespace 源密钥所在命名空间
                     * 
                     */
                    std::string GetSourceNamespace() const;

                    /**
                     * 设置源密钥所在命名空间
                     * @param _sourceNamespace 源密钥所在命名空间
                     * 
                     */
                    void SetSourceNamespace(const std::string& _sourceNamespace);

                    /**
                     * 判断参数 SourceNamespace 是否已赋值
                     * @return SourceNamespace 是否已赋值
                     * 
                     */
                    bool SourceNamespaceHasBeenSet() const;

                    /**
                     * 获取密钥名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretNames 密钥名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecretNames() const;

                    /**
                     * 设置密钥名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretNames 密钥名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretNames(const std::vector<std::string>& _secretNames);

                    /**
                     * 判断参数 SecretNames 是否已赋值
                     * @return SecretNames 是否已赋值
                     * 
                     */
                    bool SecretNamesHasBeenSet() const;

                private:

                    /**
                     * 源密钥所在命名空间
                     */
                    std::string m_sourceNamespace;
                    bool m_sourceNamespaceHasBeenSet;

                    /**
                     * 密钥名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_secretNames;
                    bool m_secretNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_IMAGEPULLSECRET_H_
