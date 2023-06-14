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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ResponseQueryContract.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryContract返回参数结构体
                */
                class QueryContractResponse : public AbstractModel
                {
                public:
                    QueryContractResponse();
                    ~QueryContractResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取签约数据
                     * @return ContractData 签约数据
                     * 
                     */
                    ResponseQueryContract GetContractData() const;

                    /**
                     * 判断参数 ContractData 是否已赋值
                     * @return ContractData 是否已赋值
                     * 
                     */
                    bool ContractDataHasBeenSet() const;

                    /**
                     * 获取请求处理信息
                     * @return Msg 请求处理信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 签约数据
                     */
                    ResponseQueryContract m_contractData;
                    bool m_contractDataHasBeenSet;

                    /**
                     * 请求处理信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCONTRACTRESPONSE_H_
