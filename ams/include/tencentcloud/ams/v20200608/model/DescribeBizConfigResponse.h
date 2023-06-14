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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEBIZCONFIGRESPONSE_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEBIZCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20200608/model/MediaModerationConfig.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * DescribeBizConfig返回参数结构体
                */
                class DescribeBizConfigResponse : public AbstractModel
                {
                public:
                    DescribeBizConfigResponse();
                    ~DescribeBizConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务类型
                     * @return BizType 业务类型
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取业务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizName 业务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizName() const;

                    /**
                     * 判断参数 BizName 是否已赋值
                     * @return BizName 是否已赋值
                     * 
                     */
                    bool BizNameHasBeenSet() const;

                    /**
                     * 获取审核范围
                     * @return ModerationCategories 审核范围
                     * 
                     */
                    std::vector<std::string> GetModerationCategories() const;

                    /**
                     * 判断参数 ModerationCategories 是否已赋值
                     * @return ModerationCategories 是否已赋值
                     * 
                     */
                    bool ModerationCategoriesHasBeenSet() const;

                    /**
                     * 获取多媒体审核配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaModeration 多媒体审核配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaModerationConfig GetMediaModeration() const;

                    /**
                     * 判断参数 MediaModeration 是否已赋值
                     * @return MediaModeration 是否已赋值
                     * 
                     */
                    bool MediaModerationHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 业务类型
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 业务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizName;
                    bool m_bizNameHasBeenSet;

                    /**
                     * 审核范围
                     */
                    std::vector<std::string> m_moderationCategories;
                    bool m_moderationCategoriesHasBeenSet;

                    /**
                     * 多媒体审核配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaModerationConfig m_mediaModeration;
                    bool m_mediaModerationHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_DESCRIBEBIZCONFIGRESPONSE_H_
