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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * ModifyDBCustomDisasterRecoverGroupAttribute请求参数结构体
                */
                class ModifyDBCustomDisasterRecoverGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDBCustomDisasterRecoverGroupAttributeRequest();
                    ~ModifyDBCustomDisasterRecoverGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>置放群组ID</p>
                     * @return DisasterRecoverGroupId <p>置放群组ID</p>
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置<p>置放群组ID</p>
                     * @param _disasterRecoverGroupId <p>置放群组ID</p>
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
                     * 获取<p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
                     * @return Name <p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
                     * @param _name <p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
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
                     * 获取<p>置放群组的亲和度，在置放群组的节点会按该亲和度分布</p><p>取值范围：[1, 10]</p>
                     * @return Affinity <p>置放群组的亲和度，在置放群组的节点会按该亲和度分布</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    int64_t GetAffinity() const;

                    /**
                     * 设置<p>置放群组的亲和度，在置放群组的节点会按该亲和度分布</p><p>取值范围：[1, 10]</p>
                     * @param _affinity <p>置放群组的亲和度，在置放群组的节点会按该亲和度分布</p><p>取值范围：[1, 10]</p>
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
                     * <p>置放群组ID</p>
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * <p>置放群组名称</p><p>入参限制：长度1-60个字符，支持中、英文</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>置放群组的亲和度，在置放群组的节点会按该亲和度分布</p><p>取值范围：[1, 10]</p>
                     */
                    int64_t m_affinity;
                    bool m_affinityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_
