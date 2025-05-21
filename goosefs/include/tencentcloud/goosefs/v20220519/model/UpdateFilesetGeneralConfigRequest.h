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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATEFILESETGENERALCONFIGREQUEST_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATEFILESETGENERALCONFIGREQUEST_H_

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
                * UpdateFilesetGeneralConfig请求参数结构体
                */
                class UpdateFilesetGeneralConfigRequest : public AbstractModel
                {
                public:
                    UpdateFilesetGeneralConfigRequest();
                    ~UpdateFilesetGeneralConfigRequest() = default;
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
                     * 获取配额对root用户生效
                     * @return EnforceQuotaOnRoot 配额对root用户生效
                     * 
                     */
                    std::string GetEnforceQuotaOnRoot() const;

                    /**
                     * 设置配额对root用户生效
                     * @param _enforceQuotaOnRoot 配额对root用户生效
                     * 
                     */
                    void SetEnforceQuotaOnRoot(const std::string& _enforceQuotaOnRoot);

                    /**
                     * 判断参数 EnforceQuotaOnRoot 是否已赋值
                     * @return EnforceQuotaOnRoot 是否已赋值
                     * 
                     */
                    bool EnforceQuotaOnRootHasBeenSet() const;

                private:

                    /**
                     * 文件系统id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 配额对root用户生效
                     */
                    std::string m_enforceQuotaOnRoot;
                    bool m_enforceQuotaOnRootHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_UPDATEFILESETGENERALCONFIGREQUEST_H_
