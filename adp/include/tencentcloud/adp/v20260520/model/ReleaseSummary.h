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
#include <tencentcloud/adp/v20260520/model/AppShareAccessControl.h>
#include <tencentcloud/adp/v20260520/model/CorpShareConfig.h>


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
                     * 获取<p>创建时间 (Unix时间戳,秒级)</p>
                     * @return CreateTime <p>创建时间 (Unix时间戳,秒级)</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间 (Unix时间戳,秒级)</p>
                     * @param _createTime <p>创建时间 (Unix时间戳,秒级)</p>
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
                     * 获取<p>发布描述</p>
                     * @return Description <p>发布描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>发布描述</p>
                     * @param _description <p>发布描述</p>
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
                     * 获取<p>发布ID</p>
                     * @return ReleaseId <p>发布ID</p>
                     * 
                     */
                    std::string GetReleaseId() const;

                    /**
                     * 设置<p>发布ID</p>
                     * @param _releaseId <p>发布ID</p>
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
                     * 获取<p>发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过</p>
                     * @return Status <p>发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过</p>
                     * @param _status <p>发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过</p>
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
                     * 获取<p>状态描述</p>
                     * @return StatusDescription <p>状态描述</p>
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置<p>状态描述</p>
                     * @param _statusDescription <p>状态描述</p>
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
                     * 获取<p>应用分享访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppShareAccessControl <p>应用分享访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppShareAccessControl GetAppShareAccessControl() const;

                    /**
                     * 设置<p>应用分享访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appShareAccessControl <p>应用分享访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppShareAccessControl(const AppShareAccessControl& _appShareAccessControl);

                    /**
                     * 判断参数 AppShareAccessControl 是否已赋值
                     * @return AppShareAccessControl 是否已赋值
                     * 
                     */
                    bool AppShareAccessControlHasBeenSet() const;

                    /**
                     * 获取<p>发布渠道ID列表</p>
                     * @return ChannelIdList <p>发布渠道ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIdList() const;

                    /**
                     * 设置<p>发布渠道ID列表</p>
                     * @param _channelIdList <p>发布渠道ID列表</p>
                     * 
                     */
                    void SetChannelIdList(const std::vector<std::string>& _channelIdList);

                    /**
                     * 判断参数 ChannelIdList 是否已赋值
                     * @return ChannelIdList 是否已赋值
                     * 
                     */
                    bool ChannelIdListHasBeenSet() const;

                    /**
                     * 获取<p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpShareConfig <p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CorpShareConfig GetCorpShareConfig() const;

                    /**
                     * 设置<p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpShareConfig <p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorpShareConfig(const CorpShareConfig& _corpShareConfig);

                    /**
                     * 判断参数 CorpShareConfig 是否已赋值
                     * @return CorpShareConfig 是否已赋值
                     * 
                     */
                    bool CorpShareConfigHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间 (Unix时间戳,秒级)</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>发布描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>发布ID</p>
                     */
                    std::string m_releaseId;
                    bool m_releaseIdHasBeenSet;

                    /**
                     * <p>发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态描述</p>
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                    /**
                     * <p>应用分享访问控制</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppShareAccessControl m_appShareAccessControl;
                    bool m_appShareAccessControlHasBeenSet;

                    /**
                     * <p>发布渠道ID列表</p>
                     */
                    std::vector<std::string> m_channelIdList;
                    bool m_channelIdListHasBeenSet;

                    /**
                     * <p>企业共享配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CorpShareConfig m_corpShareConfig;
                    bool m_corpShareConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RELEASESUMMARY_H_
