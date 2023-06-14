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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEACCTRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEACCTRESPONSE_H_

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
                * CreateAcct返回参数结构体
                */
                class CreateAcctResponse : public AbstractModel
                {
                public:
                    CreateAcctResponse();
                    ~CreateAcctResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫计费SubAppId，代表子商户
                     * @return SubAppId 聚鑫计费SubAppId，代表子商户
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取银行生成的子商户账户
                     * @return SubAcctNo 银行生成的子商户账户
                     * 
                     */
                    std::string GetSubAcctNo() const;

                    /**
                     * 判断参数 SubAcctNo 是否已赋值
                     * @return SubAcctNo 是否已赋值
                     * 
                     */
                    bool SubAcctNoHasBeenSet() const;

                private:

                    /**
                     * 聚鑫计费SubAppId，代表子商户
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 银行生成的子商户账户
                     */
                    std::string m_subAcctNo;
                    bool m_subAcctNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEACCTRESPONSE_H_
