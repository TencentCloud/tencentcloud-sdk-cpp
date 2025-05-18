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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeCfsFileSystems请求参数结构体
                */
                class DescribeCfsFileSystemsRequest : public AbstractModel
                {
                public:
                    DescribeCfsFileSystemsRequest();
                    ~DescribeCfsFileSystemsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统 ID
                     * @return FileSystemId 文件系统 ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID
                     * @param _fileSystemId 文件系统 ID
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
                     * 获取私有网络（VPC） ID
                     * @return VpcId 私有网络（VPC） ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络（VPC） ID
                     * @param _vpcId 私有网络（VPC） ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网 ID
                     * @return SubnetId 子网 ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网 ID
                     * @param _subnetId 子网 ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Offset 分页码,默认0
                     * @return Offset Offset 分页码,默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset 分页码,默认0
                     * @param _offset Offset 分页码,默认0
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
                     * 获取Limit 页面大小，默认10
                     * @return Limit Limit 页面大小，默认10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Limit 页面大小，默认10
                     * @param _limit Limit 页面大小，默认10
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取用户自定义名称
                     * @return CreationToken 用户自定义名称
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置用户自定义名称
                     * @param _creationToken 用户自定义名称
                     * 
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                private:

                    /**
                     * 文件系统 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 私有网络（VPC） ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网 ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Offset 分页码,默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit 页面大小，默认10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 用户自定义名称
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_
