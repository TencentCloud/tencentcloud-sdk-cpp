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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 告警策略中监控任务的执行时间点
                */
                class MonitorTime : public AbstractModel
                {
                public:
                    MonitorTime();
                    ~MonitorTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可选值：
<br><li> Period - 周期执行
<br><li> Fixed - 定期执行
                     * @return Type 可选值：
<br><li> Period - 周期执行
<br><li> Fixed - 定期执行
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置可选值：
<br><li> Period - 周期执行
<br><li> Fixed - 定期执行
                     * @param _type 可选值：
<br><li> Period - 周期执行
<br><li> Fixed - 定期执行
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。
                     * @return Time 执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。
                     * @param _time 执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                private:

                    /**
                     * 可选值：
<br><li> Period - 周期执行
<br><li> Fixed - 定期执行
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 执行的周期，或者定制执行的时间节点。单位为分钟，取值范围为1~1440。
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MONITORTIME_H_
