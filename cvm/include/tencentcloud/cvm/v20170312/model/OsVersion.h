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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_OSVERSION_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_OSVERSION_H_

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
                * 操作系统支持的类型。
                */
                class OsVersion : public AbstractModel
                {
                public:
                    OsVersion();
                    ~OsVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作系统类型
                     * @return OsName 操作系统类型
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统类型
                     * @param _osName 操作系统类型
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取支持的操作系统版本
                     * @return OsVersions 支持的操作系统版本
                     * 
                     */
                    std::vector<std::string> GetOsVersions() const;

                    /**
                     * 设置支持的操作系统版本
                     * @param _osVersions 支持的操作系统版本
                     * 
                     */
                    void SetOsVersions(const std::vector<std::string>& _osVersions);

                    /**
                     * 判断参数 OsVersions 是否已赋值
                     * @return OsVersions 是否已赋值
                     * 
                     */
                    bool OsVersionsHasBeenSet() const;

                    /**
                     * 获取支持的操作系统架构
                     * @return Architecture 支持的操作系统架构
                     * 
                     */
                    std::vector<std::string> GetArchitecture() const;

                    /**
                     * 设置支持的操作系统架构
                     * @param _architecture 支持的操作系统架构
                     * 
                     */
                    void SetArchitecture(const std::vector<std::string>& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                private:

                    /**
                     * 操作系统类型
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 支持的操作系统版本
                     */
                    std::vector<std::string> m_osVersions;
                    bool m_osVersionsHasBeenSet;

                    /**
                     * 支持的操作系统架构
                     */
                    std::vector<std::string> m_architecture;
                    bool m_architectureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_OSVERSION_H_
