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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeExtensions请求参数结构体
                */
                class DescribeExtensionsRequest : public AbstractModel
                {
                public:
                    DescribeExtensionsRequest();
                    ~DescribeExtensionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分页页号（从0开始）
                     * @return PageNumber 分页页号（从0开始）
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页号（从0开始）
                     * @param _pageNumber 分页页号（从0开始）
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
                     * 获取筛选分机号列表
                     * @return ExtensionIds 筛选分机号列表
                     * 
                     */
                    std::vector<std::string> GetExtensionIds() const;

                    /**
                     * 设置筛选分机号列表
                     * @param _extensionIds 筛选分机号列表
                     * 
                     */
                    void SetExtensionIds(const std::vector<std::string>& _extensionIds);

                    /**
                     * 判断参数 ExtensionIds 是否已赋值
                     * @return ExtensionIds 是否已赋值
                     * 
                     */
                    bool ExtensionIdsHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 获取模糊查询字段（模糊查询分机号、分机名称、坐席邮箱、坐席名称）
                     * @return FuzzingKeyWord 模糊查询字段（模糊查询分机号、分机名称、坐席邮箱、坐席名称）
                     * 
                     */
                    std::string GetFuzzingKeyWord() const;

                    /**
                     * 设置模糊查询字段（模糊查询分机号、分机名称、坐席邮箱、坐席名称）
                     * @param _fuzzingKeyWord 模糊查询字段（模糊查询分机号、分机名称、坐席邮箱、坐席名称）
                     * 
                     */
                    void SetFuzzingKeyWord(const std::string& _fuzzingKeyWord);

                    /**
                     * 判断参数 FuzzingKeyWord 是否已赋值
                     * @return FuzzingKeyWord 是否已赋值
                     * 
                     */
                    bool FuzzingKeyWordHasBeenSet() const;

                    /**
                     * 获取是否需要返回话机当前状态
                     * @return IsNeedStatus 是否需要返回话机当前状态
                     * 
                     */
                    bool GetIsNeedStatus() const;

                    /**
                     * 设置是否需要返回话机当前状态
                     * @param _isNeedStatus 是否需要返回话机当前状态
                     * 
                     */
                    void SetIsNeedStatus(const bool& _isNeedStatus);

                    /**
                     * 判断参数 IsNeedStatus 是否已赋值
                     * @return IsNeedStatus 是否已赋值
                     * 
                     */
                    bool IsNeedStatusHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分页页号（从0开始）
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 筛选分机号列表
                     */
                    std::vector<std::string> m_extensionIds;
                    bool m_extensionIdsHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 模糊查询字段（模糊查询分机号、分机名称、坐席邮箱、坐席名称）
                     */
                    std::string m_fuzzingKeyWord;
                    bool m_fuzzingKeyWordHasBeenSet;

                    /**
                     * 是否需要返回话机当前状态
                     */
                    bool m_isNeedStatus;
                    bool m_isNeedStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEEXTENSIONSREQUEST_H_
