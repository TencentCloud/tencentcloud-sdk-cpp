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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEnginesScaleDetail请求参数结构体
                */
                class DescribeDataEnginesScaleDetailRequest : public AbstractModel
                {
                public:
                    DescribeDataEnginesScaleDetailRequest();
                    ~DescribeDataEnginesScaleDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎名称列表
                     * @return DataEngineNames 引擎名称列表
                     * 
                     */
                    std::vector<std::string> GetDataEngineNames() const;

                    /**
                     * 设置引擎名称列表
                     * @param _dataEngineNames 引擎名称列表
                     * 
                     */
                    void SetDataEngineNames(const std::vector<std::string>& _dataEngineNames);

                    /**
                     * 判断参数 DataEngineNames 是否已赋值
                     * @return DataEngineNames 是否已赋值
                     * 
                     */
                    bool DataEngineNamesHasBeenSet() const;

                    /**
                     * 获取开始时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     * @return StartTime 开始时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     * @param _startTime 开始时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
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
                     * 获取结束时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     * @return EndTime 结束时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     * @param _endTime 结束时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 引擎名称列表
                     */
                    std::vector<std::string> m_dataEngineNames;
                    bool m_dataEngineNamesHasBeenSet;

                    /**
                     * 开始时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，时间格式：yyyy-MM-dd HH:mm:ss，最长查询一个月内的记录
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINESSCALEDETAILREQUEST_H_
