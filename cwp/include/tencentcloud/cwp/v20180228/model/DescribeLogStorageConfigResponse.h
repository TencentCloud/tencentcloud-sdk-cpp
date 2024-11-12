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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGSTORAGECONFIGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGSTORAGECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLogStorageConfig返回参数结构体
                */
                class DescribeLogStorageConfigResponse : public AbstractModel
                {
                public:
                    DescribeLogStorageConfigResponse();
                    ~DescribeLogStorageConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取存储类型，string数组
                     * @return Type 存储类型，string数组
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取日志存储时长，3640表示不限
                     * @return Period 日志存储时长，3640表示不限
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取本月Period的修改次数
                     * @return PeriodModifyCount 本月Period的修改次数
                     * 
                     */
                    int64_t GetPeriodModifyCount() const;

                    /**
                     * 判断参数 PeriodModifyCount 是否已赋值
                     * @return PeriodModifyCount 是否已赋值
                     * 
                     */
                    bool PeriodModifyCountHasBeenSet() const;

                    /**
                     * 获取日志存储时长单位，年year/月month/天day
                     * @return Granularity 日志存储时长单位，年year/月month/天day
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * 存储类型，string数组
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 日志存储时长，3640表示不限
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 本月Period的修改次数
                     */
                    int64_t m_periodModifyCount;
                    bool m_periodModifyCountHasBeenSet;

                    /**
                     * 日志存储时长单位，年year/月month/天day
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELOGSTORAGECONFIGRESPONSE_H_
