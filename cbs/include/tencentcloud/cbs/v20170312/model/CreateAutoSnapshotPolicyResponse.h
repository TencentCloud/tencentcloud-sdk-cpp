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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATEAUTOSNAPSHOTPOLICYRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATEAUTOSNAPSHOTPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateAutoSnapshotPolicy返回参数结构体
                */
                class CreateAutoSnapshotPolicyResponse : public AbstractModel
                {
                public:
                    CreateAutoSnapshotPolicyResponse();
                    ~CreateAutoSnapshotPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新创建的定期快照策略ID。
                     * @return AutoSnapshotPolicyId 新创建的定期快照策略ID。
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取首次开始备份的时间。
                     * @return NextTriggerTime 首次开始备份的时间。
                     * 
                     */
                    std::string GetNextTriggerTime() const;

                    /**
                     * 判断参数 NextTriggerTime 是否已赋值
                     * @return NextTriggerTime 是否已赋值
                     * 
                     */
                    bool NextTriggerTimeHasBeenSet() const;

                private:

                    /**
                     * 新创建的定期快照策略ID。
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 首次开始备份的时间。
                     */
                    std::string m_nextTriggerTime;
                    bool m_nextTriggerTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATEAUTOSNAPSHOTPOLICYRESPONSE_H_
