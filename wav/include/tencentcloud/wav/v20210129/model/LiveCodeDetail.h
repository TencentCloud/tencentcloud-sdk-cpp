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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_LIVECODEDETAIL_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_LIVECODEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 活动活码详情
                */
                class LiveCodeDetail : public AbstractModel
                {
                public:
                    LiveCodeDetail();
                    ~LiveCodeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活码id
                     * @return LiveCodeId 活码id
                     * 
                     */
                    uint64_t GetLiveCodeId() const;

                    /**
                     * 设置活码id
                     * @param _liveCodeId 活码id
                     * 
                     */
                    void SetLiveCodeId(const uint64_t& _liveCodeId);

                    /**
                     * 判断参数 LiveCodeId 是否已赋值
                     * @return LiveCodeId 是否已赋值
                     * 
                     */
                    bool LiveCodeIdHasBeenSet() const;

                    /**
                     * 获取活码名称
                     * @return LiveCodeName 活码名称
                     * 
                     */
                    std::string GetLiveCodeName() const;

                    /**
                     * 设置活码名称
                     * @param _liveCodeName 活码名称
                     * 
                     */
                    void SetLiveCodeName(const std::string& _liveCodeName);

                    /**
                     * 判断参数 LiveCodeName 是否已赋值
                     * @return LiveCodeName 是否已赋值
                     * 
                     */
                    bool LiveCodeNameHasBeenSet() const;

                    /**
                     * 获取短链url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShortChainAddress 短链url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShortChainAddress() const;

                    /**
                     * 设置短链url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shortChainAddress 短链url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShortChainAddress(const std::string& _shortChainAddress);

                    /**
                     * 判断参数 ShortChainAddress 是否已赋值
                     * @return ShortChainAddress 是否已赋值
                     * 
                     */
                    bool ShortChainAddressHasBeenSet() const;

                    /**
                     * 获取活码二维码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveCodePreview 活码二维码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLiveCodePreview() const;

                    /**
                     * 设置活码二维码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liveCodePreview 活码二维码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLiveCodePreview(const std::string& _liveCodePreview);

                    /**
                     * 判断参数 LiveCodePreview 是否已赋值
                     * @return LiveCodePreview 是否已赋值
                     * 
                     */
                    bool LiveCodePreviewHasBeenSet() const;

                    /**
                     * 获取活动id
                     * @return ActivityId 活动id
                     * 
                     */
                    int64_t GetActivityId() const;

                    /**
                     * 设置活动id
                     * @param _activityId 活动id
                     * 
                     */
                    void SetActivityId(const int64_t& _activityId);

                    /**
                     * 判断参数 ActivityId 是否已赋值
                     * @return ActivityId 是否已赋值
                     * 
                     */
                    bool ActivityIdHasBeenSet() const;

                    /**
                     * 获取活动名称
                     * @return ActivityName 活动名称
                     * 
                     */
                    std::string GetActivityName() const;

                    /**
                     * 设置活动名称
                     * @param _activityName 活动名称
                     * 
                     */
                    void SetActivityName(const std::string& _activityName);

                    /**
                     * 判断参数 ActivityName 是否已赋值
                     * @return ActivityName 是否已赋值
                     * 
                     */
                    bool ActivityNameHasBeenSet() const;

                    /**
                     * 获取活码状态，-1：删除，0：启用，1禁用，默认为0
                     * @return LiveCodeState 活码状态，-1：删除，0：启用，1禁用，默认为0
                     * 
                     */
                    int64_t GetLiveCodeState() const;

                    /**
                     * 设置活码状态，-1：删除，0：启用，1禁用，默认为0
                     * @param _liveCodeState 活码状态，-1：删除，0：启用，1禁用，默认为0
                     * 
                     */
                    void SetLiveCodeState(const int64_t& _liveCodeState);

                    /**
                     * 判断参数 LiveCodeState 是否已赋值
                     * @return LiveCodeState 是否已赋值
                     * 
                     */
                    bool LiveCodeStateHasBeenSet() const;

                    /**
                     * 获取活码参数，每个活码参数都是不一样的， 这个的值对应的是字符串json类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveCodeData 活码参数，每个活码参数都是不一样的， 这个的值对应的是字符串json类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLiveCodeData() const;

                    /**
                     * 设置活码参数，每个活码参数都是不一样的， 这个的值对应的是字符串json类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liveCodeData 活码参数，每个活码参数都是不一样的， 这个的值对应的是字符串json类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLiveCodeData(const std::string& _liveCodeData);

                    /**
                     * 判断参数 LiveCodeData 是否已赋值
                     * @return LiveCodeData 是否已赋值
                     * 
                     */
                    bool LiveCodeDataHasBeenSet() const;

                    /**
                     * 获取创建时间戳，单位为秒
                     * @return CreateTime 创建时间戳，单位为秒
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间戳，单位为秒
                     * @param _createTime 创建时间戳，单位为秒
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间戳，单位为秒
                     * @return UpdateTime 更新时间戳，单位为秒
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间戳，单位为秒
                     * @param _updateTime 更新时间戳，单位为秒
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 活码id
                     */
                    uint64_t m_liveCodeId;
                    bool m_liveCodeIdHasBeenSet;

                    /**
                     * 活码名称
                     */
                    std::string m_liveCodeName;
                    bool m_liveCodeNameHasBeenSet;

                    /**
                     * 短链url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shortChainAddress;
                    bool m_shortChainAddressHasBeenSet;

                    /**
                     * 活码二维码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_liveCodePreview;
                    bool m_liveCodePreviewHasBeenSet;

                    /**
                     * 活动id
                     */
                    int64_t m_activityId;
                    bool m_activityIdHasBeenSet;

                    /**
                     * 活动名称
                     */
                    std::string m_activityName;
                    bool m_activityNameHasBeenSet;

                    /**
                     * 活码状态，-1：删除，0：启用，1禁用，默认为0
                     */
                    int64_t m_liveCodeState;
                    bool m_liveCodeStateHasBeenSet;

                    /**
                     * 活码参数，每个活码参数都是不一样的， 这个的值对应的是字符串json类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_liveCodeData;
                    bool m_liveCodeDataHasBeenSet;

                    /**
                     * 创建时间戳，单位为秒
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间戳，单位为秒
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_LIVECODEDETAIL_H_
