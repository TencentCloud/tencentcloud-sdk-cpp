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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYAUTHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYAUTHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AccessKeyParamConfig.h>
#include <tencentcloud/adp/v20260520/model/AccessKeyPassThroughConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AccessKey鉴权配置
                */
                class AccessKeyAuthConfig : public AbstractModel
                {
                public:
                    AccessKeyAuthConfig();
                    ~AccessKeyAuthConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Access Key字段配置</p>
                     * @return ParamList <p>Access Key字段配置</p>
                     * 
                     */
                    std::vector<AccessKeyParamConfig> GetParamList() const;

                    /**
                     * 设置<p>Access Key字段配置</p>
                     * @param _paramList <p>Access Key字段配置</p>
                     * 
                     */
                    void SetParamList(const std::vector<AccessKeyParamConfig>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取<p>Access Key透传配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PassThroughConfig <p>Access Key透传配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AccessKeyPassThroughConfig GetPassThroughConfig() const;

                    /**
                     * 设置<p>Access Key透传配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _passThroughConfig <p>Access Key透传配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPassThroughConfig(const AccessKeyPassThroughConfig& _passThroughConfig);

                    /**
                     * 判断参数 PassThroughConfig 是否已赋值
                     * @return PassThroughConfig 是否已赋值
                     * 
                     */
                    bool PassThroughConfigHasBeenSet() const;

                    /**
                     * 获取<p>Access Key 使用模式</p><p>枚举值：</p><ul><li>1： Access Key透传</li></ul>
                     * @return UsageMode <p>Access Key 使用模式</p><p>枚举值：</p><ul><li>1： Access Key透传</li></ul>
                     * 
                     */
                    int64_t GetUsageMode() const;

                    /**
                     * 设置<p>Access Key 使用模式</p><p>枚举值：</p><ul><li>1： Access Key透传</li></ul>
                     * @param _usageMode <p>Access Key 使用模式</p><p>枚举值：</p><ul><li>1： Access Key透传</li></ul>
                     * 
                     */
                    void SetUsageMode(const int64_t& _usageMode);

                    /**
                     * 判断参数 UsageMode 是否已赋值
                     * @return UsageMode 是否已赋值
                     * 
                     */
                    bool UsageModeHasBeenSet() const;

                private:

                    /**
                     * <p>Access Key字段配置</p>
                     */
                    std::vector<AccessKeyParamConfig> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * <p>Access Key透传配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AccessKeyPassThroughConfig m_passThroughConfig;
                    bool m_passThroughConfigHasBeenSet;

                    /**
                     * <p>Access Key 使用模式</p><p>枚举值：</p><ul><li>1： Access Key透传</li></ul>
                     */
                    int64_t m_usageMode;
                    bool m_usageModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYAUTHCONFIG_H_
