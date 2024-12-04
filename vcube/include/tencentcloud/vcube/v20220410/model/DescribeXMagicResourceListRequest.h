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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEXMAGICRESOURCELISTREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEXMAGICRESOURCELISTREQUEST_H_

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
                * DescribeXMagicResourceList请求参数结构体
                */
                class DescribeXMagicResourceListRequest : public AbstractModel
                {
                public:
                    DescribeXMagicResourceListRequest();
                    ~DescribeXMagicResourceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页页码 第一页是0
                     * @return PageNumber 分页页码 第一页是0
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页页码 第一页是0
                     * @param _pageNumber 分页页码 第一页是0
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
                     * 获取每页数量
                     * @return PageSize 每页数量
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量
                     * @param _pageSize 每页数量
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
                     * 获取关联的应用名称
                     * @return AppName 关联的应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置关联的应用名称
                     * @param _appName 关联的应用名称
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
                     * 获取优图资源Id
                     * @return ResourceId 优图资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置优图资源Id
                     * @param _resourceId 优图资源Id
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
                     * 获取查询关键字，资源Id、应用名称、包名
                     * @return Word 查询关键字，资源Id、应用名称、包名
                     * 
                     */
                    std::string GetWord() const;

                    /**
                     * 设置查询关键字，资源Id、应用名称、包名
                     * @param _word 查询关键字，资源Id、应用名称、包名
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
                     * 获取平台信息，pc 或者 mobile
                     * @return Platform 平台信息，pc 或者 mobile
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台信息，pc 或者 mobile
                     * @param _platform 平台信息，pc 或者 mobile
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
                     * 获取所属业务，xmagic：优图， avatar：虚拟人，不传查全部
                     * @return BizType 所属业务，xmagic：优图， avatar：虚拟人，不传查全部
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置所属业务，xmagic：优图， avatar：虚拟人，不传查全部
                     * @param _bizType 所属业务，xmagic：优图， avatar：虚拟人，不传查全部
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                private:

                    /**
                     * 分页页码 第一页是0
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 关联的应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 优图资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 查询关键字，资源Id、应用名称、包名
                     */
                    std::string m_word;
                    bool m_wordHasBeenSet;

                    /**
                     * 平台信息，pc 或者 mobile
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 所属业务，xmagic：优图， avatar：虚拟人，不传查全部
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEXMAGICRESOURCELISTREQUEST_H_
