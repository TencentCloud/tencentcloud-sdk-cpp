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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_GETDISTRIBUTEBILLDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_GETDISTRIBUTEBILLDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * GetDistributeBillDownloadUrl请求参数结构体
                */
                class GetDistributeBillDownloadUrlRequest : public AbstractModel
                {
                public:
                    GetDistributeBillDownloadUrlRequest();
                    ~GetDistributeBillDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收单系统分配的开放ID
                     * @return OpenId 收单系统分配的开放ID
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置收单系统分配的开放ID
                     * @param _openId 收单系统分配的开放ID
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取收单系统分配的密钥
                     * @return OpenKey 收单系统分配的密钥
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置收单系统分配的密钥
                     * @param _openKey 收单系统分配的密钥
                     * 
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     * 
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取分账日期（YYYYMMDD，今天传昨天的日期）
                     * @return Day 分账日期（YYYYMMDD，今天传昨天的日期）
                     * 
                     */
                    std::string GetDay() const;

                    /**
                     * 设置分账日期（YYYYMMDD，今天传昨天的日期）
                     * @param _day 分账日期（YYYYMMDD，今天传昨天的日期）
                     * 
                     */
                    void SetDay(const std::string& _day);

                    /**
                     * 判断参数 Day 是否已赋值
                     * @return Day 是否已赋值
                     * 
                     */
                    bool DayHasBeenSet() const;

                private:

                    /**
                     * 收单系统分配的开放ID
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 收单系统分配的密钥
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 分账日期（YYYYMMDD，今天传昨天的日期）
                     */
                    std::string m_day;
                    bool m_dayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_GETDISTRIBUTEBILLDOWNLOADURLREQUEST_H_
