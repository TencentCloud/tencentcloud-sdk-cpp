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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CHANNELCODEINNERDETAIL_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CHANNELCODEINNERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/WeComTagDetail.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 渠道活码详情
                */
                class ChannelCodeInnerDetail : public AbstractModel
                {
                public:
                    ChannelCodeInnerDetail();
                    ~ChannelCodeInnerDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道活码id
                     * @return Id 渠道活码id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置渠道活码id
                     * @param _id 渠道活码id
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
                     * 获取欢迎语类型，0：普通欢迎语、1:渠道欢迎语
                     * @return Type 欢迎语类型，0：普通欢迎语、1:渠道欢迎语
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置欢迎语类型，0：普通欢迎语、1:渠道欢迎语
                     * @param _type 欢迎语类型，0：普通欢迎语、1:渠道欢迎语
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取渠道来源
                     * @return Source 渠道来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置渠道来源
                     * @param _source 渠道来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取渠道来源名称
                     * @return SourceName 渠道来源名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置渠道来源名称
                     * @param _sourceName 渠道来源名称
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取二维码名称
                     * @return Name 二维码名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置二维码名称
                     * @param _name 二维码名称
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
                     * 获取使用成员用户id集
                     * @return UseUserIdList 使用成员用户id集
                     * 
                     */
                    std::vector<int64_t> GetUseUserIdList() const;

                    /**
                     * 设置使用成员用户id集
                     * @param _useUserIdList 使用成员用户id集
                     * 
                     */
                    void SetUseUserIdList(const std::vector<int64_t>& _useUserIdList);

                    /**
                     * 判断参数 UseUserIdList 是否已赋值
                     * @return UseUserIdList 是否已赋值
                     * 
                     */
                    bool UseUserIdListHasBeenSet() const;

                    /**
                     * 获取使用成员企微账号id集
                     * @return UseUserOpenIdList 使用成员企微账号id集
                     * 
                     */
                    std::vector<std::string> GetUseUserOpenIdList() const;

                    /**
                     * 设置使用成员企微账号id集
                     * @param _useUserOpenIdList 使用成员企微账号id集
                     * 
                     */
                    void SetUseUserOpenIdList(const std::vector<std::string>& _useUserOpenIdList);

                    /**
                     * 判断参数 UseUserOpenIdList 是否已赋值
                     * @return UseUserOpenIdList 是否已赋值
                     * 
                     */
                    bool UseUserOpenIdListHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return TagList 标签
                     * 
                     */
                    std::vector<WeComTagDetail> GetTagList() const;

                    /**
                     * 设置标签
                     * @param _tagList 标签
                     * 
                     */
                    void SetTagList(const std::vector<WeComTagDetail>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取自动通过好友，0：开启、1：关闭，默认0开启
                     * @return SkipVerify 自动通过好友，0：开启、1：关闭，默认0开启
                     * 
                     */
                    int64_t GetSkipVerify() const;

                    /**
                     * 设置自动通过好友，0：开启、1：关闭，默认0开启
                     * @param _skipVerify 自动通过好友，0：开启、1：关闭，默认0开启
                     * 
                     */
                    void SetSkipVerify(const int64_t& _skipVerify);

                    /**
                     * 判断参数 SkipVerify 是否已赋值
                     * @return SkipVerify 是否已赋值
                     * 
                     */
                    bool SkipVerifyHasBeenSet() const;

                    /**
                     * 获取添加好友人数
                     * @return Friends 添加好友人数
                     * 
                     */
                    int64_t GetFriends() const;

                    /**
                     * 设置添加好友人数
                     * @param _friends 添加好友人数
                     * 
                     */
                    void SetFriends(const int64_t& _friends);

                    /**
                     * 判断参数 Friends 是否已赋值
                     * @return Friends 是否已赋值
                     * 
                     */
                    bool FriendsHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取欢迎语id（通过欢迎语新增返回的id）
                     * @return MsgId 欢迎语id（通过欢迎语新增返回的id）
                     * 
                     */
                    int64_t GetMsgId() const;

                    /**
                     * 设置欢迎语id（通过欢迎语新增返回的id）
                     * @param _msgId 欢迎语id（通过欢迎语新增返回的id）
                     * 
                     */
                    void SetMsgId(const int64_t& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取联系我config_id
                     * @return ConfigId 联系我config_id
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置联系我config_id
                     * @param _configId 联系我config_id
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取联系我二维码地址
                     * @return QrCodeUrl 联系我二维码地址
                     * 
                     */
                    std::string GetQrCodeUrl() const;

                    /**
                     * 设置联系我二维码地址
                     * @param _qrCodeUrl 联系我二维码地址
                     * 
                     */
                    void SetQrCodeUrl(const std::string& _qrCodeUrl);

                    /**
                     * 判断参数 QrCodeUrl 是否已赋值
                     * @return QrCodeUrl 是否已赋值
                     * 
                     */
                    bool QrCodeUrlHasBeenSet() const;

                    /**
                     * 获取记录状态， 0：有效、1：无效
                     * @return RecStatus 记录状态， 0：有效、1：无效
                     * 
                     */
                    int64_t GetRecStatus() const;

                    /**
                     * 设置记录状态， 0：有效、1：无效
                     * @param _recStatus 记录状态， 0：有效、1：无效
                     * 
                     */
                    void SetRecStatus(const int64_t& _recStatus);

                    /**
                     * 判断参数 RecStatus 是否已赋值
                     * @return RecStatus 是否已赋值
                     * 
                     */
                    bool RecStatusHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 渠道活码id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 欢迎语类型，0：普通欢迎语、1:渠道欢迎语
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 渠道来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 渠道来源名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 二维码名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 使用成员用户id集
                     */
                    std::vector<int64_t> m_useUserIdList;
                    bool m_useUserIdListHasBeenSet;

                    /**
                     * 使用成员企微账号id集
                     */
                    std::vector<std::string> m_useUserOpenIdList;
                    bool m_useUserOpenIdListHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<WeComTagDetail> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 自动通过好友，0：开启、1：关闭，默认0开启
                     */
                    int64_t m_skipVerify;
                    bool m_skipVerifyHasBeenSet;

                    /**
                     * 添加好友人数
                     */
                    int64_t m_friends;
                    bool m_friendsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 欢迎语id（通过欢迎语新增返回的id）
                     */
                    int64_t m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 联系我config_id
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 联系我二维码地址
                     */
                    std::string m_qrCodeUrl;
                    bool m_qrCodeUrlHasBeenSet;

                    /**
                     * 记录状态， 0：有效、1：无效
                     */
                    int64_t m_recStatus;
                    bool m_recStatusHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CHANNELCODEINNERDETAIL_H_
