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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELOCKRESP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELOCKRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 查询数据开发资源锁状态响应
                */
                class DescribeLockResp : public AbstractModel
                {
                public:
                    DescribeLockResp();
                    ~DescribeLockResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取锁持有人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockerId 锁持有人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLockerId() const;

                    /**
                     * 设置锁持有人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockerId 锁持有人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockerId(const int64_t& _lockerId);

                    /**
                     * 判断参数 LockerId 是否已赋值
                     * @return LockerId 是否已赋值
                     * 
                     */
                    bool LockerIdHasBeenSet() const;

                    /**
                     * 获取锁持有人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockerName 锁持有人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLockerName() const;

                    /**
                     * 设置锁持有人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockerName 锁持有人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockerName(const std::string& _lockerName);

                    /**
                     * 判断参数 LockerName 是否已赋值
                     * @return LockerName 是否已赋值
                     * 
                     */
                    bool LockerNameHasBeenSet() const;

                    /**
                     * 获取资源路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePath 资源路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourcePath() const;

                    /**
                     * 设置资源路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePath 资源路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePath(const std::string& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                    /**
                     * 获取持有锁标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockedByMe 持有锁标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetLockedByMe() const;

                    /**
                     * 设置持有锁标志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockedByMe 持有锁标志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockedByMe(const bool& _lockedByMe);

                    /**
                     * 判断参数 LockedByMe 是否已赋值
                     * @return LockedByMe 是否已赋值
                     * 
                     */
                    bool LockedByMeHasBeenSet() const;

                    /**
                     * 获取锁定时间时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LockTime 锁定时间时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLockTime() const;

                    /**
                     * 设置锁定时间时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lockTime 锁定时间时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLockTime(const int64_t& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                private:

                    /**
                     * 锁持有人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lockerId;
                    bool m_lockerIdHasBeenSet;

                    /**
                     * 锁持有人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lockerName;
                    bool m_lockerNameHasBeenSet;

                    /**
                     * 资源路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                    /**
                     * 持有锁标志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_lockedByMe;
                    bool m_lockedByMeHasBeenSet;

                    /**
                     * 锁定时间时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lockTime;
                    bool m_lockTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBELOCKRESP_H_
