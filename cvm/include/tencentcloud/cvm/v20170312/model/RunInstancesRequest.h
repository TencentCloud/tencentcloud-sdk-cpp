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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RUNINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RUNINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/InstanceChargePrepaid.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/SystemDisk.h>
#include <tencentcloud/cvm/v20170312/model/DataDisk.h>
#include <tencentcloud/cvm/v20170312/model/VirtualPrivateCloud.h>
#include <tencentcloud/cvm/v20170312/model/InternetAccessible.h>
#include <tencentcloud/cvm/v20170312/model/LoginSettings.h>
#include <tencentcloud/cvm/v20170312/model/EnhancedService.h>
#include <tencentcloud/cvm/v20170312/model/ActionTimer.h>
#include <tencentcloud/cvm/v20170312/model/TagSpecification.h>
#include <tencentcloud/cvm/v20170312/model/InstanceMarketOptionsRequest.h>
#include <tencentcloud/cvm/v20170312/model/Metadata.h>
#include <tencentcloud/cvm/v20170312/model/CpuTopology.h>
#include <tencentcloud/cvm/v20170312/model/LaunchTemplate.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RunInstances请求参数结构体
                */
                class RunInstancesRequest : public AbstractModel
                {
                public:
                    RunInstancesRequest();
                    ~RunInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li><br>默认值：POSTPAID_BY_HOUR。</p>
                     * @return InstanceChargeType <p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li><br>默认值：POSTPAID_BY_HOUR。</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li><br>默认值：POSTPAID_BY_HOUR。</p>
                     * @param _instanceChargeType <p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li><br>默认值：POSTPAID_BY_HOUR。</p>
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
                     * 获取<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @return InstanceChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置<p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     * @param _instanceChargePrepaid <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
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
                     * 获取<p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。<br> <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b></p>
                     * @return Placement <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。<br> <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b></p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。<br> <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b></p>
                     * @param _placement <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。<br> <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b></p>
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取<p>实例机型。不同实例机型指定了不同的资源规格。<br><br><li>对于付费模式为PREPAID或POSTPAID_BY_HOUR的实例创建，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。若不指定该参数，则系统将根据当前地域的资源售卖情况动态指定默认机型。</li><br><li>对于付费模式为CDHPAID的实例创建，该参数以&quot;CDH_&quot;为前缀，根据CPU和内存配置生成，具体形式为：CDH_XCXG，例如对于创建CPU为1核，内存为1G大小的专用宿主机的实例，该参数应该为CDH_1C1G。</li></p>
                     * @return InstanceType <p>实例机型。不同实例机型指定了不同的资源规格。<br><br><li>对于付费模式为PREPAID或POSTPAID_BY_HOUR的实例创建，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。若不指定该参数，则系统将根据当前地域的资源售卖情况动态指定默认机型。</li><br><li>对于付费模式为CDHPAID的实例创建，该参数以&quot;CDH_&quot;为前缀，根据CPU和内存配置生成，具体形式为：CDH_XCXG，例如对于创建CPU为1核，内存为1G大小的专用宿主机的实例，该参数应该为CDH_1C1G。</li></p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例机型。不同实例机型指定了不同的资源规格。<br><br><li>对于付费模式为PREPAID或POSTPAID_BY_HOUR的实例创建，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。若不指定该参数，则系统将根据当前地域的资源售卖情况动态指定默认机型。</li><br><li>对于付费模式为CDHPAID的实例创建，该参数以&quot;CDH_&quot;为前缀，根据CPU和内存配置生成，具体形式为：CDH_XCXG，例如对于创建CPU为1核，内存为1G大小的专用宿主机的实例，该参数应该为CDH_1C1G。</li></p>
                     * @param _instanceType <p>实例机型。不同实例机型指定了不同的资源规格。<br><br><li>对于付费模式为PREPAID或POSTPAID_BY_HOUR的实例创建，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。若不指定该参数，则系统将根据当前地域的资源售卖情况动态指定默认机型。</li><br><li>对于付费模式为CDHPAID的实例创建，该参数以&quot;CDH_&quot;为前缀，根据CPU和内存配置生成，具体形式为：CDH_XCXG，例如对于创建CPU为1核，内存为1G大小的专用宿主机的实例，该参数应该为CDH_1C1G。</li></p>
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
                     * 获取<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。镜像类型分为四种：<br><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br>可通过以下方式获取可用的镜像ID：<br><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，传入InstanceType获取当前机型支持的镜像列表，取返回信息中的<code>ImageId</code>字段。</li><br> <b>注：如果您不指定LaunchTemplate参数，则ImageId为必选参数。若同时传递ImageId和LaunchTemplate，则默认覆盖LaunchTemplate中对应的ImageId的值。</b></p>
                     * @return ImageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。镜像类型分为四种：<br><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br>可通过以下方式获取可用的镜像ID：<br><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，传入InstanceType获取当前机型支持的镜像列表，取返回信息中的<code>ImageId</code>字段。</li><br> <b>注：如果您不指定LaunchTemplate参数，则ImageId为必选参数。若同时传递ImageId和LaunchTemplate，则默认覆盖LaunchTemplate中对应的ImageId的值。</b></p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。镜像类型分为四种：<br><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br>可通过以下方式获取可用的镜像ID：<br><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，传入InstanceType获取当前机型支持的镜像列表，取返回信息中的<code>ImageId</code>字段。</li><br> <b>注：如果您不指定LaunchTemplate参数，则ImageId为必选参数。若同时传递ImageId和LaunchTemplate，则默认覆盖LaunchTemplate中对应的ImageId的值。</b></p>
                     * @param _imageId <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。镜像类型分为四种：<br><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br>可通过以下方式获取可用的镜像ID：<br><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，传入InstanceType获取当前机型支持的镜像列表，取返回信息中的<code>ImageId</code>字段。</li><br> <b>注：如果您不指定LaunchTemplate参数，则ImageId为必选参数。若同时传递ImageId和LaunchTemplate，则默认覆盖LaunchTemplate中对应的ImageId的值。</b></p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * @return SystemDisk <p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * 
                     */
                    SystemDisk GetSystemDisk() const;

                    /**
                     * 设置<p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     * @param _systemDisk <p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
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
                     * 获取<p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * @return DataDisks <p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置<p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     * @param _dataDisks <p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
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
                     * 获取<p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。若在此参数中指定了私有网络IP，即表示每个实例的主网卡IP；同时，InstanceCount参数必须与私有网络IP的个数一致且不能大于20。</p>
                     * @return VirtualPrivateCloud <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。若在此参数中指定了私有网络IP，即表示每个实例的主网卡IP；同时，InstanceCount参数必须与私有网络IP的个数一致且不能大于20。</p>
                     * 
                     */
                    VirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置<p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。若在此参数中指定了私有网络IP，即表示每个实例的主网卡IP；同时，InstanceCount参数必须与私有网络IP的个数一致且不能大于20。</p>
                     * @param _virtualPrivateCloud <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。若在此参数中指定了私有网络IP，即表示每个实例的主网卡IP；同时，InstanceCount参数必须与私有网络IP的个数一致且不能大于20。</p>
                     * 
                     */
                    void SetVirtualPrivateCloud(const VirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

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
                     * 获取<p>购买实例数量。包年包月实例取值范围：[1，500]，按量计费实例取值范围：[1，500]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量，具体配额相关限制详见<a href="https://cloud.tencent.com/document/product/213/2664">CVM实例购买限制</a>。</p>
                     * @return InstanceCount <p>购买实例数量。包年包月实例取值范围：[1，500]，按量计费实例取值范围：[1，500]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量，具体配额相关限制详见<a href="https://cloud.tencent.com/document/product/213/2664">CVM实例购买限制</a>。</p>
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置<p>购买实例数量。包年包月实例取值范围：[1，500]，按量计费实例取值范围：[1，500]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量，具体配额相关限制详见<a href="https://cloud.tencent.com/document/product/213/2664">CVM实例购买限制</a>。</p>
                     * @param _instanceCount <p>购买实例数量。包年包月实例取值范围：[1，500]，按量计费实例取值范围：[1，500]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量，具体配额相关限制详见<a href="https://cloud.tencent.com/document/product/213/2664">CVM实例购买限制</a>。</p>
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取<p>指定创建实例的最小数量，取值范围为不大于InstanceCount的正整数。<br>指定最小数量时，承诺最少创建MinCount台实例，并尽量创建InstanceCount台实例。<br>库存不足以满足最小数量时，API 会返回库存不足最小数量的错误信息。<br>仅对支持部分发货的账号、区域和计费模式（包年包月、按量计费、竞价实例、按量包销）生效。</p>
                     * @return MinCount <p>指定创建实例的最小数量，取值范围为不大于InstanceCount的正整数。<br>指定最小数量时，承诺最少创建MinCount台实例，并尽量创建InstanceCount台实例。<br>库存不足以满足最小数量时，API 会返回库存不足最小数量的错误信息。<br>仅对支持部分发货的账号、区域和计费模式（包年包月、按量计费、竞价实例、按量包销）生效。</p>
                     * 
                     */
                    int64_t GetMinCount() const;

                    /**
                     * 设置<p>指定创建实例的最小数量，取值范围为不大于InstanceCount的正整数。<br>指定最小数量时，承诺最少创建MinCount台实例，并尽量创建InstanceCount台实例。<br>库存不足以满足最小数量时，API 会返回库存不足最小数量的错误信息。<br>仅对支持部分发货的账号、区域和计费模式（包年包月、按量计费、竞价实例、按量包销）生效。</p>
                     * @param _minCount <p>指定创建实例的最小数量，取值范围为不大于InstanceCount的正整数。<br>指定最小数量时，承诺最少创建MinCount台实例，并尽量创建InstanceCount台实例。<br>库存不足以满足最小数量时，API 会返回库存不足最小数量的错误信息。<br>仅对支持部分发货的账号、区域和计费模式（包年包月、按量计费、竞价实例、按量包销）生效。</p>
                     * 
                     */
                    void SetMinCount(const int64_t& _minCount);

                    /**
                     * 判断参数 MinCount 是否已赋值
                     * @return MinCount 是否已赋值
                     * 
                     */
                    bool MinCountHasBeenSet() const;

                    /**
                     * 获取<p>实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持128个字符（含模式串）。</li><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例显示名称为 server_3；购买2台时，实例显示名称分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例显示名称为 server_003、server_004。；若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例显示名称为 app_99、app_100。</li><li>模式串需严格遵循 {R:x,F:y}或 {R:x}格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例显示名称添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     * @return InstanceName <p>实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持128个字符（含模式串）。</li><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例显示名称为 server_3；购买2台时，实例显示名称分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例显示名称为 server_003、server_004。；若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例显示名称为 app_99、app_100。</li><li>模式串需严格遵循 {R:x,F:y}或 {R:x}格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例显示名称添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持128个字符（含模式串）。</li><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例显示名称为 server_3；购买2台时，实例显示名称分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例显示名称为 server_003、server_004。；若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例显示名称为 app_99、app_100。</li><li>模式串需严格遵循 {R:x,F:y}或 {R:x}格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例显示名称添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     * @param _instanceName <p>实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持128个字符（含模式串）。</li><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例显示名称为 server_3；购买2台时，实例显示名称分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例显示名称为 server_003、server_004。；若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例显示名称为 app_99、app_100。</li><li>模式串需严格遵循 {R:x,F:y}或 {R:x}格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例显示名称添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     * @return LoginSettings <p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     * @param _loginSettings <p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取<p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p>
                     * @return SecurityGroupIds <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p>
                     * @param _securityGroupIds <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认公共镜像开启云监控、云安全服务；自定义镜像与镜像市场镜像默认不开启云监控，云安全服务，而使用镜像里保留的服务。</p>
                     * @return EnhancedService <p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认公共镜像开启云监控、云安全服务；自定义镜像与镜像市场镜像默认不开启云监控，云安全服务，而使用镜像里保留的服务。</p>
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置<p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认公共镜像开启云监控、云安全服务；自定义镜像与镜像市场镜像默认不开启云监控，云安全服务，而使用镜像里保留的服务。</p>
                     * @param _enhancedService <p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认公共镜像开启云监控、云安全服务；自定义镜像与镜像市场镜像默认不开启云监控，云安全服务，而使用镜像里保留的服务。</p>
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例主机名为 server_3；购买2台时，实例主机名分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例主机名为 server_003、server_004。若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例主机名为 app_99、app_100。</li><li>指定模式串 {IP}：自动替换为实例的内网IP地址。例如：输入 node-{IP}，实例主机名为 node-10.0.12.8；支持与序号模式串混合使用，例如：输入 web-{IP}-{R:1}，购买2台时，实例主机名分别为 web-10.0.12.8-1、web-10.0.12.9-2。</li><li>模式串需严格遵循 {R:x,F:y}、{R:x} 或 {IP} 格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例主机名添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     * @return HostName <p>实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例主机名为 server_3；购买2台时，实例主机名分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例主机名为 server_003、server_004。若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例主机名为 app_99、app_100。</li><li>指定模式串 {IP}：自动替换为实例的内网IP地址。例如：输入 node-{IP}，实例主机名为 node-10.0.12.8；支持与序号模式串混合使用，例如：输入 web-{IP}-{R:1}，购买2台时，实例主机名分别为 web-10.0.12.8-1、web-10.0.12.9-2。</li><li>模式串需严格遵循 {R:x,F:y}、{R:x} 或 {IP} 格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例主机名添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例主机名为 server_3；购买2台时，实例主机名分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例主机名为 server_003、server_004。若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例主机名为 app_99、app_100。</li><li>指定模式串 {IP}：自动替换为实例的内网IP地址。例如：输入 node-{IP}，实例主机名为 node-10.0.12.8；支持与序号模式串混合使用，例如：输入 web-{IP}-{R:1}，购买2台时，实例主机名分别为 web-10.0.12.8-1、web-10.0.12.9-2。</li><li>模式串需严格遵循 {R:x,F:y}、{R:x} 或 {IP} 格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例主机名添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     * @param _hostName <p>实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例主机名为 server_3；购买2台时，实例主机名分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例主机名为 server_003、server_004。若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例主机名为 app_99、app_100。</li><li>指定模式串 {IP}：自动替换为实例的内网IP地址。例如：输入 node-{IP}，实例主机名为 node-10.0.12.8；支持与序号模式串混合使用，例如：输入 web-{IP}-{R:1}，购买2台时，实例主机名分别为 web-10.0.12.8-1、web-10.0.12.9-2。</li><li>模式串需严格遵循 {R:x,F:y}、{R:x} 或 {IP} 格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例主机名添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。</p>
                     * @return ActionTimer <p>定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。</p>
                     * 
                     */
                    ActionTimer GetActionTimer() const;

                    /**
                     * 设置<p>定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。</p>
                     * @param _actionTimer <p>定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。</p>
                     * 
                     */
                    void SetActionTimer(const ActionTimer& _actionTimer);

                    /**
                     * 判断参数 ActionTimer 是否已赋值
                     * @return ActionTimer 是否已赋值
                     * 
                     */
                    bool ActionTimerHasBeenSet() const;

                    /**
                     * 获取<p>置放群组id，仅支持指定一个。</p>
                     * @return DisasterRecoverGroupIds <p>置放群组id，仅支持指定一个。</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>置放群组id，仅支持指定一个。</p>
                     * @param _disasterRecoverGroupIds <p>置放群组id，仅支持指定一个。</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。</p>
                     * @return TagSpecification <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。</p>
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置<p>标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。</p>
                     * @param _tagSpecification <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。</p>
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取<p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费但没有传递该参数时，默认按当前固定折扣价格出价。</p>
                     * @return InstanceMarketOptions <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费但没有传递该参数时，默认按当前固定折扣价格出价。</p>
                     * 
                     */
                    InstanceMarketOptionsRequest GetInstanceMarketOptions() const;

                    /**
                     * 设置<p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费但没有传递该参数时，默认按当前固定折扣价格出价。</p>
                     * @param _instanceMarketOptions <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费但没有传递该参数时，默认按当前固定折扣价格出价。</p>
                     * 
                     */
                    void SetInstanceMarketOptions(const InstanceMarketOptionsRequest& _instanceMarketOptions);

                    /**
                     * 判断参数 InstanceMarketOptions 是否已赋值
                     * @return InstanceMarketOptions 是否已赋值
                     * 
                     */
                    bool InstanceMarketOptionsHasBeenSet() const;

                    /**
                     * 获取<p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。关于获取此参数的详细介绍，请参阅<a href="https://cloud.tencent.com/document/product/213/17526">Windows</a>和<a href="https://cloud.tencent.com/document/product/213/17525">Linux</a>启动时运行命令。</p>
                     * @return UserData <p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。关于获取此参数的详细介绍，请参阅<a href="https://cloud.tencent.com/document/product/213/17526">Windows</a>和<a href="https://cloud.tencent.com/document/product/213/17525">Linux</a>启动时运行命令。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。关于获取此参数的详细介绍，请参阅<a href="https://cloud.tencent.com/document/product/213/17526">Windows</a>和<a href="https://cloud.tencent.com/document/product/213/17525">Linux</a>启动时运行命令。</p>
                     * @param _userData <p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。关于获取此参数的详细介绍，请参阅<a href="https://cloud.tencent.com/document/product/213/17526">Windows</a>和<a href="https://cloud.tencent.com/document/product/213/17525">Linux</a>启动时运行命令。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>自定义metadata，支持创建 CVM 时添加自定义元数据键值对。<br><strong>注：内测中</strong>。</p>
                     * @return Metadata <p>自定义metadata，支持创建 CVM 时添加自定义元数据键值对。<br><strong>注：内测中</strong>。</p>
                     * 
                     */
                    Metadata GetMetadata() const;

                    /**
                     * 设置<p>自定义metadata，支持创建 CVM 时添加自定义元数据键值对。<br><strong>注：内测中</strong>。</p>
                     * @param _metadata <p>自定义metadata，支持创建 CVM 时添加自定义元数据键值对。<br><strong>注：内测中</strong>。</p>
                     * 
                     */
                    void SetMetadata(const Metadata& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     * @return DryRun <p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     * @param _dryRun <p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取<p>描述了实例CPU拓扑结构的相关信息。若不指定该参数，则按系统资源情况决定。</p>
                     * @return CpuTopology <p>描述了实例CPU拓扑结构的相关信息。若不指定该参数，则按系统资源情况决定。</p>
                     * 
                     */
                    CpuTopology GetCpuTopology() const;

                    /**
                     * 设置<p>描述了实例CPU拓扑结构的相关信息。若不指定该参数，则按系统资源情况决定。</p>
                     * @param _cpuTopology <p>描述了实例CPU拓扑结构的相关信息。若不指定该参数，则按系统资源情况决定。</p>
                     * 
                     */
                    void SetCpuTopology(const CpuTopology& _cpuTopology);

                    /**
                     * 判断参数 CpuTopology 是否已赋值
                     * @return CpuTopology 是否已赋值
                     * 
                     */
                    bool CpuTopologyHasBeenSet() const;

                    /**
                     * 获取<p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>接口返回值中的<code>RoleName</code>获取。</p>
                     * @return CamRoleName <p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>接口返回值中的<code>RoleName</code>获取。</p>
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置<p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>接口返回值中的<code>RoleName</code>获取。</p>
                     * @param _camRoleName <p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>接口返回值中的<code>RoleName</code>获取。</p>
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取<p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     * @return HpcClusterId <p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置<p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     * @param _hpcClusterId <p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>实例启动模板。</p>
                     * @return LaunchTemplate <p>实例启动模板。</p>
                     * 
                     */
                    LaunchTemplate GetLaunchTemplate() const;

                    /**
                     * 设置<p>实例启动模板。</p>
                     * @param _launchTemplate <p>实例启动模板。</p>
                     * 
                     */
                    void SetLaunchTemplate(const LaunchTemplate& _launchTemplate);

                    /**
                     * 判断参数 LaunchTemplate 是否已赋值
                     * @return LaunchTemplate 是否已赋值
                     * 
                     */
                    bool LaunchTemplateHasBeenSet() const;

                    /**
                     * 获取<p>指定专用集群创建。</p>
                     * @return DedicatedClusterId <p>指定专用集群创建。</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>指定专用集群创建。</p>
                     * @param _dedicatedClusterId <p>指定专用集群创建。</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>指定CHC物理服务器来创建CHC云主机。</p>
                     * @return ChcIds <p>指定CHC物理服务器来创建CHC云主机。</p>
                     * 
                     */
                    std::vector<std::string> GetChcIds() const;

                    /**
                     * 设置<p>指定CHC物理服务器来创建CHC云主机。</p>
                     * @param _chcIds <p>指定CHC物理服务器来创建CHC云主机。</p>
                     * 
                     */
                    void SetChcIds(const std::vector<std::string>& _chcIds);

                    /**
                     * 判断参数 ChcIds 是否已赋值
                     * @return ChcIds 是否已赋值
                     * 
                     */
                    bool ChcIdsHasBeenSet() const;

                    /**
                     * 获取<p>分区置放群组的分区序号，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机。(功能灰度中)</p>
                     * @return PartitionNumber <p>分区置放群组的分区序号，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机。(功能灰度中)</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>分区置放群组的分区序号，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机。(功能灰度中)</p>
                     * @param _partitionNumber <p>分区置放群组的分区序号，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机。(功能灰度中)</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                    /**
                     * 获取<p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><br><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br><br>默认取值：false。</p>
                     * @return DisableApiTermination <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><br><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br><br>默认取值：false。</p>
                     * 
                     */
                    bool GetDisableApiTermination() const;

                    /**
                     * 设置<p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><br><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br><br>默认取值：false。</p>
                     * @param _disableApiTermination <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><br><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br><br>默认取值：false。</p>
                     * 
                     */
                    void SetDisableApiTermination(const bool& _disableApiTermination);

                    /**
                     * 判断参数 DisableApiTermination 是否已赋值
                     * @return DisableApiTermination 是否已赋值
                     * 
                     */
                    bool DisableApiTerminationHasBeenSet() const;

                    /**
                     * 获取<p>实例是否开启巨型帧，取值范围：<br>&lt;li/&gt; true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。<br>&lt;li/&gt;false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br> 支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></p>
                     * @return EnableJumboFrame <p>实例是否开启巨型帧，取值范围：<br>&lt;li/&gt; true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。<br>&lt;li/&gt;false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br> 支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></p>
                     * 
                     */
                    bool GetEnableJumboFrame() const;

                    /**
                     * 设置<p>实例是否开启巨型帧，取值范围：<br>&lt;li/&gt; true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。<br>&lt;li/&gt;false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br> 支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></p>
                     * @param _enableJumboFrame <p>实例是否开启巨型帧，取值范围：<br>&lt;li/&gt; true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。<br>&lt;li/&gt;false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br> 支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></p>
                     * 
                     */
                    void SetEnableJumboFrame(const bool& _enableJumboFrame);

                    /**
                     * 判断参数 EnableJumboFrame 是否已赋值
                     * @return EnableJumboFrame 是否已赋值
                     * 
                     */
                    bool EnableJumboFrameHasBeenSet() const;

                private:

                    /**
                     * <p>实例<a href="https://cloud.tencent.com/document/product/213/2180">计费类型</a>。<br><li>PREPAID：预付费，即包年包月</li><br><li>POSTPAID_BY_HOUR：按小时后付费</li><br><li>CDHPAID：独享子机（基于专用宿主机创建，宿主机部分的资源不收费）</li><br><li>SPOTPAID：竞价付费</li><br><li>CDCPAID：专用集群付费</li><br>默认值：POSTPAID_BY_HOUR。</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。</p>
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。<br> <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b></p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>实例机型。不同实例机型指定了不同的资源规格。<br><br><li>对于付费模式为PREPAID或POSTPAID_BY_HOUR的实例创建，具体取值可通过调用接口<a href="https://cloud.tencent.com/document/api/213/15749">DescribeInstanceTypeConfigs</a>来获得最新的规格表或参见<a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a>描述。若不指定该参数，则系统将根据当前地域的资源售卖情况动态指定默认机型。</li><br><li>对于付费模式为CDHPAID的实例创建，该参数以&quot;CDH_&quot;为前缀，根据CPU和内存配置生成，具体形式为：CDH_XCXG，例如对于创建CPU为1核，内存为1G大小的专用宿主机的实例，该参数应该为CDH_1C1G。</li></p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>指定有效的<a href="https://cloud.tencent.com/document/product/213/4940">镜像</a>ID，格式形如<code>img-xxx</code>。镜像类型分为四种：<br><li>公共镜像</li><li>自定义镜像</li><li>共享镜像</li><li>服务市场镜像</li><br>可通过以下方式获取可用的镜像ID：<br><li><code>公共镜像</code>、<code>自定义镜像</code>、<code>共享镜像</code>的镜像ID可通过登录<a href="https://console.cloud.tencent.com/cvm/image?rid=1&amp;imageType=PUBLIC_IMAGE">控制台</a>查询；<code>服务镜像市场</code>的镜像ID可通过<a href="https://market.cloud.tencent.com/list">云市场</a>查询。</li><li>通过调用接口 <a href="https://cloud.tencent.com/document/api/213/15715">DescribeImages</a> ，传入InstanceType获取当前机型支持的镜像列表，取返回信息中的<code>ImageId</code>字段。</li><br> <b>注：如果您不指定LaunchTemplate参数，则ImageId为必选参数。若同时传递ImageId和LaunchTemplate，则默认覆盖LaunchTemplate中对应的ImageId的值。</b></p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>实例系统盘配置信息。若不指定该参数，则按照系统默认值进行分配。</p>
                     */
                    SystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * <p>实例数据盘配置信息。若不指定该参数，则默认不购买数据盘。支持购买的时候指定21块数据盘，其中最多包含1块LOCAL_BASIC数据盘或者LOCAL_SSD数据盘，最多包含20块CLOUD_BASIC数据盘、CLOUD_PREMIUM数据盘或者CLOUD_SSD数据盘。</p>
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。若在此参数中指定了私有网络IP，即表示每个实例的主网卡IP；同时，InstanceCount参数必须与私有网络IP的个数一致且不能大于20。</p>
                     */
                    VirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * <p>公网带宽相关信息设置。若不指定该参数，则默认公网带宽为0Mbps。</p>
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * <p>购买实例数量。包年包月实例取值范围：[1，500]，按量计费实例取值范围：[1，500]。默认取值：1。指定购买实例的数量不能超过用户所能购买的剩余配额数量，具体配额相关限制详见<a href="https://cloud.tencent.com/document/product/213/2664">CVM实例购买限制</a>。</p>
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * <p>指定创建实例的最小数量，取值范围为不大于InstanceCount的正整数。<br>指定最小数量时，承诺最少创建MinCount台实例，并尽量创建InstanceCount台实例。<br>库存不足以满足最小数量时，API 会返回库存不足最小数量的错误信息。<br>仅对支持部分发货的账号、区域和计费模式（包年包月、按量计费、竞价实例、按量包销）生效。</p>
                     */
                    int64_t m_minCount;
                    bool m_minCountHasBeenSet;

                    /**
                     * <p>实例显示名称。<br><li>不指定实例显示名称则默认显示‘未命名’。</li><li>最多支持128个字符（含模式串）。</li><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例显示名称为 server_3；购买2台时，实例显示名称分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例显示名称为 server_003、server_004。；若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例显示名称为 app_99、app_100。</li><li>模式串需严格遵循 {R:x,F:y}或 {R:x}格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例显示名称添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例登录设置。通过该参数可以设置实例的登录方式密码、密钥或保持镜像的原始登录设置。默认情况下会随机生成密码，并以站内信方式知会到用户。</p>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>实例所属安全组。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的 <code>SecurityGroupId</code> 字段来获取。若不指定该参数，则绑定指定项目下的默认安全组，如默认安全组不存在则将自动创建。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>增强服务。通过该参数可以指定是否开启云安全、云监控等服务。若不指定该参数，则默认公共镜像开启云监控、云安全服务；自定义镜像与镜像市场镜像默认不开启云监控，云安全服务，而使用镜像里保留的服务。</p>
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例时：</p><ul><li>指定模式串  {R:x}：表示生成数字序列 [x, x+n-1]，其中 n为购买实例的数量。例如：输入 server_{R:3}，购买1台时，实例主机名为 server_3；购买2台时，实例主机名分别为 server_3、server_4。</li><li>指定模式串  {R:x,F:y}：y表示固定位数（可选），取值范围为 [0,8]，默认值 0表示不固定位数（等效于 {R:x}）。不足位时自动补零，例如：输入server_{R:3,F:3}，购买2台时，实例主机名为 server_003、server_004。若数字位数超过 y（如 {R:99,F:2}），以实际位数为准，例如：app_{R:99,F:2}，购买2台时，实例主机名为 app_99、app_100。</li><li>指定模式串 {IP}：自动替换为实例的内网IP地址。例如：输入 node-{IP}，实例主机名为 node-10.0.12.8；支持与序号模式串混合使用，例如：输入 web-{IP}-{R:1}，购买2台时，实例主机名分别为 web-10.0.12.8-1、web-10.0.12.9-2。</li><li>模式串需严格遵循 {R:x,F:y}、{R:x} 或 {IP} 格式，无效格式（如 {}）视为普通文本。支持多个模式串。</li><li>未指定模式串：实例主机名添加后缀 1、2...n，其中n表示购买实例的数量，例如 server_购买2台时生成 server_1、server_2。</li></li></ul>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>定时任务。通过该参数可以为实例指定定时任务，目前仅支持定时销毁。</p>
                     */
                    ActionTimer m_actionTimer;
                    bool m_actionTimerHasBeenSet;

                    /**
                     * <p>置放群组id，仅支持指定一个。</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的云服务器、云硬盘实例。</p>
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * <p>实例的市场相关选项，如竞价实例相关参数，若指定实例的付费模式为竞价付费但没有传递该参数时，默认按当前固定折扣价格出价。</p>
                     */
                    InstanceMarketOptionsRequest m_instanceMarketOptions;
                    bool m_instanceMarketOptionsHasBeenSet;

                    /**
                     * <p>提供给实例使用的用户数据，需要以 base64 方式编码，支持的最大数据大小为 16KB。关于获取此参数的详细介绍，请参阅<a href="https://cloud.tencent.com/document/product/213/17526">Windows</a>和<a href="https://cloud.tencent.com/document/product/213/17525">Linux</a>启动时运行命令。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>自定义metadata，支持创建 CVM 时添加自定义元数据键值对。<br><strong>注：内测中</strong>。</p>
                     */
                    Metadata m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>是否只预检此次请求。<br>true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制和云服务器库存。<br>如果检查不通过，则返回对应错误码；<br>如果检查通过，则返回RequestId.<br>false（默认）：发送正常请求，通过检查后直接创建实例</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>描述了实例CPU拓扑结构的相关信息。若不指定该参数，则按系统资源情况决定。</p>
                     */
                    CpuTopology m_cpuTopology;
                    bool m_cpuTopologyHasBeenSet;

                    /**
                     * <p>CAM角色名称。可通过<a href="https://cloud.tencent.com/document/product/598/36223"> DescribeRoleList </a>接口返回值中的<code>RoleName</code>获取。</p>
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * <p>高性能计算集群ID。若创建的实例为高性能计算实例，需指定实例放置的集群，否则不可指定。</p>
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * <p>实例启动模板。</p>
                     */
                    LaunchTemplate m_launchTemplate;
                    bool m_launchTemplateHasBeenSet;

                    /**
                     * <p>指定专用集群创建。</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>指定CHC物理服务器来创建CHC云主机。</p>
                     */
                    std::vector<std::string> m_chcIds;
                    bool m_chcIdsHasBeenSet;

                    /**
                     * <p>分区置放群组的分区序号，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机。(功能灰度中)</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                    /**
                     * <p>实例销毁保护标志，表示是否允许通过api接口删除实例。取值范围：<br><li>true：表示开启实例保护，不允许通过api接口删除实例</li><br><li>false：表示关闭实例保护，允许通过api接口删除实例</li><br><br>默认取值：false。</p>
                     */
                    bool m_disableApiTermination;
                    bool m_disableApiTerminationHasBeenSet;

                    /**
                     * <p>实例是否开启巨型帧，取值范围：<br>&lt;li/&gt; true：表示实例开启巨型帧，只有支持巨型帧的机型可设置为true。<br>&lt;li/&gt;false：表示实例关闭巨型帧，只有支持巨型帧的机型可设置为false。<br> 支持巨型帧的实例规格： <a href="https://cloud.tencent.com/document/product/213/11518">实例规格</a></p>
                     */
                    bool m_enableJumboFrame;
                    bool m_enableJumboFrameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RUNINSTANCESREQUEST_H_
