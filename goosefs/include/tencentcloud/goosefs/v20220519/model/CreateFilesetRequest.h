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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESETREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESETREQUEST_H_

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
                * CreateFileset请求参数结构体
                */
                class CreateFilesetRequest : public AbstractModel
                {
                public:
                    CreateFilesetRequest();
                    ~CreateFilesetRequest() = default;
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
                     * 获取Fileset名称
                     * @return FsetName Fileset名称
                     * 
                     */
                    std::string GetFsetName() const;

                    /**
                     * 设置Fileset名称
                     * @param _fsetName Fileset名称
                     * 
                     */
                    void SetFsetName(const std::string& _fsetName);

                    /**
                     * 判断参数 FsetName 是否已赋值
                     * @return FsetName 是否已赋值
                     * 
                     */
                    bool FsetNameHasBeenSet() const;

                    /**
                     * 获取Fileset目录
                     * @return FsetDir Fileset目录
                     * 
                     */
                    std::string GetFsetDir() const;

                    /**
                     * 设置Fileset目录
                     * @param _fsetDir Fileset目录
                     * 
                     */
                    void SetFsetDir(const std::string& _fsetDir);

                    /**
                     * 判断参数 FsetDir 是否已赋值
                     * @return FsetDir 是否已赋值
                     * 
                     */
                    bool FsetDirHasBeenSet() const;

                    /**
                     * 获取Fileset容量配额（需带单位G）
                     * @return QuotaSizeLimit Fileset容量配额（需带单位G）
                     * 
                     */
                    std::string GetQuotaSizeLimit() const;

                    /**
                     * 设置Fileset容量配额（需带单位G）
                     * @param _quotaSizeLimit Fileset容量配额（需带单位G）
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
                     * 获取Fileset文件数配额
                     * @return QuotaFilesLimit Fileset文件数配额
                     * 
                     */
                    std::string GetQuotaFilesLimit() const;

                    /**
                     * 设置Fileset文件数配额
                     * @param _quotaFilesLimit Fileset文件数配额
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
                     * Fileset名称
                     */
                    std::string m_fsetName;
                    bool m_fsetNameHasBeenSet;

                    /**
                     * Fileset目录
                     */
                    std::string m_fsetDir;
                    bool m_fsetDirHasBeenSet;

                    /**
                     * Fileset容量配额（需带单位G）
                     */
                    std::string m_quotaSizeLimit;
                    bool m_quotaSizeLimitHasBeenSet;

                    /**
                     * Fileset文件数配额
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

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CREATEFILESETREQUEST_H_
