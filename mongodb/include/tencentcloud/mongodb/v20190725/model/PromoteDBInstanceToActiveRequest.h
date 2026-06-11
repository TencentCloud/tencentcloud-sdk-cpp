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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_PROMOTEDBINSTANCETOACTIVEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_PROMOTEDBINSTANCETOACTIVEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * PromoteDBInstanceToActive请求参数结构体
                */
                class PromoteDBInstanceToActiveRequest : public AbstractModel
                {
                public:
                    PromoteDBInstanceToActiveRequest();
                    ~PromoteDBInstanceToActiveRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取灾备实例id
                     * @return InstanceId 灾备实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置灾备实例id
                     * @param _instanceId 灾备实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取主实例id
                     * @return MasterId 主实例id
                     * 
                     */
                    std::string GetMasterId() const;

                    /**
                     * 设置主实例id
                     * @param _masterId 主实例id
                     * 
                     */
                    void SetMasterId(const std::string& _masterId);

                    /**
                     * 判断参数 MasterId 是否已赋值
                     * @return MasterId 是否已赋值
                     * 
                     */
                    bool MasterIdHasBeenSet() const;

                private:

                    /**
                     * 灾备实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主实例id
                     */
                    std::string m_masterId;
                    bool m_masterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_PROMOTEDBINSTANCETOACTIVEREQUEST_H_
