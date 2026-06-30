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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_ESTARGETPARAMS_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_ESTARGETPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 描述Es规则目标
                */
                class ESTargetParams : public AbstractModel
                {
                public:
                    ESTargetParams();
                    ~ESTargetParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网络连接类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetMode <p>网络连接类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetMode() const;

                    /**
                     * 设置<p>网络连接类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netMode <p>网络连接类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetMode(const std::string& _netMode);

                    /**
                     * 判断参数 NetMode 是否已赋值
                     * @return NetMode 是否已赋值
                     * 
                     */
                    bool NetModeHasBeenSet() const;

                    /**
                     * 获取<p>索引前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexPrefix <p>索引前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexPrefix() const;

                    /**
                     * 设置<p>索引前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexPrefix <p>索引前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexPrefix(const std::string& _indexPrefix);

                    /**
                     * 判断参数 IndexPrefix 是否已赋值
                     * @return IndexPrefix 是否已赋值
                     * 
                     */
                    bool IndexPrefixHasBeenSet() const;

                    /**
                     * 获取<p>es日志轮换粒度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationInterval <p>es日志轮换粒度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRotationInterval() const;

                    /**
                     * 设置<p>es日志轮换粒度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotationInterval <p>es日志轮换粒度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRotationInterval(const std::string& _rotationInterval);

                    /**
                     * 判断参数 RotationInterval 是否已赋值
                     * @return RotationInterval 是否已赋值
                     * 
                     */
                    bool RotationIntervalHasBeenSet() const;

                    /**
                     * 获取<p>DTS事件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputMode <p>DTS事件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputMode() const;

                    /**
                     * 设置<p>DTS事件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputMode <p>DTS事件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputMode(const std::string& _outputMode);

                    /**
                     * 判断参数 OutputMode 是否已赋值
                     * @return OutputMode 是否已赋值
                     * 
                     */
                    bool OutputModeHasBeenSet() const;

                    /**
                     * 获取<p>DTS索引配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexSuffixMode <p>DTS索引配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexSuffixMode() const;

                    /**
                     * 设置<p>DTS索引配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexSuffixMode <p>DTS索引配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexSuffixMode(const std::string& _indexSuffixMode);

                    /**
                     * 判断参数 IndexSuffixMode 是否已赋值
                     * @return IndexSuffixMode 是否已赋值
                     * 
                     */
                    bool IndexSuffixModeHasBeenSet() const;

                    /**
                     * 获取<p>es模版类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexTemplateType <p>es模版类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexTemplateType() const;

                    /**
                     * 设置<p>es模版类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexTemplateType <p>es模版类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexTemplateType(const std::string& _indexTemplateType);

                    /**
                     * 判断参数 IndexTemplateType 是否已赋值
                     * @return IndexTemplateType 是否已赋值
                     * 
                     */
                    bool IndexTemplateTypeHasBeenSet() const;

                private:

                    /**
                     * <p>网络连接类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_netMode;
                    bool m_netModeHasBeenSet;

                    /**
                     * <p>索引前缀</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexPrefix;
                    bool m_indexPrefixHasBeenSet;

                    /**
                     * <p>es日志轮换粒度</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rotationInterval;
                    bool m_rotationIntervalHasBeenSet;

                    /**
                     * <p>DTS事件配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputMode;
                    bool m_outputModeHasBeenSet;

                    /**
                     * <p>DTS索引配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexSuffixMode;
                    bool m_indexSuffixModeHasBeenSet;

                    /**
                     * <p>es模版类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexTemplateType;
                    bool m_indexTemplateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_ESTARGETPARAMS_H_
