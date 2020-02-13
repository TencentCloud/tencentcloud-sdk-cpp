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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_PROVINCEDETAIL_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_PROVINCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/IspDetail.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 省份可用率
                */
                class ProvinceDetail : public AbstractModel
                {
                public:
                    ProvinceDetail();
                    ~ProvinceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用率
                     * @return AvgAvailRatio 可用率
                     */
                    double GetAvgAvailRatio() const;

                    /**
                     * 设置可用率
                     * @param AvgAvailRatio 可用率
                     */
                    void SetAvgAvailRatio(const double& _avgAvailRatio);

                    /**
                     * 判断参数 AvgAvailRatio 是否已赋值
                     * @return AvgAvailRatio 是否已赋值
                     */
                    bool AvgAvailRatioHasBeenSet() const;

                    /**
                     * 获取省份名称
                     * @return ProvinceName 省份名称
                     */
                    std::string GetProvinceName() const;

                    /**
                     * 设置省份名称
                     * @param ProvinceName 省份名称
                     */
                    void SetProvinceName(const std::string& _provinceName);

                    /**
                     * 判断参数 ProvinceName 是否已赋值
                     * @return ProvinceName 是否已赋值
                     */
                    bool ProvinceNameHasBeenSet() const;

                    /**
                     * 获取省份英文名称
                     * @return Mapkey 省份英文名称
                     */
                    std::string GetMapkey() const;

                    /**
                     * 设置省份英文名称
                     * @param Mapkey 省份英文名称
                     */
                    void SetMapkey(const std::string& _mapkey);

                    /**
                     * 判断参数 Mapkey 是否已赋值
                     * @return Mapkey 是否已赋值
                     */
                    bool MapkeyHasBeenSet() const;

                    /**
                     * 获取统计时间点
                     * @return TimeStamp 统计时间点
                     */
                    std::string GetTimeStamp() const;

                    /**
                     * 设置统计时间点
                     * @param TimeStamp 统计时间点
                     */
                    void SetTimeStamp(const std::string& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     */
                    bool TimeStampHasBeenSet() const;

                    /**
                     * 获取分运营商可用率
                     * @return IspDetail 分运营商可用率
                     */
                    std::vector<IspDetail> GetIspDetail() const;

                    /**
                     * 设置分运营商可用率
                     * @param IspDetail 分运营商可用率
                     */
                    void SetIspDetail(const std::vector<IspDetail>& _ispDetail);

                    /**
                     * 判断参数 IspDetail 是否已赋值
                     * @return IspDetail 是否已赋值
                     */
                    bool IspDetailHasBeenSet() const;

                    /**
                     * 获取平均耗时，单位毫秒
                     * @return AvgTime 平均耗时，单位毫秒
                     */
                    double GetAvgTime() const;

                    /**
                     * 设置平均耗时，单位毫秒
                     * @param AvgTime 平均耗时，单位毫秒
                     */
                    void SetAvgTime(const double& _avgTime);

                    /**
                     * 判断参数 AvgTime 是否已赋值
                     * @return AvgTime 是否已赋值
                     */
                    bool AvgTimeHasBeenSet() const;

                    /**
                     * 获取省份
                     * @return Province 省份
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
                     * @param Province 省份
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                private:

                    /**
                     * 可用率
                     */
                    double m_avgAvailRatio;
                    bool m_avgAvailRatioHasBeenSet;

                    /**
                     * 省份名称
                     */
                    std::string m_provinceName;
                    bool m_provinceNameHasBeenSet;

                    /**
                     * 省份英文名称
                     */
                    std::string m_mapkey;
                    bool m_mapkeyHasBeenSet;

                    /**
                     * 统计时间点
                     */
                    std::string m_timeStamp;
                    bool m_timeStampHasBeenSet;

                    /**
                     * 分运营商可用率
                     */
                    std::vector<IspDetail> m_ispDetail;
                    bool m_ispDetailHasBeenSet;

                    /**
                     * 平均耗时，单位毫秒
                     */
                    double m_avgTime;
                    bool m_avgTimeHasBeenSet;

                    /**
                     * 省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_PROVINCEDETAIL_H_
