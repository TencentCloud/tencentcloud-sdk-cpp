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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBERESOURCESLISTREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBERESOURCESLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * DescribeVcubeResourcesList请求参数结构体
                */
                class DescribeVcubeResourcesListRequest : public AbstractModel
                {
                public:
                    DescribeVcubeResourcesListRequest();
                    ~DescribeVcubeResourcesListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询资源页码
                     * @return PageNumber 查询资源页码
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置查询资源页码
                     * @param _pageNumber 查询资源页码
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页的数据量
                     * @return PageSize 每页的数据量
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页的数据量
                     * @param _pageSize 每页的数据量
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取应用名称，模块查询
                     * @return AppName 应用名称，模块查询
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称，模块查询
                     * @param _appName 应用名称，模块查询
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取资源Id，资源包id或者license资源id
                     * @return ResourceId 资源Id，资源包id或者license资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id，资源包id或者license资源id
                     * @param _resourceId 资源Id，资源包id或者license资源id
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
                     * 获取资源Id、应用名称、包名
                     * @return Word 资源Id、应用名称、包名
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置资源Id、应用名称、包名
                     * @param _word 资源Id、应用名称、包名
                     * 
                     */
                    void SetWord(const std::string& _word);

                    /**
                     * 判断参数 Word 是否已赋值
                     * @return Word 是否已赋值
                     * 
                     */
                    bool WordHasBeenSet() const;

                    /**
                     * 获取查询资源所属平台，web、mobile
                     * @return Platform 查询资源所属平台，web、mobile
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置查询资源所属平台，web、mobile
                     * @param _platform 查询资源所属平台，web、mobile
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * 查询资源页码
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页的数据量
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 应用名称，模块查询
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 资源Id，资源包id或者license资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源Id、应用名称、包名
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 查询资源所属平台，web、mobile
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBERESOURCESLISTREQUEST_H_
