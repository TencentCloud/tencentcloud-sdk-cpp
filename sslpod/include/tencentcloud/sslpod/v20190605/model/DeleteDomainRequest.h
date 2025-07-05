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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_DELETEDOMAINREQUEST_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_DELETEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * DeleteDomain请求参数结构体
                */
                class DeleteDomainRequest : public AbstractModel
                {
                public:
                    DeleteDomainRequest();
                    ~DeleteDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名ID，可通过<a href="https://cloud.tencent.com/document/api/1084/49339">搜索域名</a>接口获得
                     * @return DomainId 域名ID，可通过<a href="https://cloud.tencent.com/document/api/1084/49339">搜索域名</a>接口获得
                     * 
                     */
                    int64_t GetDomainId() const;

                    /**
                     * 设置域名ID，可通过<a href="https://cloud.tencent.com/document/api/1084/49339">搜索域名</a>接口获得
                     * @param _domainId 域名ID，可通过<a href="https://cloud.tencent.com/document/api/1084/49339">搜索域名</a>接口获得
                     * 
                     */
                    void SetDomainId(const int64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 域名ID，可通过<a href="https://cloud.tencent.com/document/api/1084/49339">搜索域名</a>接口获得
                     */
                    int64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_DELETEDOMAINREQUEST_H_
