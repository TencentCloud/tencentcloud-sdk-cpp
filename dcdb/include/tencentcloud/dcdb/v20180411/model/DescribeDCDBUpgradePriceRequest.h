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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBUPGRADEPRICEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBUPGRADEPRICEREQUEST_H_

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
                * DescribeDCDBUpgradePrice请求参数结构体
                */
                class DescribeDCDBUpgradePriceRequest : public AbstractModel
                {
                public:
                    DescribeDCDBUpgradePriceRequest();
                    ~DescribeDCDBUpgradePriceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @return InstanceId 待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @param _instanceId 待升级的实例ID。形如：dcdbt-ow728lmc，可以通过 DescribeDCDBInstances 查询实例详情获得。
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
                     * 获取升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * @return UpgradeType 升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
                     * @param _upgradeType 升级类型，取值范围: 
<li> ADD: 新增分片 </li> 
 <li> EXPAND: 升级实例中的已有分片 </li> 
 <li> SPLIT: 将已有分片中的数据切分到新增分片上</li>
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
                     * 获取新增分片配置，当UpgradeType为ADD时生效。
                     * @return AddShardConfig 新增分片配置，当UpgradeType为ADD时生效。
                     * 
                     */
                    AddShardConfig GetAddShardConfig() const;

                    /**
                     * 设置新增分片配置，当UpgradeType为ADD时生效。
                     * @param _addShardConfig 新增分片配置，当UpgradeType为ADD时生效。
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
                     * 获取扩容分片配置，当UpgradeType为EXPAND时生效。
                     * @return ExpandShardConfig 扩容分片配置，当UpgradeType为EXPAND时生效。
                     * 
                     */
                    ExpandShardConfig GetExpandShardConfig() const;

                    /**
                     * 设置扩容分片配置，当UpgradeType为EXPAND时生效。
                     * @param _expandShardConfig 扩容分片配置，当UpgradeType为EXPAND时生效。
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
                     * 获取切分分片配置，当UpgradeType为SPLIT时生效。
                     * @return SplitShardConfig 切分分片配置，当UpgradeType为SPLIT时生效。
                     * 
                     */
                    SplitShardConfig GetSplitShardConfig() const;

                    /**
                     * 设置切分分片配置，当UpgradeType为SPLIT时生效。
                     * @param _splitShardConfig 切分分片配置，当UpgradeType为SPLIT时生效。
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
                     * 获取价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * @return AmountUnit 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * 
                     */
                    std::string GetAmountUnit() const;

                    /**
                     * 设置价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * @param _amountUnit 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     * 
                     */
                    void SetAmountUnit(const std::string& _amountUnit);

                    /**
                     * 判断参数 AmountUnit 是否已赋值
                     * @return AmountUnit 是否已赋值
                     * 
                     */
                    bool AmountUnitHasBeenSet() const;

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
                     * 价格金额单位，不传默认单位为分，取值：  
* pent：分
* microPent：微分
                     */
                    std::string m_amountUnit;
                    bool m_amountUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBUPGRADEPRICEREQUEST_H_
