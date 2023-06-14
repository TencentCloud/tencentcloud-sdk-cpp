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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * DescribeAudit返回参数结构体
                */
                class DescribeAuditResponse : public AbstractModel
                {
                public:
                    DescribeAuditResponse();
                    ~DescribeAuditResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启cmq消息通知。1：是，0：否。
                     * @return IsEnableCmqNotify 是否开启cmq消息通知。1：是，0：否。
                     * 
                     */
                    int64_t GetIsEnableCmqNotify() const;

                    /**
                     * 判断参数 IsEnableCmqNotify 是否已赋值
                     * @return IsEnableCmqNotify 是否已赋值
                     * 
                     */
                    bool IsEnableCmqNotifyHasBeenSet() const;

                    /**
                     * 获取管理事件读写属性，1：只读，2：只写，3：全部
                     * @return ReadWriteAttribute 管理事件读写属性，1：只读，2：只写，3：全部
                     * 
                     */
                    int64_t GetReadWriteAttribute() const;

                    /**
                     * 判断参数 ReadWriteAttribute 是否已赋值
                     * @return ReadWriteAttribute 是否已赋值
                     * 
                     */
                    bool ReadWriteAttributeHasBeenSet() const;

                    /**
                     * 获取CMK的全局唯一标识符。
                     * @return KeyId CMK的全局唯一标识符。
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
                     * 获取跟踪集状态，1：开启，0：停止。
                     * @return AuditStatus 跟踪集状态，1：开启，0：停止。
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取跟踪集名称。
                     * @return AuditName 跟踪集名称。
                     * 
                     */
                    std::string GetAuditName() const;

                    /**
                     * 判断参数 AuditName 是否已赋值
                     * @return AuditName 是否已赋值
                     * 
                     */
                    bool AuditNameHasBeenSet() const;

                    /**
                     * 获取cos存储桶所在地域。
                     * @return CosRegion cos存储桶所在地域。
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取队列名称。
                     * @return CmqQueueName 队列名称。
                     * 
                     */
                    std::string GetCmqQueueName() const;

                    /**
                     * 判断参数 CmqQueueName 是否已赋值
                     * @return CmqQueueName 是否已赋值
                     * 
                     */
                    bool CmqQueueNameHasBeenSet() const;

                    /**
                     * 获取CMK别名。
                     * @return KmsAlias CMK别名。
                     * 
                     */
                    std::string GetKmsAlias() const;

                    /**
                     * 判断参数 KmsAlias 是否已赋值
                     * @return KmsAlias 是否已赋值
                     * 
                     */
                    bool KmsAliasHasBeenSet() const;

                    /**
                     * 获取kms地域。
                     * @return KmsRegion kms地域。
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取是否开启kms加密。1：是，0：否。如果开启KMS加密，数据在投递到cos时，会将数据加密。
                     * @return IsEnableKmsEncry 是否开启kms加密。1：是，0：否。如果开启KMS加密，数据在投递到cos时，会将数据加密。
                     * 
                     */
                    int64_t GetIsEnableKmsEncry() const;

                    /**
                     * 判断参数 IsEnableKmsEncry 是否已赋值
                     * @return IsEnableKmsEncry 是否已赋值
                     * 
                     */
                    bool IsEnableKmsEncryHasBeenSet() const;

                    /**
                     * 获取cos存储桶名称。
                     * @return CosBucketName cos存储桶名称。
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取队列所在地域。
                     * @return CmqRegion 队列所在地域。
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     * 
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取日志前缀。
                     * @return LogFilePrefix 日志前缀。
                     * 
                     */
                    std::string GetLogFilePrefix() const;

                    /**
                     * 判断参数 LogFilePrefix 是否已赋值
                     * @return LogFilePrefix 是否已赋值
                     * 
                     */
                    bool LogFilePrefixHasBeenSet() const;

                private:

                    /**
                     * 是否开启cmq消息通知。1：是，0：否。
                     */
                    int64_t m_isEnableCmqNotify;
                    bool m_isEnableCmqNotifyHasBeenSet;

                    /**
                     * 管理事件读写属性，1：只读，2：只写，3：全部
                     */
                    int64_t m_readWriteAttribute;
                    bool m_readWriteAttributeHasBeenSet;

                    /**
                     * CMK的全局唯一标识符。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 跟踪集状态，1：开启，0：停止。
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 跟踪集名称。
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                    /**
                     * cos存储桶所在地域。
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 队列名称。
                     */
                    std::string m_cmqQueueName;
                    bool m_cmqQueueNameHasBeenSet;

                    /**
                     * CMK别名。
                     */
                    std::string m_kmsAlias;
                    bool m_kmsAliasHasBeenSet;

                    /**
                     * kms地域。
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * 是否开启kms加密。1：是，0：否。如果开启KMS加密，数据在投递到cos时，会将数据加密。
                     */
                    int64_t m_isEnableKmsEncry;
                    bool m_isEnableKmsEncryHasBeenSet;

                    /**
                     * cos存储桶名称。
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 队列所在地域。
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * 日志前缀。
                     */
                    std::string m_logFilePrefix;
                    bool m_logFilePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITRESPONSE_H_
