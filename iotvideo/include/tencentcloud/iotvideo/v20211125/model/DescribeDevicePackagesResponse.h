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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICEPACKAGESRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICEPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20211125/model/PackageInfo.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeDevicePackages返回参数结构体
                */
                class DescribeDevicePackagesResponse : public AbstractModel
                {
                public:
                    DescribeDevicePackagesResponse();
                    ~DescribeDevicePackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取有效云存套餐数量
                     * @return TotalCount 有效云存套餐数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取有效云存套餐列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Packages 有效云存套餐列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PackageInfo> GetPackages() const;

                    /**
                     * 判断参数 Packages 是否已赋值
                     * @return Packages 是否已赋值
                     * 
                     */
                    bool PackagesHasBeenSet() const;

                private:

                    /**
                     * 有效云存套餐数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 有效云存套餐列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PackageInfo> m_packages;
                    bool m_packagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEDEVICEPACKAGESRESPONSE_H_
