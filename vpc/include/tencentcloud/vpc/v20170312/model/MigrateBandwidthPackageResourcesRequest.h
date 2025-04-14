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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEBANDWIDTHPACKAGERESOURCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEBANDWIDTHPACKAGERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * MigrateBandwidthPackageResources请求参数结构体
                */
                class MigrateBandwidthPackageResourcesRequest : public AbstractModel
                {
                public:
                    MigrateBandwidthPackageResourcesRequest();
                    ~MigrateBandwidthPackageResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前资源所在的共享带宽包ID
                     * @return BandwidthPackageId 当前资源所在的共享带宽包ID
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置当前资源所在的共享带宽包ID
                     * @param _bandwidthPackageId 当前资源所在的共享带宽包ID
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取要迁移的目标共享带宽包的ID
                     * @return TargetBandwidthPackageId 要迁移的目标共享带宽包的ID
                     * 
                     */
                    std::string GetTargetBandwidthPackageId() const;

                    /**
                     * 设置要迁移的目标共享带宽包的ID
                     * @param _targetBandwidthPackageId 要迁移的目标共享带宽包的ID
                     * 
                     */
                    void SetTargetBandwidthPackageId(const std::string& _targetBandwidthPackageId);

                    /**
                     * 判断参数 TargetBandwidthPackageId 是否已赋值
                     * @return TargetBandwidthPackageId 是否已赋值
                     * 
                     */
                    bool TargetBandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取要迁移的资源的ID列表
                     * @return ResourceIds 要迁移的资源的ID列表
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置要迁移的资源的ID列表
                     * @param _resourceIds 要迁移的资源的ID列表
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 当前资源所在的共享带宽包ID
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 要迁移的目标共享带宽包的ID
                     */
                    std::string m_targetBandwidthPackageId;
                    bool m_targetBandwidthPackageIdHasBeenSet;

                    /**
                     * 要迁移的资源的ID列表
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MIGRATEBANDWIDTHPACKAGERESOURCESREQUEST_H_
