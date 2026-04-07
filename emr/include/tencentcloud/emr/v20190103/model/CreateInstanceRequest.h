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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/LoginSettings.h>
#include <tencentcloud/emr/v20190103/model/VPCSettings.h>
#include <tencentcloud/emr/v20190103/model/NewResourceSpec.h>
#include <tencentcloud/emr/v20190103/model/COSSettings.h>
#include <tencentcloud/emr/v20190103/model/Placement.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/CustomMetaInfo.h>
#include <tencentcloud/emr/v20190103/model/ExternalService.h>
#include <tencentcloud/emr/v20190103/model/MultiZoneSetting.h>
#include <tencentcloud/emr/v20190103/model/NodeMark.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品ID，不同产品ID表示不同的EMR产品版本。取值范围：<br>51:表示STARROCKS-V1.4.0<br>54:表示STARROCKS-V2.0.0<br>27:表示KAFKA-V1.0.0<br>50:表示KAFKA-V2.0.0<br>16:表示EMR-V2.3.0<br>20:表示EMR-V2.5.0<br>30:表示EMR-V2.6.0<br>38:表示EMR-V2.7.0<br>25:表示EMR-V3.1.0<br>33:表示EMR-V3.2.1<br>34:表示EMR-V3.3.0<br>37:表示EMR-V3.4.0<br>44:表示EMR-V3.5.0<br>53:表示EMR-V3.6.0<br>58:表示EMR-3.6.1<br>59:表示EMR-serverless-1.0.0<br>60:表示EMR-TKE-1.1.0<br>61:表示SR-V2.1.0<br>62:表示SR-V2.1.0-SharedData<br>63:表示SR-V2.1.0.tlinux<br>64:表示统一元数据管理项目<br>65:表示EMR-TKE-AI-1.0.0<br>66:表示RSS-1.0.0<br>67:表示SR-V2.2.0<br>68:表示SR-V2.2.0.tlinux<br>69:表示EMR-AI-1.1.0<br>70:表示SR-V2.2.1<br>71:表示EMR-3.7.0<br>72:表示EMR-serverless-1.0.1<br>73:表示KAFKA-2.0.1<br>74:表示SR-V2.2.2<br>75:表示EMR-TKE-AI-1.1.0<br>76:表示EMR-V3.7.1<br>77:表示SERVERLESS-TCBASE-1.0.0<br>78:表示EMR-V3.6.2<br>79:表示STARROCKS-V2.2.2<br>80:表示EMR-AI-V1.1.1</p>
                     * @return ProductId <p>产品ID，不同产品ID表示不同的EMR产品版本。取值范围：<br>51:表示STARROCKS-V1.4.0<br>54:表示STARROCKS-V2.0.0<br>27:表示KAFKA-V1.0.0<br>50:表示KAFKA-V2.0.0<br>16:表示EMR-V2.3.0<br>20:表示EMR-V2.5.0<br>30:表示EMR-V2.6.0<br>38:表示EMR-V2.7.0<br>25:表示EMR-V3.1.0<br>33:表示EMR-V3.2.1<br>34:表示EMR-V3.3.0<br>37:表示EMR-V3.4.0<br>44:表示EMR-V3.5.0<br>53:表示EMR-V3.6.0<br>58:表示EMR-3.6.1<br>59:表示EMR-serverless-1.0.0<br>60:表示EMR-TKE-1.1.0<br>61:表示SR-V2.1.0<br>62:表示SR-V2.1.0-SharedData<br>63:表示SR-V2.1.0.tlinux<br>64:表示统一元数据管理项目<br>65:表示EMR-TKE-AI-1.0.0<br>66:表示RSS-1.0.0<br>67:表示SR-V2.2.0<br>68:表示SR-V2.2.0.tlinux<br>69:表示EMR-AI-1.1.0<br>70:表示SR-V2.2.1<br>71:表示EMR-3.7.0<br>72:表示EMR-serverless-1.0.1<br>73:表示KAFKA-2.0.1<br>74:表示SR-V2.2.2<br>75:表示EMR-TKE-AI-1.1.0<br>76:表示EMR-V3.7.1<br>77:表示SERVERLESS-TCBASE-1.0.0<br>78:表示EMR-V3.6.2<br>79:表示STARROCKS-V2.2.2<br>80:表示EMR-AI-V1.1.1</p>
                     * 
                     */
                    uint64_t GetProductId() const;

                    /**
                     * 设置<p>产品ID，不同产品ID表示不同的EMR产品版本。取值范围：<br>51:表示STARROCKS-V1.4.0<br>54:表示STARROCKS-V2.0.0<br>27:表示KAFKA-V1.0.0<br>50:表示KAFKA-V2.0.0<br>16:表示EMR-V2.3.0<br>20:表示EMR-V2.5.0<br>30:表示EMR-V2.6.0<br>38:表示EMR-V2.7.0<br>25:表示EMR-V3.1.0<br>33:表示EMR-V3.2.1<br>34:表示EMR-V3.3.0<br>37:表示EMR-V3.4.0<br>44:表示EMR-V3.5.0<br>53:表示EMR-V3.6.0<br>58:表示EMR-3.6.1<br>59:表示EMR-serverless-1.0.0<br>60:表示EMR-TKE-1.1.0<br>61:表示SR-V2.1.0<br>62:表示SR-V2.1.0-SharedData<br>63:表示SR-V2.1.0.tlinux<br>64:表示统一元数据管理项目<br>65:表示EMR-TKE-AI-1.0.0<br>66:表示RSS-1.0.0<br>67:表示SR-V2.2.0<br>68:表示SR-V2.2.0.tlinux<br>69:表示EMR-AI-1.1.0<br>70:表示SR-V2.2.1<br>71:表示EMR-3.7.0<br>72:表示EMR-serverless-1.0.1<br>73:表示KAFKA-2.0.1<br>74:表示SR-V2.2.2<br>75:表示EMR-TKE-AI-1.1.0<br>76:表示EMR-V3.7.1<br>77:表示SERVERLESS-TCBASE-1.0.0<br>78:表示EMR-V3.6.2<br>79:表示STARROCKS-V2.2.2<br>80:表示EMR-AI-V1.1.1</p>
                     * @param _productId <p>产品ID，不同产品ID表示不同的EMR产品版本。取值范围：<br>51:表示STARROCKS-V1.4.0<br>54:表示STARROCKS-V2.0.0<br>27:表示KAFKA-V1.0.0<br>50:表示KAFKA-V2.0.0<br>16:表示EMR-V2.3.0<br>20:表示EMR-V2.5.0<br>30:表示EMR-V2.6.0<br>38:表示EMR-V2.7.0<br>25:表示EMR-V3.1.0<br>33:表示EMR-V3.2.1<br>34:表示EMR-V3.3.0<br>37:表示EMR-V3.4.0<br>44:表示EMR-V3.5.0<br>53:表示EMR-V3.6.0<br>58:表示EMR-3.6.1<br>59:表示EMR-serverless-1.0.0<br>60:表示EMR-TKE-1.1.0<br>61:表示SR-V2.1.0<br>62:表示SR-V2.1.0-SharedData<br>63:表示SR-V2.1.0.tlinux<br>64:表示统一元数据管理项目<br>65:表示EMR-TKE-AI-1.0.0<br>66:表示RSS-1.0.0<br>67:表示SR-V2.2.0<br>68:表示SR-V2.2.0.tlinux<br>69:表示EMR-AI-1.1.0<br>70:表示SR-V2.2.1<br>71:表示EMR-3.7.0<br>72:表示EMR-serverless-1.0.1<br>73:表示KAFKA-2.0.1<br>74:表示SR-V2.2.2<br>75:表示EMR-TKE-AI-1.1.0<br>76:表示EMR-V3.7.1<br>77:表示SERVERLESS-TCBASE-1.0.0<br>78:表示EMR-V3.6.2<br>79:表示STARROCKS-V2.2.2<br>80:表示EMR-AI-V1.1.1</p>
                     * 
                     */
                    void SetProductId(const uint64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；<br>填写实例值：hive、flink。</p>
                     * @return Software <p>部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；<br>填写实例值：hive、flink。</p>
                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置<p>部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；<br>填写实例值：hive、flink。</p>
                     * @param _software <p>部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；<br>填写实例值：hive、flink。</p>
                     * 
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     * 
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取<p>是否开启节点高可用。取值范围：</p><li>0：表示不开启节点高可用。</li><li>1：表示开启节点高可用。</li>
                     * @return SupportHA <p>是否开启节点高可用。取值范围：</p><li>0：表示不开启节点高可用。</li><li>1：表示开启节点高可用。</li>
                     * 
                     */
                    uint64_t GetSupportHA() const;

                    /**
                     * 设置<p>是否开启节点高可用。取值范围：</p><li>0：表示不开启节点高可用。</li><li>1：表示开启节点高可用。</li>
                     * @param _supportHA <p>是否开启节点高可用。取值范围：</p><li>0：表示不开启节点高可用。</li><li>1：表示开启节点高可用。</li>
                     * 
                     */
                    void SetSupportHA(const uint64_t& _supportHA);

                    /**
                     * 判断参数 SupportHA 是否已赋值
                     * @return SupportHA 是否已赋值
                     * 
                     */
                    bool SupportHAHasBeenSet() const;

                    /**
                     * 获取<p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     * @return InstanceName <p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     * @param _instanceName <p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
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
                     * 获取<p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     * @return PayMode <p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     * @param _payMode <p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>购买实例的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @return TimeSpan <p>购买实例的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>购买实例的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * @param _timeSpan <p>购买实例的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取<p>购买实例的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @return TimeUnit <p>购买实例的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>购买实例的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * @param _timeUnit <p>购买实例的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取<p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * @return LoginSettings <p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置<p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     * @param _loginSettings <p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
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
                     * 获取<p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * @return VPCSettings <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * 
                     */
                    VPCSettings GetVPCSettings() const;

                    /**
                     * 设置<p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * @param _vPCSettings <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     * 
                     */
                    void SetVPCSettings(const VPCSettings& _vPCSettings);

                    /**
                     * 判断参数 VPCSettings 是否已赋值
                     * @return VPCSettings 是否已赋值
                     * 
                     */
                    bool VPCSettingsHasBeenSet() const;

                    /**
                     * 获取<p>节点资源的规格。</p>
                     * @return ResourceSpec <p>节点资源的规格。</p>
                     * 
                     */
                    NewResourceSpec GetResourceSpec() const;

                    /**
                     * 设置<p>节点资源的规格。</p>
                     * @param _resourceSpec <p>节点资源的规格。</p>
                     * 
                     */
                    void SetResourceSpec(const NewResourceSpec& _resourceSpec);

                    /**
                     * 判断参数 ResourceSpec 是否已赋值
                     * @return ResourceSpec 是否已赋值
                     * 
                     */
                    bool ResourceSpecHasBeenSet() const;

                    /**
                     * 获取<p>开启COS访问需要设置的参数。</p>
                     * @return COSSettings <p>开启COS访问需要设置的参数。</p>
                     * 
                     */
                    COSSettings GetCOSSettings() const;

                    /**
                     * 设置<p>开启COS访问需要设置的参数。</p>
                     * @param _cOSSettings <p>开启COS访问需要设置的参数。</p>
                     * 
                     */
                    void SetCOSSettings(const COSSettings& _cOSSettings);

                    /**
                     * 判断参数 COSSettings 是否已赋值
                     * @return COSSettings 是否已赋值
                     * 
                     */
                    bool COSSettingsHasBeenSet() const;

                    /**
                     * 获取<p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。</p>
                     * @return Placement <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。</p>
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置<p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。</p>
                     * @param _placement <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。</p>
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
                     * 获取<p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * @return SgId <p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * 
                     */
                    std::string GetSgId() const;

                    /**
                     * 设置<p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * @param _sgId <p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * 
                     */
                    void SetSgId(const std::string& _sgId);

                    /**
                     * 判断参数 SgId 是否已赋值
                     * @return SgId 是否已赋值
                     * 
                     */
                    bool SgIdHasBeenSet() const;

                    /**
                     * 获取<p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * @return PreExecutedFileSettings <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * 
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * @param _preExecutedFileSettings <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     * 
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSettings>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     * 
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取<p>包年包月实例是否自动续费。取值范围：</p><li>0：表示不自动续费。</li><li>1：表示自动续费。</li>
                     * @return AutoRenew <p>包年包月实例是否自动续费。取值范围：</p><li>0：表示不自动续费。</li><li>1：表示自动续费。</li>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>包年包月实例是否自动续费。取值范围：</p><li>0：表示不自动续费。</li><li>1：表示自动续费。</li>
                     * @param _autoRenew <p>包年包月实例是否自动续费。取值范围：</p><li>0：表示不自动续费。</li><li>1：表示自动续费。</li>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     * @return ClientToken <p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     * @param _clientToken <p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
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
                     * 获取<p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * @return NeedMasterWan <p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * 
                     */
                    std::string GetNeedMasterWan() const;

                    /**
                     * 设置<p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * @param _needMasterWan <p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     * 
                     */
                    void SetNeedMasterWan(const std::string& _needMasterWan);

                    /**
                     * 判断参数 NeedMasterWan 是否已赋值
                     * @return NeedMasterWan 是否已赋值
                     * 
                     */
                    bool NeedMasterWanHasBeenSet() const;

                    /**
                     * 获取<p>是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。</p>
                     * @return RemoteLoginAtCreate <p>是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。</p>
                     * 
                     */
                    int64_t GetRemoteLoginAtCreate() const;

                    /**
                     * 设置<p>是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。</p>
                     * @param _remoteLoginAtCreate <p>是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。</p>
                     * 
                     */
                    void SetRemoteLoginAtCreate(const int64_t& _remoteLoginAtCreate);

                    /**
                     * 判断参数 RemoteLoginAtCreate 是否已赋值
                     * @return RemoteLoginAtCreate 是否已赋值
                     * 
                     */
                    bool RemoteLoginAtCreateHasBeenSet() const;

                    /**
                     * 获取<p>是否开启安全集群。0表示不开启，非0表示开启。</p>
                     * @return CheckSecurity <p>是否开启安全集群。0表示不开启，非0表示开启。</p>
                     * 
                     */
                    int64_t GetCheckSecurity() const;

                    /**
                     * 设置<p>是否开启安全集群。0表示不开启，非0表示开启。</p>
                     * @param _checkSecurity <p>是否开启安全集群。0表示不开启，非0表示开启。</p>
                     * 
                     */
                    void SetCheckSecurity(const int64_t& _checkSecurity);

                    /**
                     * 判断参数 CheckSecurity 是否已赋值
                     * @return CheckSecurity 是否已赋值
                     * 
                     */
                    bool CheckSecurityHasBeenSet() const;

                    /**
                     * 获取<p>访问外部文件系统。</p>
                     * @return ExtendFsField <p>访问外部文件系统。</p>
                     * 
                     */
                    std::string GetExtendFsField() const;

                    /**
                     * 设置<p>访问外部文件系统。</p>
                     * @param _extendFsField <p>访问外部文件系统。</p>
                     * 
                     */
                    void SetExtendFsField(const std::string& _extendFsField);

                    /**
                     * 判断参数 ExtendFsField 是否已赋值
                     * @return ExtendFsField 是否已赋值
                     * 
                     */
                    bool ExtendFsFieldHasBeenSet() const;

                    /**
                     * 获取<p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     * @return Tags <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     * @param _tags <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/15486">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * @return DisasterRecoverGroupIds <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/15486">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/15486">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     * @param _disasterRecoverGroupIds <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/15486">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
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
                     * 获取<p>集群维度CBS加密盘，默认0表示不加密，1表示加密</p>
                     * @return CbsEncrypt <p>集群维度CBS加密盘，默认0表示不加密，1表示加密</p>
                     * 
                     */
                    uint64_t GetCbsEncrypt() const;

                    /**
                     * 设置<p>集群维度CBS加密盘，默认0表示不加密，1表示加密</p>
                     * @param _cbsEncrypt <p>集群维度CBS加密盘，默认0表示不加密，1表示加密</p>
                     * 
                     */
                    void SetCbsEncrypt(const uint64_t& _cbsEncrypt);

                    /**
                     * 判断参数 CbsEncrypt 是否已赋值
                     * @return CbsEncrypt 是否已赋值
                     * 
                     */
                    bool CbsEncryptHasBeenSet() const;

                    /**
                     * 获取<p>hive共享元数据库类型。取值范围：</p><li>EMR_DEFAULT_META：表示集群默认创建</li><li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * @return MetaType <p>hive共享元数据库类型。取值范围：</p><li>EMR_DEFAULT_META：表示集群默认创建</li><li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置<p>hive共享元数据库类型。取值范围：</p><li>EMR_DEFAULT_META：表示集群默认创建</li><li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * @param _metaType <p>hive共享元数据库类型。取值范围：</p><li>EMR_DEFAULT_META：表示集群默认创建</li><li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取<p>EMR-MetaDB实例</p>
                     * @return UnifyMetaInstanceId <p>EMR-MetaDB实例</p>
                     * 
                     */
                    std::string GetUnifyMetaInstanceId() const;

                    /**
                     * 设置<p>EMR-MetaDB实例</p>
                     * @param _unifyMetaInstanceId <p>EMR-MetaDB实例</p>
                     * 
                     */
                    void SetUnifyMetaInstanceId(const std::string& _unifyMetaInstanceId);

                    /**
                     * 判断参数 UnifyMetaInstanceId 是否已赋值
                     * @return UnifyMetaInstanceId 是否已赋值
                     * 
                     */
                    bool UnifyMetaInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义MetaDB信息</p>
                     * @return MetaDBInfo <p>自定义MetaDB信息</p>
                     * 
                     */
                    CustomMetaInfo GetMetaDBInfo() const;

                    /**
                     * 设置<p>自定义MetaDB信息</p>
                     * @param _metaDBInfo <p>自定义MetaDB信息</p>
                     * 
                     */
                    void SetMetaDBInfo(const CustomMetaInfo& _metaDBInfo);

                    /**
                     * 判断参数 MetaDBInfo 是否已赋值
                     * @return MetaDBInfo 是否已赋值
                     * 
                     */
                    bool MetaDBInfoHasBeenSet() const;

                    /**
                     * 获取<p>自定义应用角色。</p>
                     * @return ApplicationRole <p>自定义应用角色。</p>
                     * 
                     */
                    std::string GetApplicationRole() const;

                    /**
                     * 设置<p>自定义应用角色。</p>
                     * @param _applicationRole <p>自定义应用角色。</p>
                     * 
                     */
                    void SetApplicationRole(const std::string& _applicationRole);

                    /**
                     * 判断参数 ApplicationRole 是否已赋值
                     * @return ApplicationRole 是否已赋值
                     * 
                     */
                    bool ApplicationRoleHasBeenSet() const;

                    /**
                     * 获取<p>场景化取值：<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     * @return SceneName <p>场景化取值：<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置<p>场景化取值：<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     * @param _sceneName <p>场景化取值：<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取<p>共享组件信息</p>
                     * @return ExternalService <p>共享组件信息</p>
                     * 
                     */
                    std::vector<ExternalService> GetExternalService() const;

                    /**
                     * 设置<p>共享组件信息</p>
                     * @param _externalService <p>共享组件信息</p>
                     * 
                     */
                    void SetExternalService(const std::vector<ExternalService>& _externalService);

                    /**
                     * 判断参数 ExternalService 是否已赋值
                     * @return ExternalService 是否已赋值
                     * 
                     */
                    bool ExternalServiceHasBeenSet() const;

                    /**
                     * 获取<p>如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。</p>
                     * @return VersionID <p>如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。</p>
                     * 
                     */
                    int64_t GetVersionID() const;

                    /**
                     * 设置<p>如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。</p>
                     * @param _versionID <p>如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。</p>
                     * 
                     */
                    void SetVersionID(const int64_t& _versionID);

                    /**
                     * 判断参数 VersionID 是否已赋值
                     * @return VersionID 是否已赋值
                     * 
                     */
                    bool VersionIDHasBeenSet() const;

                    /**
                     * 获取<p>true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。</p>
                     * @return MultiZone <p>true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。</p>
                     * 
                     */
                    bool GetMultiZone() const;

                    /**
                     * 设置<p>true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。</p>
                     * @param _multiZone <p>true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。</p>
                     * 
                     */
                    void SetMultiZone(const bool& _multiZone);

                    /**
                     * 判断参数 MultiZone 是否已赋值
                     * @return MultiZone 是否已赋值
                     * 
                     */
                    bool MultiZoneHasBeenSet() const;

                    /**
                     * 获取<p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     * @return MultiZoneSettings <p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     * 
                     */
                    std::vector<MultiZoneSetting> GetMultiZoneSettings() const;

                    /**
                     * 设置<p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     * @param _multiZoneSettings <p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     * 
                     */
                    void SetMultiZoneSettings(const std::vector<MultiZoneSetting>& _multiZoneSettings);

                    /**
                     * 判断参数 MultiZoneSettings 是否已赋值
                     * @return MultiZoneSettings 是否已赋值
                     * 
                     */
                    bool MultiZoneSettingsHasBeenSet() const;

                    /**
                     * 获取<p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     * @return CosBucket <p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     * @param _cosBucket <p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取<p>节点标识信息，目前只提供给tf平台使用</p>
                     * @return NodeMarks <p>节点标识信息，目前只提供给tf平台使用</p>
                     * 
                     */
                    std::vector<NodeMark> GetNodeMarks() const;

                    /**
                     * 设置<p>节点标识信息，目前只提供给tf平台使用</p>
                     * @param _nodeMarks <p>节点标识信息，目前只提供给tf平台使用</p>
                     * 
                     */
                    void SetNodeMarks(const std::vector<NodeMark>& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                    /**
                     * 获取<p>CLB id</p>
                     * @return LoadBalancerId <p>CLB id</p>
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置<p>CLB id</p>
                     * @param _loadBalancerId <p>CLB id</p>
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库类型：mysql8/tdsql8</p>
                     * @return DefaultMetaVersion <p>数据库类型：mysql8/tdsql8</p>
                     * 
                     */
                    std::string GetDefaultMetaVersion() const;

                    /**
                     * 设置<p>数据库类型：mysql8/tdsql8</p>
                     * @param _defaultMetaVersion <p>数据库类型：mysql8/tdsql8</p>
                     * 
                     */
                    void SetDefaultMetaVersion(const std::string& _defaultMetaVersion);

                    /**
                     * 判断参数 DefaultMetaVersion 是否已赋值
                     * @return DefaultMetaVersion 是否已赋值
                     * 
                     */
                    bool DefaultMetaVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否开通审计：0:不开通,1:开通</p>
                     * @return NeedCdbAudit <p>是否开通审计：0:不开通,1:开通</p>
                     * 
                     */
                    int64_t GetNeedCdbAudit() const;

                    /**
                     * 设置<p>是否开通审计：0:不开通,1:开通</p>
                     * @param _needCdbAudit <p>是否开通审计：0:不开通,1:开通</p>
                     * 
                     */
                    void SetNeedCdbAudit(const int64_t& _needCdbAudit);

                    /**
                     * 判断参数 NeedCdbAudit 是否已赋值
                     * @return NeedCdbAudit 是否已赋值
                     * 
                     */
                    bool NeedCdbAuditHasBeenSet() const;

                    /**
                     * 获取<p>安全组指定来源ip</p>
                     * @return SgIP <p>安全组指定来源ip</p>
                     * 
                     */
                    std::string GetSgIP() const;

                    /**
                     * 设置<p>安全组指定来源ip</p>
                     * @param _sgIP <p>安全组指定来源ip</p>
                     * 
                     */
                    void SetSgIP(const std::string& _sgIP);

                    /**
                     * 判断参数 SgIP 是否已赋值
                     * @return SgIP 是否已赋值
                     * 
                     */
                    bool SgIPHasBeenSet() const;

                    /**
                     * 获取<p>分区置放群组分区</p>
                     * @return PartitionNumber <p>分区置放群组分区</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>分区置放群组分区</p>
                     * @param _partitionNumber <p>分区置放群组分区</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                private:

                    /**
                     * <p>产品ID，不同产品ID表示不同的EMR产品版本。取值范围：<br>51:表示STARROCKS-V1.4.0<br>54:表示STARROCKS-V2.0.0<br>27:表示KAFKA-V1.0.0<br>50:表示KAFKA-V2.0.0<br>16:表示EMR-V2.3.0<br>20:表示EMR-V2.5.0<br>30:表示EMR-V2.6.0<br>38:表示EMR-V2.7.0<br>25:表示EMR-V3.1.0<br>33:表示EMR-V3.2.1<br>34:表示EMR-V3.3.0<br>37:表示EMR-V3.4.0<br>44:表示EMR-V3.5.0<br>53:表示EMR-V3.6.0<br>58:表示EMR-3.6.1<br>59:表示EMR-serverless-1.0.0<br>60:表示EMR-TKE-1.1.0<br>61:表示SR-V2.1.0<br>62:表示SR-V2.1.0-SharedData<br>63:表示SR-V2.1.0.tlinux<br>64:表示统一元数据管理项目<br>65:表示EMR-TKE-AI-1.0.0<br>66:表示RSS-1.0.0<br>67:表示SR-V2.2.0<br>68:表示SR-V2.2.0.tlinux<br>69:表示EMR-AI-1.1.0<br>70:表示SR-V2.2.1<br>71:表示EMR-3.7.0<br>72:表示EMR-serverless-1.0.1<br>73:表示KAFKA-2.0.1<br>74:表示SR-V2.2.2<br>75:表示EMR-TKE-AI-1.1.0<br>76:表示EMR-V3.7.1<br>77:表示SERVERLESS-TCBASE-1.0.0<br>78:表示EMR-V3.6.2<br>79:表示STARROCKS-V2.2.2<br>80:表示EMR-AI-V1.1.1</p>
                     */
                    uint64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>部署的组件列表。不同的EMR产品ID（ProductId：具体含义参考入参ProductId字段）对应不同可选组件列表，不同产品版本可选组件列表查询：<a href="https://cloud.tencent.com/document/product/589/20279">组件版本</a> ；<br>填写实例值：hive、flink。</p>
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * <p>是否开启节点高可用。取值范围：</p><li>0：表示不开启节点高可用。</li><li>1：表示开启节点高可用。</li>
                     */
                    uint64_t m_supportHA;
                    bool m_supportHAHasBeenSet;

                    /**
                     * <p>实例名称。</p><li>长度限制为6-36个字符。</li><li>只允许包含中文、字母、数字、-、_。</li>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例计费模式。取值范围：</p><li>0：表示按量计费。</li><li>1：表示包年包月。</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>购买实例的时长。结合TimeUnit一起使用。</p><li>TimeUnit为s时，该参数只能填写3600，表示按量计费实例。</li><li>TimeUnit为m时，该参数填写的数字表示包年包月实例的购买时长，如1表示购买一个月</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>购买实例的时间单位。取值范围：</p><li>s：表示秒。PayMode取值为0时，TimeUnit只能取值为s。</li><li>m：表示月份。PayMode取值为1时，TimeUnit只能取值为m。</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>实例登录设置。通过该参数可以设置所购买节点的登录方式密码或者密钥。</p><li>设置密钥时，密码仅用于组件原生WebUI快捷入口登录。</li><li>未设置密钥时，密码用于登录所购节点以及组件原生WebUI快捷入口登录。</li>
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * <p>私有网络相关信息配置。通过该参数可以指定私有网络的ID，子网ID等信息。</p>
                     */
                    VPCSettings m_vPCSettings;
                    bool m_vPCSettingsHasBeenSet;

                    /**
                     * <p>节点资源的规格。</p>
                     */
                    NewResourceSpec m_resourceSpec;
                    bool m_resourceSpecHasBeenSet;

                    /**
                     * <p>开启COS访问需要设置的参数。</p>
                     */
                    COSSettings m_cOSSettings;
                    bool m_cOSSettingsHasBeenSet;

                    /**
                     * <p>实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。</p>
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * <p>实例所属安全组的ID，形如sg-xxxxxxxx。该参数可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     */
                    std::string m_sgId;
                    bool m_sgIdHasBeenSet;

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/589/35656">引导操作</a>脚本设置。</p>
                     */
                    std::vector<PreExecuteFileSettings> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * <p>包年包月实例是否自动续费。取值范围：</p><li>0：表示不自动续费。</li><li>1：表示自动续费。</li>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>唯一随机标识，时效5分钟，需要调用者指定 防止客户端重新创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>是否开启集群Master节点公网。取值范围：</p><li>NEED_MASTER_WAN：表示开启集群Master节点公网。</li><li>NOT_NEED_MASTER_WAN：表示不开启。</li>默认开启集群Master节点公网。
                     */
                    std::string m_needMasterWan;
                    bool m_needMasterWanHasBeenSet;

                    /**
                     * <p>是否需要开启外网远程登录，即22号端口。在SgId不为空时，该参数无效。</p>
                     */
                    int64_t m_remoteLoginAtCreate;
                    bool m_remoteLoginAtCreateHasBeenSet;

                    /**
                     * <p>是否开启安全集群。0表示不开启，非0表示开启。</p>
                     */
                    int64_t m_checkSecurity;
                    bool m_checkSecurityHasBeenSet;

                    /**
                     * <p>访问外部文件系统。</p>
                     */
                    std::string m_extendFsField;
                    bool m_extendFsFieldHasBeenSet;

                    /**
                     * <p>标签描述列表。通过指定该参数可以同时绑定标签到相应的实例。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>分散置放群组ID列表，当前只支持指定一个。<br>该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/213/15486">DescribeSecurityGroups</a> 的返回值中的SecurityGroupId字段来获取。</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>集群维度CBS加密盘，默认0表示不加密，1表示加密</p>
                     */
                    uint64_t m_cbsEncrypt;
                    bool m_cbsEncryptHasBeenSet;

                    /**
                     * <p>hive共享元数据库类型。取值范围：</p><li>EMR_DEFAULT_META：表示集群默认创建</li><li>EMR_EXIST_META：表示集群使用指定EMR-MetaDB。</li><li>USER_CUSTOM_META：表示集群使用自定义MetaDB。</li>
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * <p>EMR-MetaDB实例</p>
                     */
                    std::string m_unifyMetaInstanceId;
                    bool m_unifyMetaInstanceIdHasBeenSet;

                    /**
                     * <p>自定义MetaDB信息</p>
                     */
                    CustomMetaInfo m_metaDBInfo;
                    bool m_metaDBInfoHasBeenSet;

                    /**
                     * <p>自定义应用角色。</p>
                     */
                    std::string m_applicationRole;
                    bool m_applicationRoleHasBeenSet;

                    /**
                     * <p>场景化取值：<br>Hadoop-Kudu<br>Hadoop-Zookeeper<br>Hadoop-Presto<br>Hadoop-Hbase</p>
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * <p>共享组件信息</p>
                     */
                    std::vector<ExternalService> m_externalService;
                    bool m_externalServiceHasBeenSet;

                    /**
                     * <p>如果为0，则MultiZone、MultiDeployStrategy、MultiZoneSettings是disable的状态，如果为1，则废弃ResourceSpec，使用MultiZoneSettings。</p>
                     */
                    int64_t m_versionID;
                    bool m_versionIDHasBeenSet;

                    /**
                     * <p>true表示开启跨AZ部署；仅为新建集群时的用户参数，后续不支持调整。</p>
                     */
                    bool m_multiZone;
                    bool m_multiZoneHasBeenSet;

                    /**
                     * <p>节点资源的规格，有几个可用区，就填几个，按顺序第一个为主可用区，第二个为备可用区，第三个为仲裁可用区。如果没有开启跨AZ，则长度为1即可。</p>
                     */
                    std::vector<MultiZoneSetting> m_multiZoneSettings;
                    bool m_multiZoneSettingsHasBeenSet;

                    /**
                     * <p>cos桶路径，创建StarRocks存算分离集群时用到</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>节点标识信息，目前只提供给tf平台使用</p>
                     */
                    std::vector<NodeMark> m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                    /**
                     * <p>CLB id</p>
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * <p>数据库类型：mysql8/tdsql8</p>
                     */
                    std::string m_defaultMetaVersion;
                    bool m_defaultMetaVersionHasBeenSet;

                    /**
                     * <p>是否开通审计：0:不开通,1:开通</p>
                     */
                    int64_t m_needCdbAudit;
                    bool m_needCdbAuditHasBeenSet;

                    /**
                     * <p>安全组指定来源ip</p>
                     */
                    std::string m_sgIP;
                    bool m_sgIPHasBeenSet;

                    /**
                     * <p>分区置放群组分区</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CREATEINSTANCEREQUEST_H_
