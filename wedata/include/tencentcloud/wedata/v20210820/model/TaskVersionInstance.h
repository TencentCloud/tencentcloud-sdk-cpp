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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONINSTANCE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONINSTANCE_H_

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
                * 任务实例基本信息
                */
                class TaskVersionInstance : public AbstractModel
                {
                public:
                    TaskVersionInstance();
                    ~TaskVersionInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceVersion 实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceVersion() const;

                    /**
                     * 设置实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceVersion 实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceVersion(const int64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionDesc 实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionDesc 实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     * 
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取0, "新增"，1, "修改"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChangeType 0, "新增"，1, "修改"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChangeType() const;

                    /**
                     * 设置0, "新增"，1, "修改"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _changeType 0, "新增"，1, "修改"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChangeType(const int64_t& _changeType);

                    /**
                     * 判断参数 ChangeType 是否已赋值
                     * @return ChangeType 是否已赋值
                     * 
                     */
                    bool ChangeTypeHasBeenSet() const;

                    /**
                     * 获取版本提交人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitterUin 版本提交人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubmitterUin() const;

                    /**
                     * 设置版本提交人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _submitterUin 版本提交人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubmitterUin(const std::string& _submitterUin);

                    /**
                     * 判断参数 SubmitterUin 是否已赋值
                     * @return SubmitterUin 是否已赋值
                     * 
                     */
                    bool SubmitterUinHasBeenSet() const;

                    /**
                     * 获取提交日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceDate 提交日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceDate() const;

                    /**
                     * 设置提交日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceDate 提交日期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceDate(const std::string& _instanceDate);

                    /**
                     * 判断参数 InstanceDate 是否已赋值
                     * @return InstanceDate 是否已赋值
                     * 
                     */
                    bool InstanceDateHasBeenSet() const;

                    /**
                     * 获取0, "未启用"，1, "启用(生产态)"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus 0, "未启用"，1, "启用(生产态)"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置0, "未启用"，1, "启用(生产态)"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStatus 0, "未启用"，1, "启用(生产态)"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * 实例版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * 0, "新增"，1, "修改"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_changeType;
                    bool m_changeTypeHasBeenSet;

                    /**
                     * 版本提交人UIN
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitterUin;
                    bool m_submitterUinHasBeenSet;

                    /**
                     * 提交日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceDate;
                    bool m_instanceDateHasBeenSet;

                    /**
                     * 0, "未启用"，1, "启用(生产态)"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONINSTANCE_H_
