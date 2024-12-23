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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACATEGORYRULESRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACATEGORYRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/CategoryRule.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPACategoryRules返回参数结构体
                */
                class DescribeDSPACategoryRulesResponse : public AbstractModel
                {
                public:
                    DescribeDSPACategoryRulesResponse();
                    ~DescribeDSPACategoryRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分类规则信息
                     * @return CategoryRules 分类规则信息
                     * 
                     */
                    std::vector<CategoryRule> GetCategoryRules() const;

                    /**
                     * 判断参数 CategoryRules 是否已赋值
                     * @return CategoryRules 是否已赋值
                     * 
                     */
                    bool CategoryRulesHasBeenSet() const;

                private:

                    /**
                     * 分类规则信息
                     */
                    std::vector<CategoryRule> m_categoryRules;
                    bool m_categoryRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACATEGORYRULESRESPONSE_H_
