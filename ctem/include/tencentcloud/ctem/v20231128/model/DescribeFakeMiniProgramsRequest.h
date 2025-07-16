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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEFAKEMINIPROGRAMSREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEFAKEMINIPROGRAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/Filter.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * DescribeFakeMiniPrograms请求参数结构体
                */
                class DescribeFakeMiniProgramsRequest : public AbstractModel
                {
                public:
                    DescribeFakeMiniProgramsRequest();
                    ~DescribeFakeMiniProgramsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否新增数据
                     * @return IsNew 是否新增数据
                     * 
                     */
                    bool GetIsNew() const;

                    /**
                     * 设置是否新增数据
                     * @param _isNew 是否新增数据
                     * 
                     */
                    void SetIsNew(const bool& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CustomerId 企业ID
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业ID
                     * @param _customerId 企业ID
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
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
                     * 获取分页偏移
                     * @return Offset 分页偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移
                     * @param _offset 分页偏移
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
                     * 获取子公司ID列表
                     * @return EnterpriseUidList 子公司ID列表
                     * 
                     */
                    std::vector<std::string> GetEnterpriseUidList() const;

                    /**
                     * 设置子公司ID列表
                     * @param _enterpriseUidList 子公司ID列表
                     * 
                     */
                    void SetEnterpriseUidList(const std::vector<std::string>& _enterpriseUidList);

                    /**
                     * 判断参数 EnterpriseUidList 是否已赋值
                     * @return EnterpriseUidList 是否已赋值
                     * 
                     */
                    bool EnterpriseUidListHasBeenSet() const;

                    /**
                     * 获取数据输出格式：json、file，默认不填为json
                     * @return Format 数据输出格式：json、file，默认不填为json
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置数据输出格式：json、file，默认不填为json
                     * @param _format 数据输出格式：json、file，默认不填为json
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取创建时间-开始
                     * @return CreateAtStart 创建时间-开始
                     * 
                     */
                    std::string GetCreateAtStart() const;

                    /**
                     * 设置创建时间-开始
                     * @param _createAtStart 创建时间-开始
                     * 
                     */
                    void SetCreateAtStart(const std::string& _createAtStart);

                    /**
                     * 判断参数 CreateAtStart 是否已赋值
                     * @return CreateAtStart 是否已赋值
                     * 
                     */
                    bool CreateAtStartHasBeenSet() const;

                    /**
                     * 获取创建时间-结束
                     * @return CreateAtEnd 创建时间-结束
                     * 
                     */
                    std::string GetCreateAtEnd() const;

                    /**
                     * 设置创建时间-结束
                     * @param _createAtEnd 创建时间-结束
                     * 
                     */
                    void SetCreateAtEnd(const std::string& _createAtEnd);

                    /**
                     * 判断参数 CreateAtEnd 是否已赋值
                     * @return CreateAtEnd 是否已赋值
                     * 
                     */
                    bool CreateAtEndHasBeenSet() const;

                    /**
                     * 获取更新时间-开始
                     * @return UpdateAtStart 更新时间-开始
                     * 
                     */
                    std::string GetUpdateAtStart() const;

                    /**
                     * 设置更新时间-开始
                     * @param _updateAtStart 更新时间-开始
                     * 
                     */
                    void SetUpdateAtStart(const std::string& _updateAtStart);

                    /**
                     * 判断参数 UpdateAtStart 是否已赋值
                     * @return UpdateAtStart 是否已赋值
                     * 
                     */
                    bool UpdateAtStartHasBeenSet() const;

                    /**
                     * 获取更新时间-结束
                     * @return UpdateAtEnd 更新时间-结束
                     * 
                     */
                    std::string GetUpdateAtEnd() const;

                    /**
                     * 设置更新时间-结束
                     * @param _updateAtEnd 更新时间-结束
                     * 
                     */
                    void SetUpdateAtEnd(const std::string& _updateAtEnd);

                    /**
                     * 判断参数 UpdateAtEnd 是否已赋值
                     * @return UpdateAtEnd 是否已赋值
                     * 
                     */
                    bool UpdateAtEndHasBeenSet() const;

                    /**
                     * 获取查询数组
                     * @return Filters 查询数组
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询数组
                     * @param _filters 查询数组
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取是否显示被忽略的数据
                     * @return Ignored 是否显示被忽略的数据
                     * 
                     */
                    bool GetIgnored() const;

                    /**
                     * 设置是否显示被忽略的数据
                     * @param _ignored 是否显示被忽略的数据
                     * 
                     */
                    void SetIgnored(const bool& _ignored);

                    /**
                     * 判断参数 Ignored 是否已赋值
                     * @return Ignored 是否已赋值
                     * 
                     */
                    bool IgnoredHasBeenSet() const;

                private:

                    /**
                     * 是否新增数据
                     */
                    bool m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 企业ID
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 子公司ID列表
                     */
                    std::vector<std::string> m_enterpriseUidList;
                    bool m_enterpriseUidListHasBeenSet;

                    /**
                     * 数据输出格式：json、file，默认不填为json
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 创建时间-开始
                     */
                    std::string m_createAtStart;
                    bool m_createAtStartHasBeenSet;

                    /**
                     * 创建时间-结束
                     */
                    std::string m_createAtEnd;
                    bool m_createAtEndHasBeenSet;

                    /**
                     * 更新时间-开始
                     */
                    std::string m_updateAtStart;
                    bool m_updateAtStartHasBeenSet;

                    /**
                     * 更新时间-结束
                     */
                    std::string m_updateAtEnd;
                    bool m_updateAtEndHasBeenSet;

                    /**
                     * 查询数组
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 是否显示被忽略的数据
                     */
                    bool m_ignored;
                    bool m_ignoredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEFAKEMINIPROGRAMSREQUEST_H_
