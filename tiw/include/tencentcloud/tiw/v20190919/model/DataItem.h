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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DATAITEM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/Detail.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 画图数据，Time/Value/Details
                */
                class DataItem : public AbstractModel
                {
                public:
                    DataItem();
                    ~DataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
按月格式yyyy-mm
按天格式yyyy-mm-dd
按分钟格式 yyyy-mm-dd HH:MM:SS
                     * @return Time 时间
按月格式yyyy-mm
按天格式yyyy-mm-dd
按分钟格式 yyyy-mm-dd HH:MM:SS
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间
按月格式yyyy-mm
按天格式yyyy-mm-dd
按分钟格式 yyyy-mm-dd HH:MM:SS
                     * @param _time 时间
按月格式yyyy-mm
按天格式yyyy-mm-dd
按分钟格式 yyyy-mm-dd HH:MM:SS
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
                     * 获取画图所需要的值
                     * @return Value 画图所需要的值
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置画图所需要的值
                     * @param _value 画图所需要的值
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取各个具体指标的详情
                     * @return Details 各个具体指标的详情
                     * 
                     */
                    std::vector<Detail> GetDetails() const;

                    /**
                     * 设置各个具体指标的详情
                     * @param _details 各个具体指标的详情
                     * 
                     */
                    void SetDetails(const std::vector<Detail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 时间
按月格式yyyy-mm
按天格式yyyy-mm-dd
按分钟格式 yyyy-mm-dd HH:MM:SS
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 画图所需要的值
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 各个具体指标的详情
                     */
                    std::vector<Detail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DATAITEM_H_
