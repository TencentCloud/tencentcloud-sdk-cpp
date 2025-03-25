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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWRESOURCE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 自动续期资源info
                */
                class RenewResource : public AbstractModel
                {
                public:
                    RenewResource();
                    ~RenewResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源Id
                     * @return ResourceId 资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id
                     * @param _resourceId 资源Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取自动续期标记，0：默认，1：自动续期，2：不续期
                     * @return AutoRenewFlag 自动续期标记，0：默认，1：自动续期，2：不续期
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续期标记，0：默认，1：自动续期，2：不续期
                     * @param _autoRenewFlag 自动续期标记，0：默认，1：自动续期，2：不续期
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取资源冻结时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTimestamp 资源冻结时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTimestamp() const;

                    /**
                     * 设置资源冻结时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTimestamp 资源冻结时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedTimestamp(const std::string& _isolatedTimestamp);

                    /**
                     * 判断参数 IsolatedTimestamp 是否已赋值
                     * @return IsolatedTimestamp 是否已赋值
                     * 
                     */
                    bool IsolatedTimestampHasBeenSet() const;

                    /**
                     * 获取资源销毁状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Refund 资源销毁状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRefund() const;

                    /**
                     * 设置资源销毁状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _refund 资源销毁状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRefund(const bool& _refund);

                    /**
                     * 判断参数 Refund 是否已赋值
                     * @return Refund 是否已赋值
                     * 
                     */
                    bool RefundHasBeenSet() const;

                    /**
                     * 获取子产品码
                     * @return SubProductCode 子产品码
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置子产品码
                     * @param _subProductCode 子产品码
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取资源到期时间
                     * @return EndTime 资源到期时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置资源到期时间
                     * @param _endTime 资源到期时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 自动续期标记，0：默认，1：自动续期，2：不续期
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 资源冻结时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTimestamp;
                    bool m_isolatedTimestampHasBeenSet;

                    /**
                     * 资源销毁状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_refund;
                    bool m_refundHasBeenSet;

                    /**
                     * 子产品码
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 资源到期时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_RENEWRESOURCE_H_
