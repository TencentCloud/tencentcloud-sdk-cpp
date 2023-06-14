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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERBINDREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERBINDREQUEST_H_

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
                * QueryMemberBind请求参数结构体
                */
                class QueryMemberBindRequest : public AbstractModel
                {
                public:
                    QueryMemberBindRequest();
                    ~QueryMemberBindRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取String(22)，商户号（签约客户号）
                     * @return MrchCode String(22)，商户号（签约客户号）
                     * 
                     */
                    std::string GetMrchCode() const;

                    /**
                     * 设置String(22)，商户号（签约客户号）
                     * @param _mrchCode String(22)，商户号（签约客户号）
                     * 
                     */
                    void SetMrchCode(const std::string& _mrchCode);

                    /**
                     * 判断参数 MrchCode 是否已赋值
                     * @return MrchCode 是否已赋值
                     * 
                     */
                    bool MrchCodeHasBeenSet() const;

                    /**
                     * 获取STRING(4)，查询标志（1: 全部会员; 2: 单个会员; 3: 单个会员的证件信息）
                     * @return QueryFlag STRING(4)，查询标志（1: 全部会员; 2: 单个会员; 3: 单个会员的证件信息）
                     * 
                     */
                    std::string GetQueryFlag() const;

                    /**
                     * 设置STRING(4)，查询标志（1: 全部会员; 2: 单个会员; 3: 单个会员的证件信息）
                     * @param _queryFlag STRING(4)，查询标志（1: 全部会员; 2: 单个会员; 3: 单个会员的证件信息）
                     * 
                     */
                    void SetQueryFlag(const std::string& _queryFlag);

                    /**
                     * 判断参数 QueryFlag 是否已赋值
                     * @return QueryFlag 是否已赋值
                     * 
                     */
                    bool QueryFlagHasBeenSet() const;

                    /**
                     * 获取STRING (10)，页码（起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照建立时间的先后）
                     * @return PageNum STRING (10)，页码（起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照建立时间的先后）
                     * 
                     */
                    std::string GetPageNum() const;

                    /**
                     * 设置STRING (10)，页码（起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照建立时间的先后）
                     * @param _pageNum STRING (10)，页码（起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照建立时间的先后）
                     * 
                     */
                    void SetPageNum(const std::string& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取STRING(50)，见证子账户的账号（若SelectFlag为2或3时，子账户账号必输）
                     * @return SubAcctNo STRING(50)，见证子账户的账号（若SelectFlag为2或3时，子账户账号必输）
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 设置STRING(50)，见证子账户的账号（若SelectFlag为2或3时，子账户账号必输）
                     * @param _subAcctNo STRING(50)，见证子账户的账号（若SelectFlag为2或3时，子账户账号必输）
                     * 
                     */
                    void SetSubAcctNo(const std::string& _subAcctNo);

                    /**
                     * 判断参数 SubAcctNo 是否已赋值
                     * @return SubAcctNo 是否已赋值
                     * 
                     */
                    bool SubAcctNoHasBeenSet() const;

                    /**
                     * 获取STRING(1027)，保留域
                     * @return ReservedMsg STRING(1027)，保留域
                     * 
                     */
                    std::string GetReservedMsg() const;

                    /**
                     * 设置STRING(1027)，保留域
                     * @param _reservedMsg STRING(1027)，保留域
                     * 
                     */
                    void SetReservedMsg(const std::string& _reservedMsg);

                    /**
                     * 判断参数 ReservedMsg 是否已赋值
                     * @return ReservedMsg 是否已赋值
                     * 
                     */
                    bool ReservedMsgHasBeenSet() const;

                    /**
                     * 获取STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * @return Profile STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * @param _profile STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * String(22)，商户号（签约客户号）
                     */
                    std::string m_mrchCode;
                    bool m_mrchCodeHasBeenSet;

                    /**
                     * STRING(4)，查询标志（1: 全部会员; 2: 单个会员; 3: 单个会员的证件信息）
                     */
                    std::string m_queryFlag;
                    bool m_queryFlagHasBeenSet;

                    /**
                     * STRING (10)，页码（起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照建立时间的先后）
                     */
                    std::string m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * STRING(50)，见证子账户的账号（若SelectFlag为2或3时，子账户账号必输）
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                    /**
                     * STRING(1027)，保留域
                     */
                    std::string m_reservedMsg;
                    bool m_reservedMsgHasBeenSet;

                    /**
                     * STRING(12)，接入环境，默认接入沙箱环境。接入正式环境填"prod"
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMEMBERBINDREQUEST_H_
