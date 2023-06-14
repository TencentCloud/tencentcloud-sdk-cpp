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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeConditionsTemplateList请求参数结构体
                */
                class DescribeConditionsTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeConditionsTemplateListRequest();
                    ~DescribeConditionsTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取视图名，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     * @return ViewName 视图名，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置视图名，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     * @param _viewName 视图名，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取根据触发条件模板名称过滤查询
                     * @return GroupName 根据触发条件模板名称过滤查询
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置根据触发条件模板名称过滤查询
                     * @param _groupName 根据触发条件模板名称过滤查询
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取根据触发条件模板ID过滤查询
                     * @return GroupID 根据触发条件模板ID过滤查询
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置根据触发条件模板ID过滤查询
                     * @param _groupID 根据触发条件模板ID过滤查询
                     * 
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取分页参数，每页返回的数量，取值1~100，默认20
                     * @return Limit 分页参数，每页返回的数量，取值1~100，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，每页返回的数量，取值1~100，默认20
                     * @param _limit 分页参数，每页返回的数量，取值1~100，默认20
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
                     * 获取分页参数，页偏移量，从0开始计数，默认0
                     * @return Offset 分页参数，页偏移量，从0开始计数，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，页偏移量，从0开始计数，默认0
                     * @param _offset 分页参数，页偏移量，从0开始计数，默认0
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
                     * 获取指定按更新时间的排序方式，asc=升序, desc=降序
                     * @return UpdateTimeOrder 指定按更新时间的排序方式，asc=升序, desc=降序
                     * 
                     */
                    std::string GetUpdateTimeOrder() const;

                    /**
                     * 设置指定按更新时间的排序方式，asc=升序, desc=降序
                     * @param _updateTimeOrder 指定按更新时间的排序方式，asc=升序, desc=降序
                     * 
                     */
                    void SetUpdateTimeOrder(const std::string& _updateTimeOrder);

                    /**
                     * 判断参数 UpdateTimeOrder 是否已赋值
                     * @return UpdateTimeOrder 是否已赋值
                     * 
                     */
                    bool UpdateTimeOrderHasBeenSet() const;

                    /**
                     * 获取指定按绑定策略数目的排序方式，asc=升序, desc=降序
                     * @return PolicyCountOrder 指定按绑定策略数目的排序方式，asc=升序, desc=降序
                     * 
                     */
                    std::string GetPolicyCountOrder() const;

                    /**
                     * 设置指定按绑定策略数目的排序方式，asc=升序, desc=降序
                     * @param _policyCountOrder 指定按绑定策略数目的排序方式，asc=升序, desc=降序
                     * 
                     */
                    void SetPolicyCountOrder(const std::string& _policyCountOrder);

                    /**
                     * 判断参数 PolicyCountOrder 是否已赋值
                     * @return PolicyCountOrder 是否已赋值
                     * 
                     */
                    bool PolicyCountOrderHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 视图名，由 [DescribeAllNamespaces](https://cloud.tencent.com/document/product/248/48683) 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 根据触发条件模板名称过滤查询
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 根据触发条件模板ID过滤查询
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * 分页参数，每页返回的数量，取值1~100，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，页偏移量，从0开始计数，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定按更新时间的排序方式，asc=升序, desc=降序
                     */
                    std::string m_updateTimeOrder;
                    bool m_updateTimeOrderHasBeenSet;

                    /**
                     * 指定按绑定策略数目的排序方式，asc=升序, desc=降序
                     */
                    std::string m_policyCountOrder;
                    bool m_policyCountOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTREQUEST_H_
