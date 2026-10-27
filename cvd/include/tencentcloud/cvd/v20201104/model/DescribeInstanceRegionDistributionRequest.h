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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEREGIONDISTRIBUTIONREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEREGIONDISTRIBUTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInstanceRegionDistribution请求参数结构体
                */
                class DescribeInstanceRegionDistributionRequest : public AbstractModel
                {
                public:
                    DescribeInstanceRegionDistributionRequest();
                    ~DescribeInstanceRegionDistributionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询区域列表</p>
                     * @return Regions <p>查询区域列表</p>
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置<p>查询区域列表</p>
                     * @param _regions <p>查询区域列表</p>
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>查询实例类型列表</p>
                     * @return Types <p>查询实例类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置<p>查询实例类型列表</p>
                     * @param _types <p>查询实例类型列表</p>
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取<p>查询用户拥有的云桌面地域分布信息</p>
                     * @return UserId <p>查询用户拥有的云桌面地域分布信息</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>查询用户拥有的云桌面地域分布信息</p>
                     * @param _userId <p>查询用户拥有的云桌面地域分布信息</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>查询区域列表</p>
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>查询实例类型列表</p>
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * <p>查询用户拥有的云桌面地域分布信息</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEREGIONDISTRIBUTIONREQUEST_H_
