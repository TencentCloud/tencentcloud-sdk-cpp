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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYLOGINWHITELISTREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYLOGINWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/LoginWhiteListsRule.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyLoginWhiteList请求参数结构体
                */
                class ModifyLoginWhiteListRequest : public AbstractModel
                {
                public:
                    ModifyLoginWhiteListRequest();
                    ~ModifyLoginWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白名单规则
                     * @return Rules 白名单规则
                     * 
                     */
                    LoginWhiteListsRule GetRules() const;

                    /**
                     * 设置白名单规则
                     * @param _rules 白名单规则
                     * 
                     */
                    void SetRules(const LoginWhiteListsRule& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 白名单规则
                     */
                    LoginWhiteListsRule m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYLOGINWHITELISTREQUEST_H_
