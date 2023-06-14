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
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取项目 Id 过滤参数列表，最大支持20个项目 Id 过滤。如果不填不需要项目 Id 进行过滤。
                     * @return ProjectIds 项目 Id 过滤参数列表，最大支持20个项目 Id 过滤。如果不填不需要项目 Id 进行过滤。
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目 Id 过滤参数列表，最大支持20个项目 Id 过滤。如果不填不需要项目 Id 进行过滤。
                     * @param _projectIds 项目 Id 过滤参数列表，最大支持20个项目 Id 过滤。如果不填不需要项目 Id 进行过滤。
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取画布宽高比过滤参数列表。如果不填则不用画布宽高比进行过滤。
                     * @return AspectRatioSet 画布宽高比过滤参数列表。如果不填则不用画布宽高比进行过滤。
                     * 
                     */
                    std::vector<std::string> GetAspectRatioSet() const;

                    /**
                     * 设置画布宽高比过滤参数列表。如果不填则不用画布宽高比进行过滤。
                     * @param _aspectRatioSet 画布宽高比过滤参数列表。如果不填则不用画布宽高比进行过滤。
                     * 
                     */
                    void SetAspectRatioSet(const std::vector<std::string>& _aspectRatioSet);

                    /**
                     * 判断参数 AspectRatioSet 是否已赋值
                     * @return AspectRatioSet 是否已赋值
                     * 
                     */
                    bool AspectRatioSetHasBeenSet() const;

                    /**
                     * 获取项目类型过滤参数列表，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：点播转直播。</li>

注：如果不填则不使用项目类型进行过滤。
                     * @return CategorySet 项目类型过滤参数列表，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：点播转直播。</li>

注：如果不填则不使用项目类型进行过滤。
                     * 
                     */
                    std::vector<std::string> GetCategorySet() const;

                    /**
                     * 设置项目类型过滤参数列表，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：点播转直播。</li>

注：如果不填则不使用项目类型进行过滤。
                     * @param _categorySet 项目类型过滤参数列表，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：点播转直播。</li>

注：如果不填则不使用项目类型进行过滤。
                     * 
                     */
                    void SetCategorySet(const std::vector<std::string>& _categorySet);

                    /**
                     * 判断参数 CategorySet 是否已赋值
                     * @return CategorySet 是否已赋值
                     * 
                     */
                    bool CategorySetHasBeenSet() const;

                    /**
                     * 获取项目模式过滤参数列表，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>

注：不填不使用项目模式进行过滤。
                     * @return Modes 项目模式过滤参数列表，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>

注：不填不使用项目模式进行过滤。
                     * 
                     */
                    std::vector<std::string> GetModes() const;

                    /**
                     * 设置项目模式过滤参数列表，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>

注：不填不使用项目模式进行过滤。
                     * @param _modes 项目模式过滤参数列表，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>

注：不填不使用项目模式进行过滤。
                     * 
                     */
                    void SetModes(const std::vector<std::string>& _modes);

                    /**
                     * 判断参数 Modes 是否已赋值
                     * @return Modes 是否已赋值
                     * 
                     */
                    bool ModesHasBeenSet() const;

                    /**
                     * 获取结果排序方式，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>

注：如不填，则使用项目创建时间倒序排列。
                     * @return Sort 结果排序方式，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>

注：如不填，则使用项目创建时间倒序排列。
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置结果排序方式，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>

注：如不填，则使用项目创建时间倒序排列。
                     * @param _sort 结果排序方式，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>

注：如不填，则使用项目创建时间倒序排列。
                     * 
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取项目所有者，目前仅支持个人项目过滤。
                     * @return Owner 项目所有者，目前仅支持个人项目过滤。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置项目所有者，目前仅支持个人项目过滤。
                     * @param _owner 项目所有者，目前仅支持个人项目过滤。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取分页返回的起始偏移量，默认值：0。
                     * @return Offset 分页返回的起始偏移量，默认值：0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页返回的起始偏移量，默认值：0。
                     * @param _offset 分页返回的起始偏移量，默认值：0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页返回的记录条数，默认值：10。
                     * @return Limit 分页返回的记录条数，默认值：10。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页返回的记录条数，默认值：10。
                     * @param _limit 分页返回的记录条数，默认值：10。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询一切用户项目信息。如果指定操作者，则操作者必须为项目所有者。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询一切用户项目信息。如果指定操作者，则操作者必须为项目所有者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询一切用户项目信息。如果指定操作者，则操作者必须为项目所有者。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询一切用户项目信息。如果指定操作者，则操作者必须为项目所有者。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 项目 Id 过滤参数列表，最大支持20个项目 Id 过滤。如果不填不需要项目 Id 进行过滤。
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 画布宽高比过滤参数列表。如果不填则不用画布宽高比进行过滤。
                     */
                    std::vector<std::string> m_aspectRatioSet;
                    bool m_aspectRatioSetHasBeenSet;

                    /**
                     * 项目类型过滤参数列表，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
<li>MEDIA_CAST：点播转直播。</li>

注：如果不填则不使用项目类型进行过滤。
                     */
                    std::vector<std::string> m_categorySet;
                    bool m_categorySetHasBeenSet;

                    /**
                     * 项目模式过滤参数列表，一个项目可以有多种模式并相互切换。
当 Category 为 VIDEO_EDIT 时，可选模式有：
<li>Default：默认模式。</li>
<li>VideoEditTemplate：视频编辑模板制作模式。</li>

注：不填不使用项目模式进行过滤。
                     */
                    std::vector<std::string> m_modes;
                    bool m_modesHasBeenSet;

                    /**
                     * 结果排序方式，支持下列排序字段：
<li>CreateTime：创建时间；</li>
<li>UpdateTime：更新时间。</li>

注：如不填，则使用项目创建时间倒序排列。
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 项目所有者，目前仅支持个人项目过滤。
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
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询一切用户项目信息。如果指定操作者，则操作者必须为项目所有者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBEPROJECTSREQUEST_H_
