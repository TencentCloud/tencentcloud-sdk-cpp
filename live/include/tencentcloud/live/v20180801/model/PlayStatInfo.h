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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYSTATINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYSTATINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 按省份运营商查询的播放信息。
                */
                class PlayStatInfo : public AbstractModel
                {
                public:
                    PlayStatInfo();
                    ~PlayStatInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据时间点。
                     * @return Time 数据时间点。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置数据时间点。
                     * @param _time 数据时间点。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取带宽/流量/请求数/并发连接数/下载速度的值，若没数据返回时该值为0。
                     * @return Value 带宽/流量/请求数/并发连接数/下载速度的值，若没数据返回时该值为0。
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置带宽/流量/请求数/并发连接数/下载速度的值，若没数据返回时该值为0。
                     * @param _value 带宽/流量/请求数/并发连接数/下载速度的值，若没数据返回时该值为0。
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 数据时间点。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 带宽/流量/请求数/并发连接数/下载速度的值，若没数据返回时该值为0。
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYSTATINFO_H_
