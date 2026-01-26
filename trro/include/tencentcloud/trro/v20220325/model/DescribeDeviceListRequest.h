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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICELISTREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeDeviceList请求参数结构体
                */
                class DescribeDeviceListRequest : public AbstractModel
                {
                public:
                    DescribeDeviceListRequest();
                    ~DescribeDeviceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>设备所属项目ID</p>
                     * @return ProjectId <p>设备所属项目ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>设备所属项目ID</p>
                     * @param _projectId <p>设备所属项目ID</p>
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
                     * 获取<p>设备类型筛选，不填默认为全部设备类型</p>
                     * @return DeviceType <p>设备类型筛选，不填默认为全部设备类型</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>设备类型筛选，不填默认为全部设备类型</p>
                     * @param _deviceType <p>设备类型筛选，不填默认为全部设备类型</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配</p>
                     * @return SearchWords <p>对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配</p>
                     * 
                     */
                    std::string GetSearchWords() const;

                    /**
                     * 设置<p>对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配</p>
                     * @param _searchWords <p>对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配</p>
                     * 
                     */
                    void SetSearchWords(const std::string& _searchWords);

                    /**
                     * 判断参数 SearchWords 是否已赋值
                     * @return SearchWords 是否已赋值
                     * 
                     */
                    bool SearchWordsHasBeenSet() const;

                    /**
                     * 获取<p>每页返回的最大设备数，不填默认为10</p>
                     * @return PageSize <p>每页返回的最大设备数，不填默认为10</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页返回的最大设备数，不填默认为10</p>
                     * @param _pageSize <p>每页返回的最大设备数，不填默认为10</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>当前页码，不填默认为1（首页）</p>
                     * @return PageNumber <p>当前页码，不填默认为1（首页）</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>当前页码，不填默认为1（首页）</p>
                     * @param _pageNumber <p>当前页码，不填默认为1（首页）</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>设备状态筛选，不填默认为不过滤。取值：[&quot;ready&quot;,&quot;connected&quot;,&quot;online&quot;]，online代表ready或connected</p>
                     * @return DeviceStatus <p>设备状态筛选，不填默认为不过滤。取值：[&quot;ready&quot;,&quot;connected&quot;,&quot;online&quot;]，online代表ready或connected</p>
                     * 
                     */
                    std::string GetDeviceStatus() const;

                    /**
                     * 设置<p>设备状态筛选，不填默认为不过滤。取值：[&quot;ready&quot;,&quot;connected&quot;,&quot;online&quot;]，online代表ready或connected</p>
                     * @param _deviceStatus <p>设备状态筛选，不填默认为不过滤。取值：[&quot;ready&quot;,&quot;connected&quot;,&quot;online&quot;]，online代表ready或connected</p>
                     * 
                     */
                    void SetDeviceStatus(const std::string& _deviceStatus);

                    /**
                     * 判断参数 DeviceStatus 是否已赋值
                     * @return DeviceStatus 是否已赋值
                     * 
                     */
                    bool DeviceStatusHasBeenSet() const;

                    /**
                     * 获取<p>标识查询项目下的设备注册类型，默认不包含免注册登录设备。 若存在免注册登录设备，该参数传&quot;1&quot;</p><p>枚举值：</p><ul><li>0： 项目不包含免注册登录设备</li><li>1： 项目包含免注册登录设备</li></ul><p>默认值：0</p>
                     * @return RegisterType <p>标识查询项目下的设备注册类型，默认不包含免注册登录设备。 若存在免注册登录设备，该参数传&quot;1&quot;</p><p>枚举值：</p><ul><li>0： 项目不包含免注册登录设备</li><li>1： 项目包含免注册登录设备</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetRegisterType() const;

                    /**
                     * 设置<p>标识查询项目下的设备注册类型，默认不包含免注册登录设备。 若存在免注册登录设备，该参数传&quot;1&quot;</p><p>枚举值：</p><ul><li>0： 项目不包含免注册登录设备</li><li>1： 项目包含免注册登录设备</li></ul><p>默认值：0</p>
                     * @param _registerType <p>标识查询项目下的设备注册类型，默认不包含免注册登录设备。 若存在免注册登录设备，该参数传&quot;1&quot;</p><p>枚举值：</p><ul><li>0： 项目不包含免注册登录设备</li><li>1： 项目包含免注册登录设备</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetRegisterType(const int64_t& _registerType);

                    /**
                     * 判断参数 RegisterType 是否已赋值
                     * @return RegisterType 是否已赋值
                     * 
                     */
                    bool RegisterTypeHasBeenSet() const;

                private:

                    /**
                     * <p>设备所属项目ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>设备类型筛选，不填默认为全部设备类型</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>对设备ID或Name按关键字进行模糊匹配，不填则不进行模糊匹配</p>
                     */
                    std::string m_searchWords;
                    bool m_searchWordsHasBeenSet;

                    /**
                     * <p>每页返回的最大设备数，不填默认为10</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>当前页码，不填默认为1（首页）</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>设备状态筛选，不填默认为不过滤。取值：[&quot;ready&quot;,&quot;connected&quot;,&quot;online&quot;]，online代表ready或connected</p>
                     */
                    std::string m_deviceStatus;
                    bool m_deviceStatusHasBeenSet;

                    /**
                     * <p>标识查询项目下的设备注册类型，默认不包含免注册登录设备。 若存在免注册登录设备，该参数传&quot;1&quot;</p><p>枚举值：</p><ul><li>0： 项目不包含免注册登录设备</li><li>1： 项目包含免注册登录设备</li></ul><p>默认值：0</p>
                     */
                    int64_t m_registerType;
                    bool m_registerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEDEVICELISTREQUEST_H_
