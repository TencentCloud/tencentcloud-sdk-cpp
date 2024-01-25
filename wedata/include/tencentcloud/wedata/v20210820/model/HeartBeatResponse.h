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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_HEARTBEATRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_HEARTBEATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * HeartBeat返回参数结构体
                */
                class HeartBeatResponse : public AbstractModel
                {
                public:
                    HeartBeatResponse();
                    ~HeartBeatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源唯一路径
                     * @return ResourcePath 资源唯一路径
                     * 
                     */
                    std::string GetResourcePath() const;

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                    /**
                     * 获取锁持有者id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockerId 锁持有者id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLockerId() const;

                    /**
                     * 判断参数 LockerId 是否已赋值
                     * @return LockerId 是否已赋值
                     * 
                     */
                    bool LockerIdHasBeenSet() const;

                    /**
                     * 获取锁持有者displayName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockerName 锁持有者displayName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLockerName() const;

                    /**
                     * 判断参数 LockerName 是否已赋值
                     * @return LockerName 是否已赋值
                     * 
                     */
                    bool LockerNameHasBeenSet() const;

                    /**
                     * 获取偷锁标志（有人偷锁为true）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StealFlag 偷锁标志（有人偷锁为true）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetStealFlag() const;

                    /**
                     * 判断参数 StealFlag 是否已赋值
                     * @return StealFlag 是否已赋值
                     * 
                     */
                    bool StealFlagHasBeenSet() const;

                    /**
                     * 获取持有锁标志（true表示被自己锁定）
                     * @return LockedByMe 持有锁标志（true表示被自己锁定）
                     * 
                     */
                    bool GetLockedByMe() const;

                    /**
                     * 判断参数 LockedByMe 是否已赋值
                     * @return LockedByMe 是否已赋值
                     * 
                     */
                    bool LockedByMeHasBeenSet() const;

                    /**
                     * 获取资源是否被锁定
                     * @return Locked 资源是否被锁定
                     * 
                     */
                    bool GetLocked() const;

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取资源是否正在被编辑
                     * @return EditFlag 资源是否正在被编辑
                     * 
                     */
                    bool GetEditFlag() const;

                    /**
                     * 判断参数 EditFlag 是否已赋值
                     * @return EditFlag 是否已赋值
                     * 
                     */
                    bool EditFlagHasBeenSet() const;

                    /**
                     * 获取资源被锁定时间的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockTime 资源被锁定时间的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLockTime() const;

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                private:

                    /**
                     * 资源唯一路径
                     */
                    std::string m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                    /**
                     * 锁持有者id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lockerId;
                    bool m_lockerIdHasBeenSet;

                    /**
                     * 锁持有者displayName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lockerName;
                    bool m_lockerNameHasBeenSet;

                    /**
                     * 偷锁标志（有人偷锁为true）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_stealFlag;
                    bool m_stealFlagHasBeenSet;

                    /**
                     * 持有锁标志（true表示被自己锁定）
                     */
                    bool m_lockedByMe;
                    bool m_lockedByMeHasBeenSet;

                    /**
                     * 资源是否被锁定
                     */
                    bool m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 资源是否正在被编辑
                     */
                    bool m_editFlag;
                    bool m_editFlagHasBeenSet;

                    /**
                     * 资源被锁定时间的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lockTime;
                    bool m_lockTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_HEARTBEATRESPONSE_H_
