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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 实例的内网ip相关信息。
                */
                class PrivateIPAddressInfo : public AbstractModel
                {
                public:
                    PrivateIPAddressInfo();
                    ~PrivateIPAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例的内网ip。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIPAddress 实例的内网ip。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateIPAddress() const;

                    /**
                     * 设置实例的内网ip。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIPAddress 实例的内网ip。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIPAddress(const std::string& _privateIPAddress);

                    /**
                     * 判断参数 PrivateIPAddress 是否已赋值
                     * @return PrivateIPAddress 是否已赋值
                     * 
                     */
                    bool PrivateIPAddressHasBeenSet() const;

                private:

                    /**
                     * 实例的内网ip。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateIPAddress;
                    bool m_privateIPAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_PRIVATEIPADDRESSINFO_H_
