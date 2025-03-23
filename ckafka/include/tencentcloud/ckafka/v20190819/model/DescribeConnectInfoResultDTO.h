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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTINFORESULTDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTINFORESULTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * topic链接信息
                */
                class DescribeConnectInfoResultDTO : public AbstractModel
                {
                public:
                    DescribeConnectInfoResultDTO();
                    ~DescribeConnectInfoResultDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpAddr ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIpAddr() const;

                    /**
                     * 设置ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipAddr ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpAddr(const std::string& _ipAddr);

                    /**
                     * 判断参数 IpAddr 是否已赋值
                     * @return IpAddr 是否已赋值
                     * 
                     */
                    bool IpAddrHasBeenSet() const;

                    /**
                     * 获取连结时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 连结时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置连结时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 连结时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否支持的版本
                     * @return IsUnSupportVersion 是否支持的版本
                     * 
                     */
                    bool GetIsUnSupportVersion() const;

                    /**
                     * 设置是否支持的版本
                     * @param _isUnSupportVersion 是否支持的版本
                     * 
                     */
                    void SetIsUnSupportVersion(const bool& _isUnSupportVersion);

                    /**
                     * 判断参数 IsUnSupportVersion 是否已赋值
                     * @return IsUnSupportVersion 是否已赋值
                     * 
                     */
                    bool IsUnSupportVersionHasBeenSet() const;

                private:

                    /**
                     * ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipAddr;
                    bool m_ipAddrHasBeenSet;

                    /**
                     * 连结时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 是否支持的版本
                     */
                    bool m_isUnSupportVersion;
                    bool m_isUnSupportVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTINFORESULTDTO_H_
