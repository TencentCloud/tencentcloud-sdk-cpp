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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATEFILESETREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATEFILESETREQUEST_H_

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
                * UpdateFileset请求参数结构体
                */
                class UpdateFilesetRequest : public AbstractModel
                {
                public:
                    UpdateFilesetRequest();
                    ~UpdateFilesetRequest() = default;
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
                     * 获取Fileset id
                     * @return FsetId Fileset id
                     * 
                     */
                    std::string GetFsetId() const;

                    /**
                     * 设置Fileset id
                     * @param _fsetId Fileset id
                     * 
                     */
                    void SetFsetId(const std::string& _fsetId);

                    /**
                     * 判断参数 FsetId 是否已赋值
                     * @return FsetId 是否已赋值
                     * 
                     */
                    bool FsetIdHasBeenSet() const;

                    /**
                     * 获取容量配额限定值
                     * @return QuotaSizeLimit 容量配额限定值
                     * 
                     */
                    std::string GetQuotaSizeLimit() const;

                    /**
                     * 设置容量配额限定值
                     * @param _quotaSizeLimit 容量配额限定值
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
                     * 获取文件数配额限定值
                     * @return QuotaFilesLimit 文件数配额限定值
                     * 
                     */
                    std::string GetQuotaFilesLimit() const;

                    /**
                     * 设置文件数配额限定值
                     * @param _quotaFilesLimit 文件数配额限定值
                     * 
                     */
                    void SetQuotaFilesLimit(const std::string& _quotaFilesLimit);

                    /**
                     * 判断参数 QuotaFilesLimit 是否已赋值
                     * @return QuotaFilesLimit 是否已赋值
                     * 
                     */
                    bool QuotaFilesLimitHasBeenSet() const;

                    /**
                     * 获取Fileset文件删除操作审计
                     * @return AuditState Fileset文件删除操作审计
                     * 
                     */
                    std::string GetAuditState() const;

                    /**
                     * 设置Fileset文件删除操作审计
                     * @param _auditState Fileset文件删除操作审计
                     * 
                     */
                    void SetAuditState(const std::string& _auditState);

                    /**
                     * 判断参数 AuditState 是否已赋值
                     * @return AuditState 是否已赋值
                     * 
                     */
                    bool AuditStateHasBeenSet() const;

                private:

                    /**
                     * 文件系统id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Fileset id
                     */
                    std::string m_fsetId;
                    bool m_fsetIdHasBeenSet;

                    /**
                     * 容量配额限定值
                     */
                    std::string m_quotaSizeLimit;
                    bool m_quotaSizeLimitHasBeenSet;

                    /**
                     * 文件数配额限定值
                     */
                    std::string m_quotaFilesLimit;
                    bool m_quotaFilesLimitHasBeenSet;

                    /**
                     * Fileset文件删除操作审计
                     */
                    std::string m_auditState;
                    bool m_auditStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATEFILESETREQUEST_H_
