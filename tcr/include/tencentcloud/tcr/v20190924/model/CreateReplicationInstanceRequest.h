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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCEREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateReplicationInstance请求参数结构体
                */
                class CreateReplicationInstanceRequest : public AbstractModel
                {
                public:
                    CreateReplicationInstanceRequest();
                    ~CreateReplicationInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例iD
                     * @return RegistryId 主实例iD
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置主实例iD
                     * @param _registryId 主实例iD
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取复制实例地域ID
                     * @return ReplicationRegionId 复制实例地域ID
                     * 
                     */
                    uint64_t GetReplicationRegionId() const;

                    /**
                     * 设置复制实例地域ID
                     * @param _replicationRegionId 复制实例地域ID
                     * 
                     */
                    void SetReplicationRegionId(const uint64_t& _replicationRegionId);

                    /**
                     * 判断参数 ReplicationRegionId 是否已赋值
                     * @return ReplicationRegionId 是否已赋值
                     * 
                     */
                    bool ReplicationRegionIdHasBeenSet() const;

                    /**
                     * 获取复制实例地域名称
                     * @return ReplicationRegionName 复制实例地域名称
                     * 
                     */
                    std::string GetReplicationRegionName() const;

                    /**
                     * 设置复制实例地域名称
                     * @param _replicationRegionName 复制实例地域名称
                     * 
                     */
                    void SetReplicationRegionName(const std::string& _replicationRegionName);

                    /**
                     * 判断参数 ReplicationRegionName 是否已赋值
                     * @return ReplicationRegionName 是否已赋值
                     * 
                     */
                    bool ReplicationRegionNameHasBeenSet() const;

                    /**
                     * 获取是否同步TCR云标签至生成的COS Bucket
                     * @return SyncTag 是否同步TCR云标签至生成的COS Bucket
                     * 
                     */
                    bool GetSyncTag() const;

                    /**
                     * 设置是否同步TCR云标签至生成的COS Bucket
                     * @param _syncTag 是否同步TCR云标签至生成的COS Bucket
                     * 
                     */
                    void SetSyncTag(const bool& _syncTag);

                    /**
                     * 判断参数 SyncTag 是否已赋值
                     * @return SyncTag 是否已赋值
                     * 
                     */
                    bool SyncTagHasBeenSet() const;

                private:

                    /**
                     * 主实例iD
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 复制实例地域ID
                     */
                    uint64_t m_replicationRegionId;
                    bool m_replicationRegionIdHasBeenSet;

                    /**
                     * 复制实例地域名称
                     */
                    std::string m_replicationRegionName;
                    bool m_replicationRegionNameHasBeenSet;

                    /**
                     * 是否同步TCR云标签至生成的COS Bucket
                     */
                    bool m_syncTag;
                    bool m_syncTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCEREQUEST_H_
