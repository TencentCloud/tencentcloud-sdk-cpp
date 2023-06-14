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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FACEEXPRESSSTATISTIC_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FACEEXPRESSSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/ExpressRatioStatistic.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 人脸表情统计结果
                */
                class FaceExpressStatistic : public AbstractModel
                {
                public:
                    FaceExpressStatistic();
                    ~FaceExpressStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取表情统计结果
                     * @return ExpressRatio 表情统计结果
                     * 
                     */
                    std::vector<ExpressRatioStatistic> GetExpressRatio() const;

                    /**
                     * 设置表情统计结果
                     * @param _expressRatio 表情统计结果
                     * 
                     */
                    void SetExpressRatio(const std::vector<ExpressRatioStatistic>& _expressRatio);

                    /**
                     * 判断参数 ExpressRatio 是否已赋值
                     * @return ExpressRatio 是否已赋值
                     * 
                     */
                    bool ExpressRatioHasBeenSet() const;

                private:

                    /**
                     * 人员唯一标识符
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 表情统计结果
                     */
                    std::vector<ExpressRatioStatistic> m_expressRatio;
                    bool m_expressRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FACEEXPRESSSTATISTIC_H_
