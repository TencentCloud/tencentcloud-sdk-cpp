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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_CREATEBIZCONFIGREQUEST_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_CREATEBIZCONFIGREQUEST_H_

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
                * CreateBizConfig请求参数结构体
                */
                class CreateBizConfigRequest : public AbstractModel
                {
                public:
                    CreateBizConfigRequest();
                    ~CreateBizConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务类型，仅限英文字母、数字和下划线（_）组成，长度不超过8位
                     * @return BizType 业务类型，仅限英文字母、数字和下划线（_）组成，长度不超过8位
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置业务类型，仅限英文字母、数字和下划线（_）组成，长度不超过8位
                     * @param _bizType 业务类型，仅限英文字母、数字和下划线（_）组成，长度不超过8位
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取配置信息，
                     * @return MediaModeration 配置信息，
                     * 
                     */
                    MediaModerationConfig GetMediaModeration() const;

                    /**
                     * 设置配置信息，
                     * @param _mediaModeration 配置信息，
                     * 
                     */
                    void SetMediaModeration(const MediaModerationConfig& _mediaModeration);

                    /**
                     * 判断参数 MediaModeration 是否已赋值
                     * @return MediaModeration 是否已赋值
                     * 
                     */
                    bool MediaModerationHasBeenSet() const;

                    /**
                     * 获取业务名称，用于标识业务场景，长度不超过32位
                     * @return BizName 业务名称，用于标识业务场景，长度不超过32位
                     * 
                     */
                    std::string GetBizName() const;

                    /**
                     * 设置业务名称，用于标识业务场景，长度不超过32位
                     * @param _bizName 业务名称，用于标识业务场景，长度不超过32位
                     * 
                     */
                    void SetBizName(const std::string& _bizName);

                    /**
                     * 判断参数 BizName 是否已赋值
                     * @return BizName 是否已赋值
                     * 
                     */
                    bool BizNameHasBeenSet() const;

                    /**
                     * 获取审核内容，可选：Polity (政治); Porn (色情); Illegal(违法);Abuse (谩骂); Terror (暴恐); Ad (广告);
                     * @return ModerationCategories 审核内容，可选：Polity (政治); Porn (色情); Illegal(违法);Abuse (谩骂); Terror (暴恐); Ad (广告);
                     * 
                     */
                    std::vector<std::string> GetModerationCategories() const;

                    /**
                     * 设置审核内容，可选：Polity (政治); Porn (色情); Illegal(违法);Abuse (谩骂); Terror (暴恐); Ad (广告);
                     * @param _moderationCategories 审核内容，可选：Polity (政治); Porn (色情); Illegal(违法);Abuse (谩骂); Terror (暴恐); Ad (广告);
                     * 
                     */
                    void SetModerationCategories(const std::vector<std::string>& _moderationCategories);

                    /**
                     * 判断参数 ModerationCategories 是否已赋值
                     * @return ModerationCategories 是否已赋值
                     * 
                     */
                    bool ModerationCategoriesHasBeenSet() const;

                private:

                    /**
                     * 业务类型，仅限英文字母、数字和下划线（_）组成，长度不超过8位
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 配置信息，
                     */
                    MediaModerationConfig m_mediaModeration;
                    bool m_mediaModerationHasBeenSet;

                    /**
                     * 业务名称，用于标识业务场景，长度不超过32位
                     */
                    std::string m_bizName;
                    bool m_bizNameHasBeenSet;

                    /**
                     * 审核内容，可选：Polity (政治); Porn (色情); Illegal(违法);Abuse (谩骂); Terror (暴恐); Ad (广告);
                     */
                    std::vector<std::string> m_moderationCategories;
                    bool m_moderationCategoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_CREATEBIZCONFIGREQUEST_H_
