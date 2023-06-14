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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTMACHINE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTMACHINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 机器授权到期信息
                */
                class ProtectMachine : public AbstractModel
                {
                public:
                    ProtectMachine();
                    ~ProtectMachine() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器名称
                     * @return HostName 机器名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置机器名称
                     * @param _hostName 机器名称
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
                     * 获取机器IP
                     * @return HostIp 机器IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置机器IP
                     * @param _hostIp 机器IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取防护目录数
                     * @return SafeguardDirNum 防护目录数
                     * 
                     */
                    uint64_t GetSafeguardDirNum() const;

                    /**
                     * 设置防护目录数
                     * @param _safeguardDirNum 防护目录数
                     * 
                     */
                    void SetSafeguardDirNum(const uint64_t& _safeguardDirNum);

                    /**
                     * 判断参数 SafeguardDirNum 是否已赋值
                     * @return SafeguardDirNum 是否已赋值
                     * 
                     */
                    bool SafeguardDirNumHasBeenSet() const;

                private:

                    /**
                     * 机器名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 机器IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 防护目录数
                     */
                    uint64_t m_safeguardDirNum;
                    bool m_safeguardDirNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PROTECTMACHINE_H_
