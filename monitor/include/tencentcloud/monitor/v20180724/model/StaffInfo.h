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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_STAFFINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_STAFFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 值班人员id组
                */
                class StaffInfo : public AbstractModel
                {
                public:
                    StaffInfo();
                    ~StaffInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StaffIDs 值班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetStaffIDs() const;

                    /**
                     * 设置值班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _staffIDs 值班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStaffIDs(const std::vector<std::string>& _staffIDs);

                    /**
                     * 判断参数 StaffIDs 是否已赋值
                     * @return StaffIDs 是否已赋值
                     * 
                     */
                    bool StaffIDsHasBeenSet() const;

                private:

                    /**
                     * 值班人员id组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_staffIDs;
                    bool m_staffIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_STAFFINFO_H_
