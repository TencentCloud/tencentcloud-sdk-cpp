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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_INPUTENCRYPTDATA_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_INPUTENCRYPTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 业务加密入参
                */
                class InputEncryptData : public AbstractModel
                {
                public:
                    InputEncryptData();
                    ~InputEncryptData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加密方式，0：AES加密；

                     * @return EncryptMethod 加密方式，0：AES加密；

                     * 
                     */
                    int64_t GetEncryptMethod() const;

                    /**
                     * 设置加密方式，0：AES加密；

                     * @param _encryptMethod 加密方式，0：AES加密；

                     * 
                     */
                    void SetEncryptMethod(const int64_t& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                    /**
                     * 获取加密算法中的块处理模式，1：CBC模式； 目前只支持CBC模式
                     * @return EncryptMode 加密算法中的块处理模式，1：CBC模式； 目前只支持CBC模式
                     * 
                     */
                    int64_t GetEncryptMode() const;

                    /**
                     * 设置加密算法中的块处理模式，1：CBC模式； 目前只支持CBC模式
                     * @param _encryptMode 加密算法中的块处理模式，1：CBC模式； 目前只支持CBC模式
                     * 
                     */
                    void SetEncryptMode(const int64_t& _encryptMode);

                    /**
                     * 判断参数 EncryptMode 是否已赋值
                     * @return EncryptMode 是否已赋值
                     * 
                     */
                    bool EncryptModeHasBeenSet() const;

                    /**
                     * 获取填充模式，0：ZeroPadding；1：PKCS5Padding；2：
PKCS7Padding。
                     * @return PaddingType 填充模式，0：ZeroPadding；1：PKCS5Padding；2：
PKCS7Padding。
                     * 
                     */
                    int64_t GetPaddingType() const;

                    /**
                     * 设置填充模式，0：ZeroPadding；1：PKCS5Padding；2：
PKCS7Padding。
                     * @param _paddingType 填充模式，0：ZeroPadding；1：PKCS5Padding；2：
PKCS7Padding。
                     * 
                     */
                    void SetPaddingType(const int64_t& _paddingType);

                    /**
                     * 判断参数 PaddingType 是否已赋值
                     * @return PaddingType 是否已赋值
                     * 
                     */
                    bool PaddingTypeHasBeenSet() const;

                    /**
                     * 获取加密数据，将AuthorizedData结构体数组（数组最大长度不超过20）序列化成JSON字符串，对得到的字符串加密并填充到该字段。
                     * @return EncryptData 加密数据，将AuthorizedData结构体数组（数组最大长度不超过20）序列化成JSON字符串，对得到的字符串加密并填充到该字段。
                     * 
                     */
                    std::string GetEncryptData() const;

                    /**
                     * 设置加密数据，将AuthorizedData结构体数组（数组最大长度不超过20）序列化成JSON字符串，对得到的字符串加密并填充到该字段。
                     * @param _encryptData 加密数据，将AuthorizedData结构体数组（数组最大长度不超过20）序列化成JSON字符串，对得到的字符串加密并填充到该字段。
                     * 
                     */
                    void SetEncryptData(const std::string& _encryptData);

                    /**
                     * 判断参数 EncryptData 是否已赋值
                     * @return EncryptData 是否已赋值
                     * 
                     */
                    bool EncryptDataHasBeenSet() const;

                    /**
                     * 获取用户是否授权，本接口取值：1，已授权。

                     * @return IsAuthorized 用户是否授权，本接口取值：1，已授权。

                     * 
                     */
                    int64_t GetIsAuthorized() const;

                    /**
                     * 设置用户是否授权，本接口取值：1，已授权。

                     * @param _isAuthorized 用户是否授权，本接口取值：1，已授权。

                     * 
                     */
                    void SetIsAuthorized(const int64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                private:

                    /**
                     * 加密方式，0：AES加密；

                     */
                    int64_t m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                    /**
                     * 加密算法中的块处理模式，1：CBC模式； 目前只支持CBC模式
                     */
                    int64_t m_encryptMode;
                    bool m_encryptModeHasBeenSet;

                    /**
                     * 填充模式，0：ZeroPadding；1：PKCS5Padding；2：
PKCS7Padding。
                     */
                    int64_t m_paddingType;
                    bool m_paddingTypeHasBeenSet;

                    /**
                     * 加密数据，将AuthorizedData结构体数组（数组最大长度不超过20）序列化成JSON字符串，对得到的字符串加密并填充到该字段。
                     */
                    std::string m_encryptData;
                    bool m_encryptDataHasBeenSet;

                    /**
                     * 用户是否授权，本接口取值：1，已授权。

                     */
                    int64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_INPUTENCRYPTDATA_H_
