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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHARERESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHARERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateSkillShare返回参数结构体
                */
                class CreateSkillShareResponse : public AbstractModel
                {
                public:
                    CreateSkillShareResponse();
                    ~CreateSkillShareResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否走了审批流（false表示无需审批已直接创建共享任务）</p>
                     * @return NeedApproval <p>是否走了审批流（false表示无需审批已直接创建共享任务）</p>
                     * 
                     */
                    bool GetNeedApproval() const;

                    /**
                     * 判断参数 NeedApproval 是否已赋值
                     * @return NeedApproval 是否已赋值
                     * 
                     */
                    bool NeedApprovalHasBeenSet() const;

                private:

                    /**
                     * <p>是否走了审批流（false表示无需审批已直接创建共享任务）</p>
                     */
                    bool m_needApproval;
                    bool m_needApprovalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLSHARERESPONSE_H_
