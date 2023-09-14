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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_NETWORKACCESSCONTROL_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_NETWORKACCESSCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 网络访问策略
                */
                class NetworkAccessControl : public AbstractModel
                {
                public:
                    NetworkAccessControl();
                    ~NetworkAccessControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问模式：Whitelist|Blacklist
                     * @return Mode 访问模式：Whitelist|Blacklist
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置访问模式：Whitelist|Blacklist
                     * @param _mode 访问模式：Whitelist|Blacklist
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取白名单列表
                     * @return CidrWhiteList 白名单列表
                     * 
                     */
                    std::vector<std::string> GetCidrWhiteList() const;

                    /**
                     * 设置白名单列表
                     * @param _cidrWhiteList 白名单列表
                     * 
                     */
                    void SetCidrWhiteList(const std::vector<std::string>& _cidrWhiteList);

                    /**
                     * 判断参数 CidrWhiteList 是否已赋值
                     * @return CidrWhiteList 是否已赋值
                     * 
                     */
                    bool CidrWhiteListHasBeenSet() const;

                    /**
                     * 获取黑名单列表
                     * @return CidrBlackList 黑名单列表
                     * 
                     */
                    std::vector<std::string> GetCidrBlackList() const;

                    /**
                     * 设置黑名单列表
                     * @param _cidrBlackList 黑名单列表
                     * 
                     */
                    void SetCidrBlackList(const std::vector<std::string>& _cidrBlackList);

                    /**
                     * 判断参数 CidrBlackList 是否已赋值
                     * @return CidrBlackList 是否已赋值
                     * 
                     */
                    bool CidrBlackListHasBeenSet() const;

                private:

                    /**
                     * 访问模式：Whitelist|Blacklist
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 白名单列表
                     */
                    std::vector<std::string> m_cidrWhiteList;
                    bool m_cidrWhiteListHasBeenSet;

                    /**
                     * 黑名单列表
                     */
                    std::vector<std::string> m_cidrBlackList;
                    bool m_cidrBlackListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_NETWORKACCESSCONTROL_H_
