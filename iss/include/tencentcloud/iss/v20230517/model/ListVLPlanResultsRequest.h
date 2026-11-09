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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTVLPLANRESULTSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTVLPLANRESULTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListVLPlanResults请求参数结构体
                */
                class ListVLPlanResultsRequest : public AbstractModel
                {
                public:
                    ListVLPlanResultsRequest();
                    ~ListVLPlanResultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间戳（秒），不早于 30 天前</p>
                     * @return Start <p>开始时间戳（秒），不早于 30 天前</p>
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置<p>开始时间戳（秒），不早于 30 天前</p>
                     * @param _start <p>开始时间戳（秒），不早于 30 天前</p>
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取<p>结束时间戳（秒），不超过当前时间，时间范围不超过 30 天</p>
                     * @return End <p>结束时间戳（秒），不超过当前时间，时间范围不超过 30 天</p>
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置<p>结束时间戳（秒），不超过当前时间，时间范围不超过 30 天</p>
                     * @param _end <p>结束时间戳（秒），不超过当前时间，时间范围不超过 30 天</p>
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取<p>分析计划 ID，不传则查询所有计划的结果</p>
                     * @return VLPlanId <p>分析计划 ID，不传则查询所有计划的结果</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>分析计划 ID，不传则查询所有计划的结果</p>
                     * @param _vLPlanId <p>分析计划 ID，不传则查询所有计划的结果</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>通道 ID 列表，支持多值（英文逗号分隔），不传则查询所有通道的结果</p>
                     * @return ChannelIds <p>通道 ID 列表，支持多值（英文逗号分隔），不传则查询所有通道的结果</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置<p>通道 ID 列表，支持多值（英文逗号分隔），不传则查询所有通道的结果</p>
                     * @param _channelIds <p>通道 ID 列表，支持多值（英文逗号分隔），不传则查询所有通道的结果</p>
                     * 
                     */
                    void SetChannelIds(const std::vector<std::string>& _channelIds);

                    /**
                     * 判断参数 ChannelIds 是否已赋值
                     * @return ChannelIds 是否已赋值
                     * 
                     */
                    bool ChannelIdsHasBeenSet() const;

                    /**
                     * 获取<p>页码，默认 1</p>
                     * @return PageNumber <p>页码，默认 1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，默认 1</p>
                     * @param _pageNumber <p>页码，默认 1</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，默认 20，最大 200</p>
                     * @return PageSize <p>每页数量，默认 20，最大 200</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量，默认 20，最大 200</p>
                     * @param _pageSize <p>每页数量，默认 20，最大 200</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     * @return AnalysisMode <p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     * 
                     */
                    std::string GetAnalysisMode() const;

                    /**
                     * 设置<p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     * @param _analysisMode <p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     * 
                     */
                    void SetAnalysisMode(const std::string& _analysisMode);

                    /**
                     * 判断参数 AnalysisMode 是否已赋值
                     * @return AnalysisMode 是否已赋值
                     * 
                     */
                    bool AnalysisModeHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间戳（秒），不早于 30 天前</p>
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * <p>结束时间戳（秒），不超过当前时间，时间范围不超过 30 天</p>
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                    /**
                     * <p>分析计划 ID，不传则查询所有计划的结果</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                    /**
                     * <p>通道 ID 列表，支持多值（英文逗号分隔），不传则查询所有通道的结果</p>
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * <p>页码，默认 1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页数量，默认 20，最大 200</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>分析模式</p><p>枚举值：</p><ul><li>image： 图片模式</li><li>video： 视频模式</li></ul>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTVLPLANRESULTSREQUEST_H_
