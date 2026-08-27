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
                     * 获取<p>分页查询起始位</p>
                     * @return Offset <p>分页查询起始位</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询起始位</p>
                     * @param _offset <p>分页查询起始位</p>
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
                     * 获取<p>分页查询页数</p>
                     * @return Limit <p>分页查询页数</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询页数</p>
                     * @param _limit <p>分页查询页数</p>
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
                     * 获取<p>支持userId进行检索</p>
                     * @return OnCallFormStaffIDs <p>支持userId进行检索</p>
                     * 
                     */
                    std::vector<std::string> GetOnCallFormStaffIDs() const;

                    /**
                     * 设置<p>支持userId进行检索</p>
                     * @param _onCallFormStaffIDs <p>支持userId进行检索</p>
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
                     * 获取<p>值班类型</p>
                     * @return RotationType <p>值班类型</p>
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置<p>值班类型</p>
                     * @param _rotationType <p>值班类型</p>
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
                     * 获取<p>排序方式</p>
                     * @return Order <p>排序方式</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方式</p>
                     * @param _order <p>排序方式</p>
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
                     * 获取<p>支持id、name进行检索</p>
                     * @return OnCallFormName <p>支持id、name进行检索</p>
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置<p>支持id、name进行检索</p>
                     * @param _onCallFormName <p>支持id、name进行检索</p>
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
                     * <p>固定值，为&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>分页查询起始位</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页查询页数</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>支持userId进行检索</p>
                     */
                    std::vector<std::string> m_onCallFormStaffIDs;
                    bool m_onCallFormStaffIDsHasBeenSet;

                    /**
                     * <p>值班类型</p>
                     */
                    std::string m_rotationType;
                    bool m_rotationTypeHasBeenSet;

                    /**
                     * <p>排序方式</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>支持id、name进行检索</p>
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEONCALLFORMSREQUEST_H_
