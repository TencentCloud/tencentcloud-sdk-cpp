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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_POLICYDETAIL_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_POLICYDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 策略详细信息
                */
                class PolicyDetail : public AbstractModel
                {
                public:
                    PolicyDetail();
                    ~PolicyDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略id</p>
                     * @return PolicyId <p>策略id</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>策略id</p>
                     * @param _policyId <p>策略id</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>策略名称</p>
                     * @return PolicyName <p>策略名称</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _policyName <p>策略名称</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>策略作用用户id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserIds <p>策略作用用户id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>策略作用用户id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userIds <p>策略作用用户id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取<p>策略的租户uin</p>
                     * @return Uin <p>策略的租户uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>策略的租户uin</p>
                     * @param _uin <p>策略的租户uin</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>文件重定向策略id。取值范围：<br>1：读写<br>2：只读<br>3：禁止读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilePolicyId <p>文件重定向策略id。取值范围：<br>1：读写<br>2：只读<br>3：禁止读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFilePolicyId() const;

                    /**
                     * 设置<p>文件重定向策略id。取值范围：<br>1：读写<br>2：只读<br>3：禁止读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filePolicyId <p>文件重定向策略id。取值范围：<br>1：读写<br>2：只读<br>3：禁止读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilePolicyId(const int64_t& _filePolicyId);

                    /**
                     * 判断参数 FilePolicyId 是否已赋值
                     * @return FilePolicyId 是否已赋值
                     * 
                     */
                    bool FilePolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>剪切板重定向策略id。取值范围：<br>1：开启云桌面到客户端<br>2：开启客户端到云桌面<br>3：双向开启<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClipPolicyId <p>剪切板重定向策略id。取值范围：<br>1：开启云桌面到客户端<br>2：开启客户端到云桌面<br>3：双向开启<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetClipPolicyId() const;

                    /**
                     * 设置<p>剪切板重定向策略id。取值范围：<br>1：开启云桌面到客户端<br>2：开启客户端到云桌面<br>3：双向开启<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clipPolicyId <p>剪切板重定向策略id。取值范围：<br>1：开启云桌面到客户端<br>2：开启客户端到云桌面<br>3：双向开启<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClipPolicyId(const int64_t& _clipPolicyId);

                    /**
                     * 判断参数 ClipPolicyId 是否已赋值
                     * @return ClipPolicyId 是否已赋值
                     * 
                     */
                    bool ClipPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>外设重定向策略id。取值范围：<br>1：允许usb重定向<br>2：允许端口重定向<br>3：允许usb和端口重定向<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DrivePolicyId <p>外设重定向策略id。取值范围：<br>1：允许usb重定向<br>2：允许端口重定向<br>3：允许usb和端口重定向<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDrivePolicyId() const;

                    /**
                     * 设置<p>外设重定向策略id。取值范围：<br>1：允许usb重定向<br>2：允许端口重定向<br>3：允许usb和端口重定向<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _drivePolicyId <p>外设重定向策略id。取值范围：<br>1：允许usb重定向<br>2：允许端口重定向<br>3：允许usb和端口重定向<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDrivePolicyId(const int64_t& _drivePolicyId);

                    /**
                     * 判断参数 DrivePolicyId 是否已赋值
                     * @return DrivePolicyId 是否已赋值
                     * 
                     */
                    bool DrivePolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>水印重定向策略id。取值范围（离散值）：<br>4:   当前时间，居中策略<br>10: 当前时间，平铺策略<br>15:  云桌面ID， 居中策略<br>16:  云桌面ID+当前时间， 居中策略<br>17:  云桌面ID， 平铺策略<br>18:  云桌面ID+当前时间， 平铺策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WaterMarkPolicyId <p>水印重定向策略id。取值范围（离散值）：<br>4:   当前时间，居中策略<br>10: 当前时间，平铺策略<br>15:  云桌面ID， 居中策略<br>16:  云桌面ID+当前时间， 居中策略<br>17:  云桌面ID， 平铺策略<br>18:  云桌面ID+当前时间， 平铺策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWaterMarkPolicyId() const;

                    /**
                     * 设置<p>水印重定向策略id。取值范围（离散值）：<br>4:   当前时间，居中策略<br>10: 当前时间，平铺策略<br>15:  云桌面ID， 居中策略<br>16:  云桌面ID+当前时间， 居中策略<br>17:  云桌面ID， 平铺策略<br>18:  云桌面ID+当前时间， 平铺策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _waterMarkPolicyId <p>水印重定向策略id。取值范围（离散值）：<br>4:   当前时间，居中策略<br>10: 当前时间，平铺策略<br>15:  云桌面ID， 居中策略<br>16:  云桌面ID+当前时间， 居中策略<br>17:  云桌面ID， 平铺策略<br>18:  云桌面ID+当前时间， 平铺策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWaterMarkPolicyId(const int64_t& _waterMarkPolicyId);

                    /**
                     * 判断参数 WaterMarkPolicyId 是否已赋值
                     * @return WaterMarkPolicyId 是否已赋值
                     * 
                     */
                    bool WaterMarkPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>是否是默认策略</p>
                     * @return IsDefault <p>是否是默认策略</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置<p>是否是默认策略</p>
                     * @param _isDefault <p>是否是默认策略</p>
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>注意：默认策略的当前值无效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalUser <p>注意：默认策略的当前值无效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalUser() const;

                    /**
                     * 设置<p>注意：默认策略的当前值无效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalUser <p>注意：默认策略的当前值无效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalUser(const int64_t& _totalUser);

                    /**
                     * 判断参数 TotalUser 是否已赋值
                     * @return TotalUser 是否已赋值
                     * 
                     */
                    bool TotalUserHasBeenSet() const;

                private:

                    /**
                     * <p>策略id</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>策略描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>策略作用用户id列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>策略的租户uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>文件重定向策略id。取值范围：<br>1：读写<br>2：只读<br>3：禁止读写</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_filePolicyId;
                    bool m_filePolicyIdHasBeenSet;

                    /**
                     * <p>剪切板重定向策略id。取值范围：<br>1：开启云桌面到客户端<br>2：开启客户端到云桌面<br>3：双向开启<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clipPolicyId;
                    bool m_clipPolicyIdHasBeenSet;

                    /**
                     * <p>外设重定向策略id。取值范围：<br>1：允许usb重定向<br>2：允许端口重定向<br>3：允许usb和端口重定向<br>4：禁用</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_drivePolicyId;
                    bool m_drivePolicyIdHasBeenSet;

                    /**
                     * <p>水印重定向策略id。取值范围（离散值）：<br>4:   当前时间，居中策略<br>10: 当前时间，平铺策略<br>15:  云桌面ID， 居中策略<br>16:  云桌面ID+当前时间， 居中策略<br>17:  云桌面ID， 平铺策略<br>18:  云桌面ID+当前时间， 平铺策略</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_waterMarkPolicyId;
                    bool m_waterMarkPolicyIdHasBeenSet;

                    /**
                     * <p>是否是默认策略</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>注意：默认策略的当前值无效</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalUser;
                    bool m_totalUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_POLICYDETAIL_H_
