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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/AddShardConfig.h>
#include <tencentcloud/dcdb/v20180411/model/ExpandShardConfig.h>
#include <tencentcloud/dcdb/v20180411/model/SplitShardConfig.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * UpgradeDCDBInstance请求参数结构体
                */
                class UpgradeDCDBInstanceRequest : public AbstractModel
                {
                public:
                    UpgradeDCDBInstanceRequest();
                    ~UpgradeDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。</p>
                     * @return InstanceId <p>待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。</p>
                     * @param _instanceId <p>待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。</p>
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
                     * 获取<p>升级类型，取值范围: </p><li> ADD: 新增分片 </li>  <li> EXPAND: 升级实例中的已有分片 </li>  <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * @return UpgradeType <p>升级类型，取值范围: </p><li> ADD: 新增分片 </li>  <li> EXPAND: 升级实例中的已有分片 </li>  <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置<p>升级类型，取值范围: </p><li> ADD: 新增分片 </li>  <li> EXPAND: 升级实例中的已有分片 </li>  <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * @param _upgradeType <p>升级类型，取值范围: </p><li> ADD: 新增分片 </li>  <li> EXPAND: 升级实例中的已有分片 </li>  <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取<p>新增分片配置，当UpgradeType为ADD时生效。</p>
                     * @return AddShardConfig <p>新增分片配置，当UpgradeType为ADD时生效。</p>
                     * 
                     */
                    AddShardConfig GetAddShardConfig() const;

                    /**
                     * 设置<p>新增分片配置，当UpgradeType为ADD时生效。</p>
                     * @param _addShardConfig <p>新增分片配置，当UpgradeType为ADD时生效。</p>
                     * 
                     */
                    void SetAddShardConfig(const AddShardConfig& _addShardConfig);

                    /**
                     * 判断参数 AddShardConfig 是否已赋值
                     * @return AddShardConfig 是否已赋值
                     * 
                     */
                    bool AddShardConfigHasBeenSet() const;

                    /**
                     * 获取<p>扩容分片配置，当UpgradeType为EXPAND时生效。</p>
                     * @return ExpandShardConfig <p>扩容分片配置，当UpgradeType为EXPAND时生效。</p>
                     * 
                     */
                    ExpandShardConfig GetExpandShardConfig() const;

                    /**
                     * 设置<p>扩容分片配置，当UpgradeType为EXPAND时生效。</p>
                     * @param _expandShardConfig <p>扩容分片配置，当UpgradeType为EXPAND时生效。</p>
                     * 
                     */
                    void SetExpandShardConfig(const ExpandShardConfig& _expandShardConfig);

                    /**
                     * 判断参数 ExpandShardConfig 是否已赋值
                     * @return ExpandShardConfig 是否已赋值
                     * 
                     */
                    bool ExpandShardConfigHasBeenSet() const;

                    /**
                     * 获取<p>切分分片配置，当UpgradeType为SPLIT时生效。</p>
                     * @return SplitShardConfig <p>切分分片配置，当UpgradeType为SPLIT时生效。</p>
                     * 
                     */
                    SplitShardConfig GetSplitShardConfig() const;

                    /**
                     * 设置<p>切分分片配置，当UpgradeType为SPLIT时生效。</p>
                     * @param _splitShardConfig <p>切分分片配置，当UpgradeType为SPLIT时生效。</p>
                     * 
                     */
                    void SetSplitShardConfig(const SplitShardConfig& _splitShardConfig);

                    /**
                     * 判断参数 SplitShardConfig 是否已赋值
                     * @return SplitShardConfig 是否已赋值
                     * 
                     */
                    bool SplitShardConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否自动使用代金券进行支付，默认不使用。</p>
                     * @return AutoVoucher <p>是否自动使用代金券进行支付，默认不使用。</p>
                     * 
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动使用代金券进行支付，默认不使用。</p>
                     * @param _autoVoucher <p>是否自动使用代金券进行支付，默认不使用。</p>
                     * 
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * @return VoucherIds <p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置<p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * @param _voucherIds <p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取<p>变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区</p>
                     * @return Zones <p>变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区</p>
                     * @param _zones <p>变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取<p>切换开始时间，格式如: &quot;2019-12-12 07:00:00&quot;。开始时间必须在当前时间一个小时以后，3天以内。</p>
                     * @return SwitchStartTime <p>切换开始时间，格式如: &quot;2019-12-12 07:00:00&quot;。开始时间必须在当前时间一个小时以后，3天以内。</p>
                     * 
                     */
                    std::string GetSwitchStartTime() const;

                    /**
                     * 设置<p>切换开始时间，格式如: &quot;2019-12-12 07:00:00&quot;。开始时间必须在当前时间一个小时以后，3天以内。</p>
                     * @param _switchStartTime <p>切换开始时间，格式如: &quot;2019-12-12 07:00:00&quot;。开始时间必须在当前时间一个小时以后，3天以内。</p>
                     * 
                     */
                    void SetSwitchStartTime(const std::string& _switchStartTime);

                    /**
                     * 判断参数 SwitchStartTime 是否已赋值
                     * @return SwitchStartTime 是否已赋值
                     * 
                     */
                    bool SwitchStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>切换结束时间, 格式如: &quot;2019-12-12 07:15:00&quot;，结束时间必须大于开始时间。</p>
                     * @return SwitchEndTime <p>切换结束时间, 格式如: &quot;2019-12-12 07:15:00&quot;，结束时间必须大于开始时间。</p>
                     * 
                     */
                    std::string GetSwitchEndTime() const;

                    /**
                     * 设置<p>切换结束时间, 格式如: &quot;2019-12-12 07:15:00&quot;，结束时间必须大于开始时间。</p>
                     * @param _switchEndTime <p>切换结束时间, 格式如: &quot;2019-12-12 07:15:00&quot;，结束时间必须大于开始时间。</p>
                     * 
                     */
                    void SetSwitchEndTime(const std::string& _switchEndTime);

                    /**
                     * 判断参数 SwitchEndTime 是否已赋值
                     * @return SwitchEndTime 是否已赋值
                     * 
                     */
                    bool SwitchEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否自动重试。 0：不自动重试 1：自动重试</p>
                     * @return SwitchAutoRetry <p>是否自动重试。 0：不自动重试 1：自动重试</p>
                     * 
                     */
                    int64_t GetSwitchAutoRetry() const;

                    /**
                     * 设置<p>是否自动重试。 0：不自动重试 1：自动重试</p>
                     * @param _switchAutoRetry <p>是否自动重试。 0：不自动重试 1：自动重试</p>
                     * 
                     */
                    void SetSwitchAutoRetry(const int64_t& _switchAutoRetry);

                    /**
                     * 判断参数 SwitchAutoRetry 是否已赋值
                     * @return SwitchAutoRetry 是否已赋值
                     * 
                     */
                    bool SwitchAutoRetryHasBeenSet() const;

                    /**
                     * 获取<p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     * @return SwitchInterval <p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetSwitchInterval() const;

                    /**
                     * 设置<p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     * @param _switchInterval <p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     * 
                     */
                    void SetSwitchInterval(const int64_t& _switchInterval);

                    /**
                     * 判断参数 SwitchInterval 是否已赋值
                     * @return SwitchInterval 是否已赋值
                     * 
                     */
                    bool SwitchIntervalHasBeenSet() const;

                private:

                    /**
                     * <p>待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>升级类型，取值范围: </p><li> ADD: 新增分片 </li>  <li> EXPAND: 升级实例中的已有分片 </li>  <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * <p>新增分片配置，当UpgradeType为ADD时生效。</p>
                     */
                    AddShardConfig m_addShardConfig;
                    bool m_addShardConfigHasBeenSet;

                    /**
                     * <p>扩容分片配置，当UpgradeType为EXPAND时生效。</p>
                     */
                    ExpandShardConfig m_expandShardConfig;
                    bool m_expandShardConfigHasBeenSet;

                    /**
                     * <p>切分分片配置，当UpgradeType为SPLIT时生效。</p>
                     */
                    SplitShardConfig m_splitShardConfig;
                    bool m_splitShardConfigHasBeenSet;

                    /**
                     * <p>是否自动使用代金券进行支付，默认不使用。</p>
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>代金券ID列表，目前仅支持指定一张代金券。</p>
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * <p>变更部署时指定的新可用区列表，第1个为主可用区，其余为从可用区</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>切换开始时间，格式如: &quot;2019-12-12 07:00:00&quot;。开始时间必须在当前时间一个小时以后，3天以内。</p>
                     */
                    std::string m_switchStartTime;
                    bool m_switchStartTimeHasBeenSet;

                    /**
                     * <p>切换结束时间, 格式如: &quot;2019-12-12 07:15:00&quot;，结束时间必须大于开始时间。</p>
                     */
                    std::string m_switchEndTime;
                    bool m_switchEndTimeHasBeenSet;

                    /**
                     * <p>是否自动重试。 0：不自动重试 1：自动重试</p>
                     */
                    int64_t m_switchAutoRetry;
                    bool m_switchAutoRetryHasBeenSet;

                    /**
                     * <p>多个分片同时发起扩容，并发切换中的切换时间间隔，即当前分片切换开始时间和下一个分片的切换开始时间间隔，不传默认为1。</p><p>取值范围：[1, 180]</p><p>单位：秒</p>
                     */
                    int64_t m_switchInterval;
                    bool m_switchIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDCDBINSTANCEREQUEST_H_
