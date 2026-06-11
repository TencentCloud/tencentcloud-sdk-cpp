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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMSREQUEST_H_

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
                * DescribeOnCallForms请求参数结构体
                */
                class DescribeOnCallFormsRequest : public AbstractModel
                {
                public:
                    DescribeOnCallFormsRequest();
                    ~DescribeOnCallFormsRequest() = default;
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
                     * 获取分页查询起始位
                     * @return Offset 分页查询起始位
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询起始位
                     * @param _offset 分页查询起始位
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
                     * 获取分页查询页数
                     * @return Limit 分页查询页数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询页数
                     * @param _limit 分页查询页数
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
                     * 获取支持userId进行检索
                     * @return OnCallFormStaffIDs 支持userId进行检索
                     * 
                     */
                    std::vector<std::string> GetOnCallFormStaffIDs() const;

                    /**
                     * 设置支持userId进行检索
                     * @param _onCallFormStaffIDs 支持userId进行检索
                     * 
                     */
                    void SetOnCallFormStaffIDs(const std::vector<std::string>& _onCallFormStaffIDs);

                    /**
                     * 判断参数 OnCallFormStaffIDs 是否已赋值
                     * @return OnCallFormStaffIDs 是否已赋值
                     * 
                     */
                    bool OnCallFormStaffIDsHasBeenSet() const;

                    /**
                     * 获取值班类型
                     * @return RotationType 值班类型
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置值班类型
                     * @param _rotationType 值班类型
                     * 
                     */
                    void SetRotationType(const std::string& _rotationType);

                    /**
                     * 判断参数 RotationType 是否已赋值
                     * @return RotationType 是否已赋值
                     * 
                     */
                    bool RotationTypeHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Order 排序方式
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
                     * @param _order 排序方式
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取支持id、name进行检索
                     * @return OnCallFormName 支持id、name进行检索
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置支持id、name进行检索
                     * @param _onCallFormName 支持id、name进行检索
                     * 
                     */
                    void SetOnCallFormName(const std::string& _onCallFormName);

                    /**
                     * 判断参数 OnCallFormName 是否已赋值
                     * @return OnCallFormName 是否已赋值
                     * 
                     */
                    bool OnCallFormNameHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 分页查询起始位
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询页数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 支持userId进行检索
                     */
                    std::vector<std::string> m_onCallFormStaffIDs;
                    bool m_onCallFormStaffIDsHasBeenSet;

                    /**
                     * 值班类型
                     */
                    std::string m_rotationType;
                    bool m_rotationTypeHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 支持id、name进行检索
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMSREQUEST_H_
