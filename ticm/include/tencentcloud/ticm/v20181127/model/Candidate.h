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

#ifndef TENCENTCLOUD_TICM_V20181127_MODEL_CANDIDATE_H_
#define TENCENTCLOUD_TICM_V20181127_MODEL_CANDIDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ticm
    {
        namespace V20181127
        {
            namespace Model
            {
                /**
                * 识别出人脸对应的候选人。
                */
                class Candidate : public AbstractModel
                {
                public:
                    Candidate();
                    ~Candidate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出人脸对应的候选人数组。当前返回相似度最高的候选人。
                     * @return Name 识别出人脸对应的候选人数组。当前返回相似度最高的候选人。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别出人脸对应的候选人数组。当前返回相似度最高的候选人。
                     * @param _name 识别出人脸对应的候选人数组。当前返回相似度最高的候选人。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取相似度，0-100之间。
                     * @return Confidence 相似度，0-100之间。
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置相似度，0-100之间。
                     * @param _confidence 相似度，0-100之间。
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 识别出人脸对应的候选人数组。当前返回相似度最高的候选人。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 相似度，0-100之间。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICM_V20181127_MODEL_CANDIDATE_H_
