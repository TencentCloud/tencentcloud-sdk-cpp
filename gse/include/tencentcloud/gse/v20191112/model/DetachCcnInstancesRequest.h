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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DETACHCCNINSTANCESREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DETACHCCNINSTANCESREQUEST_H_

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
                * DetachCcnInstances请求参数结构体
                */
                class DetachCcnInstancesRequest : public AbstractModel
                {
                public:
                    DetachCcnInstancesRequest();
                    ~DetachCcnInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队 Id
                     * @return FleetId 服务器舰队 Id
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队 Id
                     * @param _fleetId 服务器舰队 Id
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队 Id
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DETACHCCNINSTANCESREQUEST_H_
