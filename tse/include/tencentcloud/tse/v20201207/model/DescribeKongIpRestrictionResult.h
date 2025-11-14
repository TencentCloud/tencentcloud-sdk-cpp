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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGIPRESTRICTIONRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGIPRESTRICTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 查询云原生网关访问控制配置出参
                */
                class DescribeKongIpRestrictionResult : public AbstractModel
                {
                public:
                    DescribeKongIpRestrictionResult();
                    ~DescribeKongIpRestrictionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问控制插件绑定的资源类型：route | service
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceType 访问控制插件绑定的资源类型：route | service
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置访问控制插件绑定的资源类型：route | service
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceType 访问控制插件绑定的资源类型：route | service
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取路由或服务的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceId 路由或服务的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置路由或服务的id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceId 路由或服务的id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取是否启用插件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否启用插件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用插件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 是否启用插件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取访问控制类型：whiteList｜blackList
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestrictionType 访问控制类型：whiteList｜blackList
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRestrictionType() const;

                    /**
                     * 设置访问控制类型：whiteList｜blackList
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restrictionType 访问控制类型：whiteList｜blackList
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestrictionType(const std::string& _restrictionType);

                    /**
                     * 判断参数 RestrictionType 是否已赋值
                     * @return RestrictionType 是否已赋值
                     * 
                     */
                    bool RestrictionTypeHasBeenSet() const;

                    /**
                     * 获取cidr｜ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressList cidr｜ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAddressList() const;

                    /**
                     * 设置cidr｜ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressList cidr｜ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressList(const std::vector<std::string>& _addressList);

                    /**
                     * 判断参数 AddressList 是否已赋值
                     * @return AddressList 是否已赋值
                     * 
                     */
                    bool AddressListHasBeenSet() const;

                private:

                    /**
                     * 访问控制插件绑定的资源类型：route | service
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 路由或服务的id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 是否启用插件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 访问控制类型：whiteList｜blackList
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_restrictionType;
                    bool m_restrictionTypeHasBeenSet;

                    /**
                     * cidr｜ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_addressList;
                    bool m_addressListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGIPRESTRICTIONRESULT_H_
