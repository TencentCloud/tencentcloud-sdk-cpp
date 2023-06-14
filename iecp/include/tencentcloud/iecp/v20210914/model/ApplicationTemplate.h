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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONTEMPLATE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 应用模板列表详情
                */
                class ApplicationTemplate : public AbstractModel
                {
                public:
                    ApplicationTemplate();
                    ~ApplicationTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取来源。1 自定义应用模板 ;  2 官方应用模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 来源。1 自定义应用模板 ;  2 官方应用模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSource() const;

                    /**
                     * 设置来源。1 自定义应用模板 ;  2 官方应用模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 来源。1 自定义应用模板 ;  2 官方应用模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const uint64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkloadKind 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkloadKind() const;

                    /**
                     * 设置应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workloadKind 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkloadKind(const std::string& _workloadKind);

                    /**
                     * 判断参数 WorkloadKind 是否已赋值
                     * @return WorkloadKind 是否已赋值
                     * 
                     */
                    bool WorkloadKindHasBeenSet() const;

                    /**
                     * 获取管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManageUrl 管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManageUrl() const;

                    /**
                     * 设置管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _manageUrl 管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManageUrl(const std::string& _manageUrl);

                    /**
                     * 判断参数 ManageUrl 是否已赋值
                     * @return ManageUrl 是否已赋值
                     * 
                     */
                    bool ManageUrlHasBeenSet() const;

                    /**
                     * 获取发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DistributeTime 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDistributeTime() const;

                    /**
                     * 设置发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _distributeTime 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDistributeTime(const std::string& _distributeTime);

                    /**
                     * 判断参数 DistributeTime 是否已赋值
                     * @return DistributeTime 是否已赋值
                     * 
                     */
                    bool DistributeTimeHasBeenSet() const;

                private:

                    /**
                     * 模板ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 来源。1 自定义应用模板 ;  2 官方应用模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 应用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workloadKind;
                    bool m_workloadKindHasBeenSet;

                    /**
                     * 管理地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manageUrl;
                    bool m_manageUrlHasBeenSet;

                    /**
                     * 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_distributeTime;
                    bool m_distributeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_APPLICATIONTEMPLATE_H_
