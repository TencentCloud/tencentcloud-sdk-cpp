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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_EXPRESSRATIOSTATISTIC_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_EXPRESSRATIOSTATISTIC_H_

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
                * 表情比例统计
                */
                class ExpressRatioStatistic : public AbstractModel
                {
                public:
                    ExpressRatioStatistic();
                    ~ExpressRatioStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表情
                     * @return Express 表情
                     */
                    std::string GetExpress() const;

                    /**
                     * 设置表情
                     * @param Express 表情
                     */
                    void SetExpress(const std::string& _express);

                    /**
                     * 判断参数 Express 是否已赋值
                     * @return Express 是否已赋值
                     */
                    bool ExpressHasBeenSet() const;

                    /**
                     * 获取表情所占比例
                     * @return Ratio 表情所占比例
                     */
                    double GetRatio() const;

                    /**
                     * 设置表情所占比例
                     * @param Ratio 表情所占比例
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取出现次数
                     * @return Count 出现次数
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置出现次数
                     * @param Count 出现次数
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 表情
                     */
                    std::string m_express;
                    bool m_expressHasBeenSet;

                    /**
                     * 表情所占比例
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * 出现次数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_EXPRESSRATIOSTATISTIC_H_
