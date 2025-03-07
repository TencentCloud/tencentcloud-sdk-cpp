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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_SECONDLEVELBACKUPMISSINGTIMESTAMPS_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_SECONDLEVELBACKUPMISSINGTIMESTAMPS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 秒级备份不存在的时间戳范围
                */
                class SecondLevelBackupMissingTimestamps : public AbstractModel
                {
                public:
                    SecondLevelBackupMissingTimestamps();
                    ~SecondLevelBackupMissingTimestamps() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始时间戳
                     * @return StartTimeStamp 开始时间戳
                     * 
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置开始时间戳
                     * @param _startTimeStamp 开始时间戳
                     * 
                     */
                    void SetStartTimeStamp(const int64_t& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取结束时间戳
                     * @return EndTimeStamp 结束时间戳
                     * 
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置结束时间戳
                     * @param _endTimeStamp 结束时间戳
                     * 
                     */
                    void SetEndTimeStamp(const int64_t& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                private:

                    /**
                     * 开始时间戳
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * 结束时间戳
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_SECONDLEVELBACKUPMISSINGTIMESTAMPS_H_
