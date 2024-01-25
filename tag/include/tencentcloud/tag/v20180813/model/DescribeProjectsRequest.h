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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBEPROJECTSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBEPROJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
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
                     * 获取传1拉取所有项目（包括隐藏项目），传0拉取显示项目
                     * @return AllList 传1拉取所有项目（包括隐藏项目），传0拉取显示项目
                     * 
                     */
                    uint64_t GetAllList() const;

                    /**
                     * 设置传1拉取所有项目（包括隐藏项目），传0拉取显示项目
                     * @param _allList 传1拉取所有项目（包括隐藏项目），传0拉取显示项目
                     * 
                     */
                    void SetAllList(const uint64_t& _allList);

                    /**
                     * 判断参数 AllList 是否已赋值
                     * @return AllList 是否已赋值
                     * 
                     */
                    bool AllListHasBeenSet() const;

                    /**
                     * 获取分页条数，固定值1000。
                     * @return Limit 分页条数，固定值1000。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页条数，固定值1000。
                     * @param _limit 分页条数，固定值1000。
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
                     * 获取分页偏移量。
                     * @return Offset 分页偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。
                     * @param _offset 分页偏移量。
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
                     * 获取按项目ID筛选，大于0
                     * @return ProjectId 按项目ID筛选，大于0
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置按项目ID筛选，大于0
                     * @param _projectId 按项目ID筛选，大于0
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取按项目名称筛选
                     * @return ProjectName 按项目名称筛选
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置按项目名称筛选
                     * @param _projectName 按项目名称筛选
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * 传1拉取所有项目（包括隐藏项目），传0拉取显示项目
                     */
                    uint64_t m_allList;
                    bool m_allListHasBeenSet;

                    /**
                     * 分页条数，固定值1000。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 按项目ID筛选，大于0
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 按项目名称筛选
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBEPROJECTSREQUEST_H_
