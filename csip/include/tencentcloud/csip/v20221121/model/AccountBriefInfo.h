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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCOUNTBRIEFINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCOUNTBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 账号简要信息
                */
                class AccountBriefInfo : public AbstractModel
                {
                public:
                    AccountBriefInfo();
                    ~AccountBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账号 AppID</p>
                     * @return AppID <p>账号 AppID</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>账号 AppID</p>
                     * @param _appID <p>账号 AppID</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>账号昵称</p>
                     * @return Nick <p>账号昵称</p>
                     * 
                     */
                    std::string GetNick() const;

                    /**
                     * 设置<p>账号昵称</p>
                     * @param _nick <p>账号昵称</p>
                     * 
                     */
                    void SetNick(const std::string& _nick);

                    /**
                     * 判断参数 Nick 是否已赋值
                     * @return Nick 是否已赋值
                     * 
                     */
                    bool NickHasBeenSet() const;

                    /**
                     * 获取<p>账号 Uin</p>
                     * @return Uin <p>账号 Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>账号 Uin</p>
                     * @param _uin <p>账号 Uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * <p>账号 AppID</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>账号昵称</p>
                     */
                    std::string m_nick;
                    bool m_nickHasBeenSet;

                    /**
                     * <p>账号 Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCOUNTBRIEFINFO_H_
