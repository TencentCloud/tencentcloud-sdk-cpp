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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_RATINGDATA_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_RATINGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 返回购车意向评级
                */
                class RatingData : public AbstractModel
                {
                public:
                    RatingData();
                    ~RatingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线索评级（取值：0、1、2、3分别代表无、低、中、高意愿）
                     * @return Rank 线索评级（取值：0、1、2、3分别代表无、低、中、高意愿）
                     * 
                     */
                    int64_t GetRank() const;

                    /**
                     * 设置线索评级（取值：0、1、2、3分别代表无、低、中、高意愿）
                     * @param _rank 线索评级（取值：0、1、2、3分别代表无、低、中、高意愿）
                     * 
                     */
                    void SetRank(const int64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

                private:

                    /**
                     * 线索评级（取值：0、1、2、3分别代表无、低、中、高意愿）
                     */
                    int64_t m_rank;
                    bool m_rankHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_RATINGDATA_H_
