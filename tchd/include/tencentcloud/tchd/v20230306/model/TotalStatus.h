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

#ifndef TENCENTCLOUD_TCHD_V20230306_MODEL_TOTALSTATUS_H_
#define TENCENTCLOUD_TCHD_V20230306_MODEL_TOTALSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tchd
    {
        namespace V20230306
        {
            namespace Model
            {
                /**
                * 状态汇总
                */
                class TotalStatus : public AbstractModel
                {
                public:
                    TotalStatus();
                    ~TotalStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取正常状态的数目
                     * @return NormalCount 正常状态的数目
                     * 
                     */
                    int64_t GetNormalCount() const;

                    /**
                     * 设置正常状态的数目
                     * @param _normalCount 正常状态的数目
                     * 
                     */
                    void SetNormalCount(const int64_t& _normalCount);

                    /**
                     * 判断参数 NormalCount 是否已赋值
                     * @return NormalCount 是否已赋值
                     * 
                     */
                    bool NormalCountHasBeenSet() const;

                    /**
                     * 获取通知状态的数目
                     * @return NotifyCount 通知状态的数目
                     * 
                     */
                    int64_t GetNotifyCount() const;

                    /**
                     * 设置通知状态的数目
                     * @param _notifyCount 通知状态的数目
                     * 
                     */
                    void SetNotifyCount(const int64_t& _notifyCount);

                    /**
                     * 判断参数 NotifyCount 是否已赋值
                     * @return NotifyCount 是否已赋值
                     * 
                     */
                    bool NotifyCountHasBeenSet() const;

                    /**
                     * 获取异常状态的数目
                     * @return AbnormalCount 异常状态的数目
                     * 
                     */
                    int64_t GetAbnormalCount() const;

                    /**
                     * 设置异常状态的数目
                     * @param _abnormalCount 异常状态的数目
                     * 
                     */
                    void SetAbnormalCount(const int64_t& _abnormalCount);

                    /**
                     * 判断参数 AbnormalCount 是否已赋值
                     * @return AbnormalCount 是否已赋值
                     * 
                     */
                    bool AbnormalCountHasBeenSet() const;

                private:

                    /**
                     * 正常状态的数目
                     */
                    int64_t m_normalCount;
                    bool m_normalCountHasBeenSet;

                    /**
                     * 通知状态的数目
                     */
                    int64_t m_notifyCount;
                    bool m_notifyCountHasBeenSet;

                    /**
                     * 异常状态的数目
                     */
                    int64_t m_abnormalCount;
                    bool m_abnormalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCHD_V20230306_MODEL_TOTALSTATUS_H_
