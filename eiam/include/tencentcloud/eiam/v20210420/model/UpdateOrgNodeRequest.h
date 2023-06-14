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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_UPDATEORGNODEREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_UPDATEORGNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * UpdateOrgNode请求参数结构体
                */
                class UpdateOrgNodeRequest : public AbstractModel
                {
                public:
                    UpdateOrgNodeRequest();
                    ~UpdateOrgNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机构节点ID，是机构节点的全局唯一标识。
                     * @return OrgNodeId 机构节点ID，是机构节点的全局唯一标识。
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置机构节点ID，是机构节点的全局唯一标识。
                     * @param _orgNodeId 机构节点ID，是机构节点的全局唯一标识。
                     * 
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

                    /**
                     * 获取机构节点名称，长度限制：64个字符。
                     * @return DisplayName 机构节点名称，长度限制：64个字符。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置机构节点名称，长度限制：64个字符。
                     * @param _displayName 机构节点名称，长度限制：64个字符。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取机构节点描述。
                     * @return Description 机构节点描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置机构节点描述。
                     * @param _description 机构节点描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取机构代码。如果非空则校验此ID的唯一性。
                     * @return CustomizedOrgNodeId 机构代码。如果非空则校验此ID的唯一性。
                     * 
                     */
                    std::string GetCustomizedOrgNodeId() const;

                    /**
                     * 设置机构代码。如果非空则校验此ID的唯一性。
                     * @param _customizedOrgNodeId 机构代码。如果非空则校验此ID的唯一性。
                     * 
                     */
                    void SetCustomizedOrgNodeId(const std::string& _customizedOrgNodeId);

                    /**
                     * 判断参数 CustomizedOrgNodeId 是否已赋值
                     * @return CustomizedOrgNodeId 是否已赋值
                     * 
                     */
                    bool CustomizedOrgNodeIdHasBeenSet() const;

                private:

                    /**
                     * 机构节点ID，是机构节点的全局唯一标识。
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * 机构节点名称，长度限制：64个字符。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 机构节点描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 机构代码。如果非空则校验此ID的唯一性。
                     */
                    std::string m_customizedOrgNodeId;
                    bool m_customizedOrgNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_UPDATEORGNODEREQUEST_H_
