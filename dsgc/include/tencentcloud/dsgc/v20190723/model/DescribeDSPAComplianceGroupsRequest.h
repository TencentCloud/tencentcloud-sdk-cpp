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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOMPLIANCEGROUPSREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOMPLIANCEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAComplianceGroups请求参数结构体
                */
                class DescribeDSPAComplianceGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDSPAComplianceGroupsRequest();
                    ~DescribeDSPAComplianceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取合规组ID
                     * @return ComplianceGroupId 合规组ID
                     * 
                     */
                    int64_t GetComplianceGroupId() const;

                    /**
                     * 设置合规组ID
                     * @param _complianceGroupId 合规组ID
                     * 
                     */
                    void SetComplianceGroupId(const int64_t& _complianceGroupId);

                    /**
                     * 判断参数 ComplianceGroupId 是否已赋值
                     * @return ComplianceGroupId 是否已赋值
                     * 
                     */
                    bool ComplianceGroupIdHasBeenSet() const;

                    /**
                     * 获取合规组名称
                     * @return Name 合规组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置合规组名称
                     * @param _name 合规组名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取偏移量，默认值为0
                     * @return Offset 偏移量，默认值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0
                     * @param _offset 偏移量，默认值为0
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
                     * 获取返回结果集数量，默认值是10000，最大值为10000，根据该资源的个数限制条件，该资源的个数不会超过10000，所以如果不输入该字段，默认获取全量数据
                     * @return Limit 返回结果集数量，默认值是10000，最大值为10000，根据该资源的个数限制条件，该资源的个数不会超过10000，所以如果不输入该字段，默认获取全量数据
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回结果集数量，默认值是10000，最大值为10000，根据该资源的个数限制条件，该资源的个数不会超过10000，所以如果不输入该字段，默认获取全量数据
                     * @param _limit 返回结果集数量，默认值是10000，最大值为10000，根据该资源的个数限制条件，该资源的个数不会超过10000，所以如果不输入该字段，默认获取全量数据
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
                     * 获取合规组类型可选值：0 默认合规组, 1 系统合规组, 2 自定义合规组
                     * @return ComplianceGroupTypeList 合规组类型可选值：0 默认合规组, 1 系统合规组, 2 自定义合规组
                     * 
                     */
                    std::vector<int64_t> GetComplianceGroupTypeList() const;

                    /**
                     * 设置合规组类型可选值：0 默认合规组, 1 系统合规组, 2 自定义合规组
                     * @param _complianceGroupTypeList 合规组类型可选值：0 默认合规组, 1 系统合规组, 2 自定义合规组
                     * 
                     */
                    void SetComplianceGroupTypeList(const std::vector<int64_t>& _complianceGroupTypeList);

                    /**
                     * 判断参数 ComplianceGroupTypeList 是否已赋值
                     * @return ComplianceGroupTypeList 是否已赋值
                     * 
                     */
                    bool ComplianceGroupTypeListHasBeenSet() const;

                    /**
                     * 获取是否仅显示已开启模版
                     * @return IsFilterCloseComplianceGroup 是否仅显示已开启模版
                     * 
                     */
                    bool GetIsFilterCloseComplianceGroup() const;

                    /**
                     * 设置是否仅显示已开启模版
                     * @param _isFilterCloseComplianceGroup 是否仅显示已开启模版
                     * 
                     */
                    void SetIsFilterCloseComplianceGroup(const bool& _isFilterCloseComplianceGroup);

                    /**
                     * 判断参数 IsFilterCloseComplianceGroup 是否已赋值
                     * @return IsFilterCloseComplianceGroup 是否已赋值
                     * 
                     */
                    bool IsFilterCloseComplianceGroupHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceGroupId;
                    bool m_complianceGroupIdHasBeenSet;

                    /**
                     * 合规组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 偏移量，默认值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回结果集数量，默认值是10000，最大值为10000，根据该资源的个数限制条件，该资源的个数不会超过10000，所以如果不输入该字段，默认获取全量数据
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 合规组类型可选值：0 默认合规组, 1 系统合规组, 2 自定义合规组
                     */
                    std::vector<int64_t> m_complianceGroupTypeList;
                    bool m_complianceGroupTypeListHasBeenSet;

                    /**
                     * 是否仅显示已开启模版
                     */
                    bool m_isFilterCloseComplianceGroup;
                    bool m_isFilterCloseComplianceGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOMPLIANCEGROUPSREQUEST_H_
