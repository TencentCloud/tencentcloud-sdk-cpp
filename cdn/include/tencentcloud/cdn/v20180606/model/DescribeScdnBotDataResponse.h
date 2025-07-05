/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNBOTDATARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNBOTDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/BotStats.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeScdnBotData返回参数结构体
                */
                class DescribeScdnBotDataResponse : public AbstractModel
                {
                public:
                    DescribeScdnBotDataResponse();
                    ~DescribeScdnBotDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统计信息详细数据
                     * @return Data 统计信息详细数据
                     * 
                     */
                    std::vector<BotStats> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取当前返回数据的粒度，取值："2min"或者"hour"，分别表示2分钟或者1小时粒度
                     * @return Interval 当前返回数据的粒度，取值："2min"或者"hour"，分别表示2分钟或者1小时粒度
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * 统计信息详细数据
                     */
                    std::vector<BotStats> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 当前返回数据的粒度，取值："2min"或者"hour"，分别表示2分钟或者1小时粒度
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBESCDNBOTDATARESPONSE_H_
