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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_GATEWAYVERSIONITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_GATEWAYVERSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/WxGatewayCustomConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 网关版本详情
                */
                class GatewayVersionItem : public AbstractModel
                {
                public:
                    GatewayVersionItem();
                    ~GatewayVersionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本名
                     * @return VersionName 版本名
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名
                     * @param _versionName 版本名
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取版本流量权重
                     * @return Weight 版本流量权重
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置版本流量权重
                     * @param _weight 版本流量权重
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取创建状态
                     * @return Status 创建状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置创建状态
                     * @param _status 创建状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedTime 更新时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间
                     * @param _updatedTime 更新时间
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取构建ID
                     * @return BuildId 构建ID
                     * 
                     */
                    uint64_t GetBuildId() const;

                    /**
                     * 设置构建ID
                     * @param _buildId 构建ID
                     * 
                     */
                    void SetBuildId(const uint64_t& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    uint64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const uint64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取是否默认版本
                     * @return IsDefault 是否默认版本
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否默认版本
                     * @param _isDefault 是否默认版本
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
                     * 获取网关版本自定义配置
                     * @return CustomConfig 网关版本自定义配置
                     * 
                     */
                    WxGatewayCustomConfig GetCustomConfig() const;

                    /**
                     * 设置网关版本自定义配置
                     * @param _customConfig 网关版本自定义配置
                     * 
                     */
                    void SetCustomConfig(const WxGatewayCustomConfig& _customConfig);

                    /**
                     * 判断参数 CustomConfig 是否已赋值
                     * @return CustomConfig 是否已赋值
                     * 
                     */
                    bool CustomConfigHasBeenSet() const;

                private:

                    /**
                     * 版本名
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 版本流量权重
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 创建状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 构建ID
                     */
                    uint64_t m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 优先级
                     */
                    uint64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 是否默认版本
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 网关版本自定义配置
                     */
                    WxGatewayCustomConfig m_customConfig;
                    bool m_customConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_GATEWAYVERSIONITEM_H_
