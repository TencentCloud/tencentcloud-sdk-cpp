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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEQUOTASRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEQUOTASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/GeneralResourceQuotaSet.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeQuotas返回参数结构体
                */
                class DescribeQuotasResponse : public AbstractModel
                {
                public:
                    DescribeQuotasResponse();
                    ~DescribeQuotasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源额度列表
                     * @return GeneralResourceQuotaSet 资源额度列表
                     * 
                     */
                    std::vector<GeneralResourceQuotaSet> GetGeneralResourceQuotaSet() const;

                    /**
                     * 判断参数 GeneralResourceQuotaSet 是否已赋值
                     * @return GeneralResourceQuotaSet 是否已赋值
                     * 
                     */
                    bool GeneralResourceQuotaSetHasBeenSet() const;

                private:

                    /**
                     * 资源额度列表
                     */
                    std::vector<GeneralResourceQuotaSet> m_generalResourceQuotaSet;
                    bool m_generalResourceQuotaSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEQUOTASRESPONSE_H_
