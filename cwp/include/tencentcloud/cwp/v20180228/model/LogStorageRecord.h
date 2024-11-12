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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LOGSTORAGERECORD_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LOGSTORAGERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 日志存储量记录
                */
                class LogStorageRecord : public AbstractModel
                {
                public:
                    LogStorageRecord();
                    ~LogStorageRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取年月份
                     * @return Month 年月份
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置年月份
                     * @param _month 年月份
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取存储量，字节
                     * @return UsedSize 存储量，字节
                     * 
                     */
                    uint64_t GetUsedSize() const;

                    /**
                     * 设置存储量，字节
                     * @param _usedSize 存储量，字节
                     * 
                     */
                    void SetUsedSize(const uint64_t& _usedSize);

                    /**
                     * 判断参数 UsedSize 是否已赋值
                     * @return UsedSize 是否已赋值
                     * 
                     */
                    bool UsedSizeHasBeenSet() const;

                    /**
                     * 获取总量，字节
                     * @return InquireSize 总量，字节
                     * 
                     */
                    uint64_t GetInquireSize() const;

                    /**
                     * 设置总量，字节
                     * @param _inquireSize 总量，字节
                     * 
                     */
                    void SetInquireSize(const uint64_t& _inquireSize);

                    /**
                     * 判断参数 InquireSize 是否已赋值
                     * @return InquireSize 是否已赋值
                     * 
                     */
                    bool InquireSizeHasBeenSet() const;

                private:

                    /**
                     * 年月份
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 存储量，字节
                     */
                    uint64_t m_usedSize;
                    bool m_usedSizeHasBeenSet;

                    /**
                     * 总量，字节
                     */
                    uint64_t m_inquireSize;
                    bool m_inquireSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LOGSTORAGERECORD_H_
