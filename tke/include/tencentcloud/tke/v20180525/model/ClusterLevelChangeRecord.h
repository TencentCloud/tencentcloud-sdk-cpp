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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELCHANGERECORD_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELCHANGERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群等级变配记录
                */
                class ClusterLevelChangeRecord : public AbstractModel
                {
                public:
                    ClusterLevelChangeRecord();
                    ~ClusterLevelChangeRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录ID
                     * @return ID 记录ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置记录ID
                     * @param _iD 记录ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取变配状态：trading 发货中,upgrading 变配中,success 变配成功,failed 变配失败。
                     * @return Status 变配状态：trading 发货中,upgrading 变配中,success 变配成功,failed 变配失败。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置变配状态：trading 发货中,upgrading 变配中,success 变配成功,failed 变配失败。
                     * @param _status 变配状态：trading 发货中,upgrading 变配中,success 变配成功,failed 变配失败。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return Message 状态描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置状态描述
                     * @param _message 状态描述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取变配前规模
                     * @return OldLevel 变配前规模
                     * 
                     */
                    std::string GetOldLevel() const;

                    /**
                     * 设置变配前规模
                     * @param _oldLevel 变配前规模
                     * 
                     */
                    void SetOldLevel(const std::string& _oldLevel);

                    /**
                     * 判断参数 OldLevel 是否已赋值
                     * @return OldLevel 是否已赋值
                     * 
                     */
                    bool OldLevelHasBeenSet() const;

                    /**
                     * 获取变配后规模
                     * @return NewLevel 变配后规模
                     * 
                     */
                    std::string GetNewLevel() const;

                    /**
                     * 设置变配后规模
                     * @param _newLevel 变配后规模
                     * 
                     */
                    void SetNewLevel(const std::string& _newLevel);

                    /**
                     * 判断参数 NewLevel 是否已赋值
                     * @return NewLevel 是否已赋值
                     * 
                     */
                    bool NewLevelHasBeenSet() const;

                    /**
                     * 获取变配触发类型：manual 手动,auto 自动
                     * @return TriggerType 变配触发类型：manual 手动,auto 自动
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置变配触发类型：manual 手动,auto 自动
                     * @param _triggerType 变配触发类型：manual 手动,auto 自动
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartedAt 开始时间
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置开始时间
                     * @param _startedAt 开始时间
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndedAt 结束时间
                     * 
                     */
                    std::string GetEndedAt() const;

                    /**
                     * 设置结束时间
                     * @param _endedAt 结束时间
                     * 
                     */
                    void SetEndedAt(const std::string& _endedAt);

                    /**
                     * 判断参数 EndedAt 是否已赋值
                     * @return EndedAt 是否已赋值
                     * 
                     */
                    bool EndedAtHasBeenSet() const;

                private:

                    /**
                     * 记录ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 变配状态：trading 发货中,upgrading 变配中,success 变配成功,failed 变配失败。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 变配前规模
                     */
                    std::string m_oldLevel;
                    bool m_oldLevelHasBeenSet;

                    /**
                     * 变配后规模
                     */
                    std::string m_newLevel;
                    bool m_newLevelHasBeenSet;

                    /**
                     * 变配触发类型：manual 手动,auto 自动
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endedAt;
                    bool m_endedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERLEVELCHANGERECORD_H_
