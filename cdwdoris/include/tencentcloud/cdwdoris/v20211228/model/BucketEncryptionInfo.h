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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BUCKETENCRYPTIONINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BUCKETENCRYPTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 桶加密状态信息
                */
                class BucketEncryptionInfo : public AbstractModel
                {
                public:
                    BucketEncryptionInfo();
                    ~BucketEncryptionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否已加密
                     * @return IsEncrypted 是否已加密
                     * 
                     */
                    bool GetIsEncrypted() const;

                    /**
                     * 设置是否已加密
                     * @param _isEncrypted 是否已加密
                     * 
                     */
                    void SetIsEncrypted(const bool& _isEncrypted);

                    /**
                     * 判断参数 IsEncrypted 是否已赋值
                     * @return IsEncrypted 是否已赋值
                     * 
                     */
                    bool IsEncryptedHasBeenSet() const;

                    /**
                     * 获取加密类型：SSE-COS/SSE-KMS/disabled
                     * @return EncryptionType 加密类型：SSE-COS/SSE-KMS/disabled
                     * 
                     */
                    std::string GetEncryptionType() const;

                    /**
                     * 设置加密类型：SSE-COS/SSE-KMS/disabled
                     * @param _encryptionType 加密类型：SSE-COS/SSE-KMS/disabled
                     * 
                     */
                    void SetEncryptionType(const std::string& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     * 
                     */
                    bool EncryptionTypeHasBeenSet() const;

                    /**
                     * 获取最后操作类型：enable/disable
                     * @return LastOperation 最后操作类型：enable/disable
                     * 
                     */
                    std::string GetLastOperation() const;

                    /**
                     * 设置最后操作类型：enable/disable
                     * @param _lastOperation 最后操作类型：enable/disable
                     * 
                     */
                    void SetLastOperation(const std::string& _lastOperation);

                    /**
                     * 判断参数 LastOperation 是否已赋值
                     * @return LastOperation 是否已赋值
                     * 
                     */
                    bool LastOperationHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return LastUpdateTime 最后更新时间
                     * 
                     */
                    std::string GetLastUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param _lastUpdateTime 最后更新时间
                     * 
                     */
                    void SetLastUpdateTime(const std::string& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 是否已加密
                     */
                    bool m_isEncrypted;
                    bool m_isEncryptedHasBeenSet;

                    /**
                     * 加密类型：SSE-COS/SSE-KMS/disabled
                     */
                    std::string m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                    /**
                     * 最后操作类型：enable/disable
                     */
                    std::string m_lastOperation;
                    bool m_lastOperationHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    std::string m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_BUCKETENCRYPTIONINFO_H_
