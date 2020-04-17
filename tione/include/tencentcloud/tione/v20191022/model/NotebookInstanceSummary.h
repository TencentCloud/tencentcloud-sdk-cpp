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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKINSTANCESUMMARY_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKINSTANCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * notebook实例概览
                */
                class NotebookInstanceSummary : public AbstractModel
                {
                public:
                    NotebookInstanceSummary();
                    ~NotebookInstanceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifiedTime 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 设置最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastModifiedTime 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastModifiedTime(const std::string& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                    /**
                     * 获取notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookInstanceName notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNotebookInstanceName() const;

                    /**
                     * 设置notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NotebookInstanceName notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNotebookInstanceName(const std::string& _notebookInstanceName);

                    /**
                     * 判断参数 NotebookInstanceName 是否已赋值
                     * @return NotebookInstanceName 是否已赋值
                     */
                    bool NotebookInstanceNameHasBeenSet() const;

                    /**
                     * 获取notebook实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotebookInstanceStatus notebook实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNotebookInstanceStatus() const;

                    /**
                     * 设置notebook实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NotebookInstanceStatus notebook实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNotebookInstanceStatus(const std::string& _notebookInstanceStatus);

                    /**
                     * 判断参数 NotebookInstanceStatus 是否已赋值
                     * @return NotebookInstanceStatus 是否已赋值
                     */
                    bool NotebookInstanceStatusHasBeenSet() const;

                    /**
                     * 获取算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceType 算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceType 算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取算力Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 算力Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置算力Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 算力Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                    /**
                     * notebook实例名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notebookInstanceName;
                    bool m_notebookInstanceNameHasBeenSet;

                    /**
                     * notebook实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notebookInstanceStatus;
                    bool m_notebookInstanceStatusHasBeenSet;

                    /**
                     * 算力类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 算力Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_NOTEBOOKINSTANCESUMMARY_H_
