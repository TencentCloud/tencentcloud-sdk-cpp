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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEAPPUSRREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEAPPUSRREQUEST_H_

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
                * CreateAppUsr请求参数结构体
                */
                class CreateAppUsrRequest : public AbstractModel
                {
                public:
                    CreateAppUsrRequest();
                    ~CreateAppUsrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标识用户的唯一ID，防止同一个用户多次注册
                     * @return CunionId 标识用户的唯一ID，防止同一个用户多次注册
                     * 
                     */
                    std::string GetCunionId() const;

                    /**
                     * 设置标识用户的唯一ID，防止同一个用户多次注册
                     * @param _cunionId 标识用户的唯一ID，防止同一个用户多次注册
                     * 
                     */
                    void SetCunionId(const std::string& _cunionId);

                    /**
                     * 判断参数 CunionId 是否已赋值
                     * @return CunionId 是否已赋值
                     * 
                     */
                    bool CunionIdHasBeenSet() const;

                    /**
                     * 获取用于小程序关联手机号
                     * @return Mobile 用于小程序关联手机号
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用于小程序关联手机号
                     * @param _mobile 用于小程序关联手机号
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                private:

                    /**
                     * 标识用户的唯一ID，防止同一个用户多次注册
                     */
                    std::string m_cunionId;
                    bool m_cunionIdHasBeenSet;

                    /**
                     * 用于小程序关联手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CREATEAPPUSRREQUEST_H_
