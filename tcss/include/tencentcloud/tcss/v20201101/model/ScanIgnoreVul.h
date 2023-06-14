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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SCANIGNOREVUL_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SCANIGNOREVUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 扫描忽略的漏洞
                */
                class ScanIgnoreVul : public AbstractModel
                {
                public:
                    ScanIgnoreVul();
                    ~ScanIgnoreVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulName 漏洞名称
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞CVEID
                     * @return CVEID 漏洞CVEID
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置漏洞CVEID
                     * @param _cVEID 漏洞CVEID
                     * 
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     * 
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取漏洞PocID
                     * @return PocID 漏洞PocID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置漏洞PocID
                     * @param _pocID 漏洞PocID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取忽略的仓库镜像数
                     * @return RegistryImageCount 忽略的仓库镜像数
                     * 
                     */
                    int64_t GetRegistryImageCount() const;

                    /**
                     * 设置忽略的仓库镜像数
                     * @param _registryImageCount 忽略的仓库镜像数
                     * 
                     */
                    void SetRegistryImageCount(const int64_t& _registryImageCount);

                    /**
                     * 判断参数 RegistryImageCount 是否已赋值
                     * @return RegistryImageCount 是否已赋值
                     * 
                     */
                    bool RegistryImageCountHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否忽略所有镜像：0：否/1：是
                     * @return IsIgnoreAll 是否忽略所有镜像：0：否/1：是
                     * 
                     */
                    int64_t GetIsIgnoreAll() const;

                    /**
                     * 设置是否忽略所有镜像：0：否/1：是
                     * @param _isIgnoreAll 是否忽略所有镜像：0：否/1：是
                     * 
                     */
                    void SetIsIgnoreAll(const int64_t& _isIgnoreAll);

                    /**
                     * 判断参数 IsIgnoreAll 是否已赋值
                     * @return IsIgnoreAll 是否已赋值
                     * 
                     */
                    bool IsIgnoreAllHasBeenSet() const;

                    /**
                     * 获取忽略的本地镜像数
                     * @return LocalImageCount 忽略的本地镜像数
                     * 
                     */
                    int64_t GetLocalImageCount() const;

                    /**
                     * 设置忽略的本地镜像数
                     * @param _localImageCount 忽略的本地镜像数
                     * 
                     */
                    void SetLocalImageCount(const int64_t& _localImageCount);

                    /**
                     * 判断参数 LocalImageCount 是否已赋值
                     * @return LocalImageCount 是否已赋值
                     * 
                     */
                    bool LocalImageCountHasBeenSet() const;

                private:

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞CVEID
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * 漏洞PocID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * 忽略的仓库镜像数
                     */
                    int64_t m_registryImageCount;
                    bool m_registryImageCountHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否忽略所有镜像：0：否/1：是
                     */
                    int64_t m_isIgnoreAll;
                    bool m_isIgnoreAllHasBeenSet;

                    /**
                     * 忽略的本地镜像数
                     */
                    int64_t m_localImageCount;
                    bool m_localImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SCANIGNOREVUL_H_
