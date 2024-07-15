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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSRESPONSE_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZoneHostsInfo.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * DescribeCloudDedicatedZoneHosts返回参数结构体
                */
                class DescribeCloudDedicatedZoneHostsResponse : public AbstractModel
                {
                public:
                    DescribeCloudDedicatedZoneHostsResponse();
                    ~DescribeCloudDedicatedZoneHostsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回Host和Host上部署的实例信息之间的关系
                     * @return CloudDedicatedZoneHostsInfoSet 返回Host和Host上部署的实例信息之间的关系
                     * 
                     */
                    std::vector<CloudDedicatedZoneHostsInfo> GetCloudDedicatedZoneHostsInfoSet() const;

                    /**
                     * 判断参数 CloudDedicatedZoneHostsInfoSet 是否已赋值
                     * @return CloudDedicatedZoneHostsInfoSet 是否已赋值
                     * 
                     */
                    bool CloudDedicatedZoneHostsInfoSetHasBeenSet() const;

                private:

                    /**
                     * 返回Host和Host上部署的实例信息之间的关系
                     */
                    std::vector<CloudDedicatedZoneHostsInfo> m_cloudDedicatedZoneHostsInfoSet;
                    bool m_cloudDedicatedZoneHostsInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSRESPONSE_H_
