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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_GEOBLOCKER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_GEOBLOCKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/GeoBlockStrategy.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 区域访问控制配置，默认为关闭状态
                */
                class GeoBlocker : public AbstractModel
                {
                public:
                    GeoBlocker();
                    ~GeoBlocker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     * @return Switch IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     * @param _switch IP 黑白名单配置开关，取值有
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
                     * 获取[
    {
      "BlockType": "whitelist",
      "RulePaths": [
        "*"
      ],
      "RuleType": "all",
      "Districts": [
        "CN-HK"
      ]
    }
  ]
                     * @return BlockRules [
    {
      "BlockType": "whitelist",
      "RulePaths": [
        "*"
      ],
      "RuleType": "all",
      "Districts": [
        "CN-HK"
      ]
    }
  ]
                     * 
                     */
                    std::vector<GeoBlockStrategy> GetBlockRules() const;

                    /**
                     * 设置[
    {
      "BlockType": "whitelist",
      "RulePaths": [
        "*"
      ],
      "RuleType": "all",
      "Districts": [
        "CN-HK"
      ]
    }
  ]
                     * @param _blockRules [
    {
      "BlockType": "whitelist",
      "RulePaths": [
        "*"
      ],
      "RuleType": "all",
      "Districts": [
        "CN-HK"
      ]
    }
  ]
                     * 
                     */
                    void SetBlockRules(const std::vector<GeoBlockStrategy>& _blockRules);

                    /**
                     * 判断参数 BlockRules 是否已赋值
                     * @return BlockRules 是否已赋值
                     * 
                     */
                    bool BlockRulesHasBeenSet() const;

                private:

                    /**
                     * IP 黑白名单配置开关，取值有
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * [
    {
      "BlockType": "whitelist",
      "RulePaths": [
        "*"
      ],
      "RuleType": "all",
      "Districts": [
        "CN-HK"
      ]
    }
  ]
                     */
                    std::vector<GeoBlockStrategy> m_blockRules;
                    bool m_blockRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_GEOBLOCKER_H_
