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
                     * 获取网络连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetMode 网络连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetMode() const;

                    /**
                     * 设置网络连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netMode 网络连接类型
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
                     * 获取索引前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexPrefix 索引前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexPrefix() const;

                    /**
                     * 设置索引前缀
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexPrefix 索引前缀
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
                     * 获取es日志轮换粒度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationInterval es日志轮换粒度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRotationInterval() const;

                    /**
                     * 设置es日志轮换粒度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotationInterval es日志轮换粒度
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
                     * 获取DTS事件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputMode DTS事件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputMode() const;

                    /**
                     * 设置DTS事件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputMode DTS事件配置
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
                     * 获取DTS索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexSuffixMode DTS索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexSuffixMode() const;

                    /**
                     * 设置DTS索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexSuffixMode DTS索引配置
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
                     * 获取es模版类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexTemplateType es模版类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexTemplateType() const;

                    /**
                     * 设置es模版类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexTemplateType es模版类型
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
                     * 网络连接类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_netMode;
                    bool m_netModeHasBeenSet;

                    /**
                     * 索引前缀
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexPrefix;
                    bool m_indexPrefixHasBeenSet;

                    /**
                     * es日志轮换粒度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rotationInterval;
                    bool m_rotationIntervalHasBeenSet;

                    /**
                     * DTS事件配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputMode;
                    bool m_outputModeHasBeenSet;

                    /**
                     * DTS索引配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexSuffixMode;
                    bool m_indexSuffixModeHasBeenSet;

                    /**
                     * es模版类型
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
