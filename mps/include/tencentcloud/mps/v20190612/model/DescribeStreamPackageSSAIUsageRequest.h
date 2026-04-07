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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESSAIUSAGEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESSAIUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageSSAIUsage请求参数结构体
                */
                class DescribeStreamPackageSSAIUsageRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageSSAIUsageRequest();
                    ~DescribeStreamPackageSSAIUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
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
                     * 获取需要查询的channel_id
                     * @return ChannelIds 需要查询的channel_id
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置需要查询的channel_id
                     * @param _channelIds 需要查询的channel_id
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
                     * 获取需要查询的广告类型。可选Pre-roll/Mid-roll/VOD；若为空，默认查询所有类型
                     * @return Types 需要查询的广告类型。可选Pre-roll/Mid-roll/VOD；若为空，默认查询所有类型
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置需要查询的广告类型。可选Pre-roll/Mid-roll/VOD；若为空，默认查询所有类型
                     * @param _types 需要查询的广告类型。可选Pre-roll/Mid-roll/VOD；若为空，默认查询所有类型
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取维度，可选值：summary对应false；detail 对应true
                     * @return Dimension 维度，可选值：summary对应false；detail 对应true
                     * 
                     */
                    bool GetDimension() const;

                    /**
                     * 设置维度，可选值：summary对应false；detail 对应true
                     * @param _dimension 维度，可选值：summary对应false；detail 对应true
                     * 
                     */
                    void SetDimension(const bool& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     * 
                     */
                    bool DimensionHasBeenSet() const;

                private:

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 需要查询的channel_id
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * 需要查询的广告类型。可选Pre-roll/Mid-roll/VOD；若为空，默认查询所有类型
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * 维度，可选值：summary对应false；detail 对应true
                     */
                    bool m_dimension;
                    bool m_dimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESSAIUSAGEREQUEST_H_
