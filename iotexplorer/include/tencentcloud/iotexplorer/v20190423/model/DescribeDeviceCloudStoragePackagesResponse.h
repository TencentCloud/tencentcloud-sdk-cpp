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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICECLOUDSTORAGEPACKAGESRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICECLOUDSTORAGEPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/NewCloudStoragePackage.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeDeviceCloudStoragePackages返回参数结构体
                */
                class DescribeDeviceCloudStoragePackagesResponse : public AbstractModel
                {
                public:
                    DescribeDeviceCloudStoragePackagesResponse();
                    ~DescribeDeviceCloudStoragePackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>套餐包相关数据</p>
                     * @return Packages <p>套餐包相关数据</p>
                     * 
                     */
                    std::vector<NewCloudStoragePackage> GetPackages() const;

                    /**
                     * 判断参数 Packages 是否已赋值
                     * @return Packages 是否已赋值
                     * 
                     */
                    bool PackagesHasBeenSet() const;

                    /**
                     * 获取<p>套餐总数</p>
                     * @return TotalCount <p>套餐总数</p>
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
                     * <p>套餐包相关数据</p>
                     */
                    std::vector<NewCloudStoragePackage> m_packages;
                    bool m_packagesHasBeenSet;

                    /**
                     * <p>套餐总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEDEVICECLOUDSTORAGEPACKAGESRESPONSE_H_
