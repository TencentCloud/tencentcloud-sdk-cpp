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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHJOBVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHJOBVO_H_

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
                * 操作列表实体类
                */
                class BatchJobVO : public AbstractModel
                {
                public:
                    BatchJobVO();
                    ~BatchJobVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 批量操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 设置批量操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 批量操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const int64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取批量操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobType 批量操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置批量操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobType 批量操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取状态
初始状态：INIT;运行中：RUNNING;成功：SUCCESS;失败：FAIL;部分成功PART_SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
初始状态：INIT;运行中：RUNNING;成功：SUCCESS;失败：FAIL;部分成功PART_SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
初始状态：INIT;运行中：RUNNING;成功：SUCCESS;失败：FAIL;部分成功PART_SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
初始状态：INIT;运行中：RUNNING;成功：SUCCESS;失败：FAIL;部分成功PART_SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取操作人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerId 操作人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerId() const;

                    /**
                     * 设置操作人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerId 操作人Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerId(const std::string& _ownerId);

                    /**
                     * 判断参数 OwnerId 是否已赋值
                     * @return OwnerId 是否已赋值
                     * 
                     */
                    bool OwnerIdHasBeenSet() const;

                private:

                    /**
                     * 批量操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 批量操作类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 状态
初始状态：INIT;运行中：RUNNING;成功：SUCCESS;失败：FAIL;部分成功PART_SUCCESS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 操作人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 操作人Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerId;
                    bool m_ownerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHJOBVO_H_
