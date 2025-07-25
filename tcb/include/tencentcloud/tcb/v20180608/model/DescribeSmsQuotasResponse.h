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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESMSQUOTASRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESMSQUOTASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/SmsFreeQuota.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeSmsQuotas返回参数结构体
                */
                class DescribeSmsQuotasResponse : public AbstractModel
                {
                public:
                    DescribeSmsQuotasResponse();
                    ~DescribeSmsQuotasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取短信免费量信息列表
                     * @return SmsFreeQuotaList 短信免费量信息列表
                     * 
                     */
                    std::vector<SmsFreeQuota> GetSmsFreeQuotaList() const;

                    /**
                     * 判断参数 SmsFreeQuotaList 是否已赋值
                     * @return SmsFreeQuotaList 是否已赋值
                     * 
                     */
                    bool SmsFreeQuotaListHasBeenSet() const;

                private:

                    /**
                     * 短信免费量信息列表
                     */
                    std::vector<SmsFreeQuota> m_smsFreeQuotaList;
                    bool m_smsFreeQuotaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBESMSQUOTASRESPONSE_H_
