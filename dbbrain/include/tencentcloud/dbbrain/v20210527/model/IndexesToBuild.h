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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXESTOBUILD_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXESTOBUILD_H_

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
                * 推荐的索引
                */
                class IndexesToBuild : public AbstractModel
                {
                public:
                    IndexesToBuild();
                    ~IndexesToBuild() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引id，唯一标识一个索引。
                     * @return Id 索引id，唯一标识一个索引。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置索引id，唯一标识一个索引。
                     * @param _id 索引id，唯一标识一个索引。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取创建索引命令。
                     * @return IndexCommand 创建索引命令。
                     * 
                     */
                    std::string GetIndexCommand() const;

                    /**
                     * 设置创建索引命令。
                     * @param _indexCommand 创建索引命令。
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
                     * 获取优化级别，1-4，优先级从高到低。
                     * @return Level 优化级别，1-4，优先级从高到低。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置优化级别，1-4，优先级从高到低。
                     * @param _level 优化级别，1-4，优先级从高到低。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

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
                     * 获取签名。
                     * @return Signs 签名。
                     * 
                     */
                    std::vector<std::string> GetSigns() const;

                    /**
                     * 设置签名。
                     * @param _signs 签名。
                     * 
                     */
                    void SetSigns(const std::vector<std::string>& _signs);

                    /**
                     * 判断参数 Signs 是否已赋值
                     * @return Signs 是否已赋值
                     * 
                     */
                    bool SignsHasBeenSet() const;

                    /**
                     * 获取0-待创建；1-创建中。
                     * @return Status 0-待创建；1-创建中。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0-待创建；1-创建中。
                     * @param _status 0-待创建；1-创建中。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 索引id，唯一标识一个索引。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 创建索引命令。
                     */
                    std::string m_indexCommand;
                    bool m_indexCommandHasBeenSet;

                    /**
                     * 索引字符串。
                     */
                    std::string m_indexStr;
                    bool m_indexStrHasBeenSet;

                    /**
                     * 优化级别，1-4，优先级从高到低。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 索引得分。
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 签名。
                     */
                    std::vector<std::string> m_signs;
                    bool m_signsHasBeenSet;

                    /**
                     * 0-待创建；1-创建中。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INDEXESTOBUILD_H_
