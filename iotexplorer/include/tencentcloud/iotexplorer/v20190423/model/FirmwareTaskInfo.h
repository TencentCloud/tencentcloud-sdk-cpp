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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FIRMWARETASKINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FIRMWARETASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 固件升级任务信息
                */
                class FirmwareTaskInfo : public AbstractModel
                {
                public:
                    FirmwareTaskInfo();
                    ~FirmwareTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorNickName 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorNickName() const;

                    /**
                     * 设置创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorNickName 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorNickName(const std::string& _creatorNickName);

                    /**
                     * 判断参数 CreatorNickName 是否已赋值
                     * @return CreatorNickName 是否已赋值
                     * 
                     */
                    bool CreatorNickNameHasBeenSet() const;

                    /**
                     * 获取创建者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateUserId 创建者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateUserId() const;

                    /**
                     * 设置创建者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createUserId 创建者ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateUserId(const int64_t& _createUserId);

                    /**
                     * 判断参数 CreateUserId 是否已赋值
                     * @return CreateUserId 是否已赋值
                     * 
                     */
                    bool CreateUserIdHasBeenSet() const;

                    /**
                     * 获取任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronTime 任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCronTime() const;

                    /**
                     * 设置任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cronTime 任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCronTime(const int64_t& _cronTime);

                    /**
                     * 判断参数 CronTime 是否已赋值
                     * @return CronTime 是否已赋值
                     * 
                     */
                    bool CronTimeHasBeenSet() const;

                    /**
                     * 获取固件类型
                     * @return FwType 固件类型
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置固件类型
                     * @param _fwType 固件类型
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorNickName;
                    bool m_creatorNickNameHasBeenSet;

                    /**
                     * 创建者ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createUserId;
                    bool m_createUserIdHasBeenSet;

                    /**
                     * 任务启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cronTime;
                    bool m_cronTimeHasBeenSet;

                    /**
                     * 固件类型
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FIRMWARETASKINFO_H_
