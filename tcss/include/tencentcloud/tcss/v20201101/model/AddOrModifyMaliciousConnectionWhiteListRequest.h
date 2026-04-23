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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYMALICIOUSCONNECTIONWHITELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYMALICIOUSCONNECTIONWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddOrModifyMaliciousConnectionWhiteList请求参数结构体
                */
                class AddOrModifyMaliciousConnectionWhiteListRequest : public AbstractModel
                {
                public:
                    AddOrModifyMaliciousConnectionWhiteListRequest();
                    ~AddOrModifyMaliciousConnectionWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取枚举
IP: IP
域名：DOMAIN
                     * @return RequestType 枚举
IP: IP
域名：DOMAIN
                     * 
                     */
                    std::string GetRequestType() const;

                    /**
                     * 设置枚举
IP: IP
域名：DOMAIN
                     * @param _requestType 枚举
IP: IP
域名：DOMAIN
                     * 
                     */
                    void SetRequestType(const std::string& _requestType);

                    /**
                     * 判断参数 RequestType 是否已赋值
                     * @return RequestType 是否已赋值
                     * 
                     */
                    bool RequestTypeHasBeenSet() const;

                    /**
                     * 获取白名单域名
                     * @return WhiteDomainList 白名单域名
                     * 
                     */
                    std::vector<std::string> GetWhiteDomainList() const;

                    /**
                     * 设置白名单域名
                     * @param _whiteDomainList 白名单域名
                     * 
                     */
                    void SetWhiteDomainList(const std::vector<std::string>& _whiteDomainList);

                    /**
                     * 判断参数 WhiteDomainList 是否已赋值
                     * @return WhiteDomainList 是否已赋值
                     * 
                     */
                    bool WhiteDomainListHasBeenSet() const;

                    /**
                     * 获取白名单IP
                     * @return WhiteIPList 白名单IP
                     * 
                     */
                    std::vector<std::string> GetWhiteIPList() const;

                    /**
                     * 设置白名单IP
                     * @param _whiteIPList 白名单IP
                     * 
                     */
                    void SetWhiteIPList(const std::vector<std::string>& _whiteIPList);

                    /**
                     * 判断参数 WhiteIPList 是否已赋值
                     * @return WhiteIPList 是否已赋值
                     * 
                     */
                    bool WhiteIPListHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取白名单记录id，只有修改时需要
                     * @return ID 白名单记录id，只有修改时需要
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置白名单记录id，只有修改时需要
                     * @param _iD 白名单记录id，只有修改时需要
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 枚举
IP: IP
域名：DOMAIN
                     */
                    std::string m_requestType;
                    bool m_requestTypeHasBeenSet;

                    /**
                     * 白名单域名
                     */
                    std::vector<std::string> m_whiteDomainList;
                    bool m_whiteDomainListHasBeenSet;

                    /**
                     * 白名单IP
                     */
                    std::vector<std::string> m_whiteIPList;
                    bool m_whiteIPListHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 白名单记录id，只有修改时需要
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDORMODIFYMALICIOUSCONNECTIONWHITELISTREQUEST_H_
