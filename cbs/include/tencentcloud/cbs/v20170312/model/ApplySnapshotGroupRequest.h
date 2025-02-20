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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTGROUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/ApplyDisk.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ApplySnapshotGroup请求参数结构体
                */
                class ApplySnapshotGroupRequest : public AbstractModel
                {
                public:
                    ApplySnapshotGroupRequest();
                    ~ApplySnapshotGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取回滚的快照组ID。
                     * @return SnapshotGroupId 回滚的快照组ID。
                     * 
                     */
                    std::string GetSnapshotGroupId() const;

                    /**
                     * 设置回滚的快照组ID。
                     * @param _snapshotGroupId 回滚的快照组ID。
                     * 
                     */
                    void SetSnapshotGroupId(const std::string& _snapshotGroupId);

                    /**
                     * 判断参数 SnapshotGroupId 是否已赋值
                     * @return SnapshotGroupId 是否已赋值
                     * 
                     */
                    bool SnapshotGroupIdHasBeenSet() const;

                    /**
                     * 获取回滚的快照组关联的快照ID，及快照对应的原云硬盘ID列表。
                     * @return ApplyDisks 回滚的快照组关联的快照ID，及快照对应的原云硬盘ID列表。
                     * 
                     */
                    std::vector<ApplyDisk> GetApplyDisks() const;

                    /**
                     * 设置回滚的快照组关联的快照ID，及快照对应的原云硬盘ID列表。
                     * @param _applyDisks 回滚的快照组关联的快照ID，及快照对应的原云硬盘ID列表。
                     * 
                     */
                    void SetApplyDisks(const std::vector<ApplyDisk>& _applyDisks);

                    /**
                     * 判断参数 ApplyDisks 是否已赋值
                     * @return ApplyDisks 是否已赋值
                     * 
                     */
                    bool ApplyDisksHasBeenSet() const;

                    /**
                     * 获取回滚前是否执行自动关机。
                     * @return AutoStopInstance 回滚前是否执行自动关机。
                     * 
                     */
                    bool GetAutoStopInstance() const;

                    /**
                     * 设置回滚前是否执行自动关机。
                     * @param _autoStopInstance 回滚前是否执行自动关机。
                     * 
                     */
                    void SetAutoStopInstance(const bool& _autoStopInstance);

                    /**
                     * 判断参数 AutoStopInstance 是否已赋值
                     * @return AutoStopInstance 是否已赋值
                     * 
                     */
                    bool AutoStopInstanceHasBeenSet() const;

                    /**
                     * 获取回滚完成后是否自动开机。
                     * @return AutoStartInstance 回滚完成后是否自动开机。
                     * 
                     */
                    bool GetAutoStartInstance() const;

                    /**
                     * 设置回滚完成后是否自动开机。
                     * @param _autoStartInstance 回滚完成后是否自动开机。
                     * 
                     */
                    void SetAutoStartInstance(const bool& _autoStartInstance);

                    /**
                     * 判断参数 AutoStartInstance 是否已赋值
                     * @return AutoStartInstance 是否已赋值
                     * 
                     */
                    bool AutoStartInstanceHasBeenSet() const;

                private:

                    /**
                     * 回滚的快照组ID。
                     */
                    std::string m_snapshotGroupId;
                    bool m_snapshotGroupIdHasBeenSet;

                    /**
                     * 回滚的快照组关联的快照ID，及快照对应的原云硬盘ID列表。
                     */
                    std::vector<ApplyDisk> m_applyDisks;
                    bool m_applyDisksHasBeenSet;

                    /**
                     * 回滚前是否执行自动关机。
                     */
                    bool m_autoStopInstance;
                    bool m_autoStopInstanceHasBeenSet;

                    /**
                     * 回滚完成后是否自动开机。
                     */
                    bool m_autoStartInstance;
                    bool m_autoStartInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTGROUPREQUEST_H_
