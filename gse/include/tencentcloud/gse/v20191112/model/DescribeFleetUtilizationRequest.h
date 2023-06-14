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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETUTILIZATIONREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETUTILIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeFleetUtilization请求参数结构体
                */
                class DescribeFleetUtilizationRequest : public AbstractModel
                {
                public:
                    DescribeFleetUtilizationRequest();
                    ~DescribeFleetUtilizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队 Ids
                     * @return FleetIds 服务器舰队 Ids
                     * 
                     */
                    std::vector<std::string> GetFleetIds() const;

                    /**
                     * 设置服务器舰队 Ids
                     * @param _fleetIds 服务器舰队 Ids
                     * 
                     */
                    void SetFleetIds(const std::vector<std::string>& _fleetIds);

                    /**
                     * 判断参数 FleetIds 是否已赋值
                     * @return FleetIds 是否已赋值
                     * 
                     */
                    bool FleetIdsHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队 Ids
                     */
                    std::vector<std::string> m_fleetIds;
                    bool m_fleetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETUTILIZATIONREQUEST_H_
