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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_OVERVIEW_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_OVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * 识别结果统计
                */
                class Overview : public AbstractModel
                {
                public:
                    Overview();
                    ~Overview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总调用量
                     * @return TotalCount 总调用量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总调用量
                     * @param _totalCount 总调用量
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取总调用时长
                     * @return TotalHour 总调用时长
                     * 
                     */
                    int64_t GetTotalHour() const;

                    /**
                     * 设置总调用时长
                     * @param _totalHour 总调用时长
                     * 
                     */
                    void SetTotalHour(const int64_t& _totalHour);

                    /**
                     * 判断参数 TotalHour 是否已赋值
                     * @return TotalHour 是否已赋值
                     * 
                     */
                    bool TotalHourHasBeenSet() const;

                    /**
                     * 获取通过量
                     * @return PassCount 通过量
                     * 
                     */
                    int64_t GetPassCount() const;

                    /**
                     * 设置通过量
                     * @param _passCount 通过量
                     * 
                     */
                    void SetPassCount(const int64_t& _passCount);

                    /**
                     * 判断参数 PassCount 是否已赋值
                     * @return PassCount 是否已赋值
                     * 
                     */
                    bool PassCountHasBeenSet() const;

                    /**
                     * 获取通过时长
                     * @return PassHour 通过时长
                     * 
                     */
                    int64_t GetPassHour() const;

                    /**
                     * 设置通过时长
                     * @param _passHour 通过时长
                     * 
                     */
                    void SetPassHour(const int64_t& _passHour);

                    /**
                     * 判断参数 PassHour 是否已赋值
                     * @return PassHour 是否已赋值
                     * 
                     */
                    bool PassHourHasBeenSet() const;

                    /**
                     * 获取违规量
                     * @return EvilCount 违规量
                     * 
                     */
                    int64_t GetEvilCount() const;

                    /**
                     * 设置违规量
                     * @param _evilCount 违规量
                     * 
                     */
                    void SetEvilCount(const int64_t& _evilCount);

                    /**
                     * 判断参数 EvilCount 是否已赋值
                     * @return EvilCount 是否已赋值
                     * 
                     */
                    bool EvilCountHasBeenSet() const;

                    /**
                     * 获取违规时长
                     * @return EvilHour 违规时长
                     * 
                     */
                    int64_t GetEvilHour() const;

                    /**
                     * 设置违规时长
                     * @param _evilHour 违规时长
                     * 
                     */
                    void SetEvilHour(const int64_t& _evilHour);

                    /**
                     * 判断参数 EvilHour 是否已赋值
                     * @return EvilHour 是否已赋值
                     * 
                     */
                    bool EvilHourHasBeenSet() const;

                    /**
                     * 获取疑似违规量
                     * @return SuspectCount 疑似违规量
                     * 
                     */
                    int64_t GetSuspectCount() const;

                    /**
                     * 设置疑似违规量
                     * @param _suspectCount 疑似违规量
                     * 
                     */
                    void SetSuspectCount(const int64_t& _suspectCount);

                    /**
                     * 判断参数 SuspectCount 是否已赋值
                     * @return SuspectCount 是否已赋值
                     * 
                     */
                    bool SuspectCountHasBeenSet() const;

                    /**
                     * 获取疑似违规时长
                     * @return SuspectHour 疑似违规时长
                     * 
                     */
                    int64_t GetSuspectHour() const;

                    /**
                     * 设置疑似违规时长
                     * @param _suspectHour 疑似违规时长
                     * 
                     */
                    void SetSuspectHour(const int64_t& _suspectHour);

                    /**
                     * 判断参数 SuspectHour 是否已赋值
                     * @return SuspectHour 是否已赋值
                     * 
                     */
                    bool SuspectHourHasBeenSet() const;

                private:

                    /**
                     * 总调用量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总调用时长
                     */
                    int64_t m_totalHour;
                    bool m_totalHourHasBeenSet;

                    /**
                     * 通过量
                     */
                    int64_t m_passCount;
                    bool m_passCountHasBeenSet;

                    /**
                     * 通过时长
                     */
                    int64_t m_passHour;
                    bool m_passHourHasBeenSet;

                    /**
                     * 违规量
                     */
                    int64_t m_evilCount;
                    bool m_evilCountHasBeenSet;

                    /**
                     * 违规时长
                     */
                    int64_t m_evilHour;
                    bool m_evilHourHasBeenSet;

                    /**
                     * 疑似违规量
                     */
                    int64_t m_suspectCount;
                    bool m_suspectCountHasBeenSet;

                    /**
                     * 疑似违规时长
                     */
                    int64_t m_suspectHour;
                    bool m_suspectHourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_OVERVIEW_H_
