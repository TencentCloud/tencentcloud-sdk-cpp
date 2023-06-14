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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_BINDUSRINFO_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_BINDUSRINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 设备绑定的终端用户
                */
                class BindUsrInfo : public AbstractModel
                {
                public:
                    BindUsrInfo();
                    ~BindUsrInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IotVideo平台分配给终端用户的用户id
                     * @return AccessId IotVideo平台分配给终端用户的用户id
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置IotVideo平台分配给终端用户的用户id
                     * @param _accessId IotVideo平台分配给终端用户的用户id
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取用户角色，owner：主人，guest：访客
                     * @return Role 用户角色，owner：主人，guest：访客
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置用户角色，owner：主人，guest：访客
                     * @param _role 用户角色，owner：主人，guest：访客
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * IotVideo平台分配给终端用户的用户id
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 用户角色，owner：主人，guest：访客
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_BINDUSRINFO_H_
