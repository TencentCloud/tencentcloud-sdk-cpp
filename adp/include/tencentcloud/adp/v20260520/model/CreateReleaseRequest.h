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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATERELEASEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATERELEASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRelease请求参数结构体
                */
                class CreateReleaseRequest : public AbstractModel
                {
                public:
                    CreateReleaseRequest();
                    ~CreateReleaseRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取渠道ID列表
                     * @return ChannelIdList 渠道ID列表
                     * 
                     */
                    std::vector<std::string> GetChannelIdList() const;

                    /**
                     * 设置渠道ID列表
                     * @param _channelIdList 渠道ID列表
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
                     * 获取将默认知识库中，仅调试生效的知识批量变更为"调试/发布都生效"
                     * @return IsDevToRelease 将默认知识库中，仅调试生效的知识批量变更为"调试/发布都生效"
                     * 
                     */
                    bool GetIsDevToRelease() const;

                    /**
                     * 设置将默认知识库中，仅调试生效的知识批量变更为"调试/发布都生效"
                     * @param _isDevToRelease 将默认知识库中，仅调试生效的知识批量变更为"调试/发布都生效"
                     * 
                     */
                    void SetIsDevToRelease(const bool& _isDevToRelease);

                    /**
                     * 判断参数 IsDevToRelease 是否已赋值
                     * @return IsDevToRelease 是否已赋值
                     * 
                     */
                    bool IsDevToReleaseHasBeenSet() const;

                    /**
                     * 获取是否同步发布为应用模板
                     * @return IsPublishAsTemplate 是否同步发布为应用模板
                     * 
                     */
                    bool GetIsPublishAsTemplate() const;

                    /**
                     * 设置是否同步发布为应用模板
                     * @param _isPublishAsTemplate 是否同步发布为应用模板
                     * 
                     */
                    void SetIsPublishAsTemplate(const bool& _isPublishAsTemplate);

                    /**
                     * 判断参数 IsPublishAsTemplate 是否已赋值
                     * @return IsPublishAsTemplate 是否已赋值
                     * 
                     */
                    bool IsPublishAsTemplateHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 渠道ID列表
                     */
                    std::vector<std::string> m_channelIdList;
                    bool m_channelIdListHasBeenSet;

                    /**
                     * 发布描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 将默认知识库中，仅调试生效的知识批量变更为"调试/发布都生效"
                     */
                    bool m_isDevToRelease;
                    bool m_isDevToReleaseHasBeenSet;

                    /**
                     * 是否同步发布为应用模板
                     */
                    bool m_isPublishAsTemplate;
                    bool m_isPublishAsTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATERELEASEREQUEST_H_
