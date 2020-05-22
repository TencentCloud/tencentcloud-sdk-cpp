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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_USERINFOGJH_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_USERINFOGJH_H_

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
                * 广交会用户信息
                */
                class UserInfoGjh : public AbstractModel
                {
                public:
                    UserInfoGjh();
                    ~UserInfoGjh() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息发表人简介，非必填，如填写，会结合简介内容判定该条是否有害。评论消息如展示简介则建议填写。
                     * @return StrDesc 消息发表人简介，非必填，如填写，会结合简介内容判定该条是否有害。评论消息如展示简介则建议填写。
                     */
                    std::string GetStrDesc() const;

                    /**
                     * 设置消息发表人简介，非必填，如填写，会结合简介内容判定该条是否有害。评论消息如展示简介则建议填写。
                     * @param StrDesc 消息发表人简介，非必填，如填写，会结合简介内容判定该条是否有害。评论消息如展示简介则建议填写。
                     */
                    void SetStrDesc(const std::string& _strDesc);

                    /**
                     * 判断参数 StrDesc 是否已赋值
                     * @return StrDesc 是否已赋值
                     */
                    bool StrDescHasBeenSet() const;

                    /**
                     * 获取消息发表人头像url，非必填，如填写，头像有害，该条消息会被判断为有害。评论消息如展示头像则建议填写。
                     * @return StrHeadUrl 消息发表人头像url，非必填，如填写，头像有害，该条消息会被判断为有害。评论消息如展示头像则建议填写。
                     */
                    std::string GetStrHeadUrl() const;

                    /**
                     * 设置消息发表人头像url，非必填，如填写，头像有害，该条消息会被判断为有害。评论消息如展示头像则建议填写。
                     * @param StrHeadUrl 消息发表人头像url，非必填，如填写，头像有害，该条消息会被判断为有害。评论消息如展示头像则建议填写。
                     */
                    void SetStrHeadUrl(const std::string& _strHeadUrl);

                    /**
                     * 判断参数 StrHeadUrl 是否已赋值
                     * @return StrHeadUrl 是否已赋值
                     */
                    bool StrHeadUrlHasBeenSet() const;

                    /**
                     * 获取消息发表人昵称，非必填，如填写，会结合昵称信息判断该条内容是否有害。评论消息如展示昵称则建议填写。
                     * @return StrNick 消息发表人昵称，非必填，如填写，会结合昵称信息判断该条内容是否有害。评论消息如展示昵称则建议填写。
                     */
                    std::string GetStrNick() const;

                    /**
                     * 设置消息发表人昵称，非必填，如填写，会结合昵称信息判断该条内容是否有害。评论消息如展示昵称则建议填写。
                     * @param StrNick 消息发表人昵称，非必填，如填写，会结合昵称信息判断该条内容是否有害。评论消息如展示昵称则建议填写。
                     */
                    void SetStrNick(const std::string& _strNick);

                    /**
                     * 判断参数 StrNick 是否已赋值
                     * @return StrNick 是否已赋值
                     */
                    bool StrNickHasBeenSet() const;

                    /**
                     * 获取发表评论账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果.
                     * @return StrUin 发表评论账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果.
                     */
                    std::string GetStrUin() const;

                    /**
                     * 设置发表评论账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果.
                     * @param StrUin 发表评论账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果.
                     */
                    void SetStrUin(const std::string& _strUin);

                    /**
                     * 判断参数 StrUin 是否已赋值
                     * @return StrUin 是否已赋值
                     */
                    bool StrUinHasBeenSet() const;

                    /**
                     * 获取1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string
                     * @return UiAcntType 1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string
                     */
                    int64_t GetUiAcntType() const;

                    /**
                     * 设置1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string
                     * @param UiAcntType 1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string
                     */
                    void SetUiAcntType(const int64_t& _uiAcntType);

                    /**
                     * 判断参数 UiAcntType 是否已赋值
                     * @return UiAcntType 是否已赋值
                     */
                    bool UiAcntTypeHasBeenSet() const;

                private:

                    /**
                     * 消息发表人简介，非必填，如填写，会结合简介内容判定该条是否有害。评论消息如展示简介则建议填写。
                     */
                    std::string m_strDesc;
                    bool m_strDescHasBeenSet;

                    /**
                     * 消息发表人头像url，非必填，如填写，头像有害，该条消息会被判断为有害。评论消息如展示头像则建议填写。
                     */
                    std::string m_strHeadUrl;
                    bool m_strHeadUrlHasBeenSet;

                    /**
                     * 消息发表人昵称，非必填，如填写，会结合昵称信息判断该条内容是否有害。评论消息如展示昵称则建议填写。
                     */
                    std::string m_strNick;
                    bool m_strNickHasBeenSet;

                    /**
                     * 发表评论账号ID，如填写，会根据账号历史恶意情况，判定消息有害结果.
                     */
                    std::string m_strUin;
                    bool m_strUinHasBeenSet;

                    /**
                     * 1-微信uin 2-QQ号 3-微信群uin 4-qq群号 5-微信openid 6-QQopenid 7-其它string
                     */
                    int64_t m_uiAcntType;
                    bool m_uiAcntTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_USERINFOGJH_H_
