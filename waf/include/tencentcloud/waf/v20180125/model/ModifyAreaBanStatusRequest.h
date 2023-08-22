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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAREABANSTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAREABANSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyAreaBanStatus请求参数结构体
                */
                class ModifyAreaBanStatusRequest : public AbstractModel
                {
                public:
                    ModifyAreaBanStatusRequest();
                    ~ModifyAreaBanStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改的域名
                     * @return Domain 需要修改的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要修改的域名
                     * @param _domain 需要修改的域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取状态值，0表示关闭，1表示开启
                     * @return Status 状态值，0表示关闭，1表示开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态值，0表示关闭，1表示开启
                     * @param _status 状态值，0表示关闭，1表示开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 需要修改的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 状态值，0表示关闭，1表示开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYAREABANSTATUSREQUEST_H_
