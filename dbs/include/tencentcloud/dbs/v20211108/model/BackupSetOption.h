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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPSETOPTION_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPSETOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份集加密信息
                */
                class BackupSetOption : public AbstractModel
                {
                public:
                    BackupSetOption();
                    ~BackupSetOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储加密方式。取值：<br>&quot;UnEncrypted&quot; - 非加密存储;<br>&quot;SSE-COS&quot; - 内置加密存储;<br>&quot;SSE-KMS&quot; - KMS 加密存储。</p>
                     * @return Encryption <p>存储加密方式。取值：<br>&quot;UnEncrypted&quot; - 非加密存储;<br>&quot;SSE-COS&quot; - 内置加密存储;<br>&quot;SSE-KMS&quot; - KMS 加密存储。</p>
                     * 
                     */
                    std::string GetEncryption() const;

                    /**
                     * 设置<p>存储加密方式。取值：<br>&quot;UnEncrypted&quot; - 非加密存储;<br>&quot;SSE-COS&quot; - 内置加密存储;<br>&quot;SSE-KMS&quot; - KMS 加密存储。</p>
                     * @param _encryption <p>存储加密方式。取值：<br>&quot;UnEncrypted&quot; - 非加密存储;<br>&quot;SSE-COS&quot; - 内置加密存储;<br>&quot;SSE-KMS&quot; - KMS 加密存储。</p>
                     * 
                     */
                    void SetEncryption(const std::string& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * <p>存储加密方式。取值：<br>&quot;UnEncrypted&quot; - 非加密存储;<br>&quot;SSE-COS&quot; - 内置加密存储;<br>&quot;SSE-KMS&quot; - KMS 加密存储。</p>
                     */
                    std::string m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPSETOPTION_H_
