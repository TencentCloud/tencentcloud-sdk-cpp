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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETERESERVEDINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETERESERVEDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteReservedInstances请求参数结构体
                */
                class DeleteReservedInstancesRequest : public AbstractModel
                {
                public:
                    DeleteReservedInstancesRequest();
                    ~DeleteReservedInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取预留券实例ID。
                     * @return ReservedInstanceIds 预留券实例ID。
                     * 
                     */
                    std::vector<std::string> GetReservedInstanceIds() const;

                    /**
                     * 设置预留券实例ID。
                     * @param _reservedInstanceIds 预留券实例ID。
                     * 
                     */
                    void SetReservedInstanceIds(const std::vector<std::string>& _reservedInstanceIds);

                    /**
                     * 判断参数 ReservedInstanceIds 是否已赋值
                     * @return ReservedInstanceIds 是否已赋值
                     * 
                     */
                    bool ReservedInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 预留券实例ID。
                     */
                    std::vector<std::string> m_reservedInstanceIds;
                    bool m_reservedInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETERESERVEDINSTANCESREQUEST_H_
