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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONDATASTATISTICS_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONDATASTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/StatisticsItem.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 应用统计数据
                */
                class ApplicationDataStatistics : public AbstractModel
                {
                public:
                    ApplicationDataStatistics();
                    ~ApplicationDataStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
                     * @return BizId 应用ID
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID
                     * @param _bizId 应用ID
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取Dau统计项数目
                     * @return DauDataNum Dau统计项数目
                     * 
                     */
                    uint64_t GetDauDataNum() const;

                    /**
                     * 设置Dau统计项数目
                     * @param _dauDataNum Dau统计项数目
                     * 
                     */
                    void SetDauDataNum(const uint64_t& _dauDataNum);

                    /**
                     * 判断参数 DauDataNum 是否已赋值
                     * @return DauDataNum 是否已赋值
                     * 
                     */
                    bool DauDataNumHasBeenSet() const;

                    /**
                     * 获取大陆地区Dau统计数据，单位人
                     * @return DauDataMainland 大陆地区Dau统计数据，单位人
                     * 
                     */
                    std::vector<StatisticsItem> GetDauDataMainland() const;

                    /**
                     * 设置大陆地区Dau统计数据，单位人
                     * @param _dauDataMainland 大陆地区Dau统计数据，单位人
                     * 
                     */
                    void SetDauDataMainland(const std::vector<StatisticsItem>& _dauDataMainland);

                    /**
                     * 判断参数 DauDataMainland 是否已赋值
                     * @return DauDataMainland 是否已赋值
                     * 
                     */
                    bool DauDataMainlandHasBeenSet() const;

                    /**
                     * 获取海外地区Dau统计数据，单位人
                     * @return DauDataOversea 海外地区Dau统计数据，单位人
                     * 
                     */
                    std::vector<StatisticsItem> GetDauDataOversea() const;

                    /**
                     * 设置海外地区Dau统计数据，单位人
                     * @param _dauDataOversea 海外地区Dau统计数据，单位人
                     * 
                     */
                    void SetDauDataOversea(const std::vector<StatisticsItem>& _dauDataOversea);

                    /**
                     * 判断参数 DauDataOversea 是否已赋值
                     * @return DauDataOversea 是否已赋值
                     * 
                     */
                    bool DauDataOverseaHasBeenSet() const;

                    /**
                     * 获取大陆和海外地区Dau统计数据汇总，单位人
                     * @return DauDataSum 大陆和海外地区Dau统计数据汇总，单位人
                     * 
                     */
                    std::vector<StatisticsItem> GetDauDataSum() const;

                    /**
                     * 设置大陆和海外地区Dau统计数据汇总，单位人
                     * @param _dauDataSum 大陆和海外地区Dau统计数据汇总，单位人
                     * 
                     */
                    void SetDauDataSum(const std::vector<StatisticsItem>& _dauDataSum);

                    /**
                     * 判断参数 DauDataSum 是否已赋值
                     * @return DauDataSum 是否已赋值
                     * 
                     */
                    bool DauDataSumHasBeenSet() const;

                    /**
                     * 获取实时语音时长统计项数目
                     * @return DurationDataNum 实时语音时长统计项数目
                     * 
                     */
                    uint64_t GetDurationDataNum() const;

                    /**
                     * 设置实时语音时长统计项数目
                     * @param _durationDataNum 实时语音时长统计项数目
                     * 
                     */
                    void SetDurationDataNum(const uint64_t& _durationDataNum);

                    /**
                     * 判断参数 DurationDataNum 是否已赋值
                     * @return DurationDataNum 是否已赋值
                     * 
                     */
                    bool DurationDataNumHasBeenSet() const;

                    /**
                     * 获取大陆地区实时语音时长统计数据，单位分钟
                     * @return DurationDataMainland 大陆地区实时语音时长统计数据，单位分钟
                     * 
                     */
                    std::vector<StatisticsItem> GetDurationDataMainland() const;

                    /**
                     * 设置大陆地区实时语音时长统计数据，单位分钟
                     * @param _durationDataMainland 大陆地区实时语音时长统计数据，单位分钟
                     * 
                     */
                    void SetDurationDataMainland(const std::vector<StatisticsItem>& _durationDataMainland);

                    /**
                     * 判断参数 DurationDataMainland 是否已赋值
                     * @return DurationDataMainland 是否已赋值
                     * 
                     */
                    bool DurationDataMainlandHasBeenSet() const;

                    /**
                     * 获取海外地区实时语音时长统计数据，单位分钟
                     * @return DurationDataOversea 海外地区实时语音时长统计数据，单位分钟
                     * 
                     */
                    std::vector<StatisticsItem> GetDurationDataOversea() const;

                    /**
                     * 设置海外地区实时语音时长统计数据，单位分钟
                     * @param _durationDataOversea 海外地区实时语音时长统计数据，单位分钟
                     * 
                     */
                    void SetDurationDataOversea(const std::vector<StatisticsItem>& _durationDataOversea);

                    /**
                     * 判断参数 DurationDataOversea 是否已赋值
                     * @return DurationDataOversea 是否已赋值
                     * 
                     */
                    bool DurationDataOverseaHasBeenSet() const;

                    /**
                     * 获取大陆和海外地区实时语音时长统计数据汇总，单位分钟
                     * @return DurationDataSum 大陆和海外地区实时语音时长统计数据汇总，单位分钟
                     * 
                     */
                    std::vector<StatisticsItem> GetDurationDataSum() const;

                    /**
                     * 设置大陆和海外地区实时语音时长统计数据汇总，单位分钟
                     * @param _durationDataSum 大陆和海外地区实时语音时长统计数据汇总，单位分钟
                     * 
                     */
                    void SetDurationDataSum(const std::vector<StatisticsItem>& _durationDataSum);

                    /**
                     * 判断参数 DurationDataSum 是否已赋值
                     * @return DurationDataSum 是否已赋值
                     * 
                     */
                    bool DurationDataSumHasBeenSet() const;

                    /**
                     * 获取Pcu统计项数目
                     * @return PcuDataNum Pcu统计项数目
                     * 
                     */
                    uint64_t GetPcuDataNum() const;

                    /**
                     * 设置Pcu统计项数目
                     * @param _pcuDataNum Pcu统计项数目
                     * 
                     */
                    void SetPcuDataNum(const uint64_t& _pcuDataNum);

                    /**
                     * 判断参数 PcuDataNum 是否已赋值
                     * @return PcuDataNum 是否已赋值
                     * 
                     */
                    bool PcuDataNumHasBeenSet() const;

                    /**
                     * 获取大陆地区Pcu统计数据，单位人
                     * @return PcuDataMainland 大陆地区Pcu统计数据，单位人
                     * 
                     */
                    std::vector<StatisticsItem> GetPcuDataMainland() const;

                    /**
                     * 设置大陆地区Pcu统计数据，单位人
                     * @param _pcuDataMainland 大陆地区Pcu统计数据，单位人
                     * 
                     */
                    void SetPcuDataMainland(const std::vector<StatisticsItem>& _pcuDataMainland);

                    /**
                     * 判断参数 PcuDataMainland 是否已赋值
                     * @return PcuDataMainland 是否已赋值
                     * 
                     */
                    bool PcuDataMainlandHasBeenSet() const;

                    /**
                     * 获取海外地区Pcu统计数据，单位人
                     * @return PcuDataOversea 海外地区Pcu统计数据，单位人
                     * 
                     */
                    std::vector<StatisticsItem> GetPcuDataOversea() const;

                    /**
                     * 设置海外地区Pcu统计数据，单位人
                     * @param _pcuDataOversea 海外地区Pcu统计数据，单位人
                     * 
                     */
                    void SetPcuDataOversea(const std::vector<StatisticsItem>& _pcuDataOversea);

                    /**
                     * 判断参数 PcuDataOversea 是否已赋值
                     * @return PcuDataOversea 是否已赋值
                     * 
                     */
                    bool PcuDataOverseaHasBeenSet() const;

                    /**
                     * 获取大陆和海外地区Pcu统计数据汇总，单位人
                     * @return PcuDataSum 大陆和海外地区Pcu统计数据汇总，单位人
                     * 
                     */
                    std::vector<StatisticsItem> GetPcuDataSum() const;

                    /**
                     * 设置大陆和海外地区Pcu统计数据汇总，单位人
                     * @param _pcuDataSum 大陆和海外地区Pcu统计数据汇总，单位人
                     * 
                     */
                    void SetPcuDataSum(const std::vector<StatisticsItem>& _pcuDataSum);

                    /**
                     * 判断参数 PcuDataSum 是否已赋值
                     * @return PcuDataSum 是否已赋值
                     * 
                     */
                    bool PcuDataSumHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * Dau统计项数目
                     */
                    uint64_t m_dauDataNum;
                    bool m_dauDataNumHasBeenSet;

                    /**
                     * 大陆地区Dau统计数据，单位人
                     */
                    std::vector<StatisticsItem> m_dauDataMainland;
                    bool m_dauDataMainlandHasBeenSet;

                    /**
                     * 海外地区Dau统计数据，单位人
                     */
                    std::vector<StatisticsItem> m_dauDataOversea;
                    bool m_dauDataOverseaHasBeenSet;

                    /**
                     * 大陆和海外地区Dau统计数据汇总，单位人
                     */
                    std::vector<StatisticsItem> m_dauDataSum;
                    bool m_dauDataSumHasBeenSet;

                    /**
                     * 实时语音时长统计项数目
                     */
                    uint64_t m_durationDataNum;
                    bool m_durationDataNumHasBeenSet;

                    /**
                     * 大陆地区实时语音时长统计数据，单位分钟
                     */
                    std::vector<StatisticsItem> m_durationDataMainland;
                    bool m_durationDataMainlandHasBeenSet;

                    /**
                     * 海外地区实时语音时长统计数据，单位分钟
                     */
                    std::vector<StatisticsItem> m_durationDataOversea;
                    bool m_durationDataOverseaHasBeenSet;

                    /**
                     * 大陆和海外地区实时语音时长统计数据汇总，单位分钟
                     */
                    std::vector<StatisticsItem> m_durationDataSum;
                    bool m_durationDataSumHasBeenSet;

                    /**
                     * Pcu统计项数目
                     */
                    uint64_t m_pcuDataNum;
                    bool m_pcuDataNumHasBeenSet;

                    /**
                     * 大陆地区Pcu统计数据，单位人
                     */
                    std::vector<StatisticsItem> m_pcuDataMainland;
                    bool m_pcuDataMainlandHasBeenSet;

                    /**
                     * 海外地区Pcu统计数据，单位人
                     */
                    std::vector<StatisticsItem> m_pcuDataOversea;
                    bool m_pcuDataOverseaHasBeenSet;

                    /**
                     * 大陆和海外地区Pcu统计数据汇总，单位人
                     */
                    std::vector<StatisticsItem> m_pcuDataSum;
                    bool m_pcuDataSumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_APPLICATIONDATASTATISTICS_H_
