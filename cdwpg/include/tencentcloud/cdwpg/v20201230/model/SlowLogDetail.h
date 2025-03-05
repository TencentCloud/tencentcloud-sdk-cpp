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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_SLOWLOGDETAIL_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_SLOWLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/NormQueryItem.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 慢SQL日志
                */
                class SlowLogDetail : public AbstractModel
                {
                public:
                    SlowLogDetail();
                    ~SlowLogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取花费总时间
                     * @return TotalTime 花费总时间
                     * 
                     */
                    double GetTotalTime() const;

                    /**
                     * 设置花费总时间
                     * @param _totalTime 花费总时间
                     * 
                     */
                    void SetTotalTime(const double& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取调用总次数
                     * @return TotalCallTimes 调用总次数
                     * 
                     */
                    int64_t GetTotalCallTimes() const;

                    /**
                     * 设置调用总次数
                     * @param _totalCallTimes 调用总次数
                     * 
                     */
                    void SetTotalCallTimes(const int64_t& _totalCallTimes);

                    /**
                     * 判断参数 TotalCallTimes 是否已赋值
                     * @return TotalCallTimes 是否已赋值
                     * 
                     */
                    bool TotalCallTimesHasBeenSet() const;

                    /**
                     * 获取慢SQL
                     * @return NormalQuerys 慢SQL
                     * 
                     */
                    std::vector<NormQueryItem> GetNormalQuerys() const;

                    /**
                     * 设置慢SQL
                     * @param _normalQuerys 慢SQL
                     * 
                     */
                    void SetNormalQuerys(const std::vector<NormQueryItem>& _normalQuerys);

                    /**
                     * 判断参数 NormalQuerys 是否已赋值
                     * @return NormalQuerys 是否已赋值
                     * 
                     */
                    bool NormalQuerysHasBeenSet() const;

                private:

                    /**
                     * 花费总时间
                     */
                    double m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * 调用总次数
                     */
                    int64_t m_totalCallTimes;
                    bool m_totalCallTimesHasBeenSet;

                    /**
                     * 慢SQL
                     */
                    std::vector<NormQueryItem> m_normalQuerys;
                    bool m_normalQuerysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_SLOWLOGDETAIL_H_
