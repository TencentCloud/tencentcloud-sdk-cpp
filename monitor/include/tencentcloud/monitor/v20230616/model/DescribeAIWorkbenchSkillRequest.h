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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSKILLREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSKILLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAIWorkbenchSkill请求参数结构体
                */
                class DescribeAIWorkbenchSkillRequest : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchSkillRequest();
                    ~DescribeAIWorkbenchSkillRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>技能 ID</p>
                     * @return SkillId <p>技能 ID</p>
                     * 
                     */
                    std::string GetSkillId() const;

                    /**
                     * 设置<p>技能 ID</p>
                     * @param _skillId <p>技能 ID</p>
                     * 
                     */
                    void SetSkillId(const std::string& _skillId);

                    /**
                     * 判断参数 SkillId 是否已赋值
                     * @return SkillId 是否已赋值
                     * 
                     */
                    bool SkillIdHasBeenSet() const;

                private:

                    /**
                     * <p>技能 ID</p>
                     */
                    std::string m_skillId;
                    bool m_skillIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSKILLREQUEST_H_
