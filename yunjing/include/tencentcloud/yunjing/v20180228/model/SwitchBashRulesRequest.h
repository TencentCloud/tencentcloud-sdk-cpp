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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_SWITCHBASHRULESREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_SWITCHBASHRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SwitchBashRules请求参数结构体
                */
                class SwitchBashRulesRequest : public AbstractModel
                {
                public:
                    SwitchBashRulesRequest();
                    ~SwitchBashRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID
                     * @return Id 规则ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID
                     * @param _id 规则ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否禁用
                     * @return Disabled 是否禁用
                     * 
                     */
                    uint64_t GetDisabled() const;

                    /**
                     * 设置是否禁用
                     * @param _disabled 是否禁用
                     * 
                     */
                    void SetDisabled(const uint64_t& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否禁用
                     */
                    uint64_t m_disabled;
                    bool m_disabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_SWITCHBASHRULESREQUEST_H_
