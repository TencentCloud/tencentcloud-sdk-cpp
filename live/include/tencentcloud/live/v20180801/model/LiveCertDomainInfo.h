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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVECERTDOMAININFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVECERTDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 用作批量绑定域名和证书。
                */
                class LiveCertDomainInfo : public AbstractModel
                {
                public:
                    LiveCertDomainInfo();
                    ~LiveCertDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名。
                     * @return DomainName 域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名。
                     * @param _domainName 域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取是否启用域名的https规则。
1：启用
0：禁用
-1：保持不变
                     * @return Status 是否启用域名的https规则。
1：启用
0：禁用
-1：保持不变
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置是否启用域名的https规则。
1：启用
0：禁用
-1：保持不变
                     * @param _status 是否启用域名的https规则。
1：启用
0：禁用
-1：保持不变
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
                     * 域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 是否启用域名的https规则。
1：启用
0：禁用
-1：保持不变
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVECERTDOMAININFO_H_
