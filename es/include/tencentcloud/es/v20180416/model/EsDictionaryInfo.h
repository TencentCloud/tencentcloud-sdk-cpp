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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_ESDICTIONARYINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_ESDICTIONARYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DictInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES 词库信息
                */
                class EsDictionaryInfo : public AbstractModel
                {
                public:
                    EsDictionaryInfo();
                    ~EsDictionaryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取启用词词典列表
                     * @return MainDict 启用词词典列表
                     * 
                     */
                    std::vector<DictInfo> GetMainDict() const;

                    /**
                     * 设置启用词词典列表
                     * @param _mainDict 启用词词典列表
                     * 
                     */
                    void SetMainDict(const std::vector<DictInfo>& _mainDict);

                    /**
                     * 判断参数 MainDict 是否已赋值
                     * @return MainDict 是否已赋值
                     * 
                     */
                    bool MainDictHasBeenSet() const;

                    /**
                     * 获取停用词词典列表
                     * @return Stopwords 停用词词典列表
                     * 
                     */
                    std::vector<DictInfo> GetStopwords() const;

                    /**
                     * 设置停用词词典列表
                     * @param _stopwords 停用词词典列表
                     * 
                     */
                    void SetStopwords(const std::vector<DictInfo>& _stopwords);

                    /**
                     * 判断参数 Stopwords 是否已赋值
                     * @return Stopwords 是否已赋值
                     * 
                     */
                    bool StopwordsHasBeenSet() const;

                    /**
                     * 获取QQ分词词典列表
                     * @return QQDict QQ分词词典列表
                     * 
                     */
                    std::vector<DictInfo> GetQQDict() const;

                    /**
                     * 设置QQ分词词典列表
                     * @param _qQDict QQ分词词典列表
                     * 
                     */
                    void SetQQDict(const std::vector<DictInfo>& _qQDict);

                    /**
                     * 判断参数 QQDict 是否已赋值
                     * @return QQDict 是否已赋值
                     * 
                     */
                    bool QQDictHasBeenSet() const;

                    /**
                     * 获取同义词词典列表
                     * @return Synonym 同义词词典列表
                     * 
                     */
                    std::vector<DictInfo> GetSynonym() const;

                    /**
                     * 设置同义词词典列表
                     * @param _synonym 同义词词典列表
                     * 
                     */
                    void SetSynonym(const std::vector<DictInfo>& _synonym);

                    /**
                     * 判断参数 Synonym 是否已赋值
                     * @return Synonym 是否已赋值
                     * 
                     */
                    bool SynonymHasBeenSet() const;

                    /**
                     * 获取更新词典类型
                     * @return UpdateType 更新词典类型
                     * 
                     */
                    std::string GetUpdateType() const;

                    /**
                     * 设置更新词典类型
                     * @param _updateType 更新词典类型
                     * 
                     */
                    void SetUpdateType(const std::string& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取ansj启用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnsjMain ansj启用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DictInfo> GetAnsjMain() const;

                    /**
                     * 设置ansj启用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ansjMain ansj启用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnsjMain(const std::vector<DictInfo>& _ansjMain);

                    /**
                     * 判断参数 AnsjMain 是否已赋值
                     * @return AnsjMain 是否已赋值
                     * 
                     */
                    bool AnsjMainHasBeenSet() const;

                    /**
                     * 获取ansj停用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnsjStop ansj停用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DictInfo> GetAnsjStop() const;

                    /**
                     * 设置ansj停用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ansjStop ansj停用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnsjStop(const std::vector<DictInfo>& _ansjStop);

                    /**
                     * 判断参数 AnsjStop 是否已赋值
                     * @return AnsjStop 是否已赋值
                     * 
                     */
                    bool AnsjStopHasBeenSet() const;

                    /**
                     * 获取ansj歧义词库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnsjAmbiguity ansj歧义词库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DictInfo> GetAnsjAmbiguity() const;

                    /**
                     * 设置ansj歧义词库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ansjAmbiguity ansj歧义词库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnsjAmbiguity(const std::vector<DictInfo>& _ansjAmbiguity);

                    /**
                     * 判断参数 AnsjAmbiguity 是否已赋值
                     * @return AnsjAmbiguity 是否已赋值
                     * 
                     */
                    bool AnsjAmbiguityHasBeenSet() const;

                    /**
                     * 获取ansj同义词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnsjSynonyms ansj同义词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DictInfo> GetAnsjSynonyms() const;

                    /**
                     * 设置ansj同义词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ansjSynonyms ansj同义词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnsjSynonyms(const std::vector<DictInfo>& _ansjSynonyms);

                    /**
                     * 判断参数 AnsjSynonyms 是否已赋值
                     * @return AnsjSynonyms 是否已赋值
                     * 
                     */
                    bool AnsjSynonymsHasBeenSet() const;

                private:

                    /**
                     * 启用词词典列表
                     */
                    std::vector<DictInfo> m_mainDict;
                    bool m_mainDictHasBeenSet;

                    /**
                     * 停用词词典列表
                     */
                    std::vector<DictInfo> m_stopwords;
                    bool m_stopwordsHasBeenSet;

                    /**
                     * QQ分词词典列表
                     */
                    std::vector<DictInfo> m_qQDict;
                    bool m_qQDictHasBeenSet;

                    /**
                     * 同义词词典列表
                     */
                    std::vector<DictInfo> m_synonym;
                    bool m_synonymHasBeenSet;

                    /**
                     * 更新词典类型
                     */
                    std::string m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * ansj启用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictInfo> m_ansjMain;
                    bool m_ansjMainHasBeenSet;

                    /**
                     * ansj停用词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictInfo> m_ansjStop;
                    bool m_ansjStopHasBeenSet;

                    /**
                     * ansj歧义词库列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictInfo> m_ansjAmbiguity;
                    bool m_ansjAmbiguityHasBeenSet;

                    /**
                     * ansj同义词词典列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictInfo> m_ansjSynonyms;
                    bool m_ansjSynonymsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ESDICTIONARYINFO_H_
