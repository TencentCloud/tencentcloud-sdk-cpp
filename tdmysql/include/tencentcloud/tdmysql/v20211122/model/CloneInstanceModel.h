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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CLONEINSTANCEMODEL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CLONEINSTANCEMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * 克隆实例对象
                */
                class CloneInstanceModel : public AbstractModel
                {
                public:
                    CloneInstanceModel();
                    ~CloneInstanceModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取克隆任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneEndTime 克隆任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloneEndTime() const;

                    /**
                     * 设置克隆任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneEndTime 克隆任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneEndTime(const std::string& _cloneEndTime);

                    /**
                     * 判断参数 CloneEndTime 是否已赋值
                     * @return CloneEndTime 是否已赋值
                     * 
                     */
                    bool CloneEndTimeHasBeenSet() const;

                    /**
                     * 获取克隆记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneId 克隆记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCloneId() const;

                    /**
                     * 设置克隆记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneId 克隆记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneId(const int64_t& _cloneId);

                    /**
                     * 判断参数 CloneId 是否已赋值
                     * @return CloneId 是否已赋值
                     * 
                     */
                    bool CloneIdHasBeenSet() const;

                    /**
                     * 获取克隆实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneInsType 克隆实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloneInsType() const;

                    /**
                     * 设置克隆实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneInsType 克隆实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneInsType(const std::string& _cloneInsType);

                    /**
                     * 判断参数 CloneInsType 是否已赋值
                     * @return CloneInsType 是否已赋值
                     * 
                     */
                    bool CloneInsTypeHasBeenSet() const;

                    /**
                     * 获取克隆实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneInstanceId 克隆实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloneInstanceId() const;

                    /**
                     * 设置克隆实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneInstanceId 克隆实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneInstanceId(const std::string& _cloneInstanceId);

                    /**
                     * 判断参数 CloneInstanceId 是否已赋值
                     * @return CloneInstanceId 是否已赋值
                     * 
                     */
                    bool CloneInstanceIdHasBeenSet() const;

                    /**
                     * 获取克隆实例是否已经删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneInstanceIsDeleted 克隆实例是否已经删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCloneInstanceIsDeleted() const;

                    /**
                     * 设置克隆实例是否已经删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneInstanceIsDeleted 克隆实例是否已经删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneInstanceIsDeleted(const bool& _cloneInstanceIsDeleted);

                    /**
                     * 判断参数 CloneInstanceIsDeleted 是否已赋值
                     * @return CloneInstanceIsDeleted 是否已赋值
                     * 
                     */
                    bool CloneInstanceIsDeletedHasBeenSet() const;

                    /**
                     * 获取克隆任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneProgress 克隆任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCloneProgress() const;

                    /**
                     * 设置克隆任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneProgress 克隆任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneProgress(const double& _cloneProgress);

                    /**
                     * 判断参数 CloneProgress 是否已赋值
                     * @return CloneProgress 是否已赋值
                     * 
                     */
                    bool CloneProgressHasBeenSet() const;

                    /**
                     * 获取克隆任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneStartTime 克隆任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloneStartTime() const;

                    /**
                     * 设置克隆任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneStartTime 克隆任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneStartTime(const std::string& _cloneStartTime);

                    /**
                     * 判断参数 CloneStartTime 是否已赋值
                     * @return CloneStartTime 是否已赋值
                     * 
                     */
                    bool CloneStartTimeHasBeenSet() const;

                    /**
                     * 获取克隆任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneStatus 克隆任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloneStatus() const;

                    /**
                     * 设置克隆任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneStatus 克隆任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneStatus(const std::string& _cloneStatus);

                    /**
                     * 判断参数 CloneStatus 是否已赋值
                     * @return CloneStatus 是否已赋值
                     * 
                     */
                    bool CloneStatusHasBeenSet() const;

                    /**
                     * 获取克隆时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneTime 克隆时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloneTime() const;

                    /**
                     * 设置克隆时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneTime 克隆时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneTime(const std::string& _cloneTime);

                    /**
                     * 判断参数 CloneTime 是否已赋值
                     * @return CloneTime 是否已赋值
                     * 
                     */
                    bool CloneTimeHasBeenSet() const;

                    /**
                     * 获取克隆类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloneType 克隆类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCloneType() const;

                    /**
                     * 设置克隆类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloneType 克隆类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloneType(const std::string& _cloneType);

                    /**
                     * 判断参数 CloneType 是否已赋值
                     * @return CloneType 是否已赋值
                     * 
                     */
                    bool CloneTypeHasBeenSet() const;

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
                     * 获取引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBType 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDBType() const;

                    /**
                     * 设置引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dBType 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDBType(const std::string& _dBType);

                    /**
                     * 判断参数 DBType 是否已赋值
                     * @return DBType 是否已赋值
                     * 
                     */
                    bool DBTypeHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceInstanceId 源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceInstanceId 源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 克隆任务结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloneEndTime;
                    bool m_cloneEndTimeHasBeenSet;

                    /**
                     * 克隆记录ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cloneId;
                    bool m_cloneIdHasBeenSet;

                    /**
                     * 克隆实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloneInsType;
                    bool m_cloneInsTypeHasBeenSet;

                    /**
                     * 克隆实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloneInstanceId;
                    bool m_cloneInstanceIdHasBeenSet;

                    /**
                     * 克隆实例是否已经删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_cloneInstanceIsDeleted;
                    bool m_cloneInstanceIsDeletedHasBeenSet;

                    /**
                     * 克隆任务进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cloneProgress;
                    bool m_cloneProgressHasBeenSet;

                    /**
                     * 克隆任务开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloneStartTime;
                    bool m_cloneStartTimeHasBeenSet;

                    /**
                     * 克隆任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloneStatus;
                    bool m_cloneStatusHasBeenSet;

                    /**
                     * 克隆时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloneTime;
                    bool m_cloneTimeHasBeenSet;

                    /**
                     * 克隆类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cloneType;
                    bool m_cloneTypeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 引擎类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBType;
                    bool m_dBTypeHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 源实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CLONEINSTANCEMODEL_H_
