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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 敏感数据加密
                */
                class Encryption : public AbstractModel
                {
                public:
                    Encryption();
                    ~Encryption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptList <p>在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEncryptList() const;

                    /**
                     * 设置<p>在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encryptList <p>在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEncryptList(const std::vector<std::string>& _encryptList);

                    /**
                     * 判断参数 EncryptList 是否已赋值
                     * @return EncryptList 是否已赋值
                     * 
                     */
                    bool EncryptListHasBeenSet() const;

                    /**
                     * 获取<p>加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://www.tencentcloud.com/document/product/1061/77849">数据加密</a> 文档。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CiphertextBlob <p>加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://www.tencentcloud.com/document/product/1061/77849">数据加密</a> 文档。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置<p>加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://www.tencentcloud.com/document/product/1061/77849">数据加密</a> 文档。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ciphertextBlob <p>加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://www.tencentcloud.com/document/product/1061/77849">数据加密</a> 文档。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCiphertextBlob(const std::string& _ciphertextBlob);

                    /**
                     * 判断参数 CiphertextBlob 是否已赋值
                     * @return CiphertextBlob 是否已赋值
                     * 
                     */
                    bool CiphertextBlobHasBeenSet() const;

                    /**
                     * 获取<p>有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Iv <p>有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置<p>有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iv <p>有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIv(const std::string& _iv);

                    /**
                     * 判断参数 Iv 是否已赋值
                     * @return Iv 是否已赋值
                     * 
                     */
                    bool IvHasBeenSet() const;

                    /**
                     * 获取<p>加密使用的算法（支持&#39;AES-256-CBC&#39;、&#39;SM4-GCM&#39;），不传默认为&#39;AES-256-CBC&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Algorithm <p>加密使用的算法（支持&#39;AES-256-CBC&#39;、&#39;SM4-GCM&#39;），不传默认为&#39;AES-256-CBC&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置<p>加密使用的算法（支持&#39;AES-256-CBC&#39;、&#39;SM4-GCM&#39;），不传默认为&#39;AES-256-CBC&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algorithm <p>加密使用的算法（支持&#39;AES-256-CBC&#39;、&#39;SM4-GCM&#39;），不传默认为&#39;AES-256-CBC&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取<p>SM4-GCM算法生成的消息摘要（校验消息完整性时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList <p>SM4-GCM算法生成的消息摘要（校验消息完整性时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置<p>SM4-GCM算法生成的消息摘要（校验消息完整性时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList <p>SM4-GCM算法生成的消息摘要（校验消息完整性时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * <p>在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_encryptList;
                    bool m_encryptListHasBeenSet;

                    /**
                     * <p>加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://www.tencentcloud.com/document/product/1061/77849">数据加密</a> 文档。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * <p>有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                    /**
                     * <p>加密使用的算法（支持&#39;AES-256-CBC&#39;、&#39;SM4-GCM&#39;），不传默认为&#39;AES-256-CBC&#39;</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * <p>SM4-GCM算法生成的消息摘要（校验消息完整性时使用）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ENCRYPTION_H_
