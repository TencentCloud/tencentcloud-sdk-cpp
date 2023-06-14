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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_INJECTCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_INJECTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 自动注入配置
                */
                class InjectConfig : public AbstractModel
                {
                public:
                    InjectConfig();
                    ~InjectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取不需要进行代理的 ip 地址范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludeIPRanges 不需要进行代理的 ip 地址范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExcludeIPRanges() const;

                    /**
                     * 设置不需要进行代理的 ip 地址范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludeIPRanges 不需要进行代理的 ip 地址范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcludeIPRanges(const std::vector<std::string>& _excludeIPRanges);

                    /**
                     * 判断参数 ExcludeIPRanges 是否已赋值
                     * @return ExcludeIPRanges 是否已赋值
                     * 
                     */
                    bool ExcludeIPRangesHasBeenSet() const;

                    /**
                     * 获取是否等待sidecar启动
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HoldApplicationUntilProxyStarts 是否等待sidecar启动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHoldApplicationUntilProxyStarts() const;

                    /**
                     * 设置是否等待sidecar启动
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _holdApplicationUntilProxyStarts 是否等待sidecar启动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHoldApplicationUntilProxyStarts(const bool& _holdApplicationUntilProxyStarts);

                    /**
                     * 判断参数 HoldApplicationUntilProxyStarts 是否已赋值
                     * @return HoldApplicationUntilProxyStarts 是否已赋值
                     * 
                     */
                    bool HoldApplicationUntilProxyStartsHasBeenSet() const;

                    /**
                     * 获取是否允许sidecar等待
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HoldProxyUntilApplicationEnds 是否允许sidecar等待
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHoldProxyUntilApplicationEnds() const;

                    /**
                     * 设置是否允许sidecar等待
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _holdProxyUntilApplicationEnds 是否允许sidecar等待
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHoldProxyUntilApplicationEnds(const bool& _holdProxyUntilApplicationEnds);

                    /**
                     * 判断参数 HoldProxyUntilApplicationEnds 是否已赋值
                     * @return HoldProxyUntilApplicationEnds 是否已赋值
                     * 
                     */
                    bool HoldProxyUntilApplicationEndsHasBeenSet() const;

                private:

                    /**
                     * 不需要进行代理的 ip 地址范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_excludeIPRanges;
                    bool m_excludeIPRangesHasBeenSet;

                    /**
                     * 是否等待sidecar启动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_holdApplicationUntilProxyStarts;
                    bool m_holdApplicationUntilProxyStartsHasBeenSet;

                    /**
                     * 是否允许sidecar等待
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_holdProxyUntilApplicationEnds;
                    bool m_holdProxyUntilApplicationEndsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_INJECTCONFIG_H_
