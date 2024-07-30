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
                     * 获取在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptList 在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetEncryptList() const;

                    /**
                     * 设置在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _encryptList 在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段
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
                     * 获取加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://cloud.tencent.com/document/product/1007/47180">数据加密</a> 文档。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CiphertextBlob 加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://cloud.tencent.com/document/product/1007/47180">数据加密</a> 文档。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCiphertextBlob() const;

                    /**
                     * 设置加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://cloud.tencent.com/document/product/1007/47180">数据加密</a> 文档。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ciphertextBlob 加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://cloud.tencent.com/document/product/1007/47180">数据加密</a> 文档。
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
                     * 获取有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Iv 有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIv() const;

                    /**
                     * 设置有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iv 有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。
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
                     * 获取加密使用的算法（支持'AES-256-CBC'、'SM4-GCM'），不传默认为'AES-256-CBC'
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Algorithm 加密使用的算法（支持'AES-256-CBC'、'SM4-GCM'），不传默认为'AES-256-CBC'
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置加密使用的算法（支持'AES-256-CBC'、'SM4-GCM'），不传默认为'AES-256-CBC'
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algorithm 加密使用的算法（支持'AES-256-CBC'、'SM4-GCM'），不传默认为'AES-256-CBC'
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
                     * 获取SM4-GCM算法生成的消息摘要（校验消息完整性时使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList SM4-GCM算法生成的消息摘要（校验消息完整性时使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置SM4-GCM算法生成的消息摘要（校验消息完整性时使用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList SM4-GCM算法生成的消息摘要（校验消息完整性时使用）
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
                     * 在使用加密服务时，填入要被加密的字段。本接口中可填入加密后的一个或多个字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_encryptList;
                    bool m_encryptListHasBeenSet;

                    /**
                     * 加密后的对称密钥，关于密钥的生成和使用请查阅<a href="https://cloud.tencent.com/document/product/1007/47180">数据加密</a> 文档。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ciphertextBlob;
                    bool m_ciphertextBlobHasBeenSet;

                    /**
                     * 有加密需求的用户，传入CBC加密的初始向量（客户自定义字符串，长度16字符）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iv;
                    bool m_ivHasBeenSet;

                    /**
                     * 加密使用的算法（支持'AES-256-CBC'、'SM4-GCM'），不传默认为'AES-256-CBC'
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * SM4-GCM算法生成的消息摘要（校验消息完整性时使用）
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
