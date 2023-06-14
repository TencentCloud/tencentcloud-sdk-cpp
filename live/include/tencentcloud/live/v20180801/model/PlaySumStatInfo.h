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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYSUMSTATINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYSUMSTATINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 播放汇总统计信息。
                */
                class PlaySumStatInfo : public AbstractModel
                {
                public:
                    PlaySumStatInfo();
                    ~PlaySumStatInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名或流 ID。
                     * @return Name 域名或流 ID。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置域名或流 ID。
                     * @param _name 域名或流 ID。
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
                     * 获取平均下载速度，
单位: MB/s。
计算公式: 每分钟的下载速度求平均值。
                     * @return AvgFluxPerSecond 平均下载速度，
单位: MB/s。
计算公式: 每分钟的下载速度求平均值。
                     * 
                     */
                    double GetAvgFluxPerSecond() const;

                    /**
                     * 设置平均下载速度，
单位: MB/s。
计算公式: 每分钟的下载速度求平均值。
                     * @param _avgFluxPerSecond 平均下载速度，
单位: MB/s。
计算公式: 每分钟的下载速度求平均值。
                     * 
                     */
                    void SetAvgFluxPerSecond(const double& _avgFluxPerSecond);

                    /**
                     * 判断参数 AvgFluxPerSecond 是否已赋值
                     * @return AvgFluxPerSecond 是否已赋值
                     * 
                     */
                    bool AvgFluxPerSecondHasBeenSet() const;

                    /**
                     * 获取总流量，单位: MB。
                     * @return TotalFlux 总流量，单位: MB。
                     * 
                     */
                    double GetTotalFlux() const;

                    /**
                     * 设置总流量，单位: MB。
                     * @param _totalFlux 总流量，单位: MB。
                     * 
                     */
                    void SetTotalFlux(const double& _totalFlux);

                    /**
                     * 判断参数 TotalFlux 是否已赋值
                     * @return TotalFlux 是否已赋值
                     * 
                     */
                    bool TotalFluxHasBeenSet() const;

                    /**
                     * 获取总请求数。
                     * @return TotalRequest 总请求数。
                     * 
                     */
                    uint64_t GetTotalRequest() const;

                    /**
                     * 设置总请求数。
                     * @param _totalRequest 总请求数。
                     * 
                     */
                    void SetTotalRequest(const uint64_t& _totalRequest);

                    /**
                     * 判断参数 TotalRequest 是否已赋值
                     * @return TotalRequest 是否已赋值
                     * 
                     */
                    bool TotalRequestHasBeenSet() const;

                private:

                    /**
                     * 域名或流 ID。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 平均下载速度，
单位: MB/s。
计算公式: 每分钟的下载速度求平均值。
                     */
                    double m_avgFluxPerSecond;
                    bool m_avgFluxPerSecondHasBeenSet;

                    /**
                     * 总流量，单位: MB。
                     */
                    double m_totalFlux;
                    bool m_totalFluxHasBeenSet;

                    /**
                     * 总请求数。
                     */
                    uint64_t m_totalRequest;
                    bool m_totalRequestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYSUMSTATINFO_H_
