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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CHANNELLISTINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CHANNELLISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/YuanQi.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 渠道详情信息
                */
                class ChannelListInfo : public AbstractModel
                {
                public:
                    ChannelListInfo();
                    ~ChannelListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道类型 10000 微信订阅号 10001 微信服务号 10002 企微应用
                     * @return ChannelType 渠道类型 10000 微信订阅号 10001 微信服务号 10002 企微应用
                     * 
                     */
                    uint64_t GetChannelType() const;

                    /**
                     * 设置渠道类型 10000 微信订阅号 10001 微信服务号 10002 企微应用
                     * @param _channelType 渠道类型 10000 微信订阅号 10001 微信服务号 10002 企微应用
                     * 
                     */
                    void SetChannelType(const uint64_t& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取渠道状态 1未发布 2运行中 3已下线
                     * @return ChannelStatus 渠道状态 1未发布 2运行中 3已下线
                     * 
                     */
                    uint64_t GetChannelStatus() const;

                    /**
                     * 设置渠道状态 1未发布 2运行中 3已下线
                     * @param _channelStatus 渠道状态 1未发布 2运行中 3已下线
                     * 
                     */
                    void SetChannelStatus(const uint64_t& _channelStatus);

                    /**
                     * 判断参数 ChannelStatus 是否已赋值
                     * @return ChannelStatus 是否已赋值
                     * 
                     */
                    bool ChannelStatusHasBeenSet() const;

                    /**
                     * 获取渠道名称
                     * @return ChannelName 渠道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称
                     * @param _channelName 渠道名称
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取渠道id 数据库主键
                     * @return ChannelId 渠道id 数据库主键
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置渠道id 数据库主键
                     * @param _channelId 渠道id 数据库主键
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Comment 备注
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置备注
                     * @param _comment 备注
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后更新人
                     * @return UpdatedUser 最后更新人
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置最后更新人
                     * @param _updatedUser 最后更新人
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取智能体应用可见范围，public-所有人可见 private-仅自己可见 share-通过分享可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YuanQiInfo 智能体应用可见范围，public-所有人可见 private-仅自己可见 share-通过分享可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    YuanQi GetYuanQiInfo() const;

                    /**
                     * 设置智能体应用可见范围，public-所有人可见 private-仅自己可见 share-通过分享可见
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yuanQiInfo 智能体应用可见范围，public-所有人可见 private-仅自己可见 share-通过分享可见
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYuanQiInfo(const YuanQi& _yuanQiInfo);

                    /**
                     * 判断参数 YuanQiInfo 是否已赋值
                     * @return YuanQiInfo 是否已赋值
                     * 
                     */
                    bool YuanQiInfoHasBeenSet() const;

                private:

                    /**
                     * 渠道类型 10000 微信订阅号 10001 微信服务号 10002 企微应用
                     */
                    uint64_t m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * 渠道状态 1未发布 2运行中 3已下线
                     */
                    uint64_t m_channelStatus;
                    bool m_channelStatusHasBeenSet;

                    /**
                     * 渠道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 渠道id 数据库主键
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后更新人
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * 智能体应用可见范围，public-所有人可见 private-仅自己可见 share-通过分享可见
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    YuanQi m_yuanQiInfo;
                    bool m_yuanQiInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CHANNELLISTINFO_H_
