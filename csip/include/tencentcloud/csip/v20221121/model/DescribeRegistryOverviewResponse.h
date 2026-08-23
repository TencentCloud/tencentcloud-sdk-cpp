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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREGISTRYOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREGISTRYOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageRegistryTypeCountItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeRegistryOverview返回参数结构体
                */
                class DescribeRegistryOverviewResponse : public AbstractModel
                {
                public:
                    DescribeRegistryOverviewResponse();
                    ~DescribeRegistryOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>镜像仓库总数</p>
                     * @return RegistryCount <p>镜像仓库总数</p>
                     * 
                     */
                    uint64_t GetRegistryCount() const;

                    /**
                     * 判断参数 RegistryCount 是否已赋值
                     * @return RegistryCount 是否已赋值
                     * 
                     */
                    bool RegistryCountHasBeenSet() const;

                    /**
                     * 获取<p>连接镜像仓库失败数</p>
                     * @return RegistryConnectFailedCount <p>连接镜像仓库失败数</p>
                     * 
                     */
                    uint64_t GetRegistryConnectFailedCount() const;

                    /**
                     * 判断参数 RegistryConnectFailedCount 是否已赋值
                     * @return RegistryConnectFailedCount 是否已赋值
                     * 
                     */
                    bool RegistryConnectFailedCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库类型数列表</p>
                     * @return RegistryTypeList <p>镜像仓库类型数列表</p>
                     * 
                     */
                    std::vector<ImageRegistryTypeCountItem> GetRegistryTypeList() const;

                    /**
                     * 判断参数 RegistryTypeList 是否已赋值
                     * @return RegistryTypeList 是否已赋值
                     * 
                     */
                    bool RegistryTypeListHasBeenSet() const;

                private:

                    /**
                     * <p>镜像仓库总数</p>
                     */
                    uint64_t m_registryCount;
                    bool m_registryCountHasBeenSet;

                    /**
                     * <p>连接镜像仓库失败数</p>
                     */
                    uint64_t m_registryConnectFailedCount;
                    bool m_registryConnectFailedCountHasBeenSet;

                    /**
                     * <p>镜像仓库类型数列表</p>
                     */
                    std::vector<ImageRegistryTypeCountItem> m_registryTypeList;
                    bool m_registryTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREGISTRYOVERVIEWRESPONSE_H_
