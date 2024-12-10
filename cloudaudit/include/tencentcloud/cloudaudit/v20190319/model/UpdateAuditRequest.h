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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITREQUEST_H_

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
                * UpdateAudit请求参数结构体
                */
                class UpdateAuditRequest : public AbstractModel
                {
                public:
                    UpdateAuditRequest();
                    ~UpdateAuditRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取跟踪集名称
                     * @return AuditName 跟踪集名称
                     * 
                     */
                    std::string GetAuditName() const;

                    /**
                     * 设置跟踪集名称
                     * @param _auditName 跟踪集名称
                     * 
                     */
                    void SetAuditName(const std::string& _auditName);

                    /**
                     * 判断参数 AuditName 是否已赋值
                     * @return AuditName 是否已赋值
                     * 
                     */
                    bool AuditNameHasBeenSet() const;

                    /**
                     * 获取是否开启cmq消息通知。1：是，0：否。目前仅支持cmq的队列服务。如果开启cmq消息通知服务，操作审计会将您的日志内容实时投递到您指定地域的指定队列中。
                     * @return IsEnableCmqNotify 是否开启cmq消息通知。1：是，0：否。目前仅支持cmq的队列服务。如果开启cmq消息通知服务，操作审计会将您的日志内容实时投递到您指定地域的指定队列中。
                     * 
                     */
                    int64_t GetIsEnableCmqNotify() const;

                    /**
                     * 设置是否开启cmq消息通知。1：是，0：否。目前仅支持cmq的队列服务。如果开启cmq消息通知服务，操作审计会将您的日志内容实时投递到您指定地域的指定队列中。
                     * @param _isEnableCmqNotify 是否开启cmq消息通知。1：是，0：否。目前仅支持cmq的队列服务。如果开启cmq消息通知服务，操作审计会将您的日志内容实时投递到您指定地域的指定队列中。
                     * 
                     */
                    void SetIsEnableCmqNotify(const int64_t& _isEnableCmqNotify);

                    /**
                     * 判断参数 IsEnableCmqNotify 是否已赋值
                     * @return IsEnableCmqNotify 是否已赋值
                     * 
                     */
                    bool IsEnableCmqNotifyHasBeenSet() const;

                    /**
                     * 获取管理事件的读写属性。1：只读，2：只写，3：全部。
                     * @return ReadWriteAttribute 管理事件的读写属性。1：只读，2：只写，3：全部。
                     * 
                     */
                    int64_t GetReadWriteAttribute() const;

                    /**
                     * 设置管理事件的读写属性。1：只读，2：只写，3：全部。
                     * @param _readWriteAttribute 管理事件的读写属性。1：只读，2：只写，3：全部。
                     * 
                     */
                    void SetReadWriteAttribute(const int64_t& _readWriteAttribute);

                    /**
                     * 判断参数 ReadWriteAttribute 是否已赋值
                     * @return ReadWriteAttribute 是否已赋值
                     * 
                     */
                    bool ReadWriteAttributeHasBeenSet() const;

                    /**
                     * 获取CMK的全局唯一标识符，如果不是新创建的kms，该值是必填值。可以通过ListKeyAliasByRegion来获取。操作审计不会校验KeyId的合法性，请您谨慎填写，避免给您的数据造成损失。
                     * @return KeyId CMK的全局唯一标识符，如果不是新创建的kms，该值是必填值。可以通过ListKeyAliasByRegion来获取。操作审计不会校验KeyId的合法性，请您谨慎填写，避免给您的数据造成损失。
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CMK的全局唯一标识符，如果不是新创建的kms，该值是必填值。可以通过ListKeyAliasByRegion来获取。操作审计不会校验KeyId的合法性，请您谨慎填写，避免给您的数据造成损失。
                     * @param _keyId CMK的全局唯一标识符，如果不是新创建的kms，该值是必填值。可以通过ListKeyAliasByRegion来获取。操作审计不会校验KeyId的合法性，请您谨慎填写，避免给您的数据造成损失。
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
                     * 获取cos地域。目前支持的地域可以使用ListCosEnableRegion来获取。
                     * @return CosRegion cos地域。目前支持的地域可以使用ListCosEnableRegion来获取。
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置cos地域。目前支持的地域可以使用ListCosEnableRegion来获取。
                     * @param _cosRegion cos地域。目前支持的地域可以使用ListCosEnableRegion来获取。
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取队列名称。队列名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。如果IsEnableCmqNotify值是1的话，此值属于必填字段。如果不是新创建的队列，操作审计不会去校验该队列是否真的存在，请谨慎填写，避免日志通知不成功，导致您的数据丢失。
                     * @return CmqQueueName 队列名称。队列名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。如果IsEnableCmqNotify值是1的话，此值属于必填字段。如果不是新创建的队列，操作审计不会去校验该队列是否真的存在，请谨慎填写，避免日志通知不成功，导致您的数据丢失。
                     * 
                     */
                    std::string GetCmqQueueName() const;

                    /**
                     * 设置队列名称。队列名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。如果IsEnableCmqNotify值是1的话，此值属于必填字段。如果不是新创建的队列，操作审计不会去校验该队列是否真的存在，请谨慎填写，避免日志通知不成功，导致您的数据丢失。
                     * @param _cmqQueueName 队列名称。队列名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。如果IsEnableCmqNotify值是1的话，此值属于必填字段。如果不是新创建的队列，操作审计不会去校验该队列是否真的存在，请谨慎填写，避免日志通知不成功，导致您的数据丢失。
                     * 
                     */
                    void SetCmqQueueName(const std::string& _cmqQueueName);

                    /**
                     * 判断参数 CmqQueueName 是否已赋值
                     * @return CmqQueueName 是否已赋值
                     * 
                     */
                    bool CmqQueueNameHasBeenSet() const;

                    /**
                     * 获取是否创建新的cos存储桶。1：是，0：否。
                     * @return IsCreateNewBucket 是否创建新的cos存储桶。1：是，0：否。
                     * 
                     */
                    int64_t GetIsCreateNewBucket() const;

                    /**
                     * 设置是否创建新的cos存储桶。1：是，0：否。
                     * @param _isCreateNewBucket 是否创建新的cos存储桶。1：是，0：否。
                     * 
                     */
                    void SetIsCreateNewBucket(const int64_t& _isCreateNewBucket);

                    /**
                     * 判断参数 IsCreateNewBucket 是否已赋值
                     * @return IsCreateNewBucket 是否已赋值
                     * 
                     */
                    bool IsCreateNewBucketHasBeenSet() const;

                    /**
                     * 获取kms地域。目前支持的地域可以使用ListKmsEnableRegion来获取。必须要和cos的地域保持一致。
                     * @return KmsRegion kms地域。目前支持的地域可以使用ListKmsEnableRegion来获取。必须要和cos的地域保持一致。
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置kms地域。目前支持的地域可以使用ListKmsEnableRegion来获取。必须要和cos的地域保持一致。
                     * @param _kmsRegion kms地域。目前支持的地域可以使用ListKmsEnableRegion来获取。必须要和cos的地域保持一致。
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

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
                     * 设置是否开启kms加密。1：是，0：否。如果开启KMS加密，数据在投递到cos时，会将数据加密。
                     * @param _isEnableKmsEncry 是否开启kms加密。1：是，0：否。如果开启KMS加密，数据在投递到cos时，会将数据加密。
                     * 
                     */
                    void SetIsEnableKmsEncry(const int64_t& _isEnableKmsEncry);

                    /**
                     * 判断参数 IsEnableKmsEncry 是否已赋值
                     * @return IsEnableKmsEncry 是否已赋值
                     * 
                     */
                    bool IsEnableKmsEncryHasBeenSet() const;

                    /**
                     * 获取cos的存储桶名称。仅支持小写英文字母和数字即[a-z，0-9]、中划线“-”及其组合。用户自定义的字符串支持1 - 40个字符。存储桶命名不能以“-”开头或结尾。如果不是新创建的存储桶，操作审计不会去校验该存储桶是否真的存在，请谨慎填写，避免日志投递不成功，导致您的数据丢失。
                     * @return CosBucketName cos的存储桶名称。仅支持小写英文字母和数字即[a-z，0-9]、中划线“-”及其组合。用户自定义的字符串支持1 - 40个字符。存储桶命名不能以“-”开头或结尾。如果不是新创建的存储桶，操作审计不会去校验该存储桶是否真的存在，请谨慎填写，避免日志投递不成功，导致您的数据丢失。
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置cos的存储桶名称。仅支持小写英文字母和数字即[a-z，0-9]、中划线“-”及其组合。用户自定义的字符串支持1 - 40个字符。存储桶命名不能以“-”开头或结尾。如果不是新创建的存储桶，操作审计不会去校验该存储桶是否真的存在，请谨慎填写，避免日志投递不成功，导致您的数据丢失。
                     * @param _cosBucketName cos的存储桶名称。仅支持小写英文字母和数字即[a-z，0-9]、中划线“-”及其组合。用户自定义的字符串支持1 - 40个字符。存储桶命名不能以“-”开头或结尾。如果不是新创建的存储桶，操作审计不会去校验该存储桶是否真的存在，请谨慎填写，避免日志投递不成功，导致您的数据丢失。
                     * 
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     * 
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取队列所在的地域。可以通过ListCmqEnableRegion获取支持的cmq地域。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     * @return CmqRegion 队列所在的地域。可以通过ListCmqEnableRegion获取支持的cmq地域。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置队列所在的地域。可以通过ListCmqEnableRegion获取支持的cmq地域。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     * @param _cmqRegion 队列所在的地域。可以通过ListCmqEnableRegion获取支持的cmq地域。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     * 
                     */
                    void SetCmqRegion(const std::string& _cmqRegion);

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     * 
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取日志文件前缀。3-40个字符，只能包含 ASCII 编码字母 a-z，A-Z，数字 0-9。
                     * @return LogFilePrefix 日志文件前缀。3-40个字符，只能包含 ASCII 编码字母 a-z，A-Z，数字 0-9。
                     * 
                     */
                    std::string GetLogFilePrefix() const;

                    /**
                     * 设置日志文件前缀。3-40个字符，只能包含 ASCII 编码字母 a-z，A-Z，数字 0-9。
                     * @param _logFilePrefix 日志文件前缀。3-40个字符，只能包含 ASCII 编码字母 a-z，A-Z，数字 0-9。
                     * 
                     */
                    void SetLogFilePrefix(const std::string& _logFilePrefix);

                    /**
                     * 判断参数 LogFilePrefix 是否已赋值
                     * @return LogFilePrefix 是否已赋值
                     * 
                     */
                    bool LogFilePrefixHasBeenSet() const;

                    /**
                     * 获取是否创建新的队列。1：是，0：否。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     * @return IsCreateNewQueue 是否创建新的队列。1：是，0：否。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     * 
                     */
                    int64_t GetIsCreateNewQueue() const;

                    /**
                     * 设置是否创建新的队列。1：是，0：否。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     * @param _isCreateNewQueue 是否创建新的队列。1：是，0：否。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     * 
                     */
                    void SetIsCreateNewQueue(const int64_t& _isCreateNewQueue);

                    /**
                     * 判断参数 IsCreateNewQueue 是否已赋值
                     * @return IsCreateNewQueue 是否已赋值
                     * 
                     */
                    bool IsCreateNewQueueHasBeenSet() const;

                private:

                    /**
                     * 跟踪集名称
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                    /**
                     * 是否开启cmq消息通知。1：是，0：否。目前仅支持cmq的队列服务。如果开启cmq消息通知服务，操作审计会将您的日志内容实时投递到您指定地域的指定队列中。
                     */
                    int64_t m_isEnableCmqNotify;
                    bool m_isEnableCmqNotifyHasBeenSet;

                    /**
                     * 管理事件的读写属性。1：只读，2：只写，3：全部。
                     */
                    int64_t m_readWriteAttribute;
                    bool m_readWriteAttributeHasBeenSet;

                    /**
                     * CMK的全局唯一标识符，如果不是新创建的kms，该值是必填值。可以通过ListKeyAliasByRegion来获取。操作审计不会校验KeyId的合法性，请您谨慎填写，避免给您的数据造成损失。
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * cos地域。目前支持的地域可以使用ListCosEnableRegion来获取。
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 队列名称。队列名称是一个不超过64个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)。如果IsEnableCmqNotify值是1的话，此值属于必填字段。如果不是新创建的队列，操作审计不会去校验该队列是否真的存在，请谨慎填写，避免日志通知不成功，导致您的数据丢失。
                     */
                    std::string m_cmqQueueName;
                    bool m_cmqQueueNameHasBeenSet;

                    /**
                     * 是否创建新的cos存储桶。1：是，0：否。
                     */
                    int64_t m_isCreateNewBucket;
                    bool m_isCreateNewBucketHasBeenSet;

                    /**
                     * kms地域。目前支持的地域可以使用ListKmsEnableRegion来获取。必须要和cos的地域保持一致。
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * 是否开启kms加密。1：是，0：否。如果开启KMS加密，数据在投递到cos时，会将数据加密。
                     */
                    int64_t m_isEnableKmsEncry;
                    bool m_isEnableKmsEncryHasBeenSet;

                    /**
                     * cos的存储桶名称。仅支持小写英文字母和数字即[a-z，0-9]、中划线“-”及其组合。用户自定义的字符串支持1 - 40个字符。存储桶命名不能以“-”开头或结尾。如果不是新创建的存储桶，操作审计不会去校验该存储桶是否真的存在，请谨慎填写，避免日志投递不成功，导致您的数据丢失。
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 队列所在的地域。可以通过ListCmqEnableRegion获取支持的cmq地域。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * 日志文件前缀。3-40个字符，只能包含 ASCII 编码字母 a-z，A-Z，数字 0-9。
                     */
                    std::string m_logFilePrefix;
                    bool m_logFilePrefixHasBeenSet;

                    /**
                     * 是否创建新的队列。1：是，0：否。如果IsEnableCmqNotify值是1的话，此值属于必填字段。
                     */
                    int64_t m_isCreateNewQueue;
                    bool m_isCreateNewQueueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_UPDATEAUDITREQUEST_H_
