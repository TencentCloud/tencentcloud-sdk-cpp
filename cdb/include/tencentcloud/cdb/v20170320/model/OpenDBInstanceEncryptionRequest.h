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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OPENDBINSTANCEENCRYPTIONREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OPENDBINSTANCEENCRYPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * OpenDBInstanceEncryption请求参数结构体
                */
                class OpenDBInstanceEncryptionRequest : public AbstractModel
                {
                public:
                    OpenDBInstanceEncryptionRequest();
                    ~OpenDBInstanceEncryptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云数据库实例 ID。
                     * @return InstanceId 云数据库实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云数据库实例 ID。
                     * @param _instanceId 云数据库实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。
                     * @return KeyId 用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。
                     * @param _keyId 用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。
                     * @return KeyRegion 用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。
                     * @param _keyRegion 用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。
                     * 
                     */
                    void SetKeyRegion(const std::string& _keyRegion);

                    /**
                     * 判断参数 KeyRegion 是否已赋值
                     * @return KeyRegion 是否已赋值
                     * 
                     */
                    bool KeyRegionHasBeenSet() const;

                private:

                    /**
                     * 云数据库实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENDBINSTANCEENCRYPTIONREQUEST_H_
