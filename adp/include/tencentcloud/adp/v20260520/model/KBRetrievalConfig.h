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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBRETRIEVALCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBRETRIEVALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DBRetrievalConfig.h>
#include <tencentcloud/adp/v20260520/model/DocRetrievalConfig.h>
#include <tencentcloud/adp/v20260520/model/RetrievalOption.h>
#include <tencentcloud/adp/v20260520/model/QARetrievalConfig.h>
#include <tencentcloud/adp/v20260520/model/RerankConfig.h>
#include <tencentcloud/adp/v20260520/model/SearchFilterConfig.h>
#include <tencentcloud/adp/v20260520/model/ModelDetailInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 单个知识库检索配置
                */
                class KBRetrievalConfig : public AbstractModel
                {
                public:
                    KBRetrievalConfig();
                    ~KBRetrievalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据库检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbRetrievalConfig <p>数据库检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DBRetrievalConfig GetDbRetrievalConfig() const;

                    /**
                     * 设置<p>数据库检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbRetrievalConfig <p>数据库检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbRetrievalConfig(const DBRetrievalConfig& _dbRetrievalConfig);

                    /**
                     * 判断参数 DbRetrievalConfig 是否已赋值
                     * @return DbRetrievalConfig 是否已赋值
                     * 
                     */
                    bool DbRetrievalConfigHasBeenSet() const;

                    /**
                     * 获取<p>文档检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocRetrievalConfig <p>文档检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocRetrievalConfig GetDocRetrievalConfig() const;

                    /**
                     * 设置<p>文档检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _docRetrievalConfig <p>文档检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDocRetrievalConfig(const DocRetrievalConfig& _docRetrievalConfig);

                    /**
                     * 判断参数 DocRetrievalConfig 是否已赋值
                     * @return DocRetrievalConfig 是否已赋值
                     * 
                     */
                    bool DocRetrievalConfigHasBeenSet() const;

                    /**
                     * 获取<p>知识库 ID</p>
                     * @return KbId <p>知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>知识库 ID</p>
                     * @param _kbId <p>知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>检索可选配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionConfig <p>检索可选配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RetrievalOption GetOptionConfig() const;

                    /**
                     * 设置<p>检索可选配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionConfig <p>检索可选配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOptionConfig(const RetrievalOption& _optionConfig);

                    /**
                     * 判断参数 OptionConfig 是否已赋值
                     * @return OptionConfig 是否已赋值
                     * 
                     */
                    bool OptionConfigHasBeenSet() const;

                    /**
                     * 获取<p>QA 检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QaRetrievalConfig <p>QA 检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QARetrievalConfig GetQaRetrievalConfig() const;

                    /**
                     * 设置<p>QA 检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qaRetrievalConfig <p>QA 检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQaRetrievalConfig(const QARetrievalConfig& _qaRetrievalConfig);

                    /**
                     * 判断参数 QaRetrievalConfig 是否已赋值
                     * @return QaRetrievalConfig 是否已赋值
                     * 
                     */
                    bool QaRetrievalConfigHasBeenSet() const;

                    /**
                     * 获取<p>rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RerankConfig <p>rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RerankConfig GetRerankConfig() const;

                    /**
                     * 设置<p>rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rerankConfig <p>rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRerankConfig(const RerankConfig& _rerankConfig);

                    /**
                     * 判断参数 RerankConfig 是否已赋值
                     * @return RerankConfig 是否已赋值
                     * 
                     */
                    bool RerankConfigHasBeenSet() const;

                    /**
                     * 获取<p>检索过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchFilterConfig <p>检索过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SearchFilterConfig GetSearchFilterConfig() const;

                    /**
                     * 设置<p>检索过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchFilterConfig <p>检索过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchFilterConfig(const SearchFilterConfig& _searchFilterConfig);

                    /**
                     * 判断参数 SearchFilterConfig 是否已赋值
                     * @return SearchFilterConfig 是否已赋值
                     * 
                     */
                    bool SearchFilterConfigHasBeenSet() const;

                    /**
                     * 获取<p>检索策略：1=混合，2=语义，3=关键词，4=无<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>混合检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>语义检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>关键词检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>无语义/向量检索</td></tr></tbody></table></p>
                     * @return StrategyType <p>检索策略：1=混合，2=语义，3=关键词，4=无<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>混合检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>语义检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>关键词检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>无语义/向量检索</td></tr></tbody></table></p>
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置<p>检索策略：1=混合，2=语义，3=关键词，4=无<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>混合检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>语义检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>关键词检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>无语义/向量检索</td></tr></tbody></table></p>
                     * @param _strategyType <p>检索策略：1=混合，2=语义，3=关键词，4=无<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>混合检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>语义检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>关键词检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>无语义/向量检索</td></tr></tbody></table></p>
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取<p>text2sql 模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextToSqlModel <p>text2sql 模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelDetailInfo GetTextToSqlModel() const;

                    /**
                     * 设置<p>text2sql 模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textToSqlModel <p>text2sql 模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextToSqlModel(const ModelDetailInfo& _textToSqlModel);

                    /**
                     * 判断参数 TextToSqlModel 是否已赋值
                     * @return TextToSqlModel 是否已赋值
                     * 
                     */
                    bool TextToSqlModelHasBeenSet() const;

                private:

                    /**
                     * <p>数据库检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DBRetrievalConfig m_dbRetrievalConfig;
                    bool m_dbRetrievalConfigHasBeenSet;

                    /**
                     * <p>文档检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocRetrievalConfig m_docRetrievalConfig;
                    bool m_docRetrievalConfigHasBeenSet;

                    /**
                     * <p>知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>检索可选配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RetrievalOption m_optionConfig;
                    bool m_optionConfigHasBeenSet;

                    /**
                     * <p>QA 检索配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QARetrievalConfig m_qaRetrievalConfig;
                    bool m_qaRetrievalConfigHasBeenSet;

                    /**
                     * <p>rerank 配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RerankConfig m_rerankConfig;
                    bool m_rerankConfigHasBeenSet;

                    /**
                     * <p>检索过滤配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SearchFilterConfig m_searchFilterConfig;
                    bool m_searchFilterConfigHasBeenSet;

                    /**
                     * <p>检索策略：1=混合，2=语义，3=关键词，4=无<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>SEARCH_STRATEGY_TYPE_UNKNOWN</td><td>0</td><td></td></tr><tr><td>SEARCH_STRATEGY_TYPE_MIXING</td><td>1</td><td>混合检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_SEMANTIC</td><td>2</td><td>语义检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_KEYWORD</td><td>3</td><td>关键词检索</td></tr><tr><td>SEARCH_STRATEGY_TYPE_NONE</td><td>4</td><td>无语义/向量检索</td></tr></tbody></table></p>
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * <p>text2sql 模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelDetailInfo m_textToSqlModel;
                    bool m_textToSqlModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBRETRIEVALCONFIG_H_
