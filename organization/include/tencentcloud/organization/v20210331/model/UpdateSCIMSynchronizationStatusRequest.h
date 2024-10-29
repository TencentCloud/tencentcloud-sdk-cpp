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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMSYNCHRONIZATIONSTATUSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMSYNCHRONIZATIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateSCIMSynchronizationStatus请求参数结构体
                */
                class UpdateSCIMSynchronizationStatusRequest : public AbstractModel
                {
                public:
                    UpdateSCIMSynchronizationStatusRequest();
                    ~UpdateSCIMSynchronizationStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间ID。z-前缀开头，后面是12位随机数字/小写字母
                     * @return ZoneId 空间ID。z-前缀开头，后面是12位随机数字/小写字母
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置空间ID。z-前缀开头，后面是12位随机数字/小写字母
                     * @param _zoneId 空间ID。z-前缀开头，后面是12位随机数字/小写字母
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
                     * 获取SCIM 同步状态。Enabled：启用。Disabled：禁用。
                     * @return SCIMSynchronizationStatus SCIM 同步状态。Enabled：启用。Disabled：禁用。
                     * 
                     */
                    std::string GetSCIMSynchronizationStatus() const;

                    /**
                     * 设置SCIM 同步状态。Enabled：启用。Disabled：禁用。
                     * @param _sCIMSynchronizationStatus SCIM 同步状态。Enabled：启用。Disabled：禁用。
                     * 
                     */
                    void SetSCIMSynchronizationStatus(const std::string& _sCIMSynchronizationStatus);

                    /**
                     * 判断参数 SCIMSynchronizationStatus 是否已赋值
                     * @return SCIMSynchronizationStatus 是否已赋值
                     * 
                     */
                    bool SCIMSynchronizationStatusHasBeenSet() const;

                private:

                    /**
                     * 空间ID。z-前缀开头，后面是12位随机数字/小写字母
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * SCIM 同步状态。Enabled：启用。Disabled：禁用。
                     */
                    std::string m_sCIMSynchronizationStatus;
                    bool m_sCIMSynchronizationStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATESCIMSYNCHRONIZATIONSTATUSREQUEST_H_
