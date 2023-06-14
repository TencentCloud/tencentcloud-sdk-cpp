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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_AVAILABLERECOVERYTIMERANGE_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_AVAILABLERECOVERYTIMERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * 可以回档时间范围
                */
                class AvailableRecoveryTimeRange : public AbstractModel
                {
                public:
                    AvailableRecoveryTimeRange();
                    ~AvailableRecoveryTimeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可回档起始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return AvailableBeginTime 可回档起始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetAvailableBeginTime() const;

                    /**
                     * 设置可回档起始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _availableBeginTime 可回档起始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    void SetAvailableBeginTime(const std::string& _availableBeginTime);

                    /**
                     * 判断参数 AvailableBeginTime 是否已赋值
                     * @return AvailableBeginTime 是否已赋值
                     * 
                     */
                    bool AvailableBeginTimeHasBeenSet() const;

                    /**
                     * 获取可回档结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @return AvailableEndTime 可回档结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    std::string GetAvailableEndTime() const;

                    /**
                     * 设置可回档结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * @param _availableEndTime 可回档结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     * 
                     */
                    void SetAvailableEndTime(const std::string& _availableEndTime);

                    /**
                     * 判断参数 AvailableEndTime 是否已赋值
                     * @return AvailableEndTime 是否已赋值
                     * 
                     */
                    bool AvailableEndTimeHasBeenSet() const;

                private:

                    /**
                     * 可回档起始时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_availableBeginTime;
                    bool m_availableBeginTimeHasBeenSet;

                    /**
                     * 可回档结束时间。按照RFC3339标准表示，并且使用东八区时区时间，格式为：YYYY-MM-DDThh:mm:ss+08:00。
                     */
                    std::string m_availableEndTime;
                    bool m_availableEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_AVAILABLERECOVERYTIMERANGE_H_
