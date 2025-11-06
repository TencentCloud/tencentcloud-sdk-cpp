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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERTRANSPARENTENCRYPTINFORESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERTRANSPARENTENCRYPTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterTransparentEncryptInfo返回参数结构体
                */
                class DescribeClusterTransparentEncryptInfoResponse : public AbstractModel
                {
                public:
                    DescribeClusterTransparentEncryptInfoResponse();
                    ~DescribeClusterTransparentEncryptInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加密秘钥id
                     * @return KeyId 加密秘钥id
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取加密秘钥地域

                     * @return KeyRegion 加密秘钥地域

                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                    /**
                     * 获取秘钥类型
                     * @return KeyType 秘钥类型
                     * 
                     */
                    std::string GetKeyType() const;

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取是否已经开启全局加密
                     * @return IsOpenGlobalEncryption 是否已经开启全局加密
                     * 
                     */
                    bool GetIsOpenGlobalEncryption() const;

                    /**
                     * 判断参数 IsOpenGlobalEncryption 是否已赋值
                     * @return IsOpenGlobalEncryption 是否已赋值
                     * 
                     */
                    bool IsOpenGlobalEncryptionHasBeenSet() const;

                private:

                    /**
                     * 加密秘钥id
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 加密秘钥地域

                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                    /**
                     * 秘钥类型
                     */
                    std::string m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * 是否已经开启全局加密
                     */
                    bool m_isOpenGlobalEncryption;
                    bool m_isOpenGlobalEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERTRANSPARENTENCRYPTINFORESPONSE_H_
