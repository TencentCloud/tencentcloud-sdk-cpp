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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEPROJECTSREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/SortBy.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeProjects请求参数结构体
                */
                class DescribeProjectsRequest : public AbstractModel
                {
                public:
                    DescribeProjectsRequest();
                    ~DescribeProjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取项目 Id 列表，N 从 0 开始取值，最大 19。
                     * @return ProjectIds 项目 Id 列表，N 从 0 开始取值，最大 19。
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目 Id 列表，N 从 0 开始取值，最大 19。
                     * @param ProjectIds 项目 Id 列表，N 从 0 开始取值，最大 19。
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取画布宽高比集合。
                     * @return AspectRatioSet 画布宽高比集合。
                     */
                    std::vector<std::string> GetAspectRatioSet() const;

                    /**
                     * 设置画布宽高比集合。
                     * @param AspectRatioSet 画布宽高比集合。
                     */
                    void SetAspectRatioSet(const std::vector<std::string>& _aspectRatioSet);

                    /**
                     * 判断参数 AspectRatioSet 是否已赋值
                     * @return AspectRatioSet 是否已赋值
                     */
                    bool AspectRatioSetHasBeenSet() const;

                    /**
                     * 获取项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
                     * @return CategorySet 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
                     */
                    std::vector<std::string> GetCategorySet() const;

                    /**
                     * 设置项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
                     * @param CategorySet 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
                     */
                    void SetCategorySet(const std::vector<std::string>& _categorySet);

                    /**
                     * 判断参数 CategorySet 是否已赋值
                     * @return CategorySet 是否已赋值
                     */
                    bool CategorySetHasBeenSet() const;

                    /**
                     * 获取列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     * @return Sort 列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     * @param Sort 列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取项目归属者。
                     * @return Owner 项目归属者。
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置项目归属者。
                     * @param Owner 项目归属者。
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。
                     * @return Offset 分页返回的起始偏移量，默认值：0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。
                     * @param Offset 分页返回的起始偏移量，默认值：0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页返回的记录条数，默认值：10。
                     * @return Limit 分页返回的记录条数，默认值：10。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页返回的记录条数，默认值：10。
                     * @param Limit 分页返回的记录条数，默认值：10。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验项目访问权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验项目访问权限。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验项目访问权限。
                     * @param Operator 操作者。填写用户的 Id，用于标识调用者及校验项目访问权限。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 项目 Id 列表，N 从 0 开始取值，最大 19。
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 画布宽高比集合。
                     */
                    std::vector<std::string> m_aspectRatioSet;
                    bool m_aspectRatioSetHasBeenSet;

                    /**
                     * 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
                     */
                    std::vector<std::string> m_categorySet;
                    bool m_categorySetHasBeenSet;

                    /**
                     * 列表排序，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 项目归属者。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 分页返回的起始偏移量，默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页返回的记录条数，默认值：10。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 操作者。填写用户的 Id，用于标识调用者及校验项目访问权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEPROJECTSREQUEST_H_
