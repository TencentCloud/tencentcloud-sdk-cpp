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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_AUDITSUMMARY_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_AUDITSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 跟踪集概览
                */
                class AuditSummary : public AbstractModel
                {
                public:
                    AuditSummary();
                    ~AuditSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取跟踪集状态，1：开启，0：关闭
                     * @return AuditStatus 跟踪集状态，1：开启，0：关闭
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置跟踪集状态，1：开启，0：关闭
                     * @param _auditStatus 跟踪集状态，1：开启，0：关闭
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取COS存储桶名称
                     * @return CosBucketName COS存储桶名称
                     * 
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置COS存储桶名称
                     * @param _cosBucketName COS存储桶名称
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
                     * 获取日志前缀
                     * @return LogFilePrefix 日志前缀
                     * 
                     */
                    std::string GetLogFilePrefix() const;

                    /**
                     * 设置日志前缀
                     * @param _logFilePrefix 日志前缀
                     * 
                     */
                    void SetLogFilePrefix(const std::string& _logFilePrefix);

                    /**
                     * 判断参数 LogFilePrefix 是否已赋值
                     * @return LogFilePrefix 是否已赋值
                     * 
                     */
                    bool LogFilePrefixHasBeenSet() const;

                private:

                    /**
                     * 跟踪集状态，1：开启，0：关闭
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * COS存储桶名称
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * 跟踪集名称
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                    /**
                     * 日志前缀
                     */
                    std::string m_logFilePrefix;
                    bool m_logFilePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_AUDITSUMMARY_H_
