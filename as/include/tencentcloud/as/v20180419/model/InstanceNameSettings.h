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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_

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
                * 云服务器实例名称（InstanceName）的相关设置
                */
                class InstanceNameSettings : public AbstractModel
                {
                public:
                    InstanceNameSettings();
                    ~InstanceNameSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云服务器的实例名。字符长度为[2, 108]。
                     * @return InstanceName 云服务器的实例名。字符长度为[2, 108]。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置云服务器的实例名。字符长度为[2, 108]。
                     * @param _instanceName 云服务器的实例名。字符长度为[2, 108]。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取云服务器实例名的风格，取值范围包括 ORIGINAL 和 UNIQUE，默认为 ORIGINAL。

ORIGINAL，AS 直接将入参中所填的 InstanceName 传递给 CVM，CVM 可能会对 InstanceName 追加序列号，伸缩组中实例的 InstanceName 会出现冲突的情况。

UNIQUE，入参所填的 InstanceName 相当于实例名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 InstanceName 可以保证唯一。
                     * @return InstanceNameStyle 云服务器实例名的风格，取值范围包括 ORIGINAL 和 UNIQUE，默认为 ORIGINAL。

ORIGINAL，AS 直接将入参中所填的 InstanceName 传递给 CVM，CVM 可能会对 InstanceName 追加序列号，伸缩组中实例的 InstanceName 会出现冲突的情况。

UNIQUE，入参所填的 InstanceName 相当于实例名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 InstanceName 可以保证唯一。
                     * 
                     */
                    std::string GetInstanceNameStyle() const;

                    /**
                     * 设置云服务器实例名的风格，取值范围包括 ORIGINAL 和 UNIQUE，默认为 ORIGINAL。

ORIGINAL，AS 直接将入参中所填的 InstanceName 传递给 CVM，CVM 可能会对 InstanceName 追加序列号，伸缩组中实例的 InstanceName 会出现冲突的情况。

UNIQUE，入参所填的 InstanceName 相当于实例名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 InstanceName 可以保证唯一。
                     * @param _instanceNameStyle 云服务器实例名的风格，取值范围包括 ORIGINAL 和 UNIQUE，默认为 ORIGINAL。

ORIGINAL，AS 直接将入参中所填的 InstanceName 传递给 CVM，CVM 可能会对 InstanceName 追加序列号，伸缩组中实例的 InstanceName 会出现冲突的情况。

UNIQUE，入参所填的 InstanceName 相当于实例名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 InstanceName 可以保证唯一。
                     * 
                     */
                    void SetInstanceNameStyle(const std::string& _instanceNameStyle);

                    /**
                     * 判断参数 InstanceNameStyle 是否已赋值
                     * @return InstanceNameStyle 是否已赋值
                     * 
                     */
                    bool InstanceNameStyleHasBeenSet() const;

                    /**
                     * 获取云服务器实例名后缀。字符长度为[1,105]，且与 InstanceName 的长度和不能超过107。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceNameSuffix 云服务器实例名后缀。字符长度为[1,105]，且与 InstanceName 的长度和不能超过107。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceNameSuffix() const;

                    /**
                     * 设置云服务器实例名后缀。字符长度为[1,105]，且与 InstanceName 的长度和不能超过107。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceNameSuffix 云服务器实例名后缀。字符长度为[1,105]，且与 InstanceName 的长度和不能超过107。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceNameSuffix(const std::string& _instanceNameSuffix);

                    /**
                     * 判断参数 InstanceNameSuffix 是否已赋值
                     * @return InstanceNameSuffix 是否已赋值
                     * 
                     */
                    bool InstanceNameSuffixHasBeenSet() const;

                    /**
                     * 获取云服务器的实例名分隔符。默认的分隔符是点号（.），可选短横线（-）或空字符串。
分隔符用于拼接实例名，递增序号，后缀。假设实例名为 testGpu4090 ，递增序号为 0007，后缀为 server：
- 分隔符为英文点号（.），最终拼接为 testGpu4090.007.server
- 分隔符为短横线（-），最终拼接为 testGpu4090-007-server
- 分隔符为空字符串，最终拼接为 testGpu4090007server
                     * @return InstanceNameDelimiter 云服务器的实例名分隔符。默认的分隔符是点号（.），可选短横线（-）或空字符串。
分隔符用于拼接实例名，递增序号，后缀。假设实例名为 testGpu4090 ，递增序号为 0007，后缀为 server：
- 分隔符为英文点号（.），最终拼接为 testGpu4090.007.server
- 分隔符为短横线（-），最终拼接为 testGpu4090-007-server
- 分隔符为空字符串，最终拼接为 testGpu4090007server
                     * 
                     */
                    std::string GetInstanceNameDelimiter() const;

                    /**
                     * 设置云服务器的实例名分隔符。默认的分隔符是点号（.），可选短横线（-）或空字符串。
分隔符用于拼接实例名，递增序号，后缀。假设实例名为 testGpu4090 ，递增序号为 0007，后缀为 server：
- 分隔符为英文点号（.），最终拼接为 testGpu4090.007.server
- 分隔符为短横线（-），最终拼接为 testGpu4090-007-server
- 分隔符为空字符串，最终拼接为 testGpu4090007server
                     * @param _instanceNameDelimiter 云服务器的实例名分隔符。默认的分隔符是点号（.），可选短横线（-）或空字符串。
分隔符用于拼接实例名，递增序号，后缀。假设实例名为 testGpu4090 ，递增序号为 0007，后缀为 server：
- 分隔符为英文点号（.），最终拼接为 testGpu4090.007.server
- 分隔符为短横线（-），最终拼接为 testGpu4090-007-server
- 分隔符为空字符串，最终拼接为 testGpu4090007server
                     * 
                     */
                    void SetInstanceNameDelimiter(const std::string& _instanceNameDelimiter);

                    /**
                     * 判断参数 InstanceNameDelimiter 是否已赋值
                     * @return InstanceNameDelimiter 是否已赋值
                     * 
                     */
                    bool InstanceNameDelimiterHasBeenSet() const;

                private:

                    /**
                     * 云服务器的实例名。字符长度为[2, 108]。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 云服务器实例名的风格，取值范围包括 ORIGINAL 和 UNIQUE，默认为 ORIGINAL。

ORIGINAL，AS 直接将入参中所填的 InstanceName 传递给 CVM，CVM 可能会对 InstanceName 追加序列号，伸缩组中实例的 InstanceName 会出现冲突的情况。

UNIQUE，入参所填的 InstanceName 相当于实例名前缀，AS 和 CVM 会对其进行拓展，伸缩组中实例的 InstanceName 可以保证唯一。
                     */
                    std::string m_instanceNameStyle;
                    bool m_instanceNameStyleHasBeenSet;

                    /**
                     * 云服务器实例名后缀。字符长度为[1,105]，且与 InstanceName 的长度和不能超过107。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceNameSuffix;
                    bool m_instanceNameSuffixHasBeenSet;

                    /**
                     * 云服务器的实例名分隔符。默认的分隔符是点号（.），可选短横线（-）或空字符串。
分隔符用于拼接实例名，递增序号，后缀。假设实例名为 testGpu4090 ，递增序号为 0007，后缀为 server：
- 分隔符为英文点号（.），最终拼接为 testGpu4090.007.server
- 分隔符为短横线（-），最终拼接为 testGpu4090-007-server
- 分隔符为空字符串，最终拼接为 testGpu4090007server
                     */
                    std::string m_instanceNameDelimiter;
                    bool m_instanceNameDelimiterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INSTANCENAMESETTINGS_H_
