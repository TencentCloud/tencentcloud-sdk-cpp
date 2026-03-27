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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEAZREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEAZREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyInstanceAz请求参数结构体
                */
                class ModifyInstanceAzRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAzRequest();
                    ~ModifyInstanceAzRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID，例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID，例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>主节点所在的可用区 ID。获取方式，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     * @return PrimaryNodeZone <p>主节点所在的可用区 ID。获取方式，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     * 
                     */
                    std::string GetPrimaryNodeZone() const;

                    /**
                     * 设置<p>主节点所在的可用区 ID。获取方式，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     * @param _primaryNodeZone <p>主节点所在的可用区 ID。获取方式，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     * 
                     */
                    void SetPrimaryNodeZone(const std::string& _primaryNodeZone);

                    /**
                     * 判断参数 PrimaryNodeZone 是否已赋值
                     * @return PrimaryNodeZone 是否已赋值
                     * 
                     */
                    bool PrimaryNodeZoneHasBeenSet() const;

                    /**
                     * 获取<p>从节点所在的可用区 ID 列表。<br><strong>注意</strong>：不可包含主节点与 Hidden 节点所在的可用区。</p>
                     * @return SecondaryNodeZone <p>从节点所在的可用区 ID 列表。<br><strong>注意</strong>：不可包含主节点与 Hidden 节点所在的可用区。</p>
                     * 
                     */
                    std::vector<std::string> GetSecondaryNodeZone() const;

                    /**
                     * 设置<p>从节点所在的可用区 ID 列表。<br><strong>注意</strong>：不可包含主节点与 Hidden 节点所在的可用区。</p>
                     * @param _secondaryNodeZone <p>从节点所在的可用区 ID 列表。<br><strong>注意</strong>：不可包含主节点与 Hidden 节点所在的可用区。</p>
                     * 
                     */
                    void SetSecondaryNodeZone(const std::vector<std::string>& _secondaryNodeZone);

                    /**
                     * 判断参数 SecondaryNodeZone 是否已赋值
                     * @return SecondaryNodeZone 是否已赋值
                     * 
                     */
                    bool SecondaryNodeZoneHasBeenSet() const;

                    /**
                     * 获取<p>若当前实例未配置 Hidden 节点，则无需传入此参数。</p>
                     * @return HiddenNodeZone <p>若当前实例未配置 Hidden 节点，则无需传入此参数。</p>
                     * 
                     */
                    std::string GetHiddenNodeZone() const;

                    /**
                     * 设置<p>若当前实例未配置 Hidden 节点，则无需传入此参数。</p>
                     * @param _hiddenNodeZone <p>若当前实例未配置 Hidden 节点，则无需传入此参数。</p>
                     * 
                     */
                    void SetHiddenNodeZone(const std::string& _hiddenNodeZone);

                    /**
                     * 判断参数 HiddenNodeZone 是否已赋值
                     * @return HiddenNodeZone 是否已赋值
                     * 
                     */
                    bool HiddenNodeZoneHasBeenSet() const;

                    /**
                     * 获取<p>只读节点所在的可用区 ID 列表。<br><strong>注意</strong>：若当前实例已包含只读节点，则此参数为必填项。</p>
                     * @return ReadonlyNodeZone <p>只读节点所在的可用区 ID 列表。<br><strong>注意</strong>：若当前实例已包含只读节点，则此参数为必填项。</p>
                     * 
                     */
                    std::vector<std::string> GetReadonlyNodeZone() const;

                    /**
                     * 设置<p>只读节点所在的可用区 ID 列表。<br><strong>注意</strong>：若当前实例已包含只读节点，则此参数为必填项。</p>
                     * @param _readonlyNodeZone <p>只读节点所在的可用区 ID 列表。<br><strong>注意</strong>：若当前实例已包含只读节点，则此参数为必填项。</p>
                     * 
                     */
                    void SetReadonlyNodeZone(const std::vector<std::string>& _readonlyNodeZone);

                    /**
                     * 判断参数 ReadonlyNodeZone 是否已赋值
                     * @return ReadonlyNodeZone 是否已赋值
                     * 
                     */
                    bool ReadonlyNodeZoneHasBeenSet() const;

                    /**
                     * 获取<p>指定切换可用区的执行时间策略。</p><ul><li>0：立即执行切换。</li><li>1：在设定的维护时间窗执行切换。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/19910">设置实例维护时间</a>。</li></ul>
                     * @return InMaintenance <p>指定切换可用区的执行时间策略。</p><ul><li>0：立即执行切换。</li><li>1：在设定的维护时间窗执行切换。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/19910">设置实例维护时间</a>。</li></ul>
                     * 
                     */
                    uint64_t GetInMaintenance() const;

                    /**
                     * 设置<p>指定切换可用区的执行时间策略。</p><ul><li>0：立即执行切换。</li><li>1：在设定的维护时间窗执行切换。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/19910">设置实例维护时间</a>。</li></ul>
                     * @param _inMaintenance <p>指定切换可用区的执行时间策略。</p><ul><li>0：立即执行切换。</li><li>1：在设定的维护时间窗执行切换。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/19910">设置实例维护时间</a>。</li></ul>
                     * 
                     */
                    void SetInMaintenance(const uint64_t& _inMaintenance);

                    /**
                     * 判断参数 InMaintenance 是否已赋值
                     * @return InMaintenance 是否已赋值
                     * 
                     */
                    bool InMaintenanceHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID，例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主节点所在的可用区 ID。获取方式，请参见<a href="https://cloud.tencent.com/document/product/240/3637">地域和可用区</a>。</p>
                     */
                    std::string m_primaryNodeZone;
                    bool m_primaryNodeZoneHasBeenSet;

                    /**
                     * <p>从节点所在的可用区 ID 列表。<br><strong>注意</strong>：不可包含主节点与 Hidden 节点所在的可用区。</p>
                     */
                    std::vector<std::string> m_secondaryNodeZone;
                    bool m_secondaryNodeZoneHasBeenSet;

                    /**
                     * <p>若当前实例未配置 Hidden 节点，则无需传入此参数。</p>
                     */
                    std::string m_hiddenNodeZone;
                    bool m_hiddenNodeZoneHasBeenSet;

                    /**
                     * <p>只读节点所在的可用区 ID 列表。<br><strong>注意</strong>：若当前实例已包含只读节点，则此参数为必填项。</p>
                     */
                    std::vector<std::string> m_readonlyNodeZone;
                    bool m_readonlyNodeZoneHasBeenSet;

                    /**
                     * <p>指定切换可用区的执行时间策略。</p><ul><li>0：立即执行切换。</li><li>1：在设定的维护时间窗执行切换。具体信息，请参见<a href="https://cloud.tencent.com/document/product/240/19910">设置实例维护时间</a>。</li></ul>
                     */
                    uint64_t m_inMaintenance;
                    bool m_inMaintenanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEAZREQUEST_H_
