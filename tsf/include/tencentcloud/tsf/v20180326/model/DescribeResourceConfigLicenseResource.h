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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGLICENSERESOURCE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGLICENSERESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeResourceConfig
                */
                class DescribeResourceConfigLicenseResource : public AbstractModel
                {
                public:
                    DescribeResourceConfigLicenseResource();
                    ~DescribeResourceConfigLicenseResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Name
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
                     * 获取Quota
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quota Quota
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetQuota() const;

                    /**
                     * 设置Quota
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quota Quota
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuota(const uint64_t& _quota);

                    /**
                     * 判断参数 Quota 是否已赋值
                     * @return Quota 是否已赋值
                     * 
                     */
                    bool QuotaHasBeenSet() const;

                private:

                    /**
                     * Name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Quota
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_quota;
                    bool m_quotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBERESOURCECONFIGLICENSERESOURCE_H_
