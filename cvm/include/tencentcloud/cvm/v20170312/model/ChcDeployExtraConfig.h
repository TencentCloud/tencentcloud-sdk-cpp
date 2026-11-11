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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CHCDEPLOYEXTRACONFIG_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CHCDEPLOYEXTRACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * chc部署网络minos引导配置。
                */
                class ChcDeployExtraConfig : public AbstractModel
                {
                public:
                    ChcDeployExtraConfig();
                    ~ChcDeployExtraConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MiniOS类型。是使用腾讯云的MiniOS，还是客户私有的MiniOS。</p><p>枚举值：</p><ul><li>public： 腾讯云的MiniOS。</li><li>private： 客户私有的MiniOS。</li></ul>
                     * @return MiniOsType <p>MiniOS类型。是使用腾讯云的MiniOS，还是客户私有的MiniOS。</p><p>枚举值：</p><ul><li>public： 腾讯云的MiniOS。</li><li>private： 客户私有的MiniOS。</li></ul>
                     * 
                     */
                    std::string GetMiniOsType() const;

                    /**
                     * 设置<p>MiniOS类型。是使用腾讯云的MiniOS，还是客户私有的MiniOS。</p><p>枚举值：</p><ul><li>public： 腾讯云的MiniOS。</li><li>private： 客户私有的MiniOS。</li></ul>
                     * @param _miniOsType <p>MiniOS类型。是使用腾讯云的MiniOS，还是客户私有的MiniOS。</p><p>枚举值：</p><ul><li>public： 腾讯云的MiniOS。</li><li>private： 客户私有的MiniOS。</li></ul>
                     * 
                     */
                    void SetMiniOsType(const std::string& _miniOsType);

                    /**
                     * 判断参数 MiniOsType 是否已赋值
                     * @return MiniOsType 是否已赋值
                     * 
                     */
                    bool MiniOsTypeHasBeenSet() const;

                    /**
                     * 获取<p>服务器的架构和启动方式。</p><p>枚举值：</p><ul><li>x86_legacy： X86架构、Legacy启动模式。</li><li>x86_uefi： X86架构、UEFI启动模式。</li><li>arm_uefi： ARM架构，UEFI启动模式。</li></ul>
                     * @return BootType <p>服务器的架构和启动方式。</p><p>枚举值：</p><ul><li>x86_legacy： X86架构、Legacy启动模式。</li><li>x86_uefi： X86架构、UEFI启动模式。</li><li>arm_uefi： ARM架构，UEFI启动模式。</li></ul>
                     * 
                     */
                    std::string GetBootType() const;

                    /**
                     * 设置<p>服务器的架构和启动方式。</p><p>枚举值：</p><ul><li>x86_legacy： X86架构、Legacy启动模式。</li><li>x86_uefi： X86架构、UEFI启动模式。</li><li>arm_uefi： ARM架构，UEFI启动模式。</li></ul>
                     * @param _bootType <p>服务器的架构和启动方式。</p><p>枚举值：</p><ul><li>x86_legacy： X86架构、Legacy启动模式。</li><li>x86_uefi： X86架构、UEFI启动模式。</li><li>arm_uefi： ARM架构，UEFI启动模式。</li></ul>
                     * 
                     */
                    void SetBootType(const std::string& _bootType);

                    /**
                     * 判断参数 BootType 是否已赋值
                     * @return BootType 是否已赋值
                     * 
                     */
                    bool BootTypeHasBeenSet() const;

                    /**
                     * 获取<p>PXE使用的引导文件。默认为pxelinux.0。</p>
                     * @return BootFile <p>PXE使用的引导文件。默认为pxelinux.0。</p>
                     * 
                     */
                    std::string GetBootFile() const;

                    /**
                     * 设置<p>PXE使用的引导文件。默认为pxelinux.0。</p>
                     * @param _bootFile <p>PXE使用的引导文件。默认为pxelinux.0。</p>
                     * 
                     */
                    void SetBootFile(const std::string& _bootFile);

                    /**
                     * 判断参数 BootFile 是否已赋值
                     * @return BootFile 是否已赋值
                     * 
                     */
                    bool BootFileHasBeenSet() const;

                    /**
                     * 获取<p>TFTP服务器的IP地址。</p>
                     * @return NextServerAddress <p>TFTP服务器的IP地址。</p>
                     * 
                     */
                    std::string GetNextServerAddress() const;

                    /**
                     * 设置<p>TFTP服务器的IP地址。</p>
                     * @param _nextServerAddress <p>TFTP服务器的IP地址。</p>
                     * 
                     */
                    void SetNextServerAddress(const std::string& _nextServerAddress);

                    /**
                     * 判断参数 NextServerAddress 是否已赋值
                     * @return NextServerAddress 是否已赋值
                     * 
                     */
                    bool NextServerAddressHasBeenSet() const;

                private:

                    /**
                     * <p>MiniOS类型。是使用腾讯云的MiniOS，还是客户私有的MiniOS。</p><p>枚举值：</p><ul><li>public： 腾讯云的MiniOS。</li><li>private： 客户私有的MiniOS。</li></ul>
                     */
                    std::string m_miniOsType;
                    bool m_miniOsTypeHasBeenSet;

                    /**
                     * <p>服务器的架构和启动方式。</p><p>枚举值：</p><ul><li>x86_legacy： X86架构、Legacy启动模式。</li><li>x86_uefi： X86架构、UEFI启动模式。</li><li>arm_uefi： ARM架构，UEFI启动模式。</li></ul>
                     */
                    std::string m_bootType;
                    bool m_bootTypeHasBeenSet;

                    /**
                     * <p>PXE使用的引导文件。默认为pxelinux.0。</p>
                     */
                    std::string m_bootFile;
                    bool m_bootFileHasBeenSet;

                    /**
                     * <p>TFTP服务器的IP地址。</p>
                     */
                    std::string m_nextServerAddress;
                    bool m_nextServerAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCDEPLOYEXTRACONFIG_H_
