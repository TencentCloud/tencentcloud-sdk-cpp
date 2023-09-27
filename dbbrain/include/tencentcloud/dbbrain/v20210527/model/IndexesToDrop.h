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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXESTODROP_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXESTODROP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 无效索引
                */
                class IndexesToDrop : public AbstractModel
                {
                public:
                    IndexesToDrop();
                    ~IndexesToDrop() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引字符串。
                     * @return IndexStr 索引字符串。
                     * 
                     */
                    std::string GetIndexStr() const;

                    /**
                     * 设置索引字符串。
                     * @param _indexStr 索引字符串。
                     * 
                     */
                    void SetIndexStr(const std::string& _indexStr);

                    /**
                     * 判断参数 IndexStr 是否已赋值
                     * @return IndexStr 是否已赋值
                     * 
                     */
                    bool IndexStrHasBeenSet() const;

                    /**
                     * 获取索引得分。
                     * @return Score 索引得分。
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置索引得分。
                     * @param _score 索引得分。
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取无效原因。
                     * @return Reason 无效原因。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置无效原因。
                     * @param _reason 无效原因。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取删除索引命令。
                     * @return IndexCommand 删除索引命令。
                     * 
                     */
                    std::string GetIndexCommand() const;

                    /**
                     * 设置删除索引命令。
                     * @param _indexCommand 删除索引命令。
                     * 
                     */
                    void SetIndexCommand(const std::string& _indexCommand);

                    /**
                     * 判断参数 IndexCommand 是否已赋值
                     * @return IndexCommand 是否已赋值
                     * 
                     */
                    bool IndexCommandHasBeenSet() const;

                    /**
                     * 获取索引名。
                     * @return IndexName 索引名。
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名。
                     * @param _indexName 索引名。
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                private:

                    /**
                     * 索引字符串。
                     */
                    std::string m_indexStr;
                    bool m_indexStrHasBeenSet;

                    /**
                     * 索引得分。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 无效原因。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 删除索引命令。
                     */
                    std::string m_indexCommand;
                    bool m_indexCommandHasBeenSet;

                    /**
                     * 索引名。
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXESTODROP_H_
