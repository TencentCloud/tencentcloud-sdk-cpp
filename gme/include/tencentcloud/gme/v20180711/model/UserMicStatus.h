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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_USERMICSTATUS_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_USERMICSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 用户麦克风状态
                */
                class UserMicStatus : public AbstractModel
                {
                public:
                    UserMicStatus();
                    ~UserMicStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return Uid 用户ID
                     */
                    int64_t GetUid() const;

                    /**
                     * 设置用户ID
                     * @param Uid 用户ID
                     */
                    void SetUid(const int64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取是否开麦 。1闭麦  2开麦
                     * @return EnableMic 是否开麦 。1闭麦  2开麦
                     */
                    int64_t GetEnableMic() const;

                    /**
                     * 设置是否开麦 。1闭麦  2开麦
                     * @param EnableMic 是否开麦 。1闭麦  2开麦
                     */
                    void SetEnableMic(const int64_t& _enableMic);

                    /**
                     * 判断参数 EnableMic 是否已赋值
                     * @return EnableMic 是否已赋值
                     */
                    bool EnableMicHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    int64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 是否开麦 。1闭麦  2开麦
                     */
                    int64_t m_enableMic;
                    bool m_enableMicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_USERMICSTATUS_H_
