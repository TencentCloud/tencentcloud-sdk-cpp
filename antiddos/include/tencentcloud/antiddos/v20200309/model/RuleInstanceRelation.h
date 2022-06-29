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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_RULEINSTANCERELATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_RULEINSTANCERELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 四七层规则的
                */
                class RuleInstanceRelation : public AbstractModel
                {
                public:
                    RuleInstanceRelation();
                    ~RuleInstanceRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源实例的IP
                     * @return EipList 资源实例的IP
                     */
                    std::vector<std::string> GetEipList() const;

                    /**
                     * 设置资源实例的IP
                     * @param EipList 资源实例的IP
                     */
                    void SetEipList(const std::vector<std::string>& _eipList);

                    /**
                     * 判断参数 EipList 是否已赋值
                     * @return EipList 是否已赋值
                     */
                    bool EipListHasBeenSet() const;

                    /**
                     * 获取资源实例的ID
                     * @return InstanceId 资源实例的ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源实例的ID
                     * @param InstanceId 资源实例的ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取资源实例的Cname
                     * @return Cname 资源实例的Cname
                     */
                    std::string GetCname() const;

                    /**
                     * 设置资源实例的Cname
                     * @param Cname 资源实例的Cname
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     */
                    bool CnameHasBeenSet() const;

                private:

                    /**
                     * 资源实例的IP
                     */
                    std::vector<std::string> m_eipList;
                    bool m_eipListHasBeenSet;

                    /**
                     * 资源实例的ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 资源实例的Cname
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_RULEINSTANCERELATION_H_
