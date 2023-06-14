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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteSecurityGroupRule请求参数结构体
                */
                class DeleteSecurityGroupRuleRequest : public AbstractModel
                {
                public:
                    DeleteSecurityGroupRuleRequest();
                    ~DeleteSecurityGroupRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所需要删除规则的ID
                     * @return Id 所需要删除规则的ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置所需要删除规则的ID
                     * @param _id 所需要删除规则的ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取腾讯云地域的英文简写
                     * @return Area 腾讯云地域的英文简写
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置腾讯云地域的英文简写
                     * @param _area 腾讯云地域的英文简写
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取方向，0：出站，1：入站
                     * @return Direction 方向，0：出站，1：入站
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站
                     * @param _direction 方向，0：出站，1：入站
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取是否删除反向规则，0：否，1：是
                     * @return IsDelReverse 是否删除反向规则，0：否，1：是
                     * 
                     */
                    uint64_t GetIsDelReverse() const;

                    /**
                     * 设置是否删除反向规则，0：否，1：是
                     * @param _isDelReverse 是否删除反向规则，0：否，1：是
                     * 
                     */
                    void SetIsDelReverse(const uint64_t& _isDelReverse);

                    /**
                     * 判断参数 IsDelReverse 是否已赋值
                     * @return IsDelReverse 是否已赋值
                     * 
                     */
                    bool IsDelReverseHasBeenSet() const;

                private:

                    /**
                     * 所需要删除规则的ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 腾讯云地域的英文简写
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 方向，0：出站，1：入站
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * 是否删除反向规则，0：否，1：是
                     */
                    uint64_t m_isDelReverse;
                    bool m_isDelReverseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETESECURITYGROUPRULEREQUEST_H_
