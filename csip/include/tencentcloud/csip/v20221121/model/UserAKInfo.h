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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERAKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERAKINFO_H_

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
                * 账号ak数量信息
                */
                class UserAKInfo : public AbstractModel
                {
                public:
                    UserAKInfo();
                    ~UserAKInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取APPID
                     * @return AppID APPID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置APPID
                     * @param _appID APPID
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取UIN
                     * @return Uin UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置UIN
                     * @param _uin UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取账号昵称
                     * @return NickName 账号昵称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账号昵称
                     * @param _nickName 账号昵称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取账号下ak数量
                     * @return AKNum 账号下ak数量
                     * 
                     */
                    int64_t GetAKNum() const;

                    /**
                     * 设置账号下ak数量
                     * @param _aKNum 账号下ak数量
                     * 
                     */
                    void SetAKNum(const int64_t& _aKNum);

                    /**
                     * 判断参数 AKNum 是否已赋值
                     * @return AKNum 是否已赋值
                     * 
                     */
                    bool AKNumHasBeenSet() const;

                    /**
                     * 获取是否被共享，1-被共享，2-未被共享
                     * @return IsShared 是否被共享，1-被共享，2-未被共享
                     * 
                     */
                    int64_t GetIsShared() const;

                    /**
                     * 设置是否被共享，1-被共享，2-未被共享
                     * @param _isShared 是否被共享，1-被共享，2-未被共享
                     * 
                     */
                    void SetIsShared(const int64_t& _isShared);

                    /**
                     * 判断参数 IsShared 是否已赋值
                     * @return IsShared 是否已赋值
                     * 
                     */
                    bool IsSharedHasBeenSet() const;

                    /**
                     * 获取是否单独购买，1-单独购买，2-未单独购买
                     * @return IsSelfBuy 是否单独购买，1-单独购买，2-未单独购买
                     * 
                     */
                    int64_t GetIsSelfBuy() const;

                    /**
                     * 设置是否单独购买，1-单独购买，2-未单独购买
                     * @param _isSelfBuy 是否单独购买，1-单独购买，2-未单独购买
                     * 
                     */
                    void SetIsSelfBuy(const int64_t& _isSelfBuy);

                    /**
                     * 判断参数 IsSelfBuy 是否已赋值
                     * @return IsSelfBuy 是否已赋值
                     * 
                     */
                    bool IsSelfBuyHasBeenSet() const;

                    /**
                     * 获取配额来源账号
                     * @return ShareFromAppID 配额来源账号
                     * 
                     */
                    int64_t GetShareFromAppID() const;

                    /**
                     * 设置配额来源账号
                     * @param _shareFromAppID 配额来源账号
                     * 
                     */
                    void SetShareFromAppID(const int64_t& _shareFromAppID);

                    /**
                     * 判断参数 ShareFromAppID 是否已赋值
                     * @return ShareFromAppID 是否已赋值
                     * 
                     */
                    bool ShareFromAppIDHasBeenSet() const;

                    /**
                     * 获取云厂商类型
0:腾讯云
1:亚马逊云
2:微软云
3:谷歌云
4:阿里云
5:华为云
                     * @return CloudType 云厂商类型
0:腾讯云
1:亚马逊云
2:微软云
3:谷歌云
4:阿里云
5:华为云
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置云厂商类型
0:腾讯云
1:亚马逊云
2:微软云
3:谷歌云
4:阿里云
5:华为云
                     * @param _cloudType 云厂商类型
0:腾讯云
1:亚马逊云
2:微软云
3:谷歌云
4:阿里云
5:华为云
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                private:

                    /**
                     * APPID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 账号昵称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 账号下ak数量
                     */
                    int64_t m_aKNum;
                    bool m_aKNumHasBeenSet;

                    /**
                     * 是否被共享，1-被共享，2-未被共享
                     */
                    int64_t m_isShared;
                    bool m_isSharedHasBeenSet;

                    /**
                     * 是否单独购买，1-单独购买，2-未单独购买
                     */
                    int64_t m_isSelfBuy;
                    bool m_isSelfBuyHasBeenSet;

                    /**
                     * 配额来源账号
                     */
                    int64_t m_shareFromAppID;
                    bool m_shareFromAppIDHasBeenSet;

                    /**
                     * 云厂商类型
0:腾讯云
1:亚马逊云
2:微软云
3:谷歌云
4:阿里云
5:华为云
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERAKINFO_H_
