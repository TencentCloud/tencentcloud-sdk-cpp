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

#ifndef TENCENTCLOUD_THPC_V20211109_MODEL_MANAGERNODE_H_
#define TENCENTCLOUD_THPC_V20211109_MODEL_MANAGERNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20211109/model/InstanceChargePrepaid.h>
#include <tencentcloud/thpc/v20211109/model/SystemDisk.h>
#include <tencentcloud/thpc/v20211109/model/DataDisk.h>
#include <tencentcloud/thpc/v20211109/model/InternetAccessible.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20211109
        {
            namespace Model
            {
                /**
                * 管控节点信息
                */
                class ManagerNode : public AbstractModel
                {
                public:
                    ManagerNode();
                    ~ManagerNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。</p>枚举值：<ul><li> PREPAID： 预付费，即包年包月</li><li> POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * @return InstanceChargeType <p>节点<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。</p>枚举值：<ul><li> PREPAID： 预付费，即包年包月</li><li> POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>节点<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。</p>枚举值：<ul><li> PREPAID： 预付费，即包年包月</li><li> POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * @param _instanceChargeType <p>节点<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。</p>枚举值：<ul><li> PREPAID： 预付费，即包年包月</li><li> POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。</p>
                     * @return InstanceChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。</p>
                     * @param _instanceChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取<p>节点机型。不同实例机型指定了不同的资源规格。 <br><li>具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。</li>   </p>
                     * @return InstanceType <p>节点机型。不同实例机型指定了不同的资源规格。 <br><li>具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。</li>   </p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>节点机型。不同实例机型指定了不同的资源规格。 <br><li>具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。</li>   </p>
                     * @param _instanceType <p>节点机型。不同实例机型指定了不同的资源规格。 <br><li>具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。</li>   </p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * @return SystemDisk <p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * @param _systemDisk <p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * 
                     */
                    void SetSystemDisk(const SystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取<p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * @return DataDisks <p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * @param _dataDisks <p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * @return InternetAccessible <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置<p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * @param _internetAccessible <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取<p>节点显示名称。<br><li> 不指定节点显示名称则默认显示‘未命名’。 </li><li>购买多个节点，如果指定模式串<code>{R:x}</code>，表示生成数字[<code>[x, x+n-1]</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_{R:3}</code>，购买1个时，节点显示名称为<code>server_3</code>；购买2个时，节点显示名称分别为<code>server_3</code>，<code>server_4</code>。支持指定多个模式串<code>{R:x}</code>。 购买多个节点，如果不指定模式串，则在节点显示名称添加后缀<code>1、2...n</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_</code>，购买2个时，节点显示名称分别为<code>server_1</code>，<code>server_2</code>。</li><li> 最多支持60个字符（包含模式串）。</li></p>
                     * @return InstanceName <p>节点显示名称。<br><li> 不指定节点显示名称则默认显示‘未命名’。 </li><li>购买多个节点，如果指定模式串<code>{R:x}</code>，表示生成数字[<code>[x, x+n-1]</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_{R:3}</code>，购买1个时，节点显示名称为<code>server_3</code>；购买2个时，节点显示名称分别为<code>server_3</code>，<code>server_4</code>。支持指定多个模式串<code>{R:x}</code>。 购买多个节点，如果不指定模式串，则在节点显示名称添加后缀<code>1、2...n</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_</code>，购买2个时，节点显示名称分别为<code>server_1</code>，<code>server_2</code>。</li><li> 最多支持60个字符（包含模式串）。</li></p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>节点显示名称。<br><li> 不指定节点显示名称则默认显示‘未命名’。 </li><li>购买多个节点，如果指定模式串<code>{R:x}</code>，表示生成数字[<code>[x, x+n-1]</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_{R:3}</code>，购买1个时，节点显示名称为<code>server_3</code>；购买2个时，节点显示名称分别为<code>server_3</code>，<code>server_4</code>。支持指定多个模式串<code>{R:x}</code>。 购买多个节点，如果不指定模式串，则在节点显示名称添加后缀<code>1、2...n</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_</code>，购买2个时，节点显示名称分别为<code>server_1</code>，<code>server_2</code>。</li><li> 最多支持60个字符（包含模式串）。</li></p>
                     * @param _instanceName <p>节点显示名称。<br><li> 不指定节点显示名称则默认显示‘未命名’。 </li><li>购买多个节点，如果指定模式串<code>{R:x}</code>，表示生成数字[<code>[x, x+n-1]</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_{R:3}</code>，购买1个时，节点显示名称为<code>server_3</code>；购买2个时，节点显示名称分别为<code>server_3</code>，<code>server_4</code>。支持指定多个模式串<code>{R:x}</code>。 购买多个节点，如果不指定模式串，则在节点显示名称添加后缀<code>1、2...n</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_</code>，购买2个时，节点显示名称分别为<code>server_1</code>，<code>server_2</code>。</li><li> 最多支持60个字符（包含模式串）。</li></p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                private:

                    /**
                     * <p>节点<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。</p>枚举值：<ul><li> PREPAID： 预付费，即包年包月</li><li> POSTPAID_BY_HOUR： 按小时后付费</li></ul>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月节点的购买时长、是否设置自动续费等属性。若指定节点的付费模式为预付费则该参数必传。</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>节点机型。不同实例机型指定了不同的资源规格。 <br><li>具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。</li>   </p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>节点系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>节点数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>节点显示名称。<br><li> 不指定节点显示名称则默认显示‘未命名’。 </li><li>购买多个节点，如果指定模式串<code>{R:x}</code>，表示生成数字[<code>[x, x+n-1]</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_{R:3}</code>，购买1个时，节点显示名称为<code>server_3</code>；购买2个时，节点显示名称分别为<code>server_3</code>，<code>server_4</code>。支持指定多个模式串<code>{R:x}</code>。 购买多个节点，如果不指定模式串，则在节点显示名称添加后缀<code>1、2...n</code>，其中<code>n</code>表示购买节点的数量，例如<code>server_</code>，购买2个时，节点显示名称分别为<code>server_1</code>，<code>server_2</code>。</li><li> 最多支持60个字符（包含模式串）。</li></p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20211109_MODEL_MANAGERNODE_H_
