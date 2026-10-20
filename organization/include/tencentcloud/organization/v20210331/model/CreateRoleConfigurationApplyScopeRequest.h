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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONAPPLYSCOPEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONAPPLYSCOPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/RoleAssignmentInfo.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateRoleConfigurationApplyScope请求参数结构体
                */
                class CreateRoleConfigurationApplyScopeRequest : public AbstractModel
                {
                public:
                    CreateRoleConfigurationApplyScopeRequest();
                    ~CreateRoleConfigurationApplyScopeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>用户目录</p>
                     * @return ZoneId <p>用户目录</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>用户目录</p>
                     * @param _zoneId <p>用户目录</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>申请范围条目</p>
                     * @return ApplyScopeInfo <p>申请范围条目</p>
                     * 
                     */
                    std::vector<RoleAssignmentInfo> GetApplyScopeInfo() const;

                    /**
                     * 设置<p>申请范围条目</p>
                     * @param _applyScopeInfo <p>申请范围条目</p>
                     * 
                     */
                    void SetApplyScopeInfo(const std::vector<RoleAssignmentInfo>& _applyScopeInfo);

                    /**
                     * 判断参数 ApplyScopeInfo 是否已赋值
                     * @return ApplyScopeInfo 是否已赋值
                     * 
                     */
                    bool ApplyScopeInfoHasBeenSet() const;

                private:

                    /**
                     * <p>用户目录</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>申请范围条目</p>
                     */
                    std::vector<RoleAssignmentInfo> m_applyScopeInfo;
                    bool m_applyScopeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEROLECONFIGURATIONAPPLYSCOPEREQUEST_H_
