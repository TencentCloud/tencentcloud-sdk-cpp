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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYFAKEWECHATOFFICIAL_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYFAKEWECHATOFFICIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 仿冒公众号详情
                */
                class DisplayFakeWechatOfficial : public AbstractModel
                {
                public:
                    DisplayFakeWechatOfficial();
                    ~DisplayFakeWechatOfficial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取仿冒公众号名称
                     * @return AccountName 仿冒公众号名称
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置仿冒公众号名称
                     * @param _accountName 仿冒公众号名称
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取公众号ID
                     * @return WechatId 公众号ID
                     * 
                     */
                    std::string GetWechatId() const;

                    /**
                     * 设置公众号ID
                     * @param _wechatId 公众号ID
                     * 
                     */
                    void SetWechatId(const std::string& _wechatId);

                    /**
                     * 判断参数 WechatId 是否已赋值
                     * @return WechatId 是否已赋值
                     * 
                     */
                    bool WechatIdHasBeenSet() const;

                    /**
                     * 获取头像
                     * @return Avatar 头像
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置头像
                     * @param _avatar 头像
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取二维码
                     * @return QrCode 二维码
                     * 
                     */
                    std::string GetQrCode() const;

                    /**
                     * 设置二维码
                     * @param _qrCode 二维码
                     * 
                     */
                    void SetQrCode(const std::string& _qrCode);

                    /**
                     * 判断参数 QrCode 是否已赋值
                     * @return QrCode 是否已赋值
                     * 
                     */
                    bool QrCodeHasBeenSet() const;

                    /**
                     * 获取处置状态：0-待处理 1-处理中 2-已处理
                     * @return HandlingStatus 处置状态：0-待处理 1-处理中 2-已处理
                     * 
                     */
                    int64_t GetHandlingStatus() const;

                    /**
                     * 设置处置状态：0-待处理 1-处理中 2-已处理
                     * @param _handlingStatus 处置状态：0-待处理 1-处理中 2-已处理
                     * 
                     */
                    void SetHandlingStatus(const int64_t& _handlingStatus);

                    /**
                     * 判断参数 HandlingStatus 是否已赋值
                     * @return HandlingStatus 是否已赋值
                     * 
                     */
                    bool HandlingStatusHasBeenSet() const;

                    /**
                     * 获取关停状态：0-(默认状态) 1-关停审核中 2-已拦截 3-已拒绝 4-下线流程中 5-已下线 6-下线失败
                     * @return ShutdownStatus 关停状态：0-(默认状态) 1-关停审核中 2-已拦截 3-已拒绝 4-下线流程中 5-已下线 6-下线失败
                     * 
                     */
                    int64_t GetShutdownStatus() const;

                    /**
                     * 设置关停状态：0-(默认状态) 1-关停审核中 2-已拦截 3-已拒绝 4-下线流程中 5-已下线 6-下线失败
                     * @param _shutdownStatus 关停状态：0-(默认状态) 1-关停审核中 2-已拦截 3-已拒绝 4-下线流程中 5-已下线 6-下线失败
                     * 
                     */
                    void SetShutdownStatus(const int64_t& _shutdownStatus);

                    /**
                     * 判断参数 ShutdownStatus 是否已赋值
                     * @return ShutdownStatus 是否已赋值
                     * 
                     */
                    bool ShutdownStatusHasBeenSet() const;

                    /**
                     * 获取关停时间
                     * @return ShutdownTime 关停时间
                     * 
                     */
                    std::string GetShutdownTime() const;

                    /**
                     * 设置关停时间
                     * @param _shutdownTime 关停时间
                     * 
                     */
                    void SetShutdownTime(const std::string& _shutdownTime);

                    /**
                     * 判断参数 ShutdownTime 是否已赋值
                     * @return ShutdownTime 是否已赋值
                     * 
                     */
                    bool ShutdownTimeHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * 仿冒公众号名称
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 公众号ID
                     */
                    std::string m_wechatId;
                    bool m_wechatIdHasBeenSet;

                    /**
                     * 头像
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 二维码
                     */
                    std::string m_qrCode;
                    bool m_qrCodeHasBeenSet;

                    /**
                     * 处置状态：0-待处理 1-处理中 2-已处理
                     */
                    int64_t m_handlingStatus;
                    bool m_handlingStatusHasBeenSet;

                    /**
                     * 关停状态：0-(默认状态) 1-关停审核中 2-已拦截 3-已拒绝 4-下线流程中 5-已下线 6-下线失败
                     */
                    int64_t m_shutdownStatus;
                    bool m_shutdownStatusHasBeenSet;

                    /**
                     * 关停时间
                     */
                    std::string m_shutdownTime;
                    bool m_shutdownTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYFAKEWECHATOFFICIAL_H_
