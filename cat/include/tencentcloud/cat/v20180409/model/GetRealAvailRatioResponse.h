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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_GETREALAVAILRATIORESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_GETREALAVAILRATIORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/ProvinceDetail.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * GetRealAvailRatio返回参数结构体
                */
                class GetRealAvailRatioResponse : public AbstractModel
                {
                public:
                    GetRealAvailRatioResponse();
                    ~GetRealAvailRatioResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取国内平均可用率
                     * @return AvgAvailRatio 国内平均可用率
                     */
                    double GetAvgAvailRatio() const;

                    /**
                     * 判断参数 AvgAvailRatio 是否已赋值
                     * @return AvgAvailRatio 是否已赋值
                     */
                    bool AvgAvailRatioHasBeenSet() const;

                    /**
                     * 获取各省份最低可用率
                     * @return LowestAvailRatio 各省份最低可用率
                     */
                    double GetLowestAvailRatio() const;

                    /**
                     * 判断参数 LowestAvailRatio 是否已赋值
                     * @return LowestAvailRatio 是否已赋值
                     */
                    bool LowestAvailRatioHasBeenSet() const;

                    /**
                     * 获取可用率最低的省份
                     * @return LowestProvince 可用率最低的省份
                     */
                    std::string GetLowestProvince() const;

                    /**
                     * 判断参数 LowestProvince 是否已赋值
                     * @return LowestProvince 是否已赋值
                     */
                    bool LowestProvinceHasBeenSet() const;

                    /**
                     * 获取可用率最低的运营商
                     * @return LowestIsp 可用率最低的运营商
                     */
                    std::string GetLowestIsp() const;

                    /**
                     * 判断参数 LowestIsp 是否已赋值
                     * @return LowestIsp 是否已赋值
                     */
                    bool LowestIspHasBeenSet() const;

                    /**
                     * 获取分省份的可用率数据
                     * @return ProvinceData 分省份的可用率数据
                     */
                    std::vector<ProvinceDetail> GetProvinceData() const;

                    /**
                     * 判断参数 ProvinceData 是否已赋值
                     * @return ProvinceData 是否已赋值
                     */
                    bool ProvinceDataHasBeenSet() const;

                    /**
                     * 获取国内平均耗时，单位毫秒
                     * @return AvgTime 国内平均耗时，单位毫秒
                     */
                    double GetAvgTime() const;

                    /**
                     * 判断参数 AvgTime 是否已赋值
                     * @return AvgTime 是否已赋值
                     */
                    bool AvgTimeHasBeenSet() const;

                    /**
                     * 获取国外平均可用率
                     * @return AvgAvailRatio2 国外平均可用率
                     */
                    double GetAvgAvailRatio2() const;

                    /**
                     * 判断参数 AvgAvailRatio2 是否已赋值
                     * @return AvgAvailRatio2 是否已赋值
                     */
                    bool AvgAvailRatio2HasBeenSet() const;

                    /**
                     * 获取国外平均耗时，单位毫秒
                     * @return AvgTime2 国外平均耗时，单位毫秒
                     */
                    double GetAvgTime2() const;

                    /**
                     * 判断参数 AvgTime2 是否已赋值
                     * @return AvgTime2 是否已赋值
                     */
                    bool AvgTime2HasBeenSet() const;

                    /**
                     * 获取国外最低可用率
                     * @return LowestAvailRatio2 国外最低可用率
                     */
                    double GetLowestAvailRatio2() const;

                    /**
                     * 判断参数 LowestAvailRatio2 是否已赋值
                     * @return LowestAvailRatio2 是否已赋值
                     */
                    bool LowestAvailRatio2HasBeenSet() const;

                    /**
                     * 获取国外可用率最低的区域
                     * @return LowestProvince2 国外可用率最低的区域
                     */
                    std::string GetLowestProvince2() const;

                    /**
                     * 判断参数 LowestProvince2 是否已赋值
                     * @return LowestProvince2 是否已赋值
                     */
                    bool LowestProvince2HasBeenSet() const;

                    /**
                     * 获取国外可用率最低的运营商
                     * @return LowestIsp2 国外可用率最低的运营商
                     */
                    std::string GetLowestIsp2() const;

                    /**
                     * 判断参数 LowestIsp2 是否已赋值
                     * @return LowestIsp2 是否已赋值
                     */
                    bool LowestIsp2HasBeenSet() const;

                    /**
                     * 获取国外分区域的可用率数据
                     * @return ProvinceData2 国外分区域的可用率数据
                     */
                    std::vector<ProvinceDetail> GetProvinceData2() const;

                    /**
                     * 判断参数 ProvinceData2 是否已赋值
                     * @return ProvinceData2 是否已赋值
                     */
                    bool ProvinceData2HasBeenSet() const;

                private:

                    /**
                     * 国内平均可用率
                     */
                    double m_avgAvailRatio;
                    bool m_avgAvailRatioHasBeenSet;

                    /**
                     * 各省份最低可用率
                     */
                    double m_lowestAvailRatio;
                    bool m_lowestAvailRatioHasBeenSet;

                    /**
                     * 可用率最低的省份
                     */
                    std::string m_lowestProvince;
                    bool m_lowestProvinceHasBeenSet;

                    /**
                     * 可用率最低的运营商
                     */
                    std::string m_lowestIsp;
                    bool m_lowestIspHasBeenSet;

                    /**
                     * 分省份的可用率数据
                     */
                    std::vector<ProvinceDetail> m_provinceData;
                    bool m_provinceDataHasBeenSet;

                    /**
                     * 国内平均耗时，单位毫秒
                     */
                    double m_avgTime;
                    bool m_avgTimeHasBeenSet;

                    /**
                     * 国外平均可用率
                     */
                    double m_avgAvailRatio2;
                    bool m_avgAvailRatio2HasBeenSet;

                    /**
                     * 国外平均耗时，单位毫秒
                     */
                    double m_avgTime2;
                    bool m_avgTime2HasBeenSet;

                    /**
                     * 国外最低可用率
                     */
                    double m_lowestAvailRatio2;
                    bool m_lowestAvailRatio2HasBeenSet;

                    /**
                     * 国外可用率最低的区域
                     */
                    std::string m_lowestProvince2;
                    bool m_lowestProvince2HasBeenSet;

                    /**
                     * 国外可用率最低的运营商
                     */
                    std::string m_lowestIsp2;
                    bool m_lowestIsp2HasBeenSet;

                    /**
                     * 国外分区域的可用率数据
                     */
                    std::vector<ProvinceDetail> m_provinceData2;
                    bool m_provinceData2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_GETREALAVAILRATIORESPONSE_H_
