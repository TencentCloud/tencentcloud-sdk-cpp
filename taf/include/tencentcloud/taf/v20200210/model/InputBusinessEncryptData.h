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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_INPUTBUSINESSENCRYPTDATA_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_INPUTBUSINESSENCRYPTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 业务入参
                */
                class InputBusinessEncryptData : public AbstractModel
                {
                public:
                    InputBusinessEncryptData();
                    ~InputBusinessEncryptData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加密方式；0：AES;1:DES
                     * @return EncryptMethod 加密方式；0：AES;1:DES
                     * 
                     */
                    uint64_t GetEncryptMethod() const;

                    /**
                     * 设置加密方式；0：AES;1:DES
                     * @param _encryptMethod 加密方式；0：AES;1:DES
                     * 
                     */
                    void SetEncryptMethod(const uint64_t& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                    /**
                     * 获取业务数据加密字符串
                     * @return EncryptData 业务数据加密字符串
                     * 
                     */
                    std::string GetEncryptData() const;

                    /**
                     * 设置业务数据加密字符串
                     * @param _encryptData 业务数据加密字符串
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
                     * 获取加密模式；0：ECB,1:CBC;2:CTR;3:CFB;4:OFB
                     * @return EncryptMode 加密模式；0：ECB,1:CBC;2:CTR;3:CFB;4:OFB
                     * 
                     */
                    uint64_t GetEncryptMode() const;

                    /**
                     * 设置加密模式；0：ECB,1:CBC;2:CTR;3:CFB;4:OFB
                     * @param _encryptMode 加密模式；0：ECB,1:CBC;2:CTR;3:CFB;4:OFB
                     * 
                     */
                    void SetEncryptMode(const uint64_t& _encryptMode);

                    /**
                     * 判断参数 EncryptMode 是否已赋值
                     * @return EncryptMode 是否已赋值
                     * 
                     */
                    bool EncryptModeHasBeenSet() const;

                    /**
                     * 获取填充模式;0:ZERO ;1:PKCS5;3:PKCS7
                     * @return PaddingType 填充模式;0:ZERO ;1:PKCS5;3:PKCS7
                     * 
                     */
                    uint64_t GetPaddingType() const;

                    /**
                     * 设置填充模式;0:ZERO ;1:PKCS5;3:PKCS7
                     * @param _paddingType 填充模式;0:ZERO ;1:PKCS5;3:PKCS7
                     * 
                     */
                    void SetPaddingType(const uint64_t& _paddingType);

                    /**
                     * 判断参数 PaddingType 是否已赋值
                     * @return PaddingType 是否已赋值
                     * 
                     */
                    bool PaddingTypeHasBeenSet() const;

                private:

                    /**
                     * 加密方式；0：AES;1:DES
                     */
                    uint64_t m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                    /**
                     * 业务数据加密字符串
                     */
                    std::string m_encryptData;
                    bool m_encryptDataHasBeenSet;

                    /**
                     * 加密模式；0：ECB,1:CBC;2:CTR;3:CFB;4:OFB
                     */
                    uint64_t m_encryptMode;
                    bool m_encryptModeHasBeenSet;

                    /**
                     * 填充模式;0:ZERO ;1:PKCS5;3:PKCS7
                     */
                    uint64_t m_paddingType;
                    bool m_paddingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_INPUTBUSINESSENCRYPTDATA_H_
