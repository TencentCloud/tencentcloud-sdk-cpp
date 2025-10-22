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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 访问密钥告警数量
                */
                class AccessKeyAlarmCount : public AbstractModel
                {
                public:
                    AccessKeyAlarmCount();
                    ~AccessKeyAlarmCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问密钥的ID
                     * @return ID 访问密钥的ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置访问密钥的ID
                     * @param _iD 访问密钥的ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取访问密钥
                     * @return AccessKey 访问密钥
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置访问密钥
                     * @param _accessKey 访问密钥
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取告警数量
                     * @return AlarmCount 告警数量
                     * 
                     */
                    int64_t GetAlarmCount() const;

                    /**
                     * 设置告警数量
                     * @param _alarmCount 告警数量
                     * 
                     */
                    void SetAlarmCount(const int64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                private:

                    /**
                     * 访问密钥的ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 访问密钥
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 告警数量
                     */
                    int64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARMCOUNT_H_
