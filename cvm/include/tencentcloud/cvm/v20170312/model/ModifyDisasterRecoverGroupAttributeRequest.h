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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDisasterRecoverGroupAttribute请求参数结构体
                */
                class ModifyDisasterRecoverGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDisasterRecoverGroupAttributeRequest();
                    ~ModifyDisasterRecoverGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取。</p>
                     * @return DisasterRecoverGroupId <p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取。</p>
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置<p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取。</p>
                     * @param _disasterRecoverGroupId <p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取。</p>
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     * @return Name <p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     * @param _name <p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
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
                     * 获取<p>分散置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10。</p><p>取值范围：[1, 10]</p><p>调整只能从小调到大，不能从大调到小</p>
                     * @return Affinity <p>分散置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10。</p><p>取值范围：[1, 10]</p><p>调整只能从小调到大，不能从大调到小</p>
                     * 
                     */
                    int64_t GetAffinity() const;

                    /**
                     * 设置<p>分散置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10。</p><p>取值范围：[1, 10]</p><p>调整只能从小调到大，不能从大调到小</p>
                     * @param _affinity <p>分散置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10。</p><p>取值范围：[1, 10]</p><p>调整只能从小调到大，不能从大调到小</p>
                     * 
                     */
                    void SetAffinity(const int64_t& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                private:

                    /**
                     * <p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取。</p>
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * <p>分散置放群组名称，长度1-60个字符，支持中、英文。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>分散置放群组的亲和度，在置放群组的实例会按该亲和度分布，亲和度的取值范围是：1-10。</p><p>取值范围：[1, 10]</p><p>调整只能从小调到大，不能从大调到小</p>
                     */
                    int64_t m_affinity;
                    bool m_affinityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_
