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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINEREVENTSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINEREVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeContainerEvents请求参数结构体
                */
                class DescribeContainerEventsRequest : public AbstractModel
                {
                public:
                    DescribeContainerEventsRequest();
                    ~DescribeContainerEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取event 的资源类型, 仅支持 group
                     * @return ResourceType event 的资源类型, 仅支持 group
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置event 的资源类型, 仅支持 group
                     * @param _resourceType event 的资源类型, 仅支持 group
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd
                     * @return ResourceId 部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd
                     * @param _resourceId 部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取偏移量，取值从0开始
                     * @return Offset 偏移量，取值从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，取值从0开始
                     * @param _offset 偏移量，取值从0开始
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页个数，默认为20， 取值应为1~50
                     * @return Limit 分页个数，默认为20， 取值应为1~50
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页个数，默认为20， 取值应为1~50
                     * @param _limit 分页个数，默认为20， 取值应为1~50
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取部署组ID，可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/api/649/36068)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateContainGroup](https://cloud.tencent.com/document/api/649/36075)创建新的部署组。
                     * @return GroupId 部署组ID，可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/api/649/36068)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateContainGroup](https://cloud.tencent.com/document/api/649/36075)创建新的部署组。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID，可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/api/649/36068)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateContainGroup](https://cloud.tencent.com/document/api/649/36075)创建新的部署组。
                     * @param _groupId 部署组ID，可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/api/649/36068)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateContainGroup](https://cloud.tencent.com/document/api/649/36075)创建新的部署组。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取event的资源种类
                     * @return Kind event的资源种类
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置event的资源种类
                     * @param _kind event的资源种类
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取event 的事件级别
                     * @return Type event 的事件级别
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置event 的事件级别
                     * @param _type event 的事件级别
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取资源名称
                     * @return ResourceName 资源名称
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
                     * @param _resourceName 资源名称
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取关键词查询
                     * @return SearchWord 关键词查询
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置关键词查询
                     * @param _searchWord 关键词查询
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                private:

                    /**
                     * event 的资源类型, 仅支持 group
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 部署组ID，按照【部署组ID】进行过滤，可通过调用DescribeGroups查询已创建的项目列表或登录控制台进行查看；也可以调用CreateGroup创建新的项目。部署组ID例如：group-9yn2q8yd
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 偏移量，取值从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数，默认为20， 取值应为1~50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 部署组ID，可通过调用[DescribeContainerGroups](https://cloud.tencent.com/document/api/649/36068)查询已创建的部署组列表或登录控制台进行查看；也可以调用[CreateContainGroup](https://cloud.tencent.com/document/api/649/36075)创建新的部署组。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * event的资源种类
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * event 的事件级别
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源名称
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 关键词查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBECONTAINEREVENTSREQUEST_H_
