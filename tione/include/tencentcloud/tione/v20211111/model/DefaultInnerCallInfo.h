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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DEFAULTINNERCALLINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DEFAULTINNERCALLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 默认内网调用信息
                */
                class DefaultInnerCallInfo : public AbstractModel
                {
                public:
                    DefaultInnerCallInfo();
                    ~DefaultInnerCallInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可以进行调用的VPC-ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcIds 可以进行调用的VPC-ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置可以进行调用的VPC-ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcIds 可以进行调用的VPC-ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取默认内网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerHttpAddr 默认内网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInnerHttpAddr() const;

                    /**
                     * 设置默认内网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerHttpAddr 默认内网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerHttpAddr(const std::string& _innerHttpAddr);

                    /**
                     * 判断参数 InnerHttpAddr 是否已赋值
                     * @return InnerHttpAddr 是否已赋值
                     * 
                     */
                    bool InnerHttpAddrHasBeenSet() const;

                private:

                    /**
                     * 可以进行调用的VPC-ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 默认内网调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_innerHttpAddr;
                    bool m_innerHttpAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DEFAULTINNERCALLINFO_H_
