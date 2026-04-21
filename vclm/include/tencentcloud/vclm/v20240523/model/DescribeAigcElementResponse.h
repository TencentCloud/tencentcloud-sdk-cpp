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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCELEMENTRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCELEMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vclm/v20240523/model/ElementImageList.h>
#include <tencentcloud/vclm/v20240523/model/TagList.h>
#include <tencentcloud/vclm/v20240523/model/ProviderDetail.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * DescribeAigcElement返回参数结构体
                */
                class DescribeAigcElementResponse : public AbstractModel
                {
                public:
                    DescribeAigcElementResponse();
                    ~DescribeAigcElementResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>主体名称</p>
                     * @return Name <p>主体名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>主体id</p>
                     * @return ElementId <p>主体id</p>
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                    /**
                     * 获取<p>主体描述</p>
                     * @return Description <p>主体描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>主体参考方式</p><p>枚举值：</p><ul><li>video_refer： 视频角色主体</li><li>image_refer： 多图主体</li></ul>
                     * @return ReferenceType <p>主体参考方式</p><p>枚举值：</p><ul><li>video_refer： 视频角色主体</li><li>image_refer： 多图主体</li></ul>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>pending： 执行中</li><li>failed： 任务失败</li><li>succeed： 任务成功</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>pending： 执行中</li><li>failed： 任务失败</li><li>succeed： 任务成功</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>厂商列表</p>
                     * @return Provider <p>厂商列表</p>
                     * 
                     */
                    std::vector<std::string> GetProvider() const;

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>主体参考图，可通过多张图片设定主体及其细节</p>
                     * @return ElementImageList <p>主体参考图，可通过多张图片设定主体及其细节</p>
                     * 
                     */
                    ElementImageList GetElementImageList() const;

                    /**
                     * 判断参数 ElementImageList 是否已赋值
                     * @return ElementImageList 是否已赋值
                     * 
                     */
                    bool ElementImageListHasBeenSet() const;

                    /**
                     * 获取<p>主体参考视频，可通过视频设定主体及其细节</p>
                     * @return VideoList <p>主体参考视频，可通过视频设定主体及其细节</p>
                     * 
                     */
                    std::vector<std::string> GetVideoList() const;

                    /**
                     * 判断参数 VideoList 是否已赋值
                     * @return VideoList 是否已赋值
                     * 
                     */
                    bool VideoListHasBeenSet() const;

                    /**
                     * 获取<p>为主体配置标签，一个主体可以配置多个标签</p>
                     * @return TagList <p>为主体配置标签，一个主体可以配置多个标签</p>
                     * 
                     */
                    std::vector<TagList> GetTagList() const;

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>厂商聚合字段</p>
                     * @return ProviderDetails <p>厂商聚合字段</p>
                     * 
                     */
                    std::vector<ProviderDetail> GetProviderDetails() const;

                    /**
                     * 判断参数 ProviderDetails 是否已赋值
                     * @return ProviderDetails 是否已赋值
                     * 
                     */
                    bool ProviderDetailsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdatedAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>音色Id</p>
                     * @return ElementVoiceId <p>音色Id</p>
                     * 
                     */
                    std::string GetElementVoiceId() const;

                    /**
                     * 判断参数 ElementVoiceId 是否已赋值
                     * @return ElementVoiceId 是否已赋值
                     * 
                     */
                    bool ElementVoiceIdHasBeenSet() const;

                private:

                    /**
                     * <p>主体名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>主体id</p>
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                    /**
                     * <p>主体描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>主体参考方式</p><p>枚举值：</p><ul><li>video_refer： 视频角色主体</li><li>image_refer： 多图主体</li></ul>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>pending： 执行中</li><li>failed： 任务失败</li><li>succeed： 任务成功</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>厂商列表</p>
                     */
                    std::vector<std::string> m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>主体参考图，可通过多张图片设定主体及其细节</p>
                     */
                    ElementImageList m_elementImageList;
                    bool m_elementImageListHasBeenSet;

                    /**
                     * <p>主体参考视频，可通过视频设定主体及其细节</p>
                     */
                    std::vector<std::string> m_videoList;
                    bool m_videoListHasBeenSet;

                    /**
                     * <p>为主体配置标签，一个主体可以配置多个标签</p>
                     */
                    std::vector<TagList> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>厂商聚合字段</p>
                     */
                    std::vector<ProviderDetail> m_providerDetails;
                    bool m_providerDetailsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>音色Id</p>
                     */
                    std::string m_elementVoiceId;
                    bool m_elementVoiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCELEMENTRESPONSE_H_
