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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyDevice请求参数结构体
                */
                class ModifyDeviceRequest : public AbstractModel
                {
                public:
                    ModifyDeviceRequest();
                    ~ModifyDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备ID
                     * @return Tid 设备ID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备ID
                     * @param _tid 设备ID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return AccessId 用户ID
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置用户ID
                     * @param _accessId 用户ID
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
                     * 获取设备昵称，最多不超过64个字符
                     * @return Nick 设备昵称，最多不超过64个字符
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置设备昵称，最多不超过64个字符
                     * @param _nick 设备昵称，最多不超过64个字符
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 设备昵称，最多不超过64个字符
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_MODIFYDEVICEREQUEST_H_
