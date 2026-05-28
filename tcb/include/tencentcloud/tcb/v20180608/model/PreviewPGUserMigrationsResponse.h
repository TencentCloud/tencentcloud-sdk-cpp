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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PREVIEWPGUSERMIGRATIONSRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PREVIEWPGUSERMIGRATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MigrationPlanItem.h>
#include <tencentcloud/tcb/v20180608/model/MigrationConflict.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * PreviewPGUserMigrations返回参数结构体
                */
                class PreviewPGUserMigrationsResponse : public AbstractModel
                {
                public:
                    PreviewPGUserMigrationsResponse();
                    ~PreviewPGUserMigrationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>将要执行的migration列表</p>
                     * @return Pending <p>将要执行的migration列表</p>
                     * 
                     */
                    std::vector<MigrationPlanItem> GetPending() const;

                    /**
                     * 判断参数 Pending 是否已赋值
                     * @return Pending 是否已赋值
                     * 
                     */
                    bool PendingHasBeenSet() const;

                    /**
                     * 获取<p>已经应用的migration列表</p>
                     * @return Applied <p>已经应用的migration列表</p>
                     * 
                     */
                    std::vector<MigrationPlanItem> GetApplied() const;

                    /**
                     * 判断参数 Applied 是否已赋值
                     * @return Applied 是否已赋值
                     * 
                     */
                    bool AppliedHasBeenSet() const;

                    /**
                     * 获取<p>版本相同但 checksum 不一致冲突的migration列表</p>
                     * @return Conflicts <p>版本相同但 checksum 不一致冲突的migration列表</p>
                     * 
                     */
                    std::vector<MigrationConflict> GetConflicts() const;

                    /**
                     * 判断参数 Conflicts 是否已赋值
                     * @return Conflicts 是否已赋值
                     * 
                     */
                    bool ConflictsHasBeenSet() const;

                    /**
                     * 获取<p>是否可直接执行；当前仅表示没有 checksum 冲突</p>
                     * @return Executable <p>是否可直接执行；当前仅表示没有 checksum 冲突</p>
                     * 
                     */
                    bool GetExecutable() const;

                    /**
                     * 判断参数 Executable 是否已赋值
                     * @return Executable 是否已赋值
                     * 
                     */
                    bool ExecutableHasBeenSet() const;

                private:

                    /**
                     * <p>将要执行的migration列表</p>
                     */
                    std::vector<MigrationPlanItem> m_pending;
                    bool m_pendingHasBeenSet;

                    /**
                     * <p>已经应用的migration列表</p>
                     */
                    std::vector<MigrationPlanItem> m_applied;
                    bool m_appliedHasBeenSet;

                    /**
                     * <p>版本相同但 checksum 不一致冲突的migration列表</p>
                     */
                    std::vector<MigrationConflict> m_conflicts;
                    bool m_conflictsHasBeenSet;

                    /**
                     * <p>是否可直接执行；当前仅表示没有 checksum 冲突</p>
                     */
                    bool m_executable;
                    bool m_executableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PREVIEWPGUSERMIGRATIONSRESPONSE_H_
