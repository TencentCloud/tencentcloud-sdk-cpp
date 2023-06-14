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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_IPFREQLIMIT_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_IPFREQLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * IP限频配置。
                */
                class IpFreqLimit : public AbstractModel
                {
                public:
                    IpFreqLimit();
                    ~IpFreqLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP限频配置开关，on或off。
                     * @return Switch IP限频配置开关，on或off。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置IP限频配置开关，on或off。
                     * @param _switch IP限频配置开关，on或off。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取每秒请求数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qps 每秒请求数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQps() const;

                    /**
                     * 设置每秒请求数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qps 每秒请求数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQps(const int64_t& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                private:

                    /**
                     * IP限频配置开关，on或off。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 每秒请求数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_qps;
                    bool m_qpsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_IPFREQLIMIT_H_
