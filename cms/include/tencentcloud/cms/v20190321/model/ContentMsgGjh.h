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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CONTENTMSGGJH_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CONTENTMSGGJH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 发送消息设备描述
                */
                class ContentMsgGjh : public AbstractModel
                {
                public:
                    ContentMsgGjh();
                    ~ContentMsgGjh() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发表消息设备IP类型，0x0代表IP地址是ipv4，0x1代表是IPv6，默认为0，即IPv4。
                     * @return CIPType 发表消息设备IP类型，0x0代表IP地址是ipv4，0x1代表是IPv6，默认为0，即IPv4。
                     */
                    std::string GetCIPType() const;

                    /**
                     * 设置发表消息设备IP类型，0x0代表IP地址是ipv4，0x1代表是IPv6，默认为0，即IPv4。
                     * @param CIPType 发表消息设备IP类型，0x0代表IP地址是ipv4，0x1代表是IPv6，默认为0，即IPv4。
                     */
                    void SetCIPType(const std::string& _cIPType);

                    /**
                     * 判断参数 CIPType 是否已赋值
                     * @return CIPType 是否已赋值
                     */
                    bool CIPTypeHasBeenSet() const;

                    /**
                     * 获取发表消息设备IPv4地址，没有可以为空字符串；
                     * @return StrMsgIP 发表消息设备IPv4地址，没有可以为空字符串；
                     */
                    std::string GetStrMsgIP() const;

                    /**
                     * 设置发表消息设备IPv4地址，没有可以为空字符串；
                     * @param StrMsgIP 发表消息设备IPv4地址，没有可以为空字符串；
                     */
                    void SetStrMsgIP(const std::string& _strMsgIP);

                    /**
                     * 判断参数 StrMsgIP 是否已赋值
                     * @return StrMsgIP 是否已赋值
                     */
                    bool StrMsgIPHasBeenSet() const;

                    /**
                     * 获取发表消息设备IPv6地址，没有可以为空字符串。
                     * @return StrMsgIPv6 发表消息设备IPv6地址，没有可以为空字符串。
                     */
                    std::string GetStrMsgIPv6() const;

                    /**
                     * 设置发表消息设备IPv6地址，没有可以为空字符串。
                     * @param StrMsgIPv6 发表消息设备IPv6地址，没有可以为空字符串。
                     */
                    void SetStrMsgIPv6(const std::string& _strMsgIPv6);

                    /**
                     * 判断参数 StrMsgIPv6 是否已赋值
                     * @return StrMsgIPv6 是否已赋值
                     */
                    bool StrMsgIPv6HasBeenSet() const;

                    /**
                     * 获取消息发表时间戳。
                     * @return UiPostTime 消息发表时间戳。
                     */
                    int64_t GetUiPostTime() const;

                    /**
                     * 设置消息发表时间戳。
                     * @param UiPostTime 消息发表时间戳。
                     */
                    void SetUiPostTime(const int64_t& _uiPostTime);

                    /**
                     * 判断参数 UiPostTime 是否已赋值
                     * @return UiPostTime 是否已赋值
                     */
                    bool UiPostTimeHasBeenSet() const;

                private:

                    /**
                     * 发表消息设备IP类型，0x0代表IP地址是ipv4，0x1代表是IPv6，默认为0，即IPv4。
                     */
                    std::string m_cIPType;
                    bool m_cIPTypeHasBeenSet;

                    /**
                     * 发表消息设备IPv4地址，没有可以为空字符串；
                     */
                    std::string m_strMsgIP;
                    bool m_strMsgIPHasBeenSet;

                    /**
                     * 发表消息设备IPv6地址，没有可以为空字符串。
                     */
                    std::string m_strMsgIPv6;
                    bool m_strMsgIPv6HasBeenSet;

                    /**
                     * 消息发表时间戳。
                     */
                    int64_t m_uiPostTime;
                    bool m_uiPostTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CONTENTMSGGJH_H_
