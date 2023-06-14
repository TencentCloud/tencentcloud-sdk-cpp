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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CCNATTACHEDINSTANCE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CCNATTACHEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 云联网关联的实例列表。
                */
                class CcnAttachedInstance : public AbstractModel
                {
                public:
                    CcnAttachedInstance();
                    ~CcnAttachedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云联网ID。
                     * @return CcnId 云联网ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网ID。
                     * @param _ccnId 云联网ID。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取关联实例CIDR。
                     * @return CidrBlock 关联实例CIDR。
                     * 
                     */
                    std::vector<std::string> GetCidrBlock() const;

                    /**
                     * 设置关联实例CIDR。
                     * @param _cidrBlock 关联实例CIDR。
                     * 
                     */
                    void SetCidrBlock(const std::vector<std::string>& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取关联实例状态：

•  PENDING：申请中
•  ACTIVE：已连接
•  EXPIRED：已过期
•  REJECTED：已拒绝
•  DELETED：已删除
•  FAILED：失败的（2小时后将异步强制解关联）
•  ATTACHING：关联中
•  DETACHING：解关联中
•  DETACHFAILED：解关联失败（2小时后将异步强制解关联）
                     * @return State 关联实例状态：

•  PENDING：申请中
•  ACTIVE：已连接
•  EXPIRED：已过期
•  REJECTED：已拒绝
•  DELETED：已删除
•  FAILED：失败的（2小时后将异步强制解关联）
•  ATTACHING：关联中
•  DETACHING：解关联中
•  DETACHFAILED：解关联失败（2小时后将异步强制解关联）
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置关联实例状态：

•  PENDING：申请中
•  ACTIVE：已连接
•  EXPIRED：已过期
•  REJECTED：已拒绝
•  DELETED：已删除
•  FAILED：失败的（2小时后将异步强制解关联）
•  ATTACHING：关联中
•  DETACHING：解关联中
•  DETACHFAILED：解关联失败（2小时后将异步强制解关联）
                     * @param _state 关联实例状态：

•  PENDING：申请中
•  ACTIVE：已连接
•  EXPIRED：已过期
•  REJECTED：已拒绝
•  DELETED：已删除
•  FAILED：失败的（2小时后将异步强制解关联）
•  ATTACHING：关联中
•  DETACHING：解关联中
•  DETACHFAILED：解关联失败（2小时后将异步强制解关联）
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取关联时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttachedTime 关联时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttachedTime() const;

                    /**
                     * 设置关联时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attachedTime 关联时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttachedTime(const std::string& _attachedTime);

                    /**
                     * 判断参数 AttachedTime 是否已赋值
                     * @return AttachedTime 是否已赋值
                     * 
                     */
                    bool AttachedTimeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 云联网ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 关联实例CIDR。
                     */
                    std::vector<std::string> m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 关联实例状态：

•  PENDING：申请中
•  ACTIVE：已连接
•  EXPIRED：已过期
•  REJECTED：已拒绝
•  DELETED：已删除
•  FAILED：失败的（2小时后将异步强制解关联）
•  ATTACHING：关联中
•  DETACHING：解关联中
•  DETACHFAILED：解关联失败（2小时后将异步强制解关联）
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 关联时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attachedTime;
                    bool m_attachedTimeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CCNATTACHEDINSTANCE_H_
