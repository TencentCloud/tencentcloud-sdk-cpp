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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_LIVECHANNELINFO_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_LIVECHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 频道信息
                */
                class LiveChannelInfo : public AbstractModel
                {
                public:
                    LiveChannelInfo();
                    ~LiveChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取频道ID
                     * @return LiveChannelId 频道ID
                     * 
                     */
                    std::string GetLiveChannelId() const;

                    /**
                     * 设置频道ID
                     * @param _liveChannelId 频道ID
                     * 
                     */
                    void SetLiveChannelId(const std::string& _liveChannelId);

                    /**
                     * 判断参数 LiveChannelId 是否已赋值
                     * @return LiveChannelId 是否已赋值
                     * 
                     */
                    bool LiveChannelIdHasBeenSet() const;

                    /**
                     * 获取频道名称
                     * @return LiveChannelName 频道名称
                     * 
                     */
                    std::string GetLiveChannelName() const;

                    /**
                     * 设置频道名称
                     * @param _liveChannelName 频道名称
                     * 
                     */
                    void SetLiveChannelName(const std::string& _liveChannelName);

                    /**
                     * 判断参数 LiveChannelName 是否已赋值
                     * @return LiveChannelName 是否已赋值
                     * 
                     */
                    bool LiveChannelNameHasBeenSet() const;

                    /**
                     * 获取频道类型
                     * @return LiveChannelType 频道类型
                     * 
                     */
                    int64_t GetLiveChannelType() const;

                    /**
                     * 设置频道类型
                     * @param _liveChannelType 频道类型
                     * 
                     */
                    void SetLiveChannelType(const int64_t& _liveChannelType);

                    /**
                     * 判断参数 LiveChannelType 是否已赋值
                     * @return LiveChannelType 是否已赋值
                     * 
                     */
                    bool LiveChannelTypeHasBeenSet() const;

                    /**
                     * 获取通道直播状态：1: 未推流，2: 推流中
                     * @return LiveStatus 通道直播状态：1: 未推流，2: 推流中
                     * 
                     */
                    int64_t GetLiveStatus() const;

                    /**
                     * 设置通道直播状态：1: 未推流，2: 推流中
                     * @param _liveStatus 通道直播状态：1: 未推流，2: 推流中
                     * 
                     */
                    void SetLiveStatus(const int64_t& _liveStatus);

                    /**
                     * 判断参数 LiveStatus 是否已赋值
                     * @return LiveStatus 是否已赋值
                     * 
                     */
                    bool LiveStatusHasBeenSet() const;

                    /**
                     * 获取推流地址
                     * @return PushStreamAddress 推流地址
                     * 
                     */
                    std::string GetPushStreamAddress() const;

                    /**
                     * 设置推流地址
                     * @param _pushStreamAddress 推流地址
                     * 
                     */
                    void SetPushStreamAddress(const std::string& _pushStreamAddress);

                    /**
                     * 判断参数 PushStreamAddress 是否已赋值
                     * @return PushStreamAddress 是否已赋值
                     * 
                     */
                    bool PushStreamAddressHasBeenSet() const;

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
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 频道ID
                     */
                    std::string m_liveChannelId;
                    bool m_liveChannelIdHasBeenSet;

                    /**
                     * 频道名称
                     */
                    std::string m_liveChannelName;
                    bool m_liveChannelNameHasBeenSet;

                    /**
                     * 频道类型
                     */
                    int64_t m_liveChannelType;
                    bool m_liveChannelTypeHasBeenSet;

                    /**
                     * 通道直播状态：1: 未推流，2: 推流中
                     */
                    int64_t m_liveStatus;
                    bool m_liveStatusHasBeenSet;

                    /**
                     * 推流地址
                     */
                    std::string m_pushStreamAddress;
                    bool m_pushStreamAddressHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_LIVECHANNELINFO_H_
