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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_

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
                * 账号dspm信息
                */
                class UserDspmInfo : public AbstractModel
                {
                public:
                    UserDspmInfo();
                    ~UserDspmInfo() = default;
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
                     * 获取账号下数据库资产数量
                     * @return AssetNum 账号下数据库资产数量
                     * 
                     */
                    int64_t GetAssetNum() const;

                    /**
                     * 设置账号下数据库资产数量
                     * @param _assetNum 账号下数据库资产数量
                     * 
                     */
                    void SetAssetNum(const int64_t& _assetNum);

                    /**
                     * 判断参数 AssetNum 是否已赋值
                     * @return AssetNum 是否已赋值
                     * 
                     */
                    bool AssetNumHasBeenSet() const;

                    /**
                     * 获取账号下开启安全分析数据库资产数量
                     * @return UsedAssetNum 账号下开启安全分析数据库资产数量
                     * 
                     */
                    int64_t GetUsedAssetNum() const;

                    /**
                     * 设置账号下开启安全分析数据库资产数量
                     * @param _usedAssetNum 账号下开启安全分析数据库资产数量
                     * 
                     */
                    void SetUsedAssetNum(const int64_t& _usedAssetNum);

                    /**
                     * 判断参数 UsedAssetNum 是否已赋值
                     * @return UsedAssetNum 是否已赋值
                     * 
                     */
                    bool UsedAssetNumHasBeenSet() const;

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
                     * 获取云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）
                     * @return CloudType 云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）
                     * @param _cloudType 云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取账号是否隔离中
                     * @return IsIsolating 账号是否隔离中
                     * 
                     */
                    bool GetIsIsolating() const;

                    /**
                     * 设置账号是否隔离中
                     * @param _isIsolating 账号是否隔离中
                     * 
                     */
                    void SetIsIsolating(const bool& _isIsolating);

                    /**
                     * 判断参数 IsIsolating 是否已赋值
                     * @return IsIsolating 是否已赋值
                     * 
                     */
                    bool IsIsolatingHasBeenSet() const;

                    /**
                     * 获取是否正在数据清理
                     * @return IsDataCleaning 是否正在数据清理
                     * 
                     */
                    bool GetIsDataCleaning() const;

                    /**
                     * 设置是否正在数据清理
                     * @param _isDataCleaning 是否正在数据清理
                     * 
                     */
                    void SetIsDataCleaning(const bool& _isDataCleaning);

                    /**
                     * 判断参数 IsDataCleaning 是否已赋值
                     * @return IsDataCleaning 是否已赋值
                     * 
                     */
                    bool IsDataCleaningHasBeenSet() const;

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
                     * 账号下数据库资产数量
                     */
                    int64_t m_assetNum;
                    bool m_assetNumHasBeenSet;

                    /**
                     * 账号下开启安全分析数据库资产数量
                     */
                    int64_t m_usedAssetNum;
                    bool m_usedAssetNumHasBeenSet;

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
                     * 云类型（0：腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云）
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 账号是否隔离中
                     */
                    bool m_isIsolating;
                    bool m_isIsolatingHasBeenSet;

                    /**
                     * 是否正在数据清理
                     */
                    bool m_isDataCleaning;
                    bool m_isDataCleaningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERDSPMINFO_H_
