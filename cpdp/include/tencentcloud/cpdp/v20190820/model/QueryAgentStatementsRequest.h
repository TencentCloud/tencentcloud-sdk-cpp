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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYAGENTSTATEMENTSREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYAGENTSTATEMENTSREQUEST_H_

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
                * QueryAgentStatements请求参数结构体
                */
                class QueryAgentStatementsRequest : public AbstractModel
                {
                public:
                    QueryAgentStatementsRequest();
                    ~QueryAgentStatementsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取结算单日期，月结算单填每月1日
                     * @return Date 结算单日期，月结算单填每月1日
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置结算单日期，月结算单填每月1日
                     * @param _date 结算单日期，月结算单填每月1日
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取日结算单:daily
月结算单:monthly
                     * @return Type 日结算单:daily
月结算单:monthly
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置日结算单:daily
月结算单:monthly
                     * @param _type 日结算单:daily
月结算单:monthly
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 结算单日期，月结算单填每月1日
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 日结算单:daily
月结算单:monthly
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYAGENTSTATEMENTSREQUEST_H_
