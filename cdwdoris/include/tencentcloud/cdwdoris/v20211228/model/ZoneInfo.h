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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 可用区描述信息
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可用区名称，例如"ap-guangzhou-1"
                     * @return Name 可用区名称，例如"ap-guangzhou-1"
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置可用区名称，例如"ap-guangzhou-1"
                     * @param _name 可用区名称，例如"ap-guangzhou-1"
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取可用区描述信息，例如“广州一区”
                     * @return Desc 可用区描述信息，例如“广州一区”
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置可用区描述信息，例如“广州一区”
                     * @param _desc 可用区描述信息，例如“广州一区”
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取可用区唯一标记
                     * @return ZoneId 可用区唯一标记
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区唯一标记
                     * @param _zoneId 可用区唯一标记
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Encrypted
                     * @return Encrypt Encrypted
                     * 
                     */
                    int64_t GetEncrypt() const;

                    /**
                     * 设置Encrypted
                     * @param _encrypt Encrypted
                     * 
                     */
                    void SetEncrypt(const int64_t& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     * 
                     */
                    bool EncryptHasBeenSet() const;

                    /**
                     * 获取是否为主力园区
                     * @return Main 是否为主力园区
                     * 
                     */
                    bool GetMain() const;

                    /**
                     * 设置是否为主力园区
                     * @param _main 是否为主力园区
                     * 
                     */
                    void SetMain(const bool& _main);

                    /**
                     * 判断参数 Main 是否已赋值
                     * @return Main 是否已赋值
                     * 
                     */
                    bool MainHasBeenSet() const;

                    /**
                     * 获取0表示未开通容器化，1表示已开通容器化
                     * @return ContainerEnabled 0表示未开通容器化，1表示已开通容器化
                     * 
                     */
                    int64_t GetContainerEnabled() const;

                    /**
                     * 设置0表示未开通容器化，1表示已开通容器化
                     * @param _containerEnabled 0表示未开通容器化，1表示已开通容器化
                     * 
                     */
                    void SetContainerEnabled(const int64_t& _containerEnabled);

                    /**
                     * 判断参数 ContainerEnabled 是否已赋值
                     * @return ContainerEnabled 是否已赋值
                     * 
                     */
                    bool ContainerEnabledHasBeenSet() const;

                private:

                    /**
                     * 可用区名称，例如"ap-guangzhou-1"
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 可用区描述信息，例如“广州一区”
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 可用区唯一标记
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Encrypted
                     */
                    int64_t m_encrypt;
                    bool m_encryptHasBeenSet;

                    /**
                     * 是否为主力园区
                     */
                    bool m_main;
                    bool m_mainHasBeenSet;

                    /**
                     * 0表示未开通容器化，1表示已开通容器化
                     */
                    int64_t m_containerEnabled;
                    bool m_containerEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_ZONEINFO_H_
