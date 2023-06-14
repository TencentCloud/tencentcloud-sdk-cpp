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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYIPGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYIPGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DeleteSecurityIPGroup请求参数结构体
                */
                class DeleteSecurityIPGroupRequest : public AbstractModel
                {
                public:
                    DeleteSecurityIPGroupRequest();
                    ~DeleteSecurityIPGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 Id。
                     * @return ZoneId 站点 Id。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 Id。
                     * @param _zoneId 站点 Id。
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
                     * 获取IP 组 Id。
                     * @return GroupId IP 组 Id。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置IP 组 Id。
                     * @param _groupId IP 组 Id。
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 站点 Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * IP 组 Id。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETESECURITYIPGROUPREQUEST_H_
