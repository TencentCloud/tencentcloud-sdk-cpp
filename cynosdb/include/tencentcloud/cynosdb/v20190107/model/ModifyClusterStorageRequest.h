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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSTORAGEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSTORAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyClusterStorage请求参数结构体
                */
                class ModifyClusterStorageRequest : public AbstractModel
                {
                public:
                    ModifyClusterStorageRequest();
                    ~ModifyClusterStorageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群新存储大小（单位G）
                     * @return NewStorageLimit 集群新存储大小（单位G）
                     * 
                     */
                    int64_t GetNewStorageLimit() const;

                    /**
                     * 设置集群新存储大小（单位G）
                     * @param _newStorageLimit 集群新存储大小（单位G）
                     * 
                     */
                    void SetNewStorageLimit(const int64_t& _newStorageLimit);

                    /**
                     * 判断参数 NewStorageLimit 是否已赋值
                     * @return NewStorageLimit 是否已赋值
                     * 
                     */
                    bool NewStorageLimitHasBeenSet() const;

                    /**
                     * 获取集群原存储大小（单位G）
                     * @return OldStorageLimit 集群原存储大小（单位G）
                     * 
                     */
                    int64_t GetOldStorageLimit() const;

                    /**
                     * 设置集群原存储大小（单位G）
                     * @param _oldStorageLimit 集群原存储大小（单位G）
                     * 
                     */
                    void SetOldStorageLimit(const int64_t& _oldStorageLimit);

                    /**
                     * 判断参数 OldStorageLimit 是否已赋值
                     * @return OldStorageLimit 是否已赋值
                     * 
                     */
                    bool OldStorageLimitHasBeenSet() const;

                    /**
                     * 获取交易模式 0-下单并支付 1-下单
                     * @return DealMode 交易模式 0-下单并支付 1-下单
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置交易模式 0-下单并支付 1-下单
                     * @param _dealMode 交易模式 0-下单并支付 1-下单
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群新存储大小（单位G）
                     */
                    int64_t m_newStorageLimit;
                    bool m_newStorageLimitHasBeenSet;

                    /**
                     * 集群原存储大小（单位G）
                     */
                    int64_t m_oldStorageLimit;
                    bool m_oldStorageLimitHasBeenSet;

                    /**
                     * 交易模式 0-下单并支付 1-下单
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSTORAGEREQUEST_H_
