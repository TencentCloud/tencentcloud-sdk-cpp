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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_NETDETAILS_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_NETDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 网络详细信息
                */
                class NetDetails : public AbstractModel
                {
                public:
                    NetDetails();
                    ~NetDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量值（byte）
                     * @return Current 流量值（byte）
                     * 
                     */
                    double GetCurrent() const;

                    /**
                     * 设置流量值（byte）
                     * @param _current 流量值（byte）
                     * 
                     */
                    void SetCurrent(const double& _current);

                    /**
                     * 判断参数 Current 是否已赋值
                     * @return Current 是否已赋值
                     * 
                     */
                    bool CurrentHasBeenSet() const;

                    /**
                     * 获取时间点，单位：s
                     * @return Time 时间点，单位：s
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间点，单位：s
                     * @param _time 时间点，单位：s
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * 流量值（byte）
                     */
                    double m_current;
                    bool m_currentHasBeenSet;

                    /**
                     * 时间点，单位：s
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_NETDETAILS_H_
