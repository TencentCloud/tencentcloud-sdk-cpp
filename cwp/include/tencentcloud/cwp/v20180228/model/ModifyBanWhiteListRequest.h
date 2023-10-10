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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANWHITELISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BanWhiteList.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBanWhiteList请求参数结构体
                */
                class ModifyBanWhiteListRequest : public AbstractModel
                {
                public:
                    ModifyBanWhiteListRequest();
                    ~ModifyBanWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改白名单规则项
                     * @return Rules 修改白名单规则项
                     * 
                     */
                    BanWhiteList GetRules() const;

                    /**
                     * 设置修改白名单规则项
                     * @param _rules 修改白名单规则项
                     * 
                     */
                    void SetRules(const BanWhiteList& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 修改白名单规则项
                     */
                    BanWhiteList m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBANWHITELISTREQUEST_H_
