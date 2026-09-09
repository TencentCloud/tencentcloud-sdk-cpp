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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CHANNEL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CHANNEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ChannelSpec.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 渠道信息
                */
                class Channel : public AbstractModel
                {
                public:
                    Channel();
                    ~Channel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>渠道ID</p>
                     * @return ChannelId <p>渠道ID</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>渠道ID</p>
                     * @param _channelId <p>渠道ID</p>
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
                     * 获取<p>渠道状态（仅B端）：1-未发布，2-运行中，3-已下线（与ConnectStatus互斥）</p>
                     * @return ChannelStatus <p>渠道状态（仅B端）：1-未发布，2-运行中，3-已下线（与ConnectStatus互斥）</p>
                     * 
                     */
                    int64_t GetChannelStatus() const;

                    /**
                     * 设置<p>渠道状态（仅B端）：1-未发布，2-运行中，3-已下线（与ConnectStatus互斥）</p>
                     * @param _channelStatus <p>渠道状态（仅B端）：1-未发布，2-运行中，3-已下线（与ConnectStatus互斥）</p>
                     * 
                     */
                    void SetChannelStatus(const int64_t& _channelStatus);

                    /**
                     * 判断参数 ChannelStatus 是否已赋值
                     * @return ChannelStatus 是否已赋值
                     * 
                     */
                    bool ChannelStatusHasBeenSet() const;

                    /**
                     * 获取<p>连接状态（仅C端）：1-初始，2-连接成功，3-连接失败（与ChannelStatus互斥）</p>
                     * @return ConnectStatus <p>连接状态（仅C端）：1-初始，2-连接成功，3-连接失败（与ChannelStatus互斥）</p>
                     * 
                     */
                    int64_t GetConnectStatus() const;

                    /**
                     * 设置<p>连接状态（仅C端）：1-初始，2-连接成功，3-连接失败（与ChannelStatus互斥）</p>
                     * @param _connectStatus <p>连接状态（仅C端）：1-初始，2-连接成功，3-连接失败（与ChannelStatus互斥）</p>
                     * 
                     */
                    void SetConnectStatus(const int64_t& _connectStatus);

                    /**
                     * 判断参数 ConnectStatus 是否已赋值
                     * @return ConnectStatus 是否已赋值
                     * 
                     */
                    bool ConnectStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（Unix秒）</p>
                     * @return CreateTime <p>创建时间（Unix秒）</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（Unix秒）</p>
                     * @param _createTime <p>创建时间（Unix秒）</p>
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
                     * 获取<p>渠道规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Spec <p>渠道规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ChannelSpec GetSpec() const;

                    /**
                     * 设置<p>渠道规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _spec <p>渠道规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpec(const ChannelSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>更新时间（Unix秒）</p>
                     * @return UpdateTime <p>更新时间（Unix秒）</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（Unix秒）</p>
                     * @param _updateTime <p>更新时间（Unix秒）</p>
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
                     * 获取<p>最后更新人</p>
                     * @return Updater <p>最后更新人</p>
                     * 
                     */
                    std::string GetUpdater() const;

                    /**
                     * 设置<p>最后更新人</p>
                     * @param _updater <p>最后更新人</p>
                     * 
                     */
                    void SetUpdater(const std::string& _updater);

                    /**
                     * 判断参数 Updater 是否已赋值
                     * @return Updater 是否已赋值
                     * 
                     */
                    bool UpdaterHasBeenSet() const;

                private:

                    /**
                     * <p>渠道ID</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>渠道状态（仅B端）：1-未发布，2-运行中，3-已下线（与ConnectStatus互斥）</p>
                     */
                    int64_t m_channelStatus;
                    bool m_channelStatusHasBeenSet;

                    /**
                     * <p>连接状态（仅C端）：1-初始，2-连接成功，3-连接失败（与ChannelStatus互斥）</p>
                     */
                    int64_t m_connectStatus;
                    bool m_connectStatusHasBeenSet;

                    /**
                     * <p>创建时间（Unix秒）</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>渠道规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ChannelSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>更新时间（Unix秒）</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>最后更新人</p>
                     */
                    std::string m_updater;
                    bool m_updaterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CHANNEL_H_
