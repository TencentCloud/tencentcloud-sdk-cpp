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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_INTRANETCONFIGOUT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_INTRANETCONFIGOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 内网配置
                */
                class IntranetConfigOut : public AbstractModel
                {
                public:
                    IntranetConfigOut();
                    ~IntranetConfigOut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用固定内网IP
ENABLE 为启用
DISABLE 为不启用
                     * @return IpFixed 是否启用固定内网IP
ENABLE 为启用
DISABLE 为不启用
                     * 
                     */
                    std::string GetIpFixed() const;

                    /**
                     * 设置是否启用固定内网IP
ENABLE 为启用
DISABLE 为不启用
                     * @param _ipFixed 是否启用固定内网IP
ENABLE 为启用
DISABLE 为不启用
                     * 
                     */
                    void SetIpFixed(const std::string& _ipFixed);

                    /**
                     * 判断参数 IpFixed 是否已赋值
                     * @return IpFixed 是否已赋值
                     * 
                     */
                    bool IpFixedHasBeenSet() const;

                    /**
                     * 获取若已启用固定内网IP，则该字段返回使用的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpAddress 若已启用固定内网IP，则该字段返回使用的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpAddress() const;

                    /**
                     * 设置若已启用固定内网IP，则该字段返回使用的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipAddress 若已启用固定内网IP，则该字段返回使用的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpAddress(const std::vector<std::string>& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     * 
                     */
                    bool IpAddressHasBeenSet() const;

                private:

                    /**
                     * 是否启用固定内网IP
ENABLE 为启用
DISABLE 为不启用
                     */
                    std::string m_ipFixed;
                    bool m_ipFixedHasBeenSet;

                    /**
                     * 若已启用固定内网IP，则该字段返回使用的IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_INTRANETCONFIGOUT_H_
