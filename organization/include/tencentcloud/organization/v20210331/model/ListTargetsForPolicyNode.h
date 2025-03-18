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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 查询某个指定SCP策略关联的目标列表
                */
                class ListTargetsForPolicyNode : public AbstractModel
                {
                public:
                    ListTargetsForPolicyNode();
                    ~ListTargetsForPolicyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取scp账号uin或节点Id
                     * @return Uin scp账号uin或节点Id
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置scp账号uin或节点Id
                     * @param _uin scp账号uin或节点Id
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取关联类型 1-节点关联 2-用户关联
                     * @return RelatedType 关联类型 1-节点关联 2-用户关联
                     * 
                     */
                    uint64_t GetRelatedType() const;

                    /**
                     * 设置关联类型 1-节点关联 2-用户关联
                     * @param _relatedType 关联类型 1-节点关联 2-用户关联
                     * 
                     */
                    void SetRelatedType(const uint64_t& _relatedType);

                    /**
                     * 判断参数 RelatedType 是否已赋值
                     * @return RelatedType 是否已赋值
                     * 
                     */
                    bool RelatedTypeHasBeenSet() const;

                    /**
                     * 获取账号或者节点名称
                     * @return Name 账号或者节点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账号或者节点名称
                     * @param _name 账号或者节点名称
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
                     * 获取绑定时间
                     * @return AddTime 绑定时间
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置绑定时间
                     * @param _addTime 绑定时间
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                private:

                    /**
                     * scp账号uin或节点Id
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 关联类型 1-节点关联 2-用户关联
                     */
                    uint64_t m_relatedType;
                    bool m_relatedTypeHasBeenSet;

                    /**
                     * 账号或者节点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 绑定时间
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_
