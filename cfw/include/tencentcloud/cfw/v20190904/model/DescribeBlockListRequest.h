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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeBlockList请求参数结构体
                */
                class DescribeBlockListRequest : public AbstractModel
                {
                public:
                    DescribeBlockListRequest();
                    ~DescribeBlockListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取长度
                     * @return Limit 长度
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置长度
                     * @param _limit 长度
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取频率类型
                     * @return StatTimeSpan 频率类型
                     * 
                     */
                    int64_t GetStatTimeSpan() const;

                    /**
                     * 设置频率类型
                     * @param _statTimeSpan 频率类型
                     * 
                     */
                    void SetStatTimeSpan(const int64_t& _statTimeSpan);

                    /**
                     * 判断参数 StatTimeSpan 是否已赋值
                     * @return StatTimeSpan 是否已赋值
                     * 
                     */
                    bool StatTimeSpanHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return SearchValue 查询条件
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置查询条件
                     * @param _searchValue 查询条件
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取升序降序
                     * @return Order 升序降序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置升序降序
                     * @param _order 升序降序
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return By 排序字段
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param _by 排序字段
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取方向 1 入 0出
                     * @return Direction 方向 1 入 0出
                     * 
                     */
                    std::string GetDirection() const;

                    /**
                     * 设置方向 1 入 0出
                     * @param _direction 方向 1 入 0出
                     * 
                     */
                    void SetDirection(const std::string& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取是否处置 1处置 0不是
                     * @return ByPass 是否处置 1处置 0不是
                     * 
                     */
                    std::string GetByPass() const;

                    /**
                     * 设置是否处置 1处置 0不是
                     * @param _byPass 是否处置 1处置 0不是
                     * 
                     */
                    void SetByPass(const std::string& _byPass);

                    /**
                     * 判断参数 ByPass 是否已赋值
                     * @return ByPass 是否已赋值
                     * 
                     */
                    bool ByPassHasBeenSet() const;

                    /**
                     * 获取来源
                     * @return Source 来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源
                     * @param _source 来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取国家 1国内
                     * @return Country 国家 1国内
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家 1国内
                     * @param _country 国家 1国内
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取资产id
                     * @return AssetId 资产id
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产id
                     * @param _assetId 资产id
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取日志来源 move：vpc间防火墙
                     * @return LogSource 日志来源 move：vpc间防火墙
                     * 
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置日志来源 move：vpc间防火墙
                     * @param _logSource 日志来源 move：vpc间防火墙
                     * 
                     */
                    void SetLogSource(const std::string& _logSource);

                    /**
                     * 判断参数 LogSource 是否已赋值
                     * @return LogSource 是否已赋值
                     * 
                     */
                    bool LogSourceHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 长度
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 频率类型
                     */
                    int64_t m_statTimeSpan;
                    bool m_statTimeSpanHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 查询条件
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 升序降序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 方向 1 入 0出
                     */
                    std::string m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 是否处置 1处置 0不是
                     */
                    std::string m_byPass;
                    bool m_byPassHasBeenSet;

                    /**
                     * 来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 国家 1国内
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 资产id
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 日志来源 move：vpc间防火墙
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKLISTREQUEST_H_
