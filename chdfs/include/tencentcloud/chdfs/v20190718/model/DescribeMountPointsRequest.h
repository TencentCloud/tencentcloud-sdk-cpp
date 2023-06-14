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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * DescribeMountPoints请求参数结构体
                */
                class DescribeMountPointsRequest : public AbstractModel
                {
                public:
                    DescribeMountPointsRequest();
                    ~DescribeMountPointsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统ID
注意：若根据AccessGroupId查看挂载点列表，则无需设置FileSystemId
                     * @return FileSystemId 文件系统ID
注意：若根据AccessGroupId查看挂载点列表，则无需设置FileSystemId
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
注意：若根据AccessGroupId查看挂载点列表，则无需设置FileSystemId
                     * @param _fileSystemId 文件系统ID
注意：若根据AccessGroupId查看挂载点列表，则无需设置FileSystemId
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
                     * 获取权限组ID
注意：若根据FileSystemId查看挂载点列表，则无需设置AccessGroupId
                     * @return AccessGroupId 权限组ID
注意：若根据FileSystemId查看挂载点列表，则无需设置AccessGroupId
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置权限组ID
注意：若根据FileSystemId查看挂载点列表，则无需设置AccessGroupId
                     * @param _accessGroupId 权限组ID
注意：若根据FileSystemId查看挂载点列表，则无需设置AccessGroupId
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为所有
                     * @return Limit 返回数量，默认为所有
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为所有
                     * @param _limit 返回数量，默认为所有
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 文件系统ID
注意：若根据AccessGroupId查看挂载点列表，则无需设置FileSystemId
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 权限组ID
注意：若根据FileSystemId查看挂载点列表，则无需设置AccessGroupId
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为所有
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_
