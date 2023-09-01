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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/FileSystemClient.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCfsFileSystemClients返回参数结构体
                */
                class DescribeCfsFileSystemClientsResponse : public AbstractModel
                {
                public:
                    DescribeCfsFileSystemClientsResponse();
                    ~DescribeCfsFileSystemClientsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户端列表
                     * @return ClientList 客户端列表
                     * 
                     */
                    std::vector<FileSystemClient> GetClientList() const;

                    /**
                     * 判断参数 ClientList 是否已赋值
                     * @return ClientList 是否已赋值
                     * 
                     */
                    bool ClientListHasBeenSet() const;

                    /**
                     * 获取文件系统总数
                     * @return TotalCount 文件系统总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 客户端列表
                     */
                    std::vector<FileSystemClient> m_clientList;
                    bool m_clientListHasBeenSet;

                    /**
                     * 文件系统总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMCLIENTSRESPONSE_H_
