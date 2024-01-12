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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_QUERYCPTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_QUERYCPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * QueryCPT请求参数结构体
                */
                class QueryCPTRequest : public AbstractModel
                {
                public:
                    QueryCPTRequest();
                    ~QueryCPTRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DID应用id
                     * @return DAPId DID应用id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用id
                     * @param _dAPId DID应用id
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                    /**
                     * 获取凭证模板id
                     * @return CPTId 凭证模板id
                     * 
                     */
                    int64_t GetCPTId() const;

                    /**
                     * 设置凭证模板id
                     * @param _cPTId 凭证模板id
                     * 
                     */
                    void SetCPTId(const int64_t& _cPTId);

                    /**
                     * 判断参数 CPTId 是否已赋值
                     * @return CPTId 是否已赋值
                     * 
                     */
                    bool CPTIdHasBeenSet() const;

                private:

                    /**
                     * DID应用id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * 凭证模板id
                     */
                    int64_t m_cPTId;
                    bool m_cPTIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_QUERYCPTREQUEST_H_
