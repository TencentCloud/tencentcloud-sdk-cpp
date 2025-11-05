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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINRECURSIVESTATUSBATCHREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINRECURSIVESTATUSBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * ModifyDomainRecursiveStatusBatch请求参数结构体
                */
                class ModifyDomainRecursiveStatusBatchRequest : public AbstractModel
                {
                public:
                    ModifyDomainRecursiveStatusBatchRequest();
                    ~ModifyDomainRecursiveStatusBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名列表
                     * @return DomainList 域名列表
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置域名列表
                     * @param _domainList 域名列表
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取ENABLE-开启；DISABLE-关闭。
                     * @return Status ENABLE-开启；DISABLE-关闭。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ENABLE-开启；DISABLE-关闭。
                     * @param _status ENABLE-开启；DISABLE-关闭。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 域名列表
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * ENABLE-开启；DISABLE-关闭。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_MODIFYDOMAINRECURSIVESTATUSBATCHREQUEST_H_
