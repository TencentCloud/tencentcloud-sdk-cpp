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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETEXAMPLEDETAILRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETEXAMPLEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetExampleDetail返回参数结构体
                */
                class GetExampleDetailResponse : public AbstractModel
                {
                public:
                    GetExampleDetailResponse();
                    ~GetExampleDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ID</p>
                     * @return Id <p>ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>案例ID</p>
                     * @return ExampleId <p>案例ID</p>
                     * 
                     */
                    std::string GetExampleId() const;

                    /**
                     * 判断参数 ExampleId 是否已赋值
                     * @return ExampleId 是否已赋值
                     * 
                     */
                    bool ExampleIdHasBeenSet() const;

                    /**
                     * 获取<p>标题</p>
                     * @return Title <p>标题</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
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
                     * 获取<p>README</p>
                     * @return Readme <p>README</p>
                     * 
                     */
                    std::string GetReadme() const;

                    /**
                     * 判断参数 Readme 是否已赋值
                     * @return Readme 是否已赋值
                     * 
                     */
                    bool ReadmeHasBeenSet() const;

                    /**
                     * 获取<p>案例归档URL</p>
                     * @return CodeArchiveUrl <p>案例归档URL</p>
                     * 
                     */
                    std::string GetCodeArchiveUrl() const;

                    /**
                     * 判断参数 CodeArchiveUrl 是否已赋值
                     * @return CodeArchiveUrl 是否已赋值
                     * 
                     */
                    bool CodeArchiveUrlHasBeenSet() const;

                    /**
                     * 获取<p>图片URL</p>
                     * @return Image <p>图片URL</p>
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>实验室镜像</p>
                     * @return LabImage <p>实验室镜像</p>
                     * 
                     */
                    std::string GetLabImage() const;

                    /**
                     * 判断参数 LabImage 是否已赋值
                     * @return LabImage 是否已赋值
                     * 
                     */
                    bool LabImageHasBeenSet() const;

                    /**
                     * 获取<p>资源配置</p>
                     * @return ResourceConfig <p>资源配置</p>
                     * 
                     */
                    std::string GetResourceConfig() const;

                    /**
                     * 判断参数 ResourceConfig 是否已赋值
                     * @return ResourceConfig 是否已赋值
                     * 
                     */
                    bool ResourceConfigHasBeenSet() const;

                    /**
                     * 获取<p>分类</p>
                     * @return Category <p>分类</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>案例标签</p>
                     * @return Tags <p>案例标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>难度</p>
                     * @return Difficulty <p>难度</p>
                     * 
                     */
                    std::string GetDifficulty() const;

                    /**
                     * 判断参数 Difficulty 是否已赋值
                     * @return Difficulty 是否已赋值
                     * 
                     */
                    bool DifficultyHasBeenSet() const;

                    /**
                     * 获取<p>预估时间（分钟）</p>
                     * @return EstimatedTime <p>预估时间（分钟）</p>
                     * 
                     */
                    int64_t GetEstimatedTime() const;

                    /**
                     * 判断参数 EstimatedTime 是否已赋值
                     * @return EstimatedTime 是否已赋值
                     * 
                     */
                    bool EstimatedTimeHasBeenSet() const;

                    /**
                     * 获取<p>排序</p>
                     * @return SortOrder <p>排序</p>
                     * 
                     */
                    int64_t GetSortOrder() const;

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                    /**
                     * 获取<p>是否启用</p>
                     * @return IsEnabled <p>是否启用</p>
                     * 
                     */
                    bool GetIsEnabled() const;

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否删除</p>
                     * @return Deleted <p>是否删除</p>
                     * 
                     */
                    int64_t GetDeleted() const;

                    /**
                     * 判断参数 Deleted 是否已赋值
                     * @return Deleted 是否已赋值
                     * 
                     */
                    bool DeletedHasBeenSet() const;

                    /**
                     * 获取<p>案例热度</p>
                     * @return Popularity <p>案例热度</p>
                     * 
                     */
                    int64_t GetPopularity() const;

                    /**
                     * 判断参数 Popularity 是否已赋值
                     * @return Popularity 是否已赋值
                     * 
                     */
                    bool PopularityHasBeenSet() const;

                private:

                    /**
                     * <p>ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>案例ID</p>
                     */
                    std::string m_exampleId;
                    bool m_exampleIdHasBeenSet;

                    /**
                     * <p>标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>README</p>
                     */
                    std::string m_readme;
                    bool m_readmeHasBeenSet;

                    /**
                     * <p>案例归档URL</p>
                     */
                    std::string m_codeArchiveUrl;
                    bool m_codeArchiveUrlHasBeenSet;

                    /**
                     * <p>图片URL</p>
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>实验室镜像</p>
                     */
                    std::string m_labImage;
                    bool m_labImageHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    std::string m_resourceConfig;
                    bool m_resourceConfigHasBeenSet;

                    /**
                     * <p>分类</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>案例标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>难度</p>
                     */
                    std::string m_difficulty;
                    bool m_difficultyHasBeenSet;

                    /**
                     * <p>预估时间（分钟）</p>
                     */
                    int64_t m_estimatedTime;
                    bool m_estimatedTimeHasBeenSet;

                    /**
                     * <p>排序</p>
                     */
                    int64_t m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                    /**
                     * <p>是否启用</p>
                     */
                    bool m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>是否删除</p>
                     */
                    int64_t m_deleted;
                    bool m_deletedHasBeenSet;

                    /**
                     * <p>案例热度</p>
                     */
                    int64_t m_popularity;
                    bool m_popularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETEXAMPLEDETAILRESPONSE_H_
