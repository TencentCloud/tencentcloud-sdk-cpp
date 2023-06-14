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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATESTORAGEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATESTORAGEREQUEST_H_

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
                * CreateStorage请求参数结构体
                */
                class CreateStorageRequest : public AbstractModel
                {
                public:
                    CreateStorageRequest();
                    ~CreateStorageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云存套餐ID
                     * @return PkgId 云存套餐ID
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置云存套餐ID
                     * @param _pkgId 云存套餐ID
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
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
                     * 获取用户唯一标识，由厂商保证内部唯一性
                     * @return UserTag 用户唯一标识，由厂商保证内部唯一性
                     * 
                     */
                    std::string GetUserTag() const;

                    /**
                     * 设置用户唯一标识，由厂商保证内部唯一性
                     * @param _userTag 用户唯一标识，由厂商保证内部唯一性
                     * 
                     */
                    void SetUserTag(const std::string& _userTag);

                    /**
                     * 判断参数 UserTag 是否已赋值
                     * @return UserTag 是否已赋值
                     * 
                     */
                    bool UserTagHasBeenSet() const;

                private:

                    /**
                     * 云存套餐ID
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 用户唯一标识，由厂商保证内部唯一性
                     */
                    std::string m_userTag;
                    bool m_userTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATESTORAGEREQUEST_H_
