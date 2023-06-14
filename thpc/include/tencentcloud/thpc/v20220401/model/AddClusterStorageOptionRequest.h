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

#ifndef TENCENTCLOUD_THPC_V20220401_MODEL_ADDCLUSTERSTORAGEOPTIONREQUEST_H_
#define TENCENTCLOUD_THPC_V20220401_MODEL_ADDCLUSTERSTORAGEOPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20220401/model/StorageOption.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20220401
        {
            namespace Model
            {
                /**
                * AddClusterStorageOption请求参数结构体
                */
                class AddClusterStorageOptionRequest : public AbstractModel
                {
                public:
                    AddClusterStorageOptionRequest();
                    ~AddClusterStorageOptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID。
                     * @return ClusterId 集群ID。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID。
                     * @param _clusterId 集群ID。
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
                     * 获取集群存储选项。
                     * @return StorageOption 集群存储选项。
                     * 
                     */
                    StorageOption GetStorageOption() const;

                    /**
                     * 设置集群存储选项。
                     * @param _storageOption 集群存储选项。
                     * 
                     */
                    void SetStorageOption(const StorageOption& _storageOption);

                    /**
                     * 判断参数 StorageOption 是否已赋值
                     * @return StorageOption 是否已赋值
                     * 
                     */
                    bool StorageOptionHasBeenSet() const;

                private:

                    /**
                     * 集群ID。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群存储选项。
                     */
                    StorageOption m_storageOption;
                    bool m_storageOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20220401_MODEL_ADDCLUSTERSTORAGEOPTIONREQUEST_H_
