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
                     * 获取minos类型。是使用腾讯云的minios，还是客户自己的minios。
                     * @return MiniOsType minos类型。是使用腾讯云的minios，还是客户自己的minios。
                     * 
                     */
                    std::string GetMiniOsType() const;

                    /**
                     * 设置minos类型。是使用腾讯云的minios，还是客户自己的minios。
                     * @param _miniOsType minos类型。是使用腾讯云的minios，还是客户自己的minios。
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
                     * 获取服务器的架构和启动方式。取值为x86_legacy, arm_uefi。
                     * @return BootType 服务器的架构和启动方式。取值为x86_legacy, arm_uefi。
                     * 
                     */
                    std::string GetBootType() const;

                    /**
                     * 设置服务器的架构和启动方式。取值为x86_legacy, arm_uefi。
                     * @param _bootType 服务器的架构和启动方式。取值为x86_legacy, arm_uefi。
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
                     * 获取PXE使用的引导文件。默认为pxelinux.0。
                     * @return BootFile PXE使用的引导文件。默认为pxelinux.0。
                     * 
                     */
                    std::string GetBootFile() const;

                    /**
                     * 设置PXE使用的引导文件。默认为pxelinux.0。
                     * @param _bootFile PXE使用的引导文件。默认为pxelinux.0。
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
                     * 获取tftp服务器的ip地址。
                     * @return NextServerAddress tftp服务器的ip地址。
                     * 
                     */
                    std::string GetNextServerAddress() const;

                    /**
                     * 设置tftp服务器的ip地址。
                     * @param _nextServerAddress tftp服务器的ip地址。
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
                     * minos类型。是使用腾讯云的minios，还是客户自己的minios。
                     */
                    std::string m_miniOsType;
                    bool m_miniOsTypeHasBeenSet;

                    /**
                     * 服务器的架构和启动方式。取值为x86_legacy, arm_uefi。
                     */
                    std::string m_bootType;
                    bool m_bootTypeHasBeenSet;

                    /**
                     * PXE使用的引导文件。默认为pxelinux.0。
                     */
                    std::string m_bootFile;
                    bool m_bootFileHasBeenSet;

                    /**
                     * tftp服务器的ip地址。
                     */
                    std::string m_nextServerAddress;
                    bool m_nextServerAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCDEPLOYEXTRACONFIG_H_
