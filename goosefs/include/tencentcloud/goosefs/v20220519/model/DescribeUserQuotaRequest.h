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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEUSERQUOTAREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEUSERQUOTAREQUEST_H_

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
                * DescribeUserQuota请求参数结构体
                */
                class DescribeUserQuotaRequest : public AbstractModel
                {
                public:
                    DescribeUserQuotaRequest();
                    ~DescribeUserQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件系统id</p>
                     * @return FileSystemId <p>文件系统id</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统id</p>
                     * @param _fileSystemId <p>文件系统id</p>
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
                     * 获取<p>QuotaId列表</p>
                     * @return QuotaIds <p>QuotaId列表</p>
                     * 
                     */
                    std::vector<std::string> GetQuotaIds() const;

                    /**
                     * 设置<p>QuotaId列表</p>
                     * @param _quotaIds <p>QuotaId列表</p>
                     * 
                     */
                    void SetQuotaIds(const std::vector<std::string>& _quotaIds);

                    /**
                     * 判断参数 QuotaIds 是否已赋值
                     * @return QuotaIds 是否已赋值
                     * 
                     */
                    bool QuotaIdsHasBeenSet() const;

                    /**
                     * 获取<p>配额类型</p>
                     * @return QuotaType <p>配额类型</p>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>配额类型</p>
                     * @param _quotaType <p>配额类型</p>
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
                     * 获取<p>配额对象名称列表</p>
                     * @return QuotaObjectNames <p>配额对象名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetQuotaObjectNames() const;

                    /**
                     * 设置<p>配额对象名称列表</p>
                     * @param _quotaObjectNames <p>配额对象名称列表</p>
                     * 
                     */
                    void SetQuotaObjectNames(const std::vector<std::string>& _quotaObjectNames);

                    /**
                     * 判断参数 QuotaObjectNames 是否已赋值
                     * @return QuotaObjectNames 是否已赋值
                     * 
                     */
                    bool QuotaObjectNamesHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统id</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>QuotaId列表</p>
                     */
                    std::vector<std::string> m_quotaIds;
                    bool m_quotaIdsHasBeenSet;

                    /**
                     * <p>配额类型</p>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>配额对象名称列表</p>
                     */
                    std::vector<std::string> m_quotaObjectNames;
                    bool m_quotaObjectNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBEUSERQUOTAREQUEST_H_
