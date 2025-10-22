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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPDOMAINREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateProxyGroupDomain请求参数结构体
                */
                class CreateProxyGroupDomainRequest : public AbstractModel
                {
                public:
                    CreateProxyGroupDomainRequest();
                    ~CreateProxyGroupDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要开启域名的通道组ID。
                     * @return GroupId 需要开启域名的通道组ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置需要开启域名的通道组ID。
                     * @param _groupId 需要开启域名的通道组ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 需要开启域名的通道组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPDOMAINREQUEST_H_
