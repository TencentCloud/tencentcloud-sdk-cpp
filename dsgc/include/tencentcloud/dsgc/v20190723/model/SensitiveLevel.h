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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_SENSITIVELEVEL_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_SENSITIVELEVEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 敏感等级分布
                */
                class SensitiveLevel : public AbstractModel
                {
                public:
                    SensitiveLevel();
                    ~SensitiveLevel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分级标识ID
                     * @return LevelId 分级标识ID
                     * 
                     */
                    int64_t GetLevelId() const;

                    /**
                     * 设置分级标识ID
                     * @param _levelId 分级标识ID
                     * 
                     */
                    void SetLevelId(const int64_t& _levelId);

                    /**
                     * 判断参数 LevelId 是否已赋值
                     * @return LevelId 是否已赋值
                     * 
                     */
                    bool LevelIdHasBeenSet() const;

                    /**
                     * 获取分级标识统计
                     * @return LevelCnt 分级标识统计
                     * 
                     */
                    int64_t GetLevelCnt() const;

                    /**
                     * 设置分级标识统计
                     * @param _levelCnt 分级标识统计
                     * 
                     */
                    void SetLevelCnt(const int64_t& _levelCnt);

                    /**
                     * 判断参数 LevelCnt 是否已赋值
                     * @return LevelCnt 是否已赋值
                     * 
                     */
                    bool LevelCntHasBeenSet() const;

                    /**
                     * 获取分级标识名称
                     * @return LevelRiskName 分级标识名称
                     * 
                     */
                    std::string GetLevelRiskName() const;

                    /**
                     * 设置分级标识名称
                     * @param _levelRiskName 分级标识名称
                     * 
                     */
                    void SetLevelRiskName(const std::string& _levelRiskName);

                    /**
                     * 判断参数 LevelRiskName 是否已赋值
                     * @return LevelRiskName 是否已赋值
                     * 
                     */
                    bool LevelRiskNameHasBeenSet() const;

                    /**
                     * 获取分级标识分数
                     * @return LevelRiskScore 分级标识分数
                     * 
                     */
                    int64_t GetLevelRiskScore() const;

                    /**
                     * 设置分级标识分数
                     * @param _levelRiskScore 分级标识分数
                     * 
                     */
                    void SetLevelRiskScore(const int64_t& _levelRiskScore);

                    /**
                     * 判断参数 LevelRiskScore 是否已赋值
                     * @return LevelRiskScore 是否已赋值
                     * 
                     */
                    bool LevelRiskScoreHasBeenSet() const;

                private:

                    /**
                     * 分级标识ID
                     */
                    int64_t m_levelId;
                    bool m_levelIdHasBeenSet;

                    /**
                     * 分级标识统计
                     */
                    int64_t m_levelCnt;
                    bool m_levelCntHasBeenSet;

                    /**
                     * 分级标识名称
                     */
                    std::string m_levelRiskName;
                    bool m_levelRiskNameHasBeenSet;

                    /**
                     * 分级标识分数
                     */
                    int64_t m_levelRiskScore;
                    bool m_levelRiskScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_SENSITIVELEVEL_H_
