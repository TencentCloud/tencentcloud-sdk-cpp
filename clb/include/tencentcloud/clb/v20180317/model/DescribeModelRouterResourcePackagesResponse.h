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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGESRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ModelRouterPackage.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelRouterResourcePackages返回参数结构体
                */
                class DescribeModelRouterResourcePackagesResponse : public AbstractModel
                {
                public:
                    DescribeModelRouterResourcePackagesResponse();
                    ~DescribeModelRouterResourcePackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由资源包信息</p>
                     * @return ModelRouterResourcePackageSet <p>模型路由资源包信息</p>
                     * 
                     */
                    std::vector<ModelRouterPackage> GetModelRouterResourcePackageSet() const;

                    /**
                     * 判断参数 ModelRouterResourcePackageSet 是否已赋值
                     * @return ModelRouterResourcePackageSet 是否已赋值
                     * 
                     */
                    bool ModelRouterResourcePackageSetHasBeenSet() const;

                    /**
                     * 获取<p>符合查询条件的模型路由资源包数量</p>
                     * @return TotalCount <p>符合查询条件的模型路由资源包数量</p>
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
                     * 获取<p>资源包的剩余总量</p>
                     * @return TotalDosage <p>资源包的剩余总量</p>
                     * 
                     */
                    uint64_t GetTotalDosage() const;

                    /**
                     * 判断参数 TotalDosage 是否已赋值
                     * @return TotalDosage 是否已赋值
                     * 
                     */
                    bool TotalDosageHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由资源包信息</p>
                     */
                    std::vector<ModelRouterPackage> m_modelRouterResourcePackageSet;
                    bool m_modelRouterResourcePackageSetHasBeenSet;

                    /**
                     * <p>符合查询条件的模型路由资源包数量</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>资源包的剩余总量</p>
                     */
                    uint64_t m_totalDosage;
                    bool m_totalDosageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERRESOURCEPACKAGESRESPONSE_H_
