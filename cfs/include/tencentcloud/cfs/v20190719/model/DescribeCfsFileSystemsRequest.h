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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/Filter.h>
#include <tencentcloud/cfs/v20190719/model/TagInfo.h>


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
                     * 获取<p>文件系统 ID</p>
                     * @return FileSystemId <p>文件系统 ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 ID</p>
                     * @param _fileSystemId <p>文件系统 ID</p>
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
                     * 获取<p>私有网络（VPC） ID</p>
                     * @return VpcId <p>私有网络（VPC） ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络（VPC） ID</p>
                     * @param _vpcId <p>私有网络（VPC） ID</p>
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
                     * 获取<p>子网 ID</p>
                     * @return SubnetId <p>子网 ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID</p>
                     * @param _subnetId <p>子网 ID</p>
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
                     * 获取<p>Offset 分页码,默认0</p>
                     * @return Offset <p>Offset 分页码,默认0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Offset 分页码,默认0</p>
                     * @param _offset <p>Offset 分页码,默认0</p>
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
                     * 获取<p>Limit 页面大小，默认10</p>
                     * @return Limit <p>Limit 页面大小，默认10</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Limit 页面大小，默认10</p>
                     * @param _limit <p>Limit 页面大小，默认10</p>
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
                     * 获取<p>用户自定义名称</p>
                     * @return CreationToken <p>用户自定义名称</p>
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 设置<p>用户自定义名称</p>
                     * @param _creationToken <p>用户自定义名称</p>
                     * 
                     */
                    void SetCreationToken(const std::string& _creationToken);

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件。<br><br><li>Protocol - Array of String - 是否必填：否 -（过滤条件）按协议过滤。(NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - 是否必填：否 -（过滤条件）按存储类型过滤。(SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - 是否必填：否 -（过滤条件）按生命周期过滤。(creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - 是否必填：否 -（过滤条件）按可用区过滤。(例如：ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - 是否必填：否 -（过滤条件）按导出点IP地址过滤。(例如：10.0.0.3) </li><br><br><li>PGroupId - Array of String - 是否必填：否 -（过滤条件）按权限组ID过滤。(例如：pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：默认权限组) </li><br><br><li>Scenario- Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：AgentSandbox) </li></p>
                     * @return Filters <p>过滤条件。<br><br><li>Protocol - Array of String - 是否必填：否 -（过滤条件）按协议过滤。(NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - 是否必填：否 -（过滤条件）按存储类型过滤。(SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - 是否必填：否 -（过滤条件）按生命周期过滤。(creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - 是否必填：否 -（过滤条件）按可用区过滤。(例如：ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - 是否必填：否 -（过滤条件）按导出点IP地址过滤。(例如：10.0.0.3) </li><br><br><li>PGroupId - Array of String - 是否必填：否 -（过滤条件）按权限组ID过滤。(例如：pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：默认权限组) </li><br><br><li>Scenario- Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：AgentSandbox) </li></p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。<br><br><li>Protocol - Array of String - 是否必填：否 -（过滤条件）按协议过滤。(NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - 是否必填：否 -（过滤条件）按存储类型过滤。(SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - 是否必填：否 -（过滤条件）按生命周期过滤。(creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - 是否必填：否 -（过滤条件）按可用区过滤。(例如：ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - 是否必填：否 -（过滤条件）按导出点IP地址过滤。(例如：10.0.0.3) </li><br><br><li>PGroupId - Array of String - 是否必填：否 -（过滤条件）按权限组ID过滤。(例如：pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：默认权限组) </li><br><br><li>Scenario- Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：AgentSandbox) </li></p>
                     * @param _filters <p>过滤条件。<br><br><li>Protocol - Array of String - 是否必填：否 -（过滤条件）按协议过滤。(NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - 是否必填：否 -（过滤条件）按存储类型过滤。(SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - 是否必填：否 -（过滤条件）按生命周期过滤。(creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - 是否必填：否 -（过滤条件）按可用区过滤。(例如：ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - 是否必填：否 -（过滤条件）按导出点IP地址过滤。(例如：10.0.0.3) </li><br><br><li>PGroupId - Array of String - 是否必填：否 -（过滤条件）按权限组ID过滤。(例如：pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：默认权限组) </li><br><br><li>Scenario- Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：AgentSandbox) </li></p>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统 ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>私有网络（VPC） ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Offset 分页码,默认0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Limit 页面大小，默认10</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>用户自定义名称</p>
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * <p>过滤条件。<br><br><li>Protocol - Array of String - 是否必填：否 -（过滤条件）按协议过滤。(NFS | CIFS | TURBO) </li><br><br><li>StorageType - Array of String - 是否必填：否 -（过滤条件）按存储类型过滤。(SD | HP | TB | TP | THP) </li><br><br><li>LifeCycleState - Array of String - 是否必填：否 -（过滤条件）按生命周期过滤。(creating | create_failed | available | deleting | delete_failed | upgrading | unserviced | expanding) </li><br><br><li>Zone - Array of String - 是否必填：否 -（过滤条件）按可用区过滤。(例如：ap-guangzhou-3) </li><br><br><li>IpAddress - Array of String - 是否必填：否 -（过滤条件）按导出点IP地址过滤。(例如：10.0.0.3) </li><br><br><li>PGroupId - Array of String - 是否必填：否 -（过滤条件）按权限组ID过滤。(例如：pgroup-xxxxxrxt) </li><br><br><li>PGroupName - Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：默认权限组) </li><br><br><li>Scenario- Array of String - 是否必填：否 -（过滤条件）按权限组名称过滤。(例如：AgentSandbox) </li></p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBECFSFILESYSTEMSREQUEST_H_
