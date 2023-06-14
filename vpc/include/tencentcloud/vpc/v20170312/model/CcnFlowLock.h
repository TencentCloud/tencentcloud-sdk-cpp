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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNFLOWLOCK_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNFLOWLOCK_H_

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
                * 云联网限速实例锁对象，该对象特用于运营端使用，用于封禁实例流量。
                */
                class CcnFlowLock : public AbstractModel
                {
                public:
                    CcnFlowLock();
                    ~CcnFlowLock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带宽所属的云联网ID。
                     * @return CcnId 带宽所属的云联网ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置带宽所属的云联网ID。
                     * @param _ccnId 带宽所属的云联网ID。
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
                     * 获取实例所属用户主账号ID。
                     * @return UserAccountID 实例所属用户主账号ID。
                     * 
                     */
                    std::string GetUserAccountID() const;

                    /**
                     * 设置实例所属用户主账号ID。
                     * @param _userAccountID 实例所属用户主账号ID。
                     * 
                     */
                    void SetUserAccountID(const std::string& _userAccountID);

                    /**
                     * 判断参数 UserAccountID 是否已赋值
                     * @return UserAccountID 是否已赋值
                     * 
                     */
                    bool UserAccountIDHasBeenSet() const;

                    /**
                     * 获取带宽实例的唯一ID。作为`UnlockCcnBandwidths`接口和`LockCcnBandwidths`接口的入参时，该字段必传。
                     * @return RegionFlowControlId 带宽实例的唯一ID。作为`UnlockCcnBandwidths`接口和`LockCcnBandwidths`接口的入参时，该字段必传。
                     * 
                     */
                    std::string GetRegionFlowControlId() const;

                    /**
                     * 设置带宽实例的唯一ID。作为`UnlockCcnBandwidths`接口和`LockCcnBandwidths`接口的入参时，该字段必传。
                     * @param _regionFlowControlId 带宽实例的唯一ID。作为`UnlockCcnBandwidths`接口和`LockCcnBandwidths`接口的入参时，该字段必传。
                     * 
                     */
                    void SetRegionFlowControlId(const std::string& _regionFlowControlId);

                    /**
                     * 判断参数 RegionFlowControlId 是否已赋值
                     * @return RegionFlowControlId 是否已赋值
                     * 
                     */
                    bool RegionFlowControlIdHasBeenSet() const;

                private:

                    /**
                     * 带宽所属的云联网ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 实例所属用户主账号ID。
                     */
                    std::string m_userAccountID;
                    bool m_userAccountIDHasBeenSet;

                    /**
                     * 带宽实例的唯一ID。作为`UnlockCcnBandwidths`接口和`LockCcnBandwidths`接口的入参时，该字段必传。
                     */
                    std::string m_regionFlowControlId;
                    bool m_regionFlowControlIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNFLOWLOCK_H_
