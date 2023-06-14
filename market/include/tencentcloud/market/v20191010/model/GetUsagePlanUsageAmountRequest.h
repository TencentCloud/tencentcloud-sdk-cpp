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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_GETUSAGEPLANUSAGEAMOUNTREQUEST_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_GETUSAGEPLANUSAGEAMOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * GetUsagePlanUsageAmount请求参数结构体
                */
                class GetUsagePlanUsageAmountRequest : public AbstractModel
                {
                public:
                    GetUsagePlanUsageAmountRequest();
                    ~GetUsagePlanUsageAmountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于查询实例的Id
                     * @return InstanceId 用于查询实例的Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置用于查询实例的Id
                     * @param _instanceId 用于查询实例的Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 用于查询实例的Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_GETUSAGEPLANUSAGEAMOUNTREQUEST_H_
