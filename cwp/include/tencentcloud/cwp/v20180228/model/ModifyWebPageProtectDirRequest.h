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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTDIRREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTDIRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/ProtectHostConfig.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWebPageProtectDir请求参数结构体
                */
                class ModifyWebPageProtectDirRequest : public AbstractModel
                {
                public:
                    ModifyWebPageProtectDirRequest();
                    ~ModifyWebPageProtectDirRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网站防护目录地址
                     * @return ProtectDirAddr 网站防护目录地址
                     * 
                     */
                    std::string GetProtectDirAddr() const;

                    /**
                     * 设置网站防护目录地址
                     * @param _protectDirAddr 网站防护目录地址
                     * 
                     */
                    void SetProtectDirAddr(const std::string& _protectDirAddr);

                    /**
                     * 判断参数 ProtectDirAddr 是否已赋值
                     * @return ProtectDirAddr 是否已赋值
                     * 
                     */
                    bool ProtectDirAddrHasBeenSet() const;

                    /**
                     * 获取网站防护目录名称
                     * @return ProtectDirName 网站防护目录名称
                     * 
                     */
                    std::string GetProtectDirName() const;

                    /**
                     * 设置网站防护目录名称
                     * @param _protectDirName 网站防护目录名称
                     * 
                     */
                    void SetProtectDirName(const std::string& _protectDirName);

                    /**
                     * 判断参数 ProtectDirName 是否已赋值
                     * @return ProtectDirName 是否已赋值
                     * 
                     */
                    bool ProtectDirNameHasBeenSet() const;

                    /**
                     * 获取防护文件类型,分号分割 ;
                     * @return ProtectFileType 防护文件类型,分号分割 ;
                     * 
                     */
                    std::string GetProtectFileType() const;

                    /**
                     * 设置防护文件类型,分号分割 ;
                     * @param _protectFileType 防护文件类型,分号分割 ;
                     * 
                     */
                    void SetProtectFileType(const std::string& _protectFileType);

                    /**
                     * 判断参数 ProtectFileType 是否已赋值
                     * @return ProtectFileType 是否已赋值
                     * 
                     */
                    bool ProtectFileTypeHasBeenSet() const;

                    /**
                     * 获取防护机器列表信息
                     * @return HostConfig 防护机器列表信息
                     * 
                     */
                    std::vector<ProtectHostConfig> GetHostConfig() const;

                    /**
                     * 设置防护机器列表信息
                     * @param _hostConfig 防护机器列表信息
                     * 
                     */
                    void SetHostConfig(const std::vector<ProtectHostConfig>& _hostConfig);

                    /**
                     * 判断参数 HostConfig 是否已赋值
                     * @return HostConfig 是否已赋值
                     * 
                     */
                    bool HostConfigHasBeenSet() const;

                private:

                    /**
                     * 网站防护目录地址
                     */
                    std::string m_protectDirAddr;
                    bool m_protectDirAddrHasBeenSet;

                    /**
                     * 网站防护目录名称
                     */
                    std::string m_protectDirName;
                    bool m_protectDirNameHasBeenSet;

                    /**
                     * 防护文件类型,分号分割 ;
                     */
                    std::string m_protectFileType;
                    bool m_protectFileTypeHasBeenSet;

                    /**
                     * 防护机器列表信息
                     */
                    std::vector<ProtectHostConfig> m_hostConfig;
                    bool m_hostConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTDIRREQUEST_H_
