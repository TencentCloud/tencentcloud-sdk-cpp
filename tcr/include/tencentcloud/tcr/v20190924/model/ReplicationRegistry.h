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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONREGISTRY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONREGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 企业版复制实例
                */
                class ReplicationRegistry : public AbstractModel
                {
                public:
                    ReplicationRegistry();
                    ~ReplicationRegistry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主实例ID
                     * @return RegistryId 主实例ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置主实例ID
                     * @param _registryId 主实例ID
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
                     * 获取复制实例ID
                     * @return ReplicationRegistryId 复制实例ID
                     * 
                     */
                    std::string GetReplicationRegistryId() const;

                    /**
                     * 设置复制实例ID
                     * @param _replicationRegistryId 复制实例ID
                     * 
                     */
                    void SetReplicationRegistryId(const std::string& _replicationRegistryId);

                    /**
                     * 判断参数 ReplicationRegistryId 是否已赋值
                     * @return ReplicationRegistryId 是否已赋值
                     * 
                     */
                    bool ReplicationRegistryIdHasBeenSet() const;

                    /**
                     * 获取复制实例的地域ID
                     * @return ReplicationRegionId 复制实例的地域ID
                     * 
                     */
                    uint64_t GetReplicationRegionId() const;

                    /**
                     * 设置复制实例的地域ID
                     * @param _replicationRegionId 复制实例的地域ID
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
                     * 获取复制实例的地域名称
                     * @return ReplicationRegionName 复制实例的地域名称
                     * 
                     */
                    std::string GetReplicationRegionName() const;

                    /**
                     * 设置复制实例的地域名称
                     * @param _replicationRegionName 复制实例的地域名称
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
                     * 获取复制实例的状态
                     * @return Status 复制实例的状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置复制实例的状态
                     * @param _status 复制实例的状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * 主实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 复制实例ID
                     */
                    std::string m_replicationRegistryId;
                    bool m_replicationRegistryIdHasBeenSet;

                    /**
                     * 复制实例的地域ID
                     */
                    uint64_t m_replicationRegionId;
                    bool m_replicationRegionIdHasBeenSet;

                    /**
                     * 复制实例的地域名称
                     */
                    std::string m_replicationRegionName;
                    bool m_replicationRegionNameHasBeenSet;

                    /**
                     * 复制实例的状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONREGISTRY_H_
