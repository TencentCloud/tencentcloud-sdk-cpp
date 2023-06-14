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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_PROOF_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_PROOF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 验证凭证签名
                */
                class Proof : public AbstractModel
                {
                public:
                    Proof();
                    ~Proof() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间
                     * @return Created 创建时间
                     * 
                     */
                    int64_t GetCreated() const;

                    /**
                     * 设置创建时间
                     * @param _created 创建时间
                     * 
                     */
                    void SetCreated(const int64_t& _created);

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取创建着did
                     * @return Creator 创建着did
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建着did
                     * @param _creator 创建着did
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取salt值
                     * @return SaltJson salt值
                     * 
                     */
                    std::string GetSaltJson() const;

                    /**
                     * 设置salt值
                     * @param _saltJson salt值
                     * 
                     */
                    void SetSaltJson(const std::string& _saltJson);

                    /**
                     * 判断参数 SaltJson 是否已赋值
                     * @return SaltJson 是否已赋值
                     * 
                     */
                    bool SaltJsonHasBeenSet() const;

                    /**
                     * 获取签名
                     * @return SignatureValue 签名
                     * 
                     */
                    std::string GetSignatureValue() const;

                    /**
                     * 设置签名
                     * @param _signatureValue 签名
                     * 
                     */
                    void SetSignatureValue(const std::string& _signatureValue);

                    /**
                     * 判断参数 SignatureValue 是否已赋值
                     * @return SignatureValue 是否已赋值
                     * 
                     */
                    bool SignatureValueHasBeenSet() const;

                    /**
                     * 获取type类型
                     * @return Type type类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置type类型
                     * @param _type type类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 创建时间
                     */
                    int64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * 创建着did
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * salt值
                     */
                    std::string m_saltJson;
                    bool m_saltJsonHasBeenSet;

                    /**
                     * 签名
                     */
                    std::string m_signatureValue;
                    bool m_signatureValueHasBeenSet;

                    /**
                     * type类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_PROOF_H_
