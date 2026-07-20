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
                * CreateRelease请求参数结构体
                */
                class CreateReleaseRequest : public AbstractModel
                {
                public:
                    CreateReleaseRequest();
                    ~CreateReleaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
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
                     * 获取<p>应用分享访问控制配置</p>
                     * @return AppShareAccessControl <p>应用分享访问控制配置</p>
                     * 
                     */
                    AppShareAccessControl GetAppShareAccessControl() const;

                    /**
                     * 设置<p>应用分享访问控制配置</p>
                     * @param _appShareAccessControl <p>应用分享访问控制配置</p>
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
                     * 获取<p>渠道ID列表</p>
                     * @return ChannelIdList <p>渠道ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIdList() const;

                    /**
                     * 设置<p>渠道ID列表</p>
                     * @param _channelIdList <p>渠道ID列表</p>
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
                     * @return CorpShareConfig <p>企业共享配置</p>
                     * 
                     */
                    CorpShareConfig GetCorpShareConfig() const;

                    /**
                     * 设置<p>企业共享配置</p>
                     * @param _corpShareConfig <p>企业共享配置</p>
                     * 
                     */
                    void SetCorpShareConfig(const CorpShareConfig& _corpShareConfig);

                    /**
                     * 判断参数 CorpShareConfig 是否已赋值
                     * @return CorpShareConfig 是否已赋值
                     * 
                     */
                    bool CorpShareConfigHasBeenSet() const;

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
                     * 获取<p>将默认知识库中，仅调试生效的知识批量变更为&quot;调试/发布都生效&quot;</p>
                     * @return IsDevToRelease <p>将默认知识库中，仅调试生效的知识批量变更为&quot;调试/发布都生效&quot;</p>
                     * 
                     */
                    bool GetIsDevToRelease() const;

                    /**
                     * 设置<p>将默认知识库中，仅调试生效的知识批量变更为&quot;调试/发布都生效&quot;</p>
                     * @param _isDevToRelease <p>将默认知识库中，仅调试生效的知识批量变更为&quot;调试/发布都生效&quot;</p>
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
                     * 获取<p>是否同步发布为应用模板</p>
                     * @return IsPublishAsTemplate <p>是否同步发布为应用模板</p>
                     * 
                     */
                    bool GetIsPublishAsTemplate() const;

                    /**
                     * 设置<p>是否同步发布为应用模板</p>
                     * @param _isPublishAsTemplate <p>是否同步发布为应用模板</p>
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
                     * <p>应用ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用分享访问控制配置</p>
                     */
                    AppShareAccessControl m_appShareAccessControl;
                    bool m_appShareAccessControlHasBeenSet;

                    /**
                     * <p>渠道ID列表</p>
                     */
                    std::vector<std::string> m_channelIdList;
                    bool m_channelIdListHasBeenSet;

                    /**
                     * <p>企业共享配置</p>
                     */
                    CorpShareConfig m_corpShareConfig;
                    bool m_corpShareConfigHasBeenSet;

                    /**
                     * <p>发布描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>将默认知识库中，仅调试生效的知识批量变更为&quot;调试/发布都生效&quot;</p>
                     */
                    bool m_isDevToRelease;
                    bool m_isDevToReleaseHasBeenSet;

                    /**
                     * <p>是否同步发布为应用模板</p>
                     */
                    bool m_isPublishAsTemplate;
                    bool m_isPublishAsTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATERELEASEREQUEST_H_
