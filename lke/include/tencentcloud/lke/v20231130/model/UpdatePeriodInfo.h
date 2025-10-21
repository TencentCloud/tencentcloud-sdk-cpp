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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEPERIODINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEPERIODINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 更新时间策略
                */
                class UpdatePeriodInfo : public AbstractModel
                {
                public:
                    UpdatePeriodInfo();
                    ~UpdatePeriodInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文档更新频率类型：0不更新 -H 小时粒度,当前仅支持24(1天)，72(3天)，168(7天) 仅source=2 腾讯文档类型有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatePeriodH 文档更新频率类型：0不更新 -H 小时粒度,当前仅支持24(1天)，72(3天)，168(7天) 仅source=2 腾讯文档类型有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdatePeriodH() const;

                    /**
                     * 设置文档更新频率类型：0不更新 -H 小时粒度,当前仅支持24(1天)，72(3天)，168(7天) 仅source=2 腾讯文档类型有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatePeriodH 文档更新频率类型：0不更新 -H 小时粒度,当前仅支持24(1天)，72(3天)，168(7天) 仅source=2 腾讯文档类型有效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatePeriodH(const uint64_t& _updatePeriodH);

                    /**
                     * 判断参数 UpdatePeriodH 是否已赋值
                     * @return UpdatePeriodH 是否已赋值
                     * 
                     */
                    bool UpdatePeriodHHasBeenSet() const;

                private:

                    /**
                     * 文档更新频率类型：0不更新 -H 小时粒度,当前仅支持24(1天)，72(3天)，168(7天) 仅source=2 腾讯文档类型有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updatePeriodH;
                    bool m_updatePeriodHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_UPDATEPERIODINFO_H_
