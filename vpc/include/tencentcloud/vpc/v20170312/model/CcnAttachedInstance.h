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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网（CCN）关联实例（Instance）对象
                */
                class CcnAttachedInstance : public AbstractModel
                {
                public:
                    CcnAttachedInstance();
                    ~CcnAttachedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云联网实例ID。
                     * @return CcnId 云联网实例ID。
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网实例ID。
                     * @param CcnId 云联网实例ID。
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取关联实例类型：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
                     * @return InstanceType 关联实例类型：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置关联实例类型：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
                     * @param InstanceType 关联实例类型：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取关联实例ID。
                     * @return InstanceId 关联实例ID。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置关联实例ID。
                     * @param InstanceId 关联实例ID。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取关联实例名称。
                     * @return InstanceName 关联实例名称。
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置关联实例名称。
                     * @param InstanceName 关联实例名称。
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取关联实例所属大区，例如：ap-guangzhou。
                     * @return InstanceRegion 关联实例所属大区，例如：ap-guangzhou。
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置关联实例所属大区，例如：ap-guangzhou。
                     * @param InstanceRegion 关联实例所属大区，例如：ap-guangzhou。
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取关联实例所属UIN（根账号）。
                     * @return InstanceUin 关联实例所属UIN（根账号）。
                     */
                    std::string GetInstanceUin() const;

                    /**
                     * 设置关联实例所属UIN（根账号）。
                     * @param InstanceUin 关联实例所属UIN（根账号）。
                     */
                    void SetInstanceUin(const std::string& _instanceUin);

                    /**
                     * 判断参数 InstanceUin 是否已赋值
                     * @return InstanceUin 是否已赋值
                     */
                    bool InstanceUinHasBeenSet() const;

                    /**
                     * 获取关联实例CIDR。
                     * @return CidrBlock 关联实例CIDR。
                     */
                    std::vector<std::string> GetCidrBlock() const;

                    /**
                     * 设置关联实例CIDR。
                     * @param CidrBlock 关联实例CIDR。
                     */
                    void SetCidrBlock(const std::vector<std::string>& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取关联实例状态：
<li>`PENDING`：申请中</li>
<li>`ACTIVE`：已连接</li>
<li>`EXPIRED`：已过期</li>
<li>`REJECTED`：已拒绝</li>
<li>`DELETED`：已删除</li>
<li>`FAILED`：失败的（2小时后将异步强制解关联）</li>
<li>`ATTACHING`：关联中</li>
<li>`DETACHING`：解关联中</li>
<li>`DETACHFAILED`：解关联失败（2小时后将异步强制解关联）</li>
                     * @return State 关联实例状态：
<li>`PENDING`：申请中</li>
<li>`ACTIVE`：已连接</li>
<li>`EXPIRED`：已过期</li>
<li>`REJECTED`：已拒绝</li>
<li>`DELETED`：已删除</li>
<li>`FAILED`：失败的（2小时后将异步强制解关联）</li>
<li>`ATTACHING`：关联中</li>
<li>`DETACHING`：解关联中</li>
<li>`DETACHFAILED`：解关联失败（2小时后将异步强制解关联）</li>
                     */
                    std::string GetState() const;

                    /**
                     * 设置关联实例状态：
<li>`PENDING`：申请中</li>
<li>`ACTIVE`：已连接</li>
<li>`EXPIRED`：已过期</li>
<li>`REJECTED`：已拒绝</li>
<li>`DELETED`：已删除</li>
<li>`FAILED`：失败的（2小时后将异步强制解关联）</li>
<li>`ATTACHING`：关联中</li>
<li>`DETACHING`：解关联中</li>
<li>`DETACHFAILED`：解关联失败（2小时后将异步强制解关联）</li>
                     * @param State 关联实例状态：
<li>`PENDING`：申请中</li>
<li>`ACTIVE`：已连接</li>
<li>`EXPIRED`：已过期</li>
<li>`REJECTED`：已拒绝</li>
<li>`DELETED`：已删除</li>
<li>`FAILED`：失败的（2小时后将异步强制解关联）</li>
<li>`ATTACHING`：关联中</li>
<li>`DETACHING`：解关联中</li>
<li>`DETACHFAILED`：解关联失败（2小时后将异步强制解关联）</li>
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取关联时间。
                     * @return AttachedTime 关联时间。
                     */
                    std::string GetAttachedTime() const;

                    /**
                     * 设置关联时间。
                     * @param AttachedTime 关联时间。
                     */
                    void SetAttachedTime(const std::string& _attachedTime);

                    /**
                     * 判断参数 AttachedTime 是否已赋值
                     * @return AttachedTime 是否已赋值
                     */
                    bool AttachedTimeHasBeenSet() const;

                    /**
                     * 获取云联网所属UIN（根账号）。
                     * @return CcnUin 云联网所属UIN（根账号）。
                     */
                    std::string GetCcnUin() const;

                    /**
                     * 设置云联网所属UIN（根账号）。
                     * @param CcnUin 云联网所属UIN（根账号）。
                     */
                    void SetCcnUin(const std::string& _ccnUin);

                    /**
                     * 判断参数 CcnUin 是否已赋值
                     * @return CcnUin 是否已赋值
                     */
                    bool CcnUinHasBeenSet() const;

                    /**
                     * 获取关联实例所属的大地域，如: CHINA_MAINLAND
                     * @return InstanceArea 关联实例所属的大地域，如: CHINA_MAINLAND
                     */
                    std::string GetInstanceArea() const;

                    /**
                     * 设置关联实例所属的大地域，如: CHINA_MAINLAND
                     * @param InstanceArea 关联实例所属的大地域，如: CHINA_MAINLAND
                     */
                    void SetInstanceArea(const std::string& _instanceArea);

                    /**
                     * 判断参数 InstanceArea 是否已赋值
                     * @return InstanceArea 是否已赋值
                     */
                    bool InstanceAreaHasBeenSet() const;

                private:

                    /**
                     * 云联网实例ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 关联实例类型：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 关联实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 关联实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 关联实例所属大区，例如：ap-guangzhou。
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 关联实例所属UIN（根账号）。
                     */
                    std::string m_instanceUin;
                    bool m_instanceUinHasBeenSet;

                    /**
                     * 关联实例CIDR。
                     */
                    std::vector<std::string> m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 关联实例状态：
<li>`PENDING`：申请中</li>
<li>`ACTIVE`：已连接</li>
<li>`EXPIRED`：已过期</li>
<li>`REJECTED`：已拒绝</li>
<li>`DELETED`：已删除</li>
<li>`FAILED`：失败的（2小时后将异步强制解关联）</li>
<li>`ATTACHING`：关联中</li>
<li>`DETACHING`：解关联中</li>
<li>`DETACHFAILED`：解关联失败（2小时后将异步强制解关联）</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 关联时间。
                     */
                    std::string m_attachedTime;
                    bool m_attachedTimeHasBeenSet;

                    /**
                     * 云联网所属UIN（根账号）。
                     */
                    std::string m_ccnUin;
                    bool m_ccnUinHasBeenSet;

                    /**
                     * 关联实例所属的大地域，如: CHINA_MAINLAND
                     */
                    std::string m_instanceArea;
                    bool m_instanceAreaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_
