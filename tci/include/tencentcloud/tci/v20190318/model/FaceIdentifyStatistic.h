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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FACEIDENTIFYSTATISTIC_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FACEIDENTIFYSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 人员检索统计结果
                */
                class FaceIdentifyStatistic : public AbstractModel
                {
                public:
                    FaceIdentifyStatistic();
                    ~FaceIdentifyStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取持续时间
                     * @return Duration 持续时间
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置持续时间
                     * @param _duration 持续时间
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTs 结束时间
                     * 
                     */
                    int64_t GetEndTs() const;

                    /**
                     * 设置结束时间
                     * @param _endTs 结束时间
                     * 
                     */
                    void SetEndTs(const int64_t& _endTs);

                    /**
                     * 判断参数 EndTs 是否已赋值
                     * @return EndTs 是否已赋值
                     * 
                     */
                    bool EndTsHasBeenSet() const;

                    /**
                     * 获取人员唯一标识符
                     * @return PersonId 人员唯一标识符
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员唯一标识符
                     * @param _personId 人员唯一标识符
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取相似度
                     * @return Similarity 相似度
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 设置相似度
                     * @param _similarity 相似度
                     * 
                     */
                    void SetSimilarity(const double& _similarity);

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     * 
                     */
                    bool SimilarityHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTs 开始时间
                     * 
                     */
                    int64_t GetStartTs() const;

                    /**
                     * 设置开始时间
                     * @param _startTs 开始时间
                     * 
                     */
                    void SetStartTs(const int64_t& _startTs);

                    /**
                     * 判断参数 StartTs 是否已赋值
                     * @return StartTs 是否已赋值
                     * 
                     */
                    bool StartTsHasBeenSet() const;

                private:

                    /**
                     * 持续时间
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_endTs;
                    bool m_endTsHasBeenSet;

                    /**
                     * 人员唯一标识符
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 相似度
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * 开始时间
                     */
                    int64_t m_startTs;
                    bool m_startTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FACEIDENTIFYSTATISTIC_H_
