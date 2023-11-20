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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSHISTOGRAMITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSHISTOGRAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 用于接口DescribeAccessHistogram 的出参
                */
                class AccessHistogramItem : public AbstractModel
                {
                public:
                    AccessHistogramItem();
                    ~AccessHistogramItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间，单位ms
                     * @return BTime 时间，单位ms
                     * @deprecated
                     */
                    int64_t GetBTime() const;

                    /**
                     * 设置时间，单位ms
                     * @param _bTime 时间，单位ms
                     * @deprecated
                     */
                    void SetBTime(const int64_t& _bTime);

                    /**
                     * 判断参数 BTime 是否已赋值
                     * @return BTime 是否已赋值
                     * @deprecated
                     */
                    bool BTimeHasBeenSet() const;

                    /**
                     * 获取日志条数
                     * @return Count 日志条数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置日志条数
                     * @param _count 日志条数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取时间，单位ms
                     * @return BeginTime 时间，单位ms
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置时间，单位ms
                     * @param _beginTime 时间，单位ms
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                private:

                    /**
                     * 时间，单位ms
                     */
                    int64_t m_bTime;
                    bool m_bTimeHasBeenSet;

                    /**
                     * 日志条数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 时间，单位ms
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSHISTOGRAMITEM_H_
