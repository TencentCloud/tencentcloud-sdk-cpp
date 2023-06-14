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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_RANGEORIGINPULL_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_RANGEORIGINPULL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/RangeOriginPullRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 分片回源配置，默认为开启状态
                */
                class RangeOriginPull : public AbstractModel
                {
                public:
                    RangeOriginPull();
                    ~RangeOriginPull() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片回源配置开关，取值有：
on：开启
off：关闭
                     * @return Switch 分片回源配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置分片回源配置开关，取值有：
on：开启
off：关闭
                     * @param _switch 分片回源配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取分路径分片回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeRules 分路径分片回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RangeOriginPullRule> GetRangeRules() const;

                    /**
                     * 设置分路径分片回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rangeRules 分路径分片回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRangeRules(const std::vector<RangeOriginPullRule>& _rangeRules);

                    /**
                     * 判断参数 RangeRules 是否已赋值
                     * @return RangeRules 是否已赋值
                     * 
                     */
                    bool RangeRulesHasBeenSet() const;

                private:

                    /**
                     * 分片回源配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 分路径分片回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RangeOriginPullRule> m_rangeRules;
                    bool m_rangeRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_RANGEORIGINPULL_H_
