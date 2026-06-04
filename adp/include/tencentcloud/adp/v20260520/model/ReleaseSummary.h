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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RELEASESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RELEASESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 发布摘要信息
                */
                class ReleaseSummary : public AbstractModel
                {
                public:
                    ReleaseSummary();
                    ~ReleaseSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间 (Unix时间戳,秒级)
                     * @return CreateTime 创建时间 (Unix时间戳,秒级)
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间 (Unix时间戳,秒级)
                     * @param _createTime 创建时间 (Unix时间戳,秒级)
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
                     * 获取发布描述
                     * @return Description 发布描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置发布描述
                     * @param _description 发布描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取发布ID
                     * @return ReleaseId 发布ID
                     * 
                     */
                    std::string GetReleaseId() const;

                    /**
                     * 设置发布ID
                     * @param _releaseId 发布ID
                     * 
                     */
                    void SetReleaseId(const std::string& _releaseId);

                    /**
                     * 判断参数 ReleaseId 是否已赋值
                     * @return ReleaseId 是否已赋值
                     * 
                     */
                    bool ReleaseIdHasBeenSet() const;

                    /**
                     * 获取发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     * @return Status 发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     * @param _status 发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取状态描述
                     * @return StatusDescription 状态描述
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置状态描述
                     * @param _statusDescription 状态描述
                     * 
                     */
                    void SetStatusDescription(const std::string& _statusDescription);

                    /**
                     * 判断参数 StatusDescription 是否已赋值
                     * @return StatusDescription 是否已赋值
                     * 
                     */
                    bool StatusDescriptionHasBeenSet() const;

                    /**
                     * 获取发布渠道ID列表
                     * @return ChannelIdList 发布渠道ID列表
                     * 
                     */
                    std::vector<std::string> GetChannelIdList() const;

                    /**
                     * 设置发布渠道ID列表
                     * @param _channelIdList 发布渠道ID列表
                     * 
                     */
                    void SetChannelIdList(const std::vector<std::string>& _channelIdList);

                    /**
                     * 判断参数 ChannelIdList 是否已赋值
                     * @return ChannelIdList 是否已赋值
                     * 
                     */
                    bool ChannelIdListHasBeenSet() const;

                private:

                    /**
                     * 创建时间 (Unix时间戳,秒级)
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 发布描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 发布ID
                     */
                    std::string m_releaseId;
                    bool m_releaseIdHasBeenSet;

                    /**
                     * 发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                    /**
                     * 发布渠道ID列表
                     */
                    std::vector<std::string> m_channelIdList;
                    bool m_channelIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RELEASESUMMARY_H_
