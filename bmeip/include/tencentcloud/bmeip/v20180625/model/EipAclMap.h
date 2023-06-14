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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACLMAP_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACLMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * eipid与aclid关联关系
                */
                class EipAclMap : public AbstractModel
                {
                public:
                    EipAclMap();
                    ~EipAclMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EIP 实例 ID
                     * @return EipId EIP 实例 ID
                     * 
                     */
                    std::string GetEipId() const;

                    /**
                     * 设置EIP 实例 ID
                     * @param _eipId EIP 实例 ID
                     * 
                     */
                    void SetEipId(const std::string& _eipId);

                    /**
                     * 判断参数 EipId 是否已赋值
                     * @return EipId 是否已赋值
                     * 
                     */
                    bool EipIdHasBeenSet() const;

                    /**
                     * 获取ACL 实例 ID
                     * @return AclId ACL 实例 ID
                     * 
                     */
                    std::string GetAclId() const;

                    /**
                     * 设置ACL 实例 ID
                     * @param _aclId ACL 实例 ID
                     * 
                     */
                    void SetAclId(const std::string& _aclId);

                    /**
                     * 判断参数 AclId 是否已赋值
                     * @return AclId 是否已赋值
                     * 
                     */
                    bool AclIdHasBeenSet() const;

                private:

                    /**
                     * EIP 实例 ID
                     */
                    std::string m_eipId;
                    bool m_eipIdHasBeenSet;

                    /**
                     * ACL 实例 ID
                     */
                    std::string m_aclId;
                    bool m_aclIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_EIPACLMAP_H_
