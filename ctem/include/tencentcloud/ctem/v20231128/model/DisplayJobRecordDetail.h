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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYJOBRECORDDETAIL_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYJOBRECORDDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/IdndValue.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 链路详情
                */
                class DisplayJobRecordDetail : public AbstractModel
                {
                public:
                    DisplayJobRecordDetail();
                    ~DisplayJobRecordDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeAt 发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeAt() const;

                    /**
                     * 设置发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeAt 发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeAt(const std::string& _timeAt);

                    /**
                     * 判断参数 TimeAt 是否已赋值
                     * @return TimeAt 是否已赋值
                     * 
                     */
                    bool TimeAtHasBeenSet() const;

                    /**
                     * 获取模块
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Module 模块
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _module 模块
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取模块名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleName 模块名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModuleName() const;

                    /**
                     * 设置模块名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moduleName 模块名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModuleName(const std::string& _moduleName);

                    /**
                     * 判断参数 ModuleName 是否已赋值
                     * @return ModuleName 是否已赋值
                     * 
                     */
                    bool ModuleNameHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobRecordId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobRecordId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobRecordId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobRecordId(const int64_t& _jobRecordId);

                    /**
                     * 判断参数 JobRecordId 是否已赋值
                     * @return JobRecordId 是否已赋值
                     * 
                     */
                    bool JobRecordIdHasBeenSet() const;

                    /**
                     * 获取目标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 目标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IdndValue> GetData() const;

                    /**
                     * 设置目标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 目标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::vector<IdndValue>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeAt;
                    bool m_timeAtHasBeenSet;

                    /**
                     * 模块
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 模块名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_moduleName;
                    bool m_moduleNameHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobRecordId;
                    bool m_jobRecordIdHasBeenSet;

                    /**
                     * 目标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IdndValue> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYJOBRECORDDETAIL_H_
