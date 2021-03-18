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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * CreateDevice请求参数结构体
                */
                class CreateDeviceRequest : public AbstractModel
                {
                public:
                    CreateDeviceRequest();
                    ~CreateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备名称
                     * @return NickName 设备名称
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置设备名称
                     * @param NickName 设备名称
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取设备密码
                     * @return PassWord 设备密码
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置设备密码
                     * @param PassWord 设备密码
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取设备需要绑定的分组ID，参数为空则默认绑定到根分组
                     * @return GroupId 设备需要绑定的分组ID，参数为空则默认绑定到根分组
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置设备需要绑定的分组ID，参数为空则默认绑定到根分组
                     * @param GroupId 设备需要绑定的分组ID，参数为空则默认绑定到根分组
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 设备密码
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * 设备需要绑定的分组ID，参数为空则默认绑定到根分组
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATEDEVICEREQUEST_H_
