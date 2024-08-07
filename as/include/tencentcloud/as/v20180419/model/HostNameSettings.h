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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 云服务器主机名（HostName）的相关设置
                */
                class HostNameSettings : public AbstractModel
                {
                public:
                    HostNameSettings();
                    ~HostNameSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云服务器的主机名。
<li> 点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li> 其他类型（Linux 等）实例：字符长度为[2, 40]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。不允许为纯数字。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName 云服务器的主机名。
<li> 点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li> 其他类型（Linux 等）实例：字符长度为[2, 40]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。不允许为纯数字。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置云服务器的主机名。
<li> 点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li> 其他类型（Linux 等）实例：字符长度为[2, 40]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。不允许为纯数字。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostName 云服务器的主机名。
<li> 点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li> 其他类型（Linux 等）实例：字符长度为[2, 40]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。不允许为纯数字。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取云服务器主机名的风格，取值范围包括 ORIGINAL 和  UNIQUE，默认为 ORIGINAL。
<li> ORIGINAL，AS 直接将入参中所填的 HostName 传递给 CVM，CVM 可能会对 HostName 追加序列号，伸缩组中实例的 HostName 会出现冲突的情况。</li> 
<li> UNIQUE，入参所填的 HostName 相当于主机名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 HostName 可以保证唯一。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostNameStyle 云服务器主机名的风格，取值范围包括 ORIGINAL 和  UNIQUE，默认为 ORIGINAL。
<li> ORIGINAL，AS 直接将入参中所填的 HostName 传递给 CVM，CVM 可能会对 HostName 追加序列号，伸缩组中实例的 HostName 会出现冲突的情况。</li> 
<li> UNIQUE，入参所填的 HostName 相当于主机名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 HostName 可以保证唯一。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostNameStyle() const;

                    /**
                     * 设置云服务器主机名的风格，取值范围包括 ORIGINAL 和  UNIQUE，默认为 ORIGINAL。
<li> ORIGINAL，AS 直接将入参中所填的 HostName 传递给 CVM，CVM 可能会对 HostName 追加序列号，伸缩组中实例的 HostName 会出现冲突的情况。</li> 
<li> UNIQUE，入参所填的 HostName 相当于主机名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 HostName 可以保证唯一。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostNameStyle 云服务器主机名的风格，取值范围包括 ORIGINAL 和  UNIQUE，默认为 ORIGINAL。
<li> ORIGINAL，AS 直接将入参中所填的 HostName 传递给 CVM，CVM 可能会对 HostName 追加序列号，伸缩组中实例的 HostName 会出现冲突的情况。</li> 
<li> UNIQUE，入参所填的 HostName 相当于主机名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 HostName 可以保证唯一。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostNameStyle(const std::string& _hostNameStyle);

                    /**
                     * 判断参数 HostNameStyle 是否已赋值
                     * @return HostNameStyle 是否已赋值
                     * 
                     */
                    bool HostNameStyleHasBeenSet() const;

                    /**
                     * 获取云服务器的主机名后缀。
<li> 点号（.）和短横线（-）不能作为 HostNameSuffix 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li>其他类型（Linux 等）实例：字符长度为[1, 37]，且与 HostName 的长度和不能超过 39，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li> 
假设后缀名称为 suffix，原主机名为 test.0，最终主机名为 test.0.suffix。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostNameSuffix 云服务器的主机名后缀。
<li> 点号（.）和短横线（-）不能作为 HostNameSuffix 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li>其他类型（Linux 等）实例：字符长度为[1, 37]，且与 HostName 的长度和不能超过 39，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li> 
假设后缀名称为 suffix，原主机名为 test.0，最终主机名为 test.0.suffix。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostNameSuffix() const;

                    /**
                     * 设置云服务器的主机名后缀。
<li> 点号（.）和短横线（-）不能作为 HostNameSuffix 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li>其他类型（Linux 等）实例：字符长度为[1, 37]，且与 HostName 的长度和不能超过 39，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li> 
假设后缀名称为 suffix，原主机名为 test.0，最终主机名为 test.0.suffix。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostNameSuffix 云服务器的主机名后缀。
<li> 点号（.）和短横线（-）不能作为 HostNameSuffix 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li>其他类型（Linux 等）实例：字符长度为[1, 37]，且与 HostName 的长度和不能超过 39，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li> 
假设后缀名称为 suffix，原主机名为 test.0，最终主机名为 test.0.suffix。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostNameSuffix(const std::string& _hostNameSuffix);

                    /**
                     * 判断参数 HostNameSuffix 是否已赋值
                     * @return HostNameSuffix 是否已赋值
                     * 
                     */
                    bool HostNameSuffixHasBeenSet() const;

                private:

                    /**
                     * 云服务器的主机名。
<li> 点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li> 其他类型（Linux 等）实例：字符长度为[2, 40]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。不允许为纯数字。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 云服务器主机名的风格，取值范围包括 ORIGINAL 和  UNIQUE，默认为 ORIGINAL。
<li> ORIGINAL，AS 直接将入参中所填的 HostName 传递给 CVM，CVM 可能会对 HostName 追加序列号，伸缩组中实例的 HostName 会出现冲突的情况。</li> 
<li> UNIQUE，入参所填的 HostName 相当于主机名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 HostName 可以保证唯一。</li> 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostNameStyle;
                    bool m_hostNameStyleHasBeenSet;

                    /**
                     * 云服务器的主机名后缀。
<li> 点号（.）和短横线（-）不能作为 HostNameSuffix 的首尾字符，不能连续使用。</li> 
<li> 不支持 Windows 实例。</li> 
<li>其他类型（Linux 等）实例：字符长度为[1, 37]，且与 HostName 的长度和不能超过 39，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li> 
假设后缀名称为 suffix，原主机名为 test.0，最终主机名为 test.0.suffix。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostNameSuffix;
                    bool m_hostNameSuffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_HOSTNAMESETTINGS_H_
