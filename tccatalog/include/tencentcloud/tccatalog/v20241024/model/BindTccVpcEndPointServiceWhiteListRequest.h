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

#ifndef TENCENTCLOUD_TCCATALOG_V20241024_MODEL_BINDTCCVPCENDPOINTSERVICEWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCCATALOG_V20241024_MODEL_BINDTCCVPCENDPOINTSERVICEWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tccatalog
    {
        namespace V20241024
        {
            namespace Model
            {
                /**
                * BindTccVpcEndPointServiceWhiteList请求参数结构体
                */
                class BindTccVpcEndPointServiceWhiteListRequest : public AbstractModel
                {
                public:
                    BindTccVpcEndPointServiceWhiteListRequest();
                    ~BindTccVpcEndPointServiceWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点服务Id
                     * @return EndPointServiceId 终端节点服务Id
                     * 
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点服务Id
                     * @param _endPointServiceId 终端节点服务Id
                     * 
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     * 
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                    /**
                     * 获取需要开白的用户Uin
                     * @return UserUin 需要开白的用户Uin
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置需要开白的用户Uin
                     * @param _userUin 需要开白的用户Uin
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取用户描述
                     * @return Description 用户描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户描述
                     * @param _description 用户描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 终端节点服务Id
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                    /**
                     * 需要开白的用户Uin
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 用户描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCCATALOG_V20241024_MODEL_BINDTCCVPCENDPOINTSERVICEWHITELISTREQUEST_H_
