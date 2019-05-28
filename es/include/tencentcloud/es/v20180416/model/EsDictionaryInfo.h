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
                * ES IK词库信息
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
                     */
                    std::vector<DictInfo> GetMainDict() const;

                    /**
                     * 设置启用词词典列表
                     * @param MainDict 启用词词典列表
                     */
                    void SetMainDict(const std::vector<DictInfo>& _mainDict);

                    /**
                     * 判断参数 MainDict 是否已赋值
                     * @return MainDict 是否已赋值
                     */
                    bool MainDictHasBeenSet() const;

                    /**
                     * 获取停用词词典列表
                     * @return Stopwords 停用词词典列表
                     */
                    std::vector<DictInfo> GetStopwords() const;

                    /**
                     * 设置停用词词典列表
                     * @param Stopwords 停用词词典列表
                     */
                    void SetStopwords(const std::vector<DictInfo>& _stopwords);

                    /**
                     * 判断参数 Stopwords 是否已赋值
                     * @return Stopwords 是否已赋值
                     */
                    bool StopwordsHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_ESDICTIONARYINFO_H_
