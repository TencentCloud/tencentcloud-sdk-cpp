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
                     * 获取<p>固定值，为&quot;monitor&quot;</p>
                     * @return Module <p>固定值，为&quot;monitor&quot;</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>固定值，为&quot;monitor&quot;</p>
                     * @param _module <p>固定值，为&quot;monitor&quot;</p>
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
                     * 获取<p>视图名，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
                     * @return ViewName <p>视图名，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>视图名，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
                     * @param _viewName <p>视图名，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
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
                     * 获取<p>根据触发条件模板名称过滤查询</p>
                     * @return GroupName <p>根据触发条件模板名称过滤查询</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>根据触发条件模板名称过滤查询</p>
                     * @param _groupName <p>根据触发条件模板名称过滤查询</p>
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
                     * 获取<p>根据触发条件模板ID过滤查询</p>
                     * @return GroupID <p>根据触发条件模板ID过滤查询</p>
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置<p>根据触发条件模板ID过滤查询</p>
                     * @param _groupID <p>根据触发条件模板ID过滤查询</p>
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
                     * 获取<p>分页参数，每页返回的数量，取值1~100，默认20</p>
                     * @return Limit <p>分页参数，每页返回的数量，取值1~100，默认20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页参数，每页返回的数量，取值1~100，默认20</p>
                     * @param _limit <p>分页参数，每页返回的数量，取值1~100，默认20</p>
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
                     * 获取<p>分页参数，页偏移量，从0开始计数，默认0</p>
                     * @return Offset <p>分页参数，页偏移量，从0开始计数，默认0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页参数，页偏移量，从0开始计数，默认0</p>
                     * @param _offset <p>分页参数，页偏移量，从0开始计数，默认0</p>
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
                     * 获取<p>指定按更新时间的排序方式，asc=升序, desc=降序</p>
                     * @return UpdateTimeOrder <p>指定按更新时间的排序方式，asc=升序, desc=降序</p>
                     * 
                     */
                    std::string GetUpdateTimeOrder() const;

                    /**
                     * 设置<p>指定按更新时间的排序方式，asc=升序, desc=降序</p>
                     * @param _updateTimeOrder <p>指定按更新时间的排序方式，asc=升序, desc=降序</p>
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
                     * 获取<p>指定按绑定策略数目的排序方式，asc=升序, desc=降序</p>
                     * @return PolicyCountOrder <p>指定按绑定策略数目的排序方式，asc=升序, desc=降序</p>
                     * 
                     */
                    std::string GetPolicyCountOrder() const;

                    /**
                     * 设置<p>指定按绑定策略数目的排序方式，asc=升序, desc=降序</p>
                     * @param _policyCountOrder <p>指定按绑定策略数目的排序方式，asc=升序, desc=降序</p>
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
                     * <p>固定值，为&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>视图名，由 <a href="https://cloud.tencent.com/document/product/248/48683">DescribeAllNamespaces</a> 获得。对于云产品监控，取接口出参的 QceNamespacesNew.N.Id，例如 cvm_device</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>根据触发条件模板名称过滤查询</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>根据触发条件模板ID过滤查询</p>
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * <p>分页参数，每页返回的数量，取值1~100，默认20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页参数，页偏移量，从0开始计数，默认0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>指定按更新时间的排序方式，asc=升序, desc=降序</p>
                     */
                    std::string m_updateTimeOrder;
                    bool m_updateTimeOrderHasBeenSet;

                    /**
                     * <p>指定按绑定策略数目的排序方式，asc=升序, desc=降序</p>
                     */
                    std::string m_policyCountOrder;
                    bool m_policyCountOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBECONDITIONSTEMPLATELISTREQUEST_H_
