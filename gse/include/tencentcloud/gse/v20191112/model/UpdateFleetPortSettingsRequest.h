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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETPORTSETTINGSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETPORTSETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/InboundPermissionAuthorization.h>
#include <tencentcloud/gse/v20191112/model/InboundPermissionRevocations.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * UpdateFleetPortSettings请求参数结构体
                */
                class UpdateFleetPortSettingsRequest : public AbstractModel
                {
                public:
                    UpdateFleetPortSettingsRequest();
                    ~UpdateFleetPortSettingsRequest() = default;
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

                    /**
                     * 获取新增安全组
                     * @return InboundPermissionAuthorizations 新增安全组
                     * 
                     */
                    std::vector<InboundPermissionAuthorization> GetInboundPermissionAuthorizations() const;

                    /**
                     * 设置新增安全组
                     * @param _inboundPermissionAuthorizations 新增安全组
                     * 
                     */
                    void SetInboundPermissionAuthorizations(const std::vector<InboundPermissionAuthorization>& _inboundPermissionAuthorizations);

                    /**
                     * 判断参数 InboundPermissionAuthorizations 是否已赋值
                     * @return InboundPermissionAuthorizations 是否已赋值
                     * 
                     */
                    bool InboundPermissionAuthorizationsHasBeenSet() const;

                    /**
                     * 获取移除安全组
                     * @return InboundPermissionRevocations 移除安全组
                     * 
                     */
                    std::vector<InboundPermissionRevocations> GetInboundPermissionRevocations() const;

                    /**
                     * 设置移除安全组
                     * @param _inboundPermissionRevocations 移除安全组
                     * 
                     */
                    void SetInboundPermissionRevocations(const std::vector<InboundPermissionRevocations>& _inboundPermissionRevocations);

                    /**
                     * 判断参数 InboundPermissionRevocations 是否已赋值
                     * @return InboundPermissionRevocations 是否已赋值
                     * 
                     */
                    bool InboundPermissionRevocationsHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队 Id
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 新增安全组
                     */
                    std::vector<InboundPermissionAuthorization> m_inboundPermissionAuthorizations;
                    bool m_inboundPermissionAuthorizationsHasBeenSet;

                    /**
                     * 移除安全组
                     */
                    std::vector<InboundPermissionRevocations> m_inboundPermissionRevocations;
                    bool m_inboundPermissionRevocationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEFLEETPORTSETTINGSREQUEST_H_
