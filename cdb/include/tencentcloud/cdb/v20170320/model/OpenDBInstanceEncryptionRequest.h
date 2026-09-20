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
                     * 获取<p>云数据库实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>云数据库实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>云数据库实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>云数据库实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
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
                     * 获取<p>用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。</p>
                     * @return KeyId <p>用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。</p>
                     * @param _keyId <p>用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。</p>
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
                     * 获取<p>用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。</p>
                     * @return KeyRegion <p>用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。</p>
                     * 
                     */
                    std::string GetKeyRegion() const;

                    /**
                     * 设置<p>用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。</p>
                     * @param _keyRegion <p>用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。</p>
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
                     * <p>云数据库实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户自定义密钥 ID，CMK 唯一标识符。该值为空时，将使用腾讯云自动生成的密钥 KMS-CDB。</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>用户自定义密钥的存储地域。如：ap-guangzhou 。KeyId 不为空时，该参数必填。</p>
                     */
                    std::string m_keyRegion;
                    bool m_keyRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENDBINSTANCEENCRYPTIONREQUEST_H_
