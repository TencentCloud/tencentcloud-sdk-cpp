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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEUSERQUOTAREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEUSERQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * CreateUserQuota请求参数结构体
                */
                class CreateUserQuotaRequest : public AbstractModel
                {
                public:
                    CreateUserQuotaRequest();
                    ~CreateUserQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统id
                     * @return FileSystemId 文件系统id
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统id
                     * @param _fileSystemId 文件系统id
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取配额类型，UID或GID
                     * @return QuotaType 配额类型，UID或GID
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置配额类型，UID或GID
                     * @param _quotaType 配额类型，UID或GID
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取配额对象名称，对应UID或者GID的值
                     * @return QuotaObjectName 配额对象名称，对应UID或者GID的值
                     * 
                     */
                    std::string GetQuotaObjectName() const;

                    /**
                     * 设置配额对象名称，对应UID或者GID的值
                     * @param _quotaObjectName 配额对象名称，对应UID或者GID的值
                     * 
                     */
                    void SetQuotaObjectName(const std::string& _quotaObjectName);

                    /**
                     * 判断参数 QuotaObjectName 是否已赋值
                     * @return QuotaObjectName 是否已赋值
                     * 
                     */
                    bool QuotaObjectNameHasBeenSet() const;

                    /**
                     * 获取容量配额（需带单位G）
                     * @return QuotaSizeLimit 容量配额（需带单位G）
                     * 
                     */
                    std::string GetQuotaSizeLimit() const;

                    /**
                     * 设置容量配额（需带单位G）
                     * @param _quotaSizeLimit 容量配额（需带单位G）
                     * 
                     */
                    void SetQuotaSizeLimit(const std::string& _quotaSizeLimit);

                    /**
                     * 判断参数 QuotaSizeLimit 是否已赋值
                     * @return QuotaSizeLimit 是否已赋值
                     * 
                     */
                    bool QuotaSizeLimitHasBeenSet() const;

                    /**
                     * 获取文件数配额
                     * @return QuotaFilesLimit 文件数配额
                     * 
                     */
                    std::string GetQuotaFilesLimit() const;

                    /**
                     * 设置文件数配额
                     * @param _quotaFilesLimit 文件数配额
                     * 
                     */
                    void SetQuotaFilesLimit(const std::string& _quotaFilesLimit);

                    /**
                     * 判断参数 QuotaFilesLimit 是否已赋值
                     * @return QuotaFilesLimit 是否已赋值
                     * 
                     */
                    bool QuotaFilesLimitHasBeenSet() const;

                private:

                    /**
                     * 文件系统id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 配额类型，UID或GID
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * 配额对象名称，对应UID或者GID的值
                     */
                    std::string m_quotaObjectName;
                    bool m_quotaObjectNameHasBeenSet;

                    /**
                     * 容量配额（需带单位G）
                     */
                    std::string m_quotaSizeLimit;
                    bool m_quotaSizeLimitHasBeenSet;

                    /**
                     * 文件数配额
                     */
                    std::string m_quotaFilesLimit;
                    bool m_quotaFilesLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEUSERQUOTAREQUEST_H_
