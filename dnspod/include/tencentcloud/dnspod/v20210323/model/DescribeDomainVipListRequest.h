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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINVIPLISTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINVIPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainVipList请求参数结构体
                */
                class DescribeDomainVipListRequest : public AbstractModel
                {
                public:
                    DescribeDomainVipListRequest();
                    ~DescribeDomainVipListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认值为0。
                     * @return Offset 偏移量，默认值为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0。
                     * @param _offset 偏移量，默认值为0。
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
                     * 获取限制数量，默认值为20。
                     * @return Limit 限制数量，默认值为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数量，默认值为20。
                     * @param _limit 限制数量，默认值为20。
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
                     * 获取通过关键字搜索域名关联的套餐，默认值为空，为空时不作为筛选条件。
                     * @return Keyword 通过关键字搜索域名关联的套餐，默认值为空，为空时不作为筛选条件。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置通过关键字搜索域名关联的套餐，默认值为空，为空时不作为筛选条件。
                     * @param _keyword 通过关键字搜索域名关联的套餐，默认值为空，为空时不作为筛选条件。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取使用资源ID列表查询
                     * @return ResourceIdList 使用资源ID列表查询
                     * 
                     */
                    std::vector<std::string> GetResourceIdList() const;

                    /**
                     * 设置使用资源ID列表查询
                     * @param _resourceIdList 使用资源ID列表查询
                     * 
                     */
                    void SetResourceIdList(const std::vector<std::string>& _resourceIdList);

                    /**
                     * 判断参数 ResourceIdList 是否已赋值
                     * @return ResourceIdList 是否已赋值
                     * 
                     */
                    bool ResourceIdListHasBeenSet() const;

                    /**
                     * 获取需要筛选的套餐版本
                     * @return GradeList 需要筛选的套餐版本
                     * 
                     */
                    std::vector<std::string> GetGradeList() const;

                    /**
                     * 设置需要筛选的套餐版本
                     * @param _gradeList 需要筛选的套餐版本
                     * 
                     */
                    void SetGradeList(const std::vector<std::string>& _gradeList);

                    /**
                     * 判断参数 GradeList 是否已赋值
                     * @return GradeList 是否已赋值
                     * 
                     */
                    bool GradeListHasBeenSet() const;

                    /**
                     * 获取是否只获取未绑定域名套餐
                     * @return GetUnbindResource 是否只获取未绑定域名套餐
                     * 
                     */
                    bool GetGetUnbindResource() const;

                    /**
                     * 设置是否只获取未绑定域名套餐
                     * @param _getUnbindResource 是否只获取未绑定域名套餐
                     * 
                     */
                    void SetGetUnbindResource(const bool& _getUnbindResource);

                    /**
                     * 判断参数 GetUnbindResource 是否已赋值
                     * @return GetUnbindResource 是否已赋值
                     * 
                     */
                    bool GetUnbindResourceHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量，默认值为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 通过关键字搜索域名关联的套餐，默认值为空，为空时不作为筛选条件。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 使用资源ID列表查询
                     */
                    std::vector<std::string> m_resourceIdList;
                    bool m_resourceIdListHasBeenSet;

                    /**
                     * 需要筛选的套餐版本
                     */
                    std::vector<std::string> m_gradeList;
                    bool m_gradeListHasBeenSet;

                    /**
                     * 是否只获取未绑定域名套餐
                     */
                    bool m_getUnbindResource;
                    bool m_getUnbindResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINVIPLISTREQUEST_H_
