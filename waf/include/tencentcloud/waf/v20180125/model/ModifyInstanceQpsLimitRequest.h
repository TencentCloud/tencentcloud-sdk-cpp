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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYINSTANCEQPSLIMITREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYINSTANCEQPSLIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyInstanceQpsLimit请求参数结构体
                */
                class ModifyInstanceQpsLimitRequest : public AbstractModel
                {
                public:
                    ModifyInstanceQpsLimitRequest();
                    ~ModifyInstanceQpsLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐实例id
                     * @return InstanceId 套餐实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置套餐实例id
                     * @param _instanceId 套餐实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取qps上限
                     * @return QpsLimit qps上限
                     * 
                     */
                    int64_t GetQpsLimit() const;

                    /**
                     * 设置qps上限
                     * @param _qpsLimit qps上限
                     * 
                     */
                    void SetQpsLimit(const int64_t& _qpsLimit);

                    /**
                     * 判断参数 QpsLimit 是否已赋值
                     * @return QpsLimit 是否已赋值
                     * 
                     */
                    bool QpsLimitHasBeenSet() const;

                private:

                    /**
                     * 套餐实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * qps上限
                     */
                    int64_t m_qpsLimit;
                    bool m_qpsLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYINSTANCEQPSLIMITREQUEST_H_
