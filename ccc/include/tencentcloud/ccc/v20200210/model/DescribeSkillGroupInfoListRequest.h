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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTREQUEST_H_

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
                * DescribeSkillGroupInfoList请求参数结构体
                */
                class DescribeSkillGroupInfoListRequest : public AbstractModel
                {
                public:
                    DescribeSkillGroupInfoListRequest();
                    ~DescribeSkillGroupInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分页尺寸，上限 100
                     * @return PageSize 分页尺寸，上限 100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页尺寸，上限 100
                     * @param _pageSize 分页尺寸，上限 100
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
                     * 获取分页页码，从 0 开始
                     * @return PageNumber 分页页码，从 0 开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码，从 0 开始
                     * @param _pageNumber 分页页码，从 0 开始
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
                     * 获取技能组ID，查询单个技能组时使用
                     * @return SkillGroupId 技能组ID，查询单个技能组时使用
                     * 
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置技能组ID，查询单个技能组时使用
                     * @param _skillGroupId 技能组ID，查询单个技能组时使用
                     * 
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     * 
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取查询修改时间大于等于ModifiedTime的技能组时使用
                     * @return ModifiedTime 查询修改时间大于等于ModifiedTime的技能组时使用
                     * 
                     */
                    int64_t GetModifiedTime() const;

                    /**
                     * 设置查询修改时间大于等于ModifiedTime的技能组时使用
                     * @param _modifiedTime 查询修改时间大于等于ModifiedTime的技能组时使用
                     * 
                     */
                    void SetModifiedTime(const int64_t& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取技能组名称
                     * @return SkillGroupName 技能组名称
                     * 
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置技能组名称
                     * @param _skillGroupName 技能组名称
                     * 
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     * 
                     */
                    bool SkillGroupNameHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分页尺寸，上限 100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码，从 0 开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 技能组ID，查询单个技能组时使用
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * 查询修改时间大于等于ModifiedTime的技能组时使用
                     */
                    int64_t m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * 技能组名称
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTREQUEST_H_
