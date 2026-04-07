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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYUSAGEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYUSAGEREQUEST_H_

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
                * DescribeStreamPackageLinearAssemblyUsage请求参数结构体
                */
                class DescribeStreamPackageLinearAssemblyUsageRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageLinearAssemblyUsageRequest();
                    ~DescribeStreamPackageLinearAssemblyUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询开始时间
                     * @return StartTime 查询开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间
                     * @param _startTime 查询开始时间
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
                     * 获取查询结束时间
                     * @return EndTime 查询结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _endTime 查询结束时间
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

                    /**
                     * 获取要查询的频道ID列表
                     * @return ChannelIds 要查询的频道ID列表
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置要查询的频道ID列表
                     * @param _channelIds 要查询的频道ID列表
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
                     * 获取要查询的频道类型，可选Basic/Standard；若为空，默认查询所有类型
                     * @return ChannelTiers 要查询的频道类型，可选Basic/Standard；若为空，默认查询所有类型
                     * 
                     */
                    std::vector<std::string> GetChannelTiers() const;

                    /**
                     * 设置要查询的频道类型，可选Basic/Standard；若为空，默认查询所有类型
                     * @param _channelTiers 要查询的频道类型，可选Basic/Standard；若为空，默认查询所有类型
                     * 
                     */
                    void SetChannelTiers(const std::vector<std::string>& _channelTiers);

                    /**
                     * 判断参数 ChannelTiers 是否已赋值
                     * @return ChannelTiers 是否已赋值
                     * 
                     */
                    bool ChannelTiersHasBeenSet() const;

                private:

                    /**
                     * 查询开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 维度，可选值：summary对应false；detail 对应true
                     */
                    bool m_dimension;
                    bool m_dimensionHasBeenSet;

                    /**
                     * 要查询的频道ID列表
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * 要查询的频道类型，可选Basic/Standard；若为空，默认查询所有类型
                     */
                    std::vector<std::string> m_channelTiers;
                    bool m_channelTiersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGELINEARASSEMBLYUSAGEREQUEST_H_
