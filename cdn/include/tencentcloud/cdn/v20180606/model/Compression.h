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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/CompressionRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 智能压缩配置，默认对 js、html、css、xml、json、shtml、htm 后缀且大小为 256 ~ 2097152 字节的文件进行 GZIP 压缩
                */
                class Compression : public AbstractModel
                {
                public:
                    Compression();
                    ~Compression() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能压缩配置开关，取值有：
on：开启
off：关闭
                     * @return Switch 智能压缩配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置智能压缩配置开关，取值有：
on：开启
off：关闭
                     * @param _switch 智能压缩配置开关，取值有：
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
                     * 获取压缩规则数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompressionRules 压缩规则数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CompressionRule> GetCompressionRules() const;

                    /**
                     * 设置压缩规则数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compressionRules 压缩规则数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompressionRules(const std::vector<CompressionRule>& _compressionRules);

                    /**
                     * 判断参数 CompressionRules 是否已赋值
                     * @return CompressionRules 是否已赋值
                     * 
                     */
                    bool CompressionRulesHasBeenSet() const;

                private:

                    /**
                     * 智能压缩配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 压缩规则数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CompressionRule> m_compressionRules;
                    bool m_compressionRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSION_H_
