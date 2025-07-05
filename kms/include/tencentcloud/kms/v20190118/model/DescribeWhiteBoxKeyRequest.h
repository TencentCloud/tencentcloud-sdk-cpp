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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeWhiteBoxKey请求参数结构体
                */
                class DescribeWhiteBoxKeyRequest : public AbstractModel
                {
                public:
                    DescribeWhiteBoxKeyRequest();
                    ~DescribeWhiteBoxKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白盒密钥的全局唯一标识符
                     * @return KeyId 白盒密钥的全局唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置白盒密钥的全局唯一标识符
                     * @param _keyId 白盒密钥的全局唯一标识符
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                private:

                    /**
                     * 白盒密钥的全局唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYREQUEST_H_
