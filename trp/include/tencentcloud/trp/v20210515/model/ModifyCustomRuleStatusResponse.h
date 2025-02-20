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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCUSTOMRULESTATUSRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCUSTOMRULESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * ModifyCustomRuleStatus返回参数结构体
                */
                class ModifyCustomRuleStatusResponse : public AbstractModel
                {
                public:
                    ModifyCustomRuleStatusResponse();
                    ~ModifyCustomRuleStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取码规则ID
                     * @return CustomId 码规则ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                private:

                    /**
                     * 码规则ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYCUSTOMRULESTATUSRESPONSE_H_
