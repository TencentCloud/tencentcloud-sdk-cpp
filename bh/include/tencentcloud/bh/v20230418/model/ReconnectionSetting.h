/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_RECONNECTIONSETTING_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_RECONNECTIONSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 运维资产重连次数
                */
                class ReconnectionSetting : public AbstractModel
                {
                public:
                    ReconnectionSetting();
                    ~ReconnectionSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取重连次数
                     * @return ReconnectionMaxCount 重连次数
                     * 
                     */
                    uint64_t GetReconnectionMaxCount() const;

                    /**
                     * 设置重连次数
                     * @param _reconnectionMaxCount 重连次数
                     * 
                     */
                    void SetReconnectionMaxCount(const uint64_t& _reconnectionMaxCount);

                    /**
                     * 判断参数 ReconnectionMaxCount 是否已赋值
                     * @return ReconnectionMaxCount 是否已赋值
                     * 
                     */
                    bool ReconnectionMaxCountHasBeenSet() const;

                    /**
                     * 获取true：可以重连，false：不可以重连
                     * @return Enable true：可以重连，false：不可以重连
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置true：可以重连，false：不可以重连
                     * @param _enable true：可以重连，false：不可以重连
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 重连次数
                     */
                    uint64_t m_reconnectionMaxCount;
                    bool m_reconnectionMaxCountHasBeenSet;

                    /**
                     * true：可以重连，false：不可以重连
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_RECONNECTIONSETTING_H_
