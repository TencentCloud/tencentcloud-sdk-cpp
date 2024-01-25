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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBROWSINGHISTORIESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBROWSINGHISTORIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeBrowsingHistories请求参数结构体
                */
                class DescribeBrowsingHistoriesRequest : public AbstractModel
                {
                public:
                    DescribeBrowsingHistoriesRequest();
                    ~DescribeBrowsingHistoriesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取最近多少个，最大20个
                     * @return TopN 最近多少个，最大20个
                     * 
                     */
                    int64_t GetTopN() const;

                    /**
                     * 设置最近多少个，最大20个
                     * @param _topN 最近多少个，最大20个
                     * 
                     */
                    void SetTopN(const int64_t& _topN);

                    /**
                     * 判断参数 TopN 是否已赋值
                     * @return TopN 是否已赋值
                     * 
                     */
                    bool TopNHasBeenSet() const;

                    /**
                     * 获取查询历史的资源类型file/task/function/event等
                     * @return ResourceType 查询历史的资源类型file/task/function/event等
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置查询历史的资源类型file/task/function/event等
                     * @param _resourceType 查询历史的资源类型file/task/function/event等
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 最近多少个，最大20个
                     */
                    int64_t m_topN;
                    bool m_topNHasBeenSet;

                    /**
                     * 查询历史的资源类型file/task/function/event等
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBROWSINGHISTORIESREQUEST_H_
