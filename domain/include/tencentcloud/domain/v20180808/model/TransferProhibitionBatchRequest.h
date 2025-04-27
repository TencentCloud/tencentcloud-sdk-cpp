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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERPROHIBITIONBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERPROHIBITIONBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * TransferProhibitionBatch请求参数结构体
                */
                class TransferProhibitionBatchRequest : public AbstractModel
                {
                public:
                    TransferProhibitionBatchRequest();
                    ~TransferProhibitionBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量操作的域名。
一次提交不大于4000个
                     * @return Domains 批量操作的域名。
一次提交不大于4000个
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置批量操作的域名。
一次提交不大于4000个
                     * @param _domains 批量操作的域名。
一次提交不大于4000个
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取是否开启禁止域名转移。
true: 开启禁止域名转移状态。
false：关闭禁止域名转移状态。
                     * @return Status 是否开启禁止域名转移。
true: 开启禁止域名转移状态。
false：关闭禁止域名转移状态。
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置是否开启禁止域名转移。
true: 开启禁止域名转移状态。
false：关闭禁止域名转移状态。
                     * @param _status 是否开启禁止域名转移。
true: 开启禁止域名转移状态。
false：关闭禁止域名转移状态。
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 批量操作的域名。
一次提交不大于4000个
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 是否开启禁止域名转移。
true: 开启禁止域名转移状态。
false：关闭禁止域名转移状态。
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERPROHIBITIONBATCHREQUEST_H_
