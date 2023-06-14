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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYRESPONSE_H_

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
                * DescribeBackupDecryptionKey返回参数结构体
                */
                class DescribeBackupDecryptionKeyResponse : public AbstractModel
                {
                public:
                    DescribeBackupDecryptionKeyResponse();
                    ~DescribeBackupDecryptionKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份文件解密密钥。
                     * @return DecryptionKey 备份文件解密密钥。
                     * 
                     */
                    std::string GetDecryptionKey() const;

                    /**
                     * 判断参数 DecryptionKey 是否已赋值
                     * @return DecryptionKey 是否已赋值
                     * 
                     */
                    bool DecryptionKeyHasBeenSet() const;

                private:

                    /**
                     * 备份文件解密密钥。
                     */
                    std::string m_decryptionKey;
                    bool m_decryptionKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPDECRYPTIONKEYRESPONSE_H_
