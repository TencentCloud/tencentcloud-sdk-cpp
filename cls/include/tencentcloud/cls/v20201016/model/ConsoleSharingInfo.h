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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLESHARINGINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLESHARINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ConsoleSharingConfig.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 控制台分享信息
                */
                class ConsoleSharingInfo : public AbstractModel
                {
                public:
                    ConsoleSharingInfo();
                    ~ConsoleSharingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分享ID
                     * @return SharingId 分享ID
                     * 
                     */
                    std::string GetSharingId() const;

                    /**
                     * 设置分享ID
                     * @param _sharingId 分享ID
                     * 
                     */
                    void SetSharingId(const std::string& _sharingId);

                    /**
                     * 判断参数 SharingId 是否已赋值
                     * @return SharingId 是否已赋值
                     * 
                     */
                    bool SharingIdHasBeenSet() const;

                    /**
                     * 获取分享链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SharingUrl 分享链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSharingUrl() const;

                    /**
                     * 设置分享链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sharingUrl 分享链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSharingUrl(const std::string& _sharingUrl);

                    /**
                     * 判断参数 SharingUrl 是否已赋值
                     * @return SharingUrl 是否已赋值
                     * 
                     */
                    bool SharingUrlHasBeenSet() const;

                    /**
                     * 获取匿名分享配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SharingConfig 匿名分享配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsoleSharingConfig GetSharingConfig() const;

                    /**
                     * 设置匿名分享配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sharingConfig 匿名分享配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSharingConfig(const ConsoleSharingConfig& _sharingConfig);

                    /**
                     * 判断参数 SharingConfig 是否已赋值
                     * @return SharingConfig 是否已赋值
                     * 
                     */
                    bool SharingConfigHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredTime 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiredTime(const uint64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取分享链接状态
1: 正常 
-1: 因内容安全审查异常导致被封禁(存在于使用公网域名分享时)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 分享链接状态
1: 正常 
-1: 因内容安全审查异常导致被封禁(存在于使用公网域名分享时)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置分享链接状态
1: 正常 
-1: 因内容安全审查异常导致被封禁(存在于使用公网域名分享时)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 分享链接状态
1: 正常 
-1: 因内容安全审查异常导致被封禁(存在于使用公网域名分享时)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取10001-广告 20001-政治 20002-色情 20004-社会事件 20011-暴力 20012-低俗 20006-违法犯罪 20007-谩骂 20008-欺诈 20013-版权 20104-谣言 21000-其他, 10086-聚合, 24001-暴恐（天御独有恶意类型），20472-违法，
24005-社会
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentSafetyCode 10001-广告 20001-政治 20002-色情 20004-社会事件 20011-暴力 20012-低俗 20006-违法犯罪 20007-谩骂 20008-欺诈 20013-版权 20104-谣言 21000-其他, 10086-聚合, 24001-暴恐（天御独有恶意类型），20472-违法，
24005-社会
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetContentSafetyCode() const;

                    /**
                     * 设置10001-广告 20001-政治 20002-色情 20004-社会事件 20011-暴力 20012-低俗 20006-违法犯罪 20007-谩骂 20008-欺诈 20013-版权 20104-谣言 21000-其他, 10086-聚合, 24001-暴恐（天御独有恶意类型），20472-违法，
24005-社会
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentSafetyCode 10001-广告 20001-政治 20002-色情 20004-社会事件 20011-暴力 20012-低俗 20006-违法犯罪 20007-谩骂 20008-欺诈 20013-版权 20104-谣言 21000-其他, 10086-聚合, 24001-暴恐（天御独有恶意类型），20472-违法，
24005-社会
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentSafetyCode(const uint64_t& _contentSafetyCode);

                    /**
                     * 判断参数 ContentSafetyCode 是否已赋值
                     * @return ContentSafetyCode 是否已赋值
                     * 
                     */
                    bool ContentSafetyCodeHasBeenSet() const;

                private:

                    /**
                     * 分享ID
                     */
                    std::string m_sharingId;
                    bool m_sharingIdHasBeenSet;

                    /**
                     * 分享链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sharingUrl;
                    bool m_sharingUrlHasBeenSet;

                    /**
                     * 匿名分享配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsoleSharingConfig m_sharingConfig;
                    bool m_sharingConfigHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 分享链接状态
1: 正常 
-1: 因内容安全审查异常导致被封禁(存在于使用公网域名分享时)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 10001-广告 20001-政治 20002-色情 20004-社会事件 20011-暴力 20012-低俗 20006-违法犯罪 20007-谩骂 20008-欺诈 20013-版权 20104-谣言 21000-其他, 10086-聚合, 24001-暴恐（天御独有恶意类型），20472-违法，
24005-社会
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_contentSafetyCode;
                    bool m_contentSafetyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSOLESHARINGINFO_H_
