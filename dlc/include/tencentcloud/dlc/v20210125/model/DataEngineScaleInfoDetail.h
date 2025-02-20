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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFODETAIL_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 引擎规格详情
                */
                class DataEngineScaleInfoDetail : public AbstractModel
                {
                public:
                    DataEngineScaleInfoDetail();
                    ~DataEngineScaleInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计开始时间，格式为：yyyy-MM-dd HH:mm:ss
                     * @return StartTime 统计开始时间，格式为：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计开始时间，格式为：yyyy-MM-dd HH:mm:ss
                     * @param _startTime 统计开始时间，格式为：yyyy-MM-dd HH:mm:ss
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
                     * 获取统计结束时间，格式为：yyyy-MM-dd HH:mm:ss
                     * @return EndTime 统计结束时间，格式为：yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计结束时间，格式为：yyyy-MM-dd HH:mm:ss
                     * @param _endTime 统计结束时间，格式为：yyyy-MM-dd HH:mm:ss
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
                     * 获取当前统计时间段，引擎规格
                     * @return CU 当前统计时间段，引擎规格
                     * 
                     */
                    int64_t GetCU() const;

                    /**
                     * 设置当前统计时间段，引擎规格
                     * @param _cU 当前统计时间段，引擎规格
                     * 
                     */
                    void SetCU(const int64_t& _cU);

                    /**
                     * 判断参数 CU 是否已赋值
                     * @return CU 是否已赋值
                     * 
                     */
                    bool CUHasBeenSet() const;

                private:

                    /**
                     * 统计开始时间，格式为：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间，格式为：yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 当前统计时间段，引擎规格
                     */
                    int64_t m_cU;
                    bool m_cUHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFODETAIL_H_
