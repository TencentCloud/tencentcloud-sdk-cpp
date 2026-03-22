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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AvailableProtoStatus.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 版本控制-类型数组
                */
                class AvailableType : public AbstractModel
                {
                public:
                    AvailableType();
                    ~AvailableType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>协议与售卖详情</p>
                     * @return Protocols <p>协议与售卖详情</p>
                     * 
                     */
                    std::vector<AvailableProtoStatus> GetProtocols() const;

                    /**
                     * 设置<p>协议与售卖详情</p>
                     * @param _protocols <p>协议与售卖详情</p>
                     * 
                     */
                    void SetProtocols(const std::vector<AvailableProtoStatus>& _protocols);

                    /**
                     * 判断参数 Protocols 是否已赋值
                     * @return Protocols 是否已赋值
                     * 
                     */
                    bool ProtocolsHasBeenSet() const;

                    /**
                     * 获取<p>存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     * @return Type <p>存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     * @param _type <p>存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>是否支持预付费。返回值中 true 为支持、false 为不支持</p>
                     * @return Prepayment <p>是否支持预付费。返回值中 true 为支持、false 为不支持</p>
                     * 
                     */
                    bool GetPrepayment() const;

                    /**
                     * 设置<p>是否支持预付费。返回值中 true 为支持、false 为不支持</p>
                     * @param _prepayment <p>是否支持预付费。返回值中 true 为支持、false 为不支持</p>
                     * 
                     */
                    void SetPrepayment(const bool& _prepayment);

                    /**
                     * 判断参数 Prepayment 是否已赋值
                     * @return Prepayment 是否已赋值
                     * 
                     */
                    bool PrepaymentHasBeenSet() const;

                    /**
                     * 获取<p>文件系统版本</p><p>枚举值：</p><ul><li>v1.5： 通用系列</li><li>v3.1： 通用系列（增强型）</li><li>v4.0： Turbo系列</li></ul>
                     * @return Version <p>文件系统版本</p><p>枚举值：</p><ul><li>v1.5： 通用系列</li><li>v3.1： 通用系列（增强型）</li><li>v4.0： Turbo系列</li></ul>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>文件系统版本</p><p>枚举值：</p><ul><li>v1.5： 通用系列</li><li>v3.1： 通用系列（增强型）</li><li>v4.0： Turbo系列</li></ul>
                     * @param _version <p>文件系统版本</p><p>枚举值：</p><ul><li>v1.5： 通用系列</li><li>v3.1： 通用系列（增强型）</li><li>v4.0： Turbo系列</li></ul>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * <p>协议与售卖详情</p>
                     */
                    std::vector<AvailableProtoStatus> m_protocols;
                    bool m_protocolsHasBeenSet;

                    /**
                     * <p>存储类型。返回值中 SD 为通用标准型存储， HP为通用性能型存储， TB为Turbo标准型， TP 为Turbo性能型。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否支持预付费。返回值中 true 为支持、false 为不支持</p>
                     */
                    bool m_prepayment;
                    bool m_prepaymentHasBeenSet;

                    /**
                     * <p>文件系统版本</p><p>枚举值：</p><ul><li>v1.5： 通用系列</li><li>v3.1： 通用系列（增强型）</li><li>v4.0： Turbo系列</li></ul>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_AVAILABLETYPE_H_
