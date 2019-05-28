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
                     * 获取待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @return InstanceId 待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @param InstanceId 待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * @return UpgradeType 升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * @param UpgradeType 升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取新增分片配置，当UpgradeType为ADD时生效。
                     * @return AddShardConfig 新增分片配置，当UpgradeType为ADD时生效。
                     */
                    AddShardConfig GetAddShardConfig() const;

                    /**
                     * 设置新增分片配置，当UpgradeType为ADD时生效。
                     * @param AddShardConfig 新增分片配置，当UpgradeType为ADD时生效。
                     */
                    void SetAddShardConfig(const AddShardConfig& _addShardConfig);

                    /**
                     * 判断参数 AddShardConfig 是否已赋值
                     * @return AddShardConfig 是否已赋值
                     */
                    bool AddShardConfigHasBeenSet() const;

                    /**
                     * 获取扩容分片配置，当UpgradeType为EXPAND时生效。
                     * @return ExpandShardConfig 扩容分片配置，当UpgradeType为EXPAND时生效。
                     */
                    ExpandShardConfig GetExpandShardConfig() const;

                    /**
                     * 设置扩容分片配置，当UpgradeType为EXPAND时生效。
                     * @param ExpandShardConfig 扩容分片配置，当UpgradeType为EXPAND时生效。
                     */
                    void SetExpandShardConfig(const ExpandShardConfig& _expandShardConfig);

                    /**
                     * 判断参数 ExpandShardConfig 是否已赋值
                     * @return ExpandShardConfig 是否已赋值
                     */
                    bool ExpandShardConfigHasBeenSet() const;

                    /**
                     * 获取切分分片配置，当UpgradeType为SPLIT时生效。
                     * @return SplitShardConfig 切分分片配置，当UpgradeType为SPLIT时生效。
                     */
                    SplitShardConfig GetSplitShardConfig() const;

                    /**
                     * 设置切分分片配置，当UpgradeType为SPLIT时生效。
                     * @param SplitShardConfig 切分分片配置，当UpgradeType为SPLIT时生效。
                     */
                    void SetSplitShardConfig(const SplitShardConfig& _splitShardConfig);

                    /**
                     * 判断参数 SplitShardConfig 是否已赋值
                     * @return SplitShardConfig 是否已赋值
                     */
                    bool SplitShardConfigHasBeenSet() const;

                    /**
                     * 获取是否自动使用代金券进行支付，默认不使用。
                     * @return AutoVoucher 是否自动使用代金券进行支付，默认不使用。
                     */
                    bool GetAutoVoucher() const;

                    /**
                     * 设置是否自动使用代金券进行支付，默认不使用。
                     * @param AutoVoucher 是否自动使用代金券进行支付，默认不使用。
                     */
                    void SetAutoVoucher(const bool& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取代金券ID列表，目前仅支持指定一张代金券。
                     * @return VoucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置代金券ID列表，目前仅支持指定一张代金券。
                     * @param VoucherIds 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     */
                    bool VoucherIdsHasBeenSet() const;

                private:

                    /**
                     * 待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * 新增分片配置，当UpgradeType为ADD时生效。
                     */
                    AddShardConfig m_addShardConfig;
                    bool m_addShardConfigHasBeenSet;

                    /**
                     * 扩容分片配置，当UpgradeType为EXPAND时生效。
                     */
                    ExpandShardConfig m_expandShardConfig;
                    bool m_expandShardConfigHasBeenSet;

                    /**
                     * 切分分片配置，当UpgradeType为SPLIT时生效。
                     */
                    SplitShardConfig m_splitShardConfig;
                    bool m_splitShardConfigHasBeenSet;

                    /**
                     * 是否自动使用代金券进行支付，默认不使用。
                     */
                    bool m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 代金券ID列表，目前仅支持指定一张代金券。
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_UPGRADEDCDBINSTANCEREQUEST_H_
