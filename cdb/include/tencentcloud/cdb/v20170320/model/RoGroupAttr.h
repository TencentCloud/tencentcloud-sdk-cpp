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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUPATTR_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUPATTR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * RO 组的配置信息
                */
                class RoGroupAttr : public AbstractModel
                {
                public:
                    RoGroupAttr();
                    ~RoGroupAttr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>RO 组名称。</p>
                     * @return RoGroupName <p>RO 组名称。</p>
                     * 
                     */
                    std::string GetRoGroupName() const;

                    /**
                     * 设置<p>RO 组名称。</p>
                     * @param _roGroupName <p>RO 组名称。</p>
                     * 
                     */
                    void SetRoGroupName(const std::string& _roGroupName);

                    /**
                     * 判断参数 RoGroupName 是否已赋值
                     * @return RoGroupName 是否已赋值
                     * 
                     */
                    bool RoGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>RO 实例最大延迟阈值。单位为秒，最小值为 1。范围：[1,10000]，整数。<br>注意：RO 组必须设置了开启实例延迟剔除策略，该值才有效。</p>
                     * @return RoMaxDelayTime <p>RO 实例最大延迟阈值。单位为秒，最小值为 1。范围：[1,10000]，整数。<br>注意：RO 组必须设置了开启实例延迟剔除策略，该值才有效。</p>
                     * 
                     */
                    int64_t GetRoMaxDelayTime() const;

                    /**
                     * 设置<p>RO 实例最大延迟阈值。单位为秒，最小值为 1。范围：[1,10000]，整数。<br>注意：RO 组必须设置了开启实例延迟剔除策略，该值才有效。</p>
                     * @param _roMaxDelayTime <p>RO 实例最大延迟阈值。单位为秒，最小值为 1。范围：[1,10000]，整数。<br>注意：RO 组必须设置了开启实例延迟剔除策略，该值才有效。</p>
                     * 
                     */
                    void SetRoMaxDelayTime(const int64_t& _roMaxDelayTime);

                    /**
                     * 判断参数 RoMaxDelayTime 是否已赋值
                     * @return RoMaxDelayTime 是否已赋值
                     * 
                     */
                    bool RoMaxDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启实例延迟剔除。支持的值包括：1 - 开启；0 - 不开启。注意，若设置开启实例延迟剔除，则必须设置延迟阈值（RoMaxDelayTime）参数。</p>
                     * @return RoOfflineDelay <p>是否开启实例延迟剔除。支持的值包括：1 - 开启；0 - 不开启。注意，若设置开启实例延迟剔除，则必须设置延迟阈值（RoMaxDelayTime）参数。</p>
                     * 
                     */
                    int64_t GetRoOfflineDelay() const;

                    /**
                     * 设置<p>是否开启实例延迟剔除。支持的值包括：1 - 开启；0 - 不开启。注意，若设置开启实例延迟剔除，则必须设置延迟阈值（RoMaxDelayTime）参数。</p>
                     * @param _roOfflineDelay <p>是否开启实例延迟剔除。支持的值包括：1 - 开启；0 - 不开启。注意，若设置开启实例延迟剔除，则必须设置延迟阈值（RoMaxDelayTime）参数。</p>
                     * 
                     */
                    void SetRoOfflineDelay(const int64_t& _roOfflineDelay);

                    /**
                     * 判断参数 RoOfflineDelay 是否已赋值
                     * @return RoOfflineDelay 是否已赋值
                     * 
                     */
                    bool RoOfflineDelayHasBeenSet() const;

                    /**
                     * 获取<p>最少保留实例数。可设置为小于或等于该 RO 组下 RO 实例个数的任意值。默认值为1。<br>注意：若设置值大于 RO 实例数量将不做剔除；若设置为 0，所有实例延迟超限都会被剔除。</p>
                     * @return MinRoInGroup <p>最少保留实例数。可设置为小于或等于该 RO 组下 RO 实例个数的任意值。默认值为1。<br>注意：若设置值大于 RO 实例数量将不做剔除；若设置为 0，所有实例延迟超限都会被剔除。</p>
                     * 
                     */
                    int64_t GetMinRoInGroup() const;

                    /**
                     * 设置<p>最少保留实例数。可设置为小于或等于该 RO 组下 RO 实例个数的任意值。默认值为1。<br>注意：若设置值大于 RO 实例数量将不做剔除；若设置为 0，所有实例延迟超限都会被剔除。</p>
                     * @param _minRoInGroup <p>最少保留实例数。可设置为小于或等于该 RO 组下 RO 实例个数的任意值。默认值为1。<br>注意：若设置值大于 RO 实例数量将不做剔除；若设置为 0，所有实例延迟超限都会被剔除。</p>
                     * 
                     */
                    void SetMinRoInGroup(const int64_t& _minRoInGroup);

                    /**
                     * 判断参数 MinRoInGroup 是否已赋值
                     * @return MinRoInGroup 是否已赋值
                     * 
                     */
                    bool MinRoInGroupHasBeenSet() const;

                    /**
                     * 获取<p>权重模式。支持值包括：&quot;system&quot; - 系统自动分配； &quot;custom&quot; - 用户自定义设置。注意，若设置 &quot;custom&quot; 模式，则必须设置 RO 实例权重配置（RoWeightValues）参数。</p>
                     * @return WeightMode <p>权重模式。支持值包括：&quot;system&quot; - 系统自动分配； &quot;custom&quot; - 用户自定义设置。注意，若设置 &quot;custom&quot; 模式，则必须设置 RO 实例权重配置（RoWeightValues）参数。</p>
                     * 
                     */
                    std::string GetWeightMode() const;

                    /**
                     * 设置<p>权重模式。支持值包括：&quot;system&quot; - 系统自动分配； &quot;custom&quot; - 用户自定义设置。注意，若设置 &quot;custom&quot; 模式，则必须设置 RO 实例权重配置（RoWeightValues）参数。</p>
                     * @param _weightMode <p>权重模式。支持值包括：&quot;system&quot; - 系统自动分配； &quot;custom&quot; - 用户自定义设置。注意，若设置 &quot;custom&quot; 模式，则必须设置 RO 实例权重配置（RoWeightValues）参数。</p>
                     * 
                     */
                    void SetWeightMode(const std::string& _weightMode);

                    /**
                     * 判断参数 WeightMode 是否已赋值
                     * @return WeightMode 是否已赋值
                     * 
                     */
                    bool WeightModeHasBeenSet() const;

                    /**
                     * 获取<p>延迟复制时间。单位：秒，范围：1 - 259200秒，不传此参数表示不开启实例延迟复制。</p>
                     * @return ReplicationDelayTime <p>延迟复制时间。单位：秒，范围：1 - 259200秒，不传此参数表示不开启实例延迟复制。</p>
                     * 
                     */
                    int64_t GetReplicationDelayTime() const;

                    /**
                     * 设置<p>延迟复制时间。单位：秒，范围：1 - 259200秒，不传此参数表示不开启实例延迟复制。</p>
                     * @param _replicationDelayTime <p>延迟复制时间。单位：秒，范围：1 - 259200秒，不传此参数表示不开启实例延迟复制。</p>
                     * 
                     */
                    void SetReplicationDelayTime(const int64_t& _replicationDelayTime);

                    /**
                     * 判断参数 ReplicationDelayTime 是否已赋值
                     * @return ReplicationDelayTime 是否已赋值
                     * 
                     */
                    bool ReplicationDelayTimeHasBeenSet() const;

                private:

                    /**
                     * <p>RO 组名称。</p>
                     */
                    std::string m_roGroupName;
                    bool m_roGroupNameHasBeenSet;

                    /**
                     * <p>RO 实例最大延迟阈值。单位为秒，最小值为 1。范围：[1,10000]，整数。<br>注意：RO 组必须设置了开启实例延迟剔除策略，该值才有效。</p>
                     */
                    int64_t m_roMaxDelayTime;
                    bool m_roMaxDelayTimeHasBeenSet;

                    /**
                     * <p>是否开启实例延迟剔除。支持的值包括：1 - 开启；0 - 不开启。注意，若设置开启实例延迟剔除，则必须设置延迟阈值（RoMaxDelayTime）参数。</p>
                     */
                    int64_t m_roOfflineDelay;
                    bool m_roOfflineDelayHasBeenSet;

                    /**
                     * <p>最少保留实例数。可设置为小于或等于该 RO 组下 RO 实例个数的任意值。默认值为1。<br>注意：若设置值大于 RO 实例数量将不做剔除；若设置为 0，所有实例延迟超限都会被剔除。</p>
                     */
                    int64_t m_minRoInGroup;
                    bool m_minRoInGroupHasBeenSet;

                    /**
                     * <p>权重模式。支持值包括：&quot;system&quot; - 系统自动分配； &quot;custom&quot; - 用户自定义设置。注意，若设置 &quot;custom&quot; 模式，则必须设置 RO 实例权重配置（RoWeightValues）参数。</p>
                     */
                    std::string m_weightMode;
                    bool m_weightModeHasBeenSet;

                    /**
                     * <p>延迟复制时间。单位：秒，范围：1 - 259200秒，不传此参数表示不开启实例延迟复制。</p>
                     */
                    int64_t m_replicationDelayTime;
                    bool m_replicationDelayTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_ROGROUPATTR_H_
