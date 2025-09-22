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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMSERVICEMETRIC_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMSERVICEMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmField.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>
#include <tencentcloud/apm/v20210622/model/ServiceDetail.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * apm应用指标信息
                */
                class ApmServiceMetric : public AbstractModel
                {
                public:
                    ApmServiceMetric();
                    ~ApmServiceMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取filed数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fields filed数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApmField> GetFields() const;

                    /**
                     * 设置filed数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fields filed数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFields(const std::vector<ApmField>& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                    /**
                     * 获取tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDetail 应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceDetail GetServiceDetail() const;

                    /**
                     * 设置应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDetail 应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDetail(const ServiceDetail& _serviceDetail);

                    /**
                     * 判断参数 ServiceDetail 是否已赋值
                     * @return ServiceDetail 是否已赋值
                     * 
                     */
                    bool ServiceDetailHasBeenSet() const;

                private:

                    /**
                     * filed数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmField> m_fields;
                    bool m_fieldsHasBeenSet;

                    /**
                     * tag数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceDetail m_serviceDetail;
                    bool m_serviceDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMSERVICEMETRIC_H_
