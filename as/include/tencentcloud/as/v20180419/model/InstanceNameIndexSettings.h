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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 实例名称序号相关设置。
                */
                class InstanceNameIndexSettings : public AbstractModel
                {
                public:
                    InstanceNameIndexSettings();
                    ~InstanceNameIndexSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启实例创建序号，默认不开启。取值范围：<li>TRUE：表示开启实例创建序号<li>FALSE：表示不开启实例创建序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否开启实例创建序号，默认不开启。取值范围：<li>TRUE：表示开启实例创建序号<li>FALSE：表示不开启实例创建序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启实例创建序号，默认不开启。取值范围：<li>TRUE：表示开启实例创建序号<li>FALSE：表示不开启实例创建序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 是否开启实例创建序号，默认不开启。取值范围：<li>TRUE：表示开启实例创建序号<li>FALSE：表示不开启实例创建序号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取初始序号，取值范围为 [0, 99999999]。当序号递增后超出取值范围时，扩容活动会失败。<li>首次开启实例名称序号：默认值为 0。<li>非首次开启实例名称序号：若不指定该参数，沿用历史序号。下调初始序号可能会造成伸缩组内实例名称序号重复。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginIndex 初始序号，取值范围为 [0, 99999999]。当序号递增后超出取值范围时，扩容活动会失败。<li>首次开启实例名称序号：默认值为 0。<li>非首次开启实例名称序号：若不指定该参数，沿用历史序号。下调初始序号可能会造成伸缩组内实例名称序号重复。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBeginIndex() const;

                    /**
                     * 设置初始序号，取值范围为 [0, 99999999]。当序号递增后超出取值范围时，扩容活动会失败。<li>首次开启实例名称序号：默认值为 0。<li>非首次开启实例名称序号：若不指定该参数，沿用历史序号。下调初始序号可能会造成伸缩组内实例名称序号重复。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beginIndex 初始序号，取值范围为 [0, 99999999]。当序号递增后超出取值范围时，扩容活动会失败。<li>首次开启实例名称序号：默认值为 0。<li>非首次开启实例名称序号：若不指定该参数，沿用历史序号。下调初始序号可能会造成伸缩组内实例名称序号重复。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeginIndex(const int64_t& _beginIndex);

                    /**
                     * 判断参数 BeginIndex 是否已赋值
                     * @return BeginIndex 是否已赋值
                     * 
                     */
                    bool BeginIndexHasBeenSet() const;

                private:

                    /**
                     * 是否开启实例创建序号，默认不开启。取值范围：<li>TRUE：表示开启实例创建序号<li>FALSE：表示不开启实例创建序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 初始序号，取值范围为 [0, 99999999]。当序号递增后超出取值范围时，扩容活动会失败。<li>首次开启实例名称序号：默认值为 0。<li>非首次开启实例名称序号：若不指定该参数，沿用历史序号。下调初始序号可能会造成伸缩组内实例名称序号重复。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_beginIndex;
                    bool m_beginIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMEINDEXSETTINGS_H_
