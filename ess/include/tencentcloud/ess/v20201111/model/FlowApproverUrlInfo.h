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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERURLINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 签署链接信息
                */
                class FlowApproverUrlInfo : public AbstractModel
                {
                public:
                    FlowApproverUrlInfo();
                    ~FlowApproverUrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignUrl 签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSignUrl() const;

                    /**
                     * 设置签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SignUrl 签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSignUrl(const std::string& _signUrl);

                    /**
                     * 判断参数 SignUrl 是否已赋值
                     * @return SignUrl 是否已赋值
                     */
                    bool SignUrlHasBeenSet() const;

                    /**
                     * 获取签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverMobile 签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproverMobile 签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverName 签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproverName 签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取签署人类型 1-个人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverType 签署人类型 1-个人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置签署人类型 1-个人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproverType 签署人类型 1-个人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     */
                    bool ApproverTypeHasBeenSet() const;

                private:

                    /**
                     * 签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signUrl;
                    bool m_signUrlHasBeenSet;

                    /**
                     * 签署人手机号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * 签署人姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * 签署人类型 1-个人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWAPPROVERURLINFO_H_
